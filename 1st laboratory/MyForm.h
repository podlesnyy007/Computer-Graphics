#pragma once

namespace Podlesnyy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	// процедура — обработчик события отрисовки формы
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		//область рисования — ссылка на объект типа System::Drawing::Graphics^
		//такую ссылку для нашего окна приложения можно извлечь из аргумента e, обращаясь  к свойству Graphics : e->Graphics
		//переменная g ссылается на область рисования в нашей форме
		Graphics^ g = e->Graphics;
		//закраска (очистка) области g цветом «Аквамарин»
		g->Clear(Color::Aquamarine);

		//Создаем перо redPen красного цвета, после чего изменяем толщину пера на значение 6
		Pen^ redPen = gcnew Pen(Color::Red);
		redPen->Width = 6;
		//чертим линию, соединяющую верхний левый и правый нижний угол
		//для того, чтобы начертить отрезок, нужно знать координаты начала и конца отрезка
		//система координат в окне — левосторонняя, начало координат находится в верхнем левом углу окна
		//ClientRectangle — прямоугольник, занимающий всю видимую часть области рисования
		g->DrawLine(redPen, 0, 0, this->ClientRectangle.Width, this->ClientRectangle.Height);

		Pen^ bluePen = gcnew Pen(Color::Blue, 10);
		g->DrawLine(bluePen, 90, 50, ClientRectangle.Width, 80);


		Pen^ greenPen = gcnew Pen(Color::Green, 5);
		g->DrawLine(greenPen, 0, ClientRectangle.Height * 1 / 3, ClientRectangle.Width * 2 / 3, 0);
		g->DrawLine(greenPen, ClientRectangle.Width * 2 / 3, 0, ClientRectangle.Width, ClientRectangle.Height * 2 / 3);
		g->DrawLine(greenPen, ClientRectangle.Width, ClientRectangle.Height * 2 / 3, ClientRectangle.Width * 1 / 3, ClientRectangle.Height);
		g->DrawLine(greenPen, ClientRectangle.Width * 1 / 3, ClientRectangle.Height, 0, ClientRectangle.Height * 1 / 3);

		//опишем переменную drawBrush — экземпляр кисти черного цвета
		SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
		//опишем переменную drawFont — экземпляр шрифта Arial размером 10
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);
		//выведем надпись «Надпись на форме» по координатам (40, 100)
		g->DrawString("Надпись на форме", drawFont, drawBrush, 40, 100);
	}
	//процедура — обработчик события, срабатывающая при изменении размера формы
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		//инициируем событие Paint с помощью вызова метода this->Refresh() после изменения размера формы
		//чтобы при изменении размера формы рисунок обновлялся
		Refresh();
	}
	};
}
