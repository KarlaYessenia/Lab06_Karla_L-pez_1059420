#pragma once
#include"Lista_Enlazada.h"
#include"Figuras_Geometricas.h"
#include"Triangulo.h"
#include"Nodo.h"
#include"Cudrilatero.h"
#include"Pentagono.h"

namespace Lab06KarlaLópez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista_Enlazada<Figuras_Geometricas*>* myFigureList;
		MyForm(void)
		{
			InitializeComponent();
			myFigureList = new Lista_Enlazada<Figuras_Geometricas*>();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnTriangulo;
	private: System::Windows::Forms::MaskedTextBox^ TxtAltuTri;

	private: System::Windows::Forms::MaskedTextBox^ TxtBaseTri;

	private: System::Windows::Forms::Button^ BtnCuadrado;
	private: System::Windows::Forms::MaskedTextBox^ TxtCuadrado;


	private: System::Windows::Forms::Button^ BtnPentago;
	private: System::Windows::Forms::MaskedTextBox^ Txtapotema;

	private: System::Windows::Forms::MaskedTextBox^ Txtladopentagono;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ PnFiguras;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnTriangulo = (gcnew System::Windows::Forms::Button());
			this->TxtAltuTri = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TxtBaseTri = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BtnCuadrado = (gcnew System::Windows::Forms::Button());
			this->TxtCuadrado = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BtnPentago = (gcnew System::Windows::Forms::Button());
			this->Txtapotema = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Txtladopentagono = (gcnew System::Windows::Forms::MaskedTextBox());
			this->PnFiguras = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->BtnTriangulo);
			this->groupBox1->Controls->Add(this->TxtAltuTri);
			this->groupBox1->Controls->Add(this->TxtBaseTri);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(277, 245);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Triangulo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ingresar la altura \r\n  del tringulo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ingresar la base \r\n  del tringulo";
			// 
			// BtnTriangulo
			// 
			this->BtnTriangulo->Location = System::Drawing::Point(6, 159);
			this->BtnTriangulo->Name = L"BtnTriangulo";
			this->BtnTriangulo->Size = System::Drawing::Size(255, 51);
			this->BtnTriangulo->TabIndex = 2;
			this->BtnTriangulo->Text = L"Insertar Triangulo";
			this->BtnTriangulo->UseVisualStyleBackColor = true;
			this->BtnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::BtnTriangulo_Click);
			// 
			// TxtAltuTri
			// 
			this->TxtAltuTri->Location = System::Drawing::Point(161, 101);
			this->TxtAltuTri->Mask = L"99";
			this->TxtAltuTri->Name = L"TxtAltuTri";
			this->TxtAltuTri->Size = System::Drawing::Size(100, 22);
			this->TxtAltuTri->TabIndex = 1;
			this->TxtAltuTri->ValidatingType = System::Int32::typeid;
			// 
			// TxtBaseTri
			// 
			this->TxtBaseTri->Location = System::Drawing::Point(161, 43);
			this->TxtBaseTri->Mask = L"99";
			this->TxtBaseTri->Name = L"TxtBaseTri";
			this->TxtBaseTri->Size = System::Drawing::Size(100, 22);
			this->TxtBaseTri->TabIndex = 0;
			this->TxtBaseTri->ValidatingType = System::Int32::typeid;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->BtnCuadrado);
			this->groupBox2->Controls->Add(this->TxtCuadrado);
			this->groupBox2->Location = System::Drawing::Point(304, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(277, 245);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Cuadrado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 34);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ingresar la cantidad \r\n         del lado";
			// 
			// BtnCuadrado
			// 
			this->BtnCuadrado->Location = System::Drawing::Point(17, 159);
			this->BtnCuadrado->Name = L"BtnCuadrado";
			this->BtnCuadrado->Size = System::Drawing::Size(254, 51);
			this->BtnCuadrado->TabIndex = 3;
			this->BtnCuadrado->Text = L"Insertar Cuadrado";
			this->BtnCuadrado->UseVisualStyleBackColor = true;
			this->BtnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::BtnCuadrado_Click);
			// 
			// TxtCuadrado
			// 
			this->TxtCuadrado->Location = System::Drawing::Point(171, 72);
			this->TxtCuadrado->Mask = L"99";
			this->TxtCuadrado->Name = L"TxtCuadrado";
			this->TxtCuadrado->Size = System::Drawing::Size(100, 22);
			this->TxtCuadrado->TabIndex = 1;
			this->TxtCuadrado->ValidatingType = System::Int32::typeid;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->BtnPentago);
			this->groupBox3->Controls->Add(this->Txtapotema);
			this->groupBox3->Controls->Add(this->Txtladopentagono);
			this->groupBox3->Location = System::Drawing::Point(597, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(277, 245);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pentágo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ingresar el apotema";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ingresar el lado ";
			// 
			// BtnPentago
			// 
			this->BtnPentago->Location = System::Drawing::Point(6, 159);
			this->BtnPentago->Name = L"BtnPentago";
			this->BtnPentago->Size = System::Drawing::Size(265, 51);
			this->BtnPentago->TabIndex = 4;
			this->BtnPentago->Text = L"Insertar Pentágo";
			this->BtnPentago->UseVisualStyleBackColor = true;
			this->BtnPentago->Click += gcnew System::EventHandler(this, &MyForm::BtnPentago_Click);
			// 
			// Txtapotema
			// 
			this->Txtapotema->Location = System::Drawing::Point(171, 101);
			this->Txtapotema->Mask = L"99";
			this->Txtapotema->Name = L"Txtapotema";
			this->Txtapotema->Size = System::Drawing::Size(100, 22);
			this->Txtapotema->TabIndex = 2;
			this->Txtapotema->ValidatingType = System::Int32::typeid;
			// 
			// Txtladopentagono
			// 
			this->Txtladopentagono->Location = System::Drawing::Point(171, 55);
			this->Txtladopentagono->Mask = L"99";
			this->Txtladopentagono->Name = L"Txtladopentagono";
			this->Txtladopentagono->Size = System::Drawing::Size(100, 22);
			this->Txtladopentagono->TabIndex = 1;
			this->Txtladopentagono->ValidatingType = System::Int32::typeid;
			// 
			// PnFiguras
			// 
			this->PnFiguras->Location = System::Drawing::Point(12, 263);
			this->PnFiguras->Name = L"PnFiguras";
			this->PnFiguras->Size = System::Drawing::Size(856, 336);
			this->PnFiguras->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 611);
			this->Controls->Add(this->PnFiguras);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void DrawNodo(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width) 
		{
			Brush^ brush = gcnew SolidBrush(Color::Red);
			Brush^ brushstring = gcnew SolidBrush(Color::Red);
			System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);

			switch (type)
			{
			case 1: 
			{
				PointF punto1 = PointF(posx, posy );
				PointF punto2 = PointF(posx, posy + height * 5);
				PointF punto3 = PointF(posx + width * 5, posy + height * 5);
				array<PointF>^ curvePoints = { punto1,punto2,punto3 };
				canvas->FillPolygon(brush, curvePoints);
			}
			break;
			case 2: 
			{
				canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
			}
			break;
			case 3:
			{
				double ancho = Math::Sqrt((width * width) - ((height / 2) * (height / 2)));
				double altura = Math::Sqrt((width * width) + ((width / 2) * (width / 2)));
				PointF punto1 = PointF(posx, altura * 5);
				PointF punto2 = PointF(posx + (width / 2) * 5, posy);
				PointF punto3 = PointF(posx + width * 5, altura * 5);
				PointF punto4 = PointF(posx + width * 4, posy + (ancho + altura / 2) * 5);
				PointF punto5 = PointF(posx + width, posy + (ancho + altura / 2) * 5);
				array<PointF>^ curvePoints = { punto1,punto2,punto3,punto4,punto5 };
				canvas->FillPolygon(brush, curvePoints);
			}
			break;
			default:
				break;
			}

			canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 40);

			canvas->DrawString("Perimetro: " + perimeter, fuente, brushstring, posx + 1, posy + 60);
		}
	private: System::Void BtnTriangulo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((TxtAltuTri->Text->Trim() != "") && (TxtBaseTri->Text->Trim() != ""))
		{
			Figuras_Geometricas* newTriangulo = new Triangulo();
			newTriangulo->height = Convert::ToDouble(TxtAltuTri->Text);
			newTriangulo->width = Convert::ToDouble(TxtBaseTri->Text);
			newTriangulo->type = 1;
			newTriangulo->area = newTriangulo->GetArea();
			newTriangulo->perimeter = newTriangulo->GetPerimeter();
			myFigureList->InsertAtEnd(newTriangulo);

			/*inicia dibujo de lista*/
			if (!myFigureList->IsEmpty())
			{
				Nodo<Figuras_Geometricas*>* temp = myFigureList->start;

				for (int i = 0; i < myFigureList->count; i++)
				{
					Figuras_Geometricas* actual = temp->value;
					DrawNodo(PnFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
					temp = temp->next;
				}

			}
			/*Finaliza dibujo de lista*/

			MessageBox::Show("Triangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void BtnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (TxtCuadrado->Text->Trim() != "") 
	{
		Figuras_Geometricas* newCuadrado = new Cuadrilatero();
		newCuadrado->width = Convert::ToDouble(TxtCuadrado->Text);
		newCuadrado->type = 2;
		newCuadrado->area = newCuadrado->GetArea();
		newCuadrado->perimeter = newCuadrado->GetPerimeter();
		myFigureList->InsertAtEnd(newCuadrado);


		/*inicia dibujo de lista*/
		if (!myFigureList->IsEmpty()) 
		{
			Nodo<Figuras_Geometricas*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) 
			{
				Figuras_Geometricas* actual = temp->value;
				DrawNodo(PnFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->width, actual->width);
				temp = temp->next;
			}

		}
		/*Finaliza dibujo de lista*/

		MessageBox::Show("Cuadrilatero insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void BtnPentago_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((Txtladopentagono->Text->Trim() != "") && (Txtapotema->Text->Trim() != ""))
	{
		Figuras_Geometricas* newTriangulo = new Triangulo();
		newTriangulo->height = Convert::ToDouble(Txtapotema->Text);
		newTriangulo->width = Convert::ToDouble(Txtladopentagono->Text);
		newTriangulo->type = 3;
		newTriangulo->area = newTriangulo->GetArea();
		newTriangulo->perimeter = newTriangulo->GetPerimeter();
		myFigureList->InsertAtEnd(newTriangulo);

		/*inicia dibujo de lista*/
		if (!myFigureList->IsEmpty())
		{
			Nodo<Figuras_Geometricas*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++)
			{
				Figuras_Geometricas* actual = temp->value;
				DrawNodo(PnFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}
		/*Finaliza dibujo de lista*/

		MessageBox::Show("Pentágono insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

