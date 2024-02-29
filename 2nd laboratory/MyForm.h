#pragma once

namespace Podlesnyy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines1[] = {
		// голова
		0.5f,3.f,1.f,4.5f, // от левой щеки вверх до уха
		1.f,4.5f,0.5f,6.f, // левое ухо слева снизу вверх
		0.5f,6.f,0.5f, 7.5f, // левое ухо слева
		0.5f, 7.5f,1.f,8.f, // левое ухо верх слева
		1.f,8.f,1.5f,8.f, // левое ухо верх середина
		1.5f,8.f,2.f,7.5f, // левое ухо верх справа
		2.f,7.5f,1.5f, 6.f, // левое ухо справа сверху вниз
		1.5f, 6.f,1.5f,4.5f, // левое ухо справа до макушки
		1.5f,4.5f,3.f,4.5f, // макушка
		3.f,4.5f,3.f,6.f, // правое ухо слева снизу вверх
		3.f,6.f,2.5f,7.5f, // правое ухо слева
		2.5f,7.5f,3.f,8.f, // правое ухо верх слева
		3.f,8.f,3.5f,8.f, // правое ухо верх середина
		3.5f,8.f,4.f,7.5f, // правое ухо верх справа
		4.f,7.5f,4.f,6.f, // правое ухо сверху вниз
		4.f,6.f,3.5f,4.5f, // правое ухо справа
		3.5f,4.5f,4.f,3.f, // от правого уха вниз до щеки
		4.f,3.f,3.5f,1.5f, // правая скула
		3.5f,1.5f,2.5f,1.f, // подбородок справа
		2.5f,1.f,2.f,1.f, // подбородок снизу
		2.f,1.f,1.f,1.5f, // подбородок слева
		1.f,1.5f,0.5f,3.f, // левая скула
		// туловище
		4.f,3.f,5.5f,3.5f, // спина от головы вправо
		5.5f,3.5f,7.f,3.5f, // спина верх
		7.f,3.5f,7.5f,2.5f, // спина сверху до хвоста
		7.5f,2.5f,8.f,2.5f, // хвост сверху
		8.f,2.5f,8.f,2.f, // хвост справа
		8.f,2.f,7.5f,2.f, // хвост низ справа налево
		7.5f,2.f,7.5f,0.5f, // задняя нога справа сверху вниз
		7.5f,0.5f,6.5f,0.5f, // задняя нога низ
		6.5f,0.5f,6.5f,1.f, // задняя нога слева
		6.5f,1.f,6.f,1.f, // между задних ног
		6.f,1.f,6.f,0.5f, // левая задняя нога справа
		6.f,0.5f,5.f,0.5f, // левая задняя нога низ
		5.f,0.5f,5.f,1.f, // левая задняя нога слева
		5.f,1.f,4.f,1.f, // между задними и передними ногами
		4.f,1.f,4.f,0.5f, // правая передняя нога справа
		4.f,0.5f,3.f,0.5f, // правая передняя нога низ
		3.f,0.5f,3.f,1.f, // правая передняя нога слева
		3.f,1.f,2.5f,1.f, // между передних ног
		2.5f,1.f,2.5f,0.5f, // передняя нога справа
		2.5f,0.5f,1.5f,0.5f, // передняя нога низ
		1.5f,0.5f,1.5f,1.25f, // передняя нога слева
		// левый глаз
		1.5f,3.5f,1.5f,3.f, // левый глаз слева сверху вниз
		1.5f,3.f,2.f,3.f, // левый глаз низ
		2.f, 3.f,2.f,3.5f, // левый глаз справа
		2.f,3.5f,1.5f,3.5f, // левый глаз верх
		// правый глаз
		2.5f,3.5f,2.5f,3.f, // правый глаз слева
		2.5f,3.f,3.f, 3.f, // правый глаз снизу
		3.f,3.f,3.f,3.5f, // правый глаз справа
		3.f,3.5f,2.5f,3.5f, // правый глаз сверху
		// ушные раковины
		1.f,5.5f,1.f,7.f, // левая ушная раковина
		3.5f,5.5f,3.5f,7.f, // правая ушная раковина
		// нос
		2.f,2.5f,2.5f,2.5f, // нос сверху
		2.5f,2.5f,2.25f,2.f, // нос справа
		2.25f,2.f,2.f,2.5f // нос слева
	};

	float lines2[] = {
		//рокетка (левая сторона)
		2.f, 1.f, 1.f, 1.5f,
		1.f, 1.5f, 0.5f, 3.f,
		0.5f, 3.f, 1.f, 4.5f,
		1.f, 4.5f, 2.f, 5.5f,
		2.f, 5.5f, 3.f, 5.5f,
		3.f, 5.5f, 3.25f, 6.f,

		//кисть, держащая рокетку
		3.f, 6.f, 3.5f, 6.f,
		3.5f, 6.f, 4.f, 6.5f,
		4.f, 6.5f, 4.f, 7.f,
		4.f, 7.f, 3.f, 7.f,
		3.f, 7.f, 3.5f, 6.5f,
		3.5f, 6.5f, 4.f, 6.5f,
		3.5f, 6.5f, 3.5f, 6.f,
		3.f, 6.f, 3.f, 7.5f,
		//координату делал подбором, провел 3.f, 7.5f, 5.f, 7.f и сравнивал
		3.f, 7.5f, 3.875f, 7.28f,

		//рокетка (продолжение: правая сторона)
		3.75f, 7.f, 4.f, 7.5f,
		4.f, 7.5f, 4.5f, 7.f,
		4.5f, 7.f, 3.5f, 5.f,
		3.5f, 5.f, 4.f, 4.5f,
		4.f, 4.5f, 4.f, 3.f,
		4.f, 3.f, 3.5f, 1.5f,
		3.5f, 1.5f, 2.f, 1.f,

		//продолжение руки, которая держит рокетку
		4.33f, 7.165f, 5.f, 7.f,
		5.f, 7.f, 4.5f, 6.5f,
		4.5f, 6.5f, 4.25f, 6.5f,
		5.f, 7.f, 7.5f, 8.75f,
		//7.375 не подошло, поэтому 7.33, чтобы сошлось с линией 5.f, 7.f, 7.5f, 8.665
		5.5f, 7.33f, 5.5f, 6.5f,
		5.5f, 6.5f, 4.f, 6.f,
		5.5f, 6.5f, 6.f, 6.5f,

		//контур сетки
		2.f, 1.5f, 1.f, 2.5f,
		1.f, 2.5f, 1.f, 3.5f,
		1.f, 3.5f, 2.f, 5.f,
		2.f, 5.f, 3.f, 5.f,
		3.f, 5.f, 3.5f, 4.5f,
		3.5f, 4.5f, 3.5f, 3.f,
		3.5f, 3.f, 3.f, 2.f,
		3.f, 2.f, 2.f, 1.5f,

		//вертикальная сетка
		1.5f, 4.25f, 1.5f, 2.f,
		2.f, 5.f, 2.f, 1.5f,
		2.5f, 5.f, 2.5f, 1.75f,
		3.f, 5.f, 3.f, 2.f,

		//горизонтальная сетка
		1.5f, 2.f, 3.f, 2.f,
		1.f, 2.5f, 3.25f, 2.5f,
		1.f, 3.f, 3.5f, 3.f,
		1.f, 3.5f, 3.5f, 3.5f,
		1.33f, 4.f, 3.5f, 4.f,
		1.66f, 4.5f, 3.5f, 4.5f,

		//футболка
		6.5f, 8.05f, 6.f, 6.5f, //8.f не сходится с прямой, поэтому 8.05
		6.f, 6.5f, 5.5f, 6.f,
		5.5f, 6.f, 6.5f, 6.f,
		6.5f, 6.f, 7.f, 7.5f,
		6.83f, 7.f, 7.83f, 7.f,
		8.f, 7.5f, 7.5f, 6.f,
		7.5f, 6.f, 9.5f, 6.f,
		8.5f, 6.f, 8.3f, 6.5f,
		8.3, 6.5f, 8.f, 8.5f,
		8.f, 8.5f, 7.f, 9.f,

		// вторая рука
		6.5f, 6.f, 6.5f, 5.f,
		6.5f, 5.f, 7.f, 4.5f,
		7.f, 4.5f, 7.5f, 4.5f,
		7.5f, 4.5f, 7.f, 5.f,
		7.5f, 4.5f, 8.f, 4.5f,
		8.f, 4.5f, 7.5f, 5.f,
		8.f, 4.5f, 8.f, 5.f,
		8.f, 5.f, 7.5f, 6.f,
		7.5f, 5.5f, 7.75f, 5.5f,
		7.5f, 5.5f, 7.f, 6.f,
		7.f, 6.f, 7.f, 7.f,

		//хвост
		8.5f, 6.f, 9.f, 5.5f,
		9.f, 5.5f, 9.5f, 6.f,
		9.5f, 6.f, 9.f, 8.f,
		9.f, 8.f, 10.f, 6.f,
		10.f, 6.f, 9.f, 4.5f,
		9.f, 4.5f, 8.5f, 6.f,

		//штаны
		9.f, 4.5f, 8.5f, 3.f,
		8.5f, 3.f, 5.f, 3.f,
		5.f, 3.f, 5.5f, 6.f,

		//ноги
		5.5f, 3.f, 6.f, 2.f,
		6.f, 2.f, 5.f, 2.f,
		5.f, 2.f, 4.5f, 2.5f,
		4.5f, 2.5f, 4.f, 2.5f,
		4.f, 2.5f, 4.f, 1.f,
		4.f, 1.f, 5.f, 0.5f,
		5.f, 0.5f, 7.5f, 0.5f,
		7.5f, 0.5f, 7.5f, 1.f,
		7.5f, 1.f, 8.f, 3.f,
		4.f, 2.f, 4.5f, 2.f,
		4.5f, 2.f, 5.f, 1.5f,
		5.f, 1.5f, 7.625f, 1.5f,
		6.f, 2.f, 7.75f, 2.f,
		5.75f, 2.5f, 7.9f, 2.5f,
		6.f, 3.f, 6.5f, 1.5f,

		//ухо
		8.f, 8.5f, 9.f, 10.f,
		9.f, 10.f, 8.5f, 11.5f,
		8.5f, 11.5f, 4.5f, 14.f,
		7.f, 9.f, 6.5f, 10.5f,
		6.5f, 10.5f, 7.33f, 12.2f, //делал подбором

		//пятна на ухе
		7.f, 11.5f, 7.5f, 11.5f,
		7.5f, 11.5f, 7.5f, 12.125f,
		6.5f, 10.5f, 7.f, 10.5f,
		7.f, 10.5f, 7.f, 10.f,
		7.f, 10.f, 6.64f, 10.f, //делал подбором
		8.5f, 11.5f, 8.f, 11.5f,
		8.f, 11.5f, 7.5f, 9.5f,
		7.5f, 9.5f, 8.f, 9.f,
		8.f, 9.f, 8.5f, 10.f,
		8.5f, 10.f, 8.5f, 11.5f,

		//кепка
		8.5f, 11.5f, 9.f, 13.f,
		9.f, 13.f, 8.5f, 13.5f,
		8.5f, 13.5f, 7.f, 14.f,
		7.f, 14.f, 6.f, 13.f,

		//контур головы
		6.f, 13.f, 5.f, 12.f,
		5.f, 12.f, 3.f, 11.5f,
		3.f, 11.5f, 2.5f, 11.f,
		2.5f, 11.f, 3.f, 10.5f,
		3.f, 10.5f, 3.5f, 9.5f,
		3.5f, 9.5f, 5.f, 9.f,
		5.f, 9.f, 6.5f, 8.f,

		//рот
		3.5f, 9.5f, 5.f, 10.f,
		5.f, 10.f, 5.5f, 10.5f,

		//нос
		3.f, 10.5f, 4.f, 10.f,
		4.f, 10.f, 4.5f, 10.5f,
		4.5f, 10.5f, 4.5f, 11.f,
		4.5f, 11.f, 3.5f, 11.f,
		3.5f, 11.f, 3.f, 10.5f,
		3.5f, 11.f, 3.f, 11.5f,

		//пятно на лице
		5.f, 9.5f, 5.5f, 10.f,
		5.5f, 10.f, 6.f, 10.f,
		6.f, 10.f, 6.5f, 9.f,
		6.5f, 9.f, 6.f, 9.f,
		6.f, 9.f, 5.f, 9.5f,

		//глаз
		5.f, 12.f, 5.f, 11.f,
		5.f, 11.f, 6.f, 10.5f, 
		6.f, 10.5f, 7.f, 11.5f,
		7.f, 11.5f, 6.5f, 12.5f,
		6.5f, 12.5f, 5.5f, 12.5f,
		5.f, 12.f, 6.f, 11.f,
		5.5f, 12.f, 6.f, 12.f,
		6.f, 12.f, 6.f, 11.5f,
		6.f, 11.5f, 5.5f, 11.5f,
		5.5f, 11.5f, 5.5f, 12.f,
		5.5f, 12.f, 5.25f, 11.75f,
		6.f, 11.5f, 5.75f, 11.25f
	};

	// сохраняем количество отрезков
	unsigned int arrayLength1 = sizeof(lines1) / sizeof(float);
	unsigned int arrayLength2 = sizeof(lines2) / sizeof(float);

	// размеры рисунка (заяц)
	float Vx1 = 8.5f; // размер рисунка по горизонтали
	float Vy1 = 8.5f; // размер рисунка по вертикали

	// размеры рисунка (собака)
	float Vx2 = 11.f; // размер рисунка по горизонтали
	float Vy2 = 15.f; // размер рисунка по вертикали

	float aspectFig1 = Vx1 / Vy1; // соотношение сторон рисунка
	float aspectFig2 = Vx2 / Vy2; // соотношение сторон рисунка

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
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool keepAspectRatio; // значение - сохранять ли соотношение сторон рисунка?
	private: bool changeDrawings; // смена рисунков

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		keepAspectRatio = true; // начальное значение: сохранять соотношение сторон рисунка
		changeDrawings = true; // начальное значение: рисунок из примера (заяц)
	}
	// процедура — обработчик события отрисовки формы
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::Aquamarine);

		Pen^ blackPen = gcnew Pen(Color::Black, 2);

		float Wx = ClientRectangle.Width; // размер окна по горизонтали
		float Wy = ClientRectangle.Height; // размер окна по вертикали

		float aspectForm = Wx / Wy; // соотношение сторон окна рисования

		// коэффициент масштабирования нашего рисунка
		float Sx1, Sy1;
		float Sx2, Sy2;
		if (keepAspectRatio) {
			// коэффициентs увеличения при сохранении исходного соотношения сторон
			Sx1 = Sy1 = aspectFig1 < aspectForm ? Wy / Vy1 : Wx / Vx1;

			Sx2 = Sy2 = aspectFig2 < aspectForm ? Wy / Vy2 : Wx / Vx2;
		}
		else {
			Sx1 = Wx / Vx1; // коэффициент увеличения по оси Ox
			Sy1 = Wy / Vy1; // коэффициент увеличения по оси Oy

			Sx2 = Wx / Vx2; // коэффициент увеличения по оси Ox
			Sy2 = Wy / Vy2; // коэффициент увеличения по оси Oy
		}

		float Ty1 = Sy1 * Vy1; // смещение в положительную сторону по оси Oy после смены знака
		float Ty2 = Sy2 * Vy2; // смещение в положительную сторону по оси Oy после смены знака

		// вывод всех отрезков
		if (changeDrawings) {
			for (int i = 0; i < arrayLength1; i += 4) {
				g->DrawLine(blackPen, Sx1 * lines1[i], Ty1 - Sy1 * lines1[i + 1], Sx1 * lines1[i + 2], Ty1 - Sy1 * lines1[i + 3]);
			}
		}
		else {
			for (int i = 0; i < arrayLength2; i += 4) {
				g->DrawLine(blackPen, Sx2 * lines2[i], Ty2 - Sy2 * lines2[i + 1], Sx2 * lines2[i + 2], Ty2 - Sy2 * lines2[i + 3]);
			}
		}
	}
	//процедура — обработчик события, срабатывающая при изменении размера формы
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		//инициируем событие Paint с помощью вызова метода this->Refresh() после изменения размера формы
		//чтобы при изменении размера формы рисунок обновлялся
		Refresh();
	}

	// процедура обработчик события (Нажата клавиша)
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		//с помощью выражения e->KeyCode, можно извлечь информацию о том, какая клавиша была нажата
		switch (e->KeyCode) {
		case Keys::M:
			keepAspectRatio = !keepAspectRatio;
			break;
		case Keys::N:
			changeDrawings = !changeDrawings;
			break;
		default:
			break;
		}
		Refresh();
	}
	};
}
