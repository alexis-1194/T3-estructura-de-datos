#pragma once

namespace EXAMENT3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Resumen de fmrTransacciones
	/// </summary>
	public ref class fmrTransacciones : public System::Windows::Forms::Form
	{
	public:
		fmrTransacciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~fmrTransacciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::RadioButton^ rbDeposito;
	private: System::Windows::Forms::RadioButton^ rbRetiro;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbFemenino;
	private: System::Windows::Forms::RadioButton^ rbMasclino;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaT;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaNac;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Insertar;

	private: System::Windows::Forms::Panel^ pXFecha;
	private: System::Windows::Forms::Button^ btnP2;

	private: System::Windows::Forms::DataGridView^ dgvListarXFecha;
	private: System::Windows::Forms::Panel^ pMasculino;
	private: System::Windows::Forms::DataGridView^ dgvListarMasculino;
	private: System::Windows::Forms::Button^ bntP3;
	private: System::Windows::Forms::Panel^ pFemenino;

	private: System::Windows::Forms::DataGridView^ dgvListarFemenino;

	private: System::Windows::Forms::Button^ btnP1;






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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbDeposito = (gcnew System::Windows::Forms::RadioButton());
			this->rbRetiro = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->rbMasclino = (gcnew System::Windows::Forms::RadioButton());
			this->dtpFechaT = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFechaNac = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Insertar = (gcnew System::Windows::Forms::Button());
			this->pXFecha = (gcnew System::Windows::Forms::Panel());
			this->pFemenino = (gcnew System::Windows::Forms::Panel());
			this->pMasculino = (gcnew System::Windows::Forms::Panel());
			this->bntP3 = (gcnew System::Windows::Forms::Button());
			this->dgvListarMasculino = (gcnew System::Windows::Forms::DataGridView());
			this->btnP1 = (gcnew System::Windows::Forms::Button());
			this->dgvListarFemenino = (gcnew System::Windows::Forms::DataGridView());
			this->btnP2 = (gcnew System::Windows::Forms::Button());
			this->dgvListarXFecha = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->pXFecha->SuspendLayout();
			this->pFemenino->SuspendLayout();
			this->pMasculino->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarMasculino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarFemenino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarXFecha))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbDeposito);
			this->groupBox2->Controls->Add(this->rbRetiro);
			this->groupBox2->Location = System::Drawing::Point(26, 155);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(323, 34);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tipo movimiento";
			// 
			// rbDeposito
			// 
			this->rbDeposito->AutoSize = true;
			this->rbDeposito->Location = System::Drawing::Point(224, 14);
			this->rbDeposito->Name = L"rbDeposito";
			this->rbDeposito->Size = System::Drawing::Size(67, 17);
			this->rbDeposito->TabIndex = 13;
			this->rbDeposito->TabStop = true;
			this->rbDeposito->Text = L"Deposito";
			this->rbDeposito->UseVisualStyleBackColor = true;
			// 
			// rbRetiro
			// 
			this->rbRetiro->AutoSize = true;
			this->rbRetiro->Location = System::Drawing::Point(115, 14);
			this->rbRetiro->Name = L"rbRetiro";
			this->rbRetiro->Size = System::Drawing::Size(53, 17);
			this->rbRetiro->TabIndex = 12;
			this->rbRetiro->TabStop = true;
			this->rbRetiro->Text = L"Retiro";
			this->rbRetiro->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbFemenino);
			this->groupBox1->Controls->Add(this->rbMasclino);
			this->groupBox1->Location = System::Drawing::Point(26, 82);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(323, 39);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Genero";
			// 
			// rbFemenino
			// 
			this->rbFemenino->AutoSize = true;
			this->rbFemenino->Location = System::Drawing::Point(224, 12);
			this->rbFemenino->Name = L"rbFemenino";
			this->rbFemenino->Size = System::Drawing::Size(71, 17);
			this->rbFemenino->TabIndex = 20;
			this->rbFemenino->TabStop = true;
			this->rbFemenino->Text = L"Femenino";
			this->rbFemenino->UseVisualStyleBackColor = true;
			// 
			// rbMasclino
			// 
			this->rbMasclino->AutoSize = true;
			this->rbMasclino->Location = System::Drawing::Point(115, 12);
			this->rbMasclino->Name = L"rbMasclino";
			this->rbMasclino->Size = System::Drawing::Size(73, 17);
			this->rbMasclino->TabIndex = 19;
			this->rbMasclino->TabStop = true;
			this->rbMasclino->Text = L"Masculino";
			this->rbMasclino->UseVisualStyleBackColor = true;
			// 
			// dtpFechaT
			// 
			this->dtpFechaT->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFechaT->Location = System::Drawing::Point(141, 206);
			this->dtpFechaT->Name = L"dtpFechaT";
			this->dtpFechaT->Size = System::Drawing::Size(100, 20);
			this->dtpFechaT->TabIndex = 27;
			// 
			// dtpFechaNac
			// 
			this->dtpFechaNac->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFechaNac->Location = System::Drawing::Point(141, 127);
			this->dtpFechaNac->Name = L"dtpFechaNac";
			this->dtpFechaNac->Size = System::Drawing::Size(100, 20);
			this->dtpFechaNac->TabIndex = 26;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(141, 56);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(200, 20);
			this->txtNombre->TabIndex = 25;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(141, 23);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 20);
			this->txtDNI->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Fecha Transacción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Fecha Nac.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Nombre completo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"DNI";
			// 
			// Insertar
			// 
			this->Insertar->Location = System::Drawing::Point(383, 202);
			this->Insertar->Name = L"Insertar";
			this->Insertar->Size = System::Drawing::Size(75, 23);
			this->Insertar->TabIndex = 30;
			this->Insertar->Text = L"Insertar";
			this->Insertar->UseVisualStyleBackColor = true;
			this->Insertar->Click += gcnew System::EventHandler(this, &fmrTransacciones::Insertar_Click);
			// 
			// pXFecha
			// 
			this->pXFecha->Controls->Add(this->btnP2);
			this->pXFecha->Controls->Add(this->dgvListarXFecha);
			this->pXFecha->Location = System::Drawing::Point(39, 255);
			this->pXFecha->Name = L"pXFecha";
			this->pXFecha->Size = System::Drawing::Size(486, 254);
			this->pXFecha->TabIndex = 31;
			// 
			// pFemenino
			// 
			this->pFemenino->Controls->Add(this->btnP1);
			this->pFemenino->Controls->Add(this->dgvListarFemenino);
			this->pFemenino->Location = System::Drawing::Point(36, 245);
			this->pFemenino->Name = L"pFemenino";
			this->pFemenino->Size = System::Drawing::Size(489, 267);
			this->pFemenino->TabIndex = 33;
			// 
			// pMasculino
			// 
			this->pMasculino->Controls->Add(this->bntP3);
			this->pMasculino->Controls->Add(this->dgvListarMasculino);
			this->pMasculino->Location = System::Drawing::Point(36, 245);
			this->pMasculino->Name = L"pMasculino";
			this->pMasculino->Size = System::Drawing::Size(486, 267);
			this->pMasculino->TabIndex = 32;
			// 
			// bntP3
			// 
			this->bntP3->Location = System::Drawing::Point(409, 231);
			this->bntP3->Name = L"bntP3";
			this->bntP3->Size = System::Drawing::Size(75, 23);
			this->bntP3->TabIndex = 1;
			this->bntP3->Text = L"Pagina 3";
			this->bntP3->UseVisualStyleBackColor = true;
			this->bntP3->Click += gcnew System::EventHandler(this, &fmrTransacciones::bntP3_Click);
			// 
			// dgvListarMasculino
			// 
			this->dgvListarMasculino->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListarMasculino->Location = System::Drawing::Point(3, 3);
			this->dgvListarMasculino->Name = L"dgvListarMasculino";
			this->dgvListarMasculino->Size = System::Drawing::Size(479, 223);
			this->dgvListarMasculino->TabIndex = 0;
			// 
			// btnP1
			// 
			this->btnP1->Location = System::Drawing::Point(407, 231);
			this->btnP1->Name = L"btnP1";
			this->btnP1->Size = System::Drawing::Size(75, 23);
			this->btnP1->TabIndex = 1;
			this->btnP1->Text = L"Pagina 1";
			this->btnP1->UseVisualStyleBackColor = true;
			this->btnP1->Click += gcnew System::EventHandler(this, &fmrTransacciones::btnP1_Click);
			// 
			// dgvListarFemenino
			// 
			this->dgvListarFemenino->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListarFemenino->Location = System::Drawing::Point(3, 3);
			this->dgvListarFemenino->Name = L"dgvListarFemenino";
			this->dgvListarFemenino->Size = System::Drawing::Size(479, 223);
			this->dgvListarFemenino->TabIndex = 0;
			// 
			// btnP2
			// 
			this->btnP2->Location = System::Drawing::Point(411, 232);
			this->btnP2->Name = L"btnP2";
			this->btnP2->Size = System::Drawing::Size(75, 23);
			this->btnP2->TabIndex = 1;
			this->btnP2->Text = L"Pagina 2";
			this->btnP2->UseVisualStyleBackColor = true;
			this->btnP2->Click += gcnew System::EventHandler(this, &fmrTransacciones::btnP2_Click);
			// 
			// dgvListarXFecha
			// 
			this->dgvListarXFecha->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListarXFecha->Location = System::Drawing::Point(7, 3);
			this->dgvListarXFecha->Name = L"dgvListarXFecha";
			this->dgvListarXFecha->Size = System::Drawing::Size(479, 223);
			this->dgvListarXFecha->TabIndex = 0;
			// 
			// fmrTransacciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 529);
			this->Controls->Add(this->pFemenino);
			this->Controls->Add(this->pMasculino);
			this->Controls->Add(this->pXFecha);
			this->Controls->Add(this->Insertar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dtpFechaT);
			this->Controls->Add(this->dtpFechaNac);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"fmrTransacciones";
			this->Text = L"fmrTransacciones";
			this->Load += gcnew System::EventHandler(this, &fmrTransacciones::fmrTransacciones_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->pXFecha->ResumeLayout(false);
			this->pFemenino->ResumeLayout(false);
			this->pMasculino->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarMasculino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarFemenino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListarXFecha))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void imprimir(Transaccion A[], int pos[], int x) {
			dgvListarXFecha->Columns->Clear();
			for (int i = 0; i < x; i++)dgvListarXFecha->Columns->Add("", "");
			for (int i = 0; i < x; i++)dgvListarXFecha->Rows->Add();
			for (int i = 0; i < x; i++)
				dgvListarXFecha[i, pos[i]]->Value =
				Convert::ToChar((int)A[i].tipoMovimiento[0]) + "" +
				"/" + Convert::ToChar((int)A[i].unCliente.genero[0]) +
				"/" + A[i].fmov.d + "-" + A[i].fmov.m + "-" + A[i].fmov.a;
		}

		void imprimirM(Transaccion A[], int pos[], int x) {
			dgvListarMasculino->Columns->Clear();
			for (int i = 0; i < x; i++)dgvListarMasculino->Columns->Add("", "");
			for (int i = 0; i < x; i++)dgvListarMasculino->Rows->Add();
			for (int i = 0; i < x; i++)
				dgvListarMasculino[i, pos[i]]->Value =
				Convert::ToChar((int)A[i].unCliente.nombreCompleto[0]) + "" +
				"/" + Convert::ToChar((int)A[i].unCliente.genero[0]) + "/" + edad(A[i].unCliente.fnac);
		}

		void imprimirF(Transaccion A[], int pos[], int x) {
			dgvListarFemenino->Columns->Clear();
			for (int i = 0; i < x; i++)dgvListarFemenino->Columns->Add("", "");
			for (int i = 0; i < x; i++)dgvListarFemenino->Rows->Add();
			for (int i = 0; i < x; i++)
				dgvListarFemenino[i, pos[i]]->Value =
				Convert::ToChar((int)A[i].unCliente.nombreCompleto[0]) + "" +
				"/" + Convert::ToChar((int)A[i].unCliente.genero[0]) + "/" + edad(A[i].unCliente.fnac);
		}



	private: System::Void Insertar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rbMasclino->Checked == false && rbFemenino->Checked == false) {
			MessageBox::Show("Seleccione Genero");
		}
		else if (rbRetiro->Checked == false && rbDeposito->Checked == false) {
			MessageBox::Show("Seleccione tipo de movimiento");
		}
		else {
			String^ m; IntPtr ptr; char* copia;
			Transaccion dato;

			int pos[50], x = 0;
			int posm[50], xm = 0;
			int posf[50], xf = 0;

			m = txtDNI->Text;
			ptr = Marshal::StringToHGlobalAnsi(m);
			copia = static_cast<char*>(ptr.ToPointer());
			strcpy_s(dato.unCliente.DNI, copia);
			m = txtNombre->Text;
			ptr = Marshal::StringToHGlobalAnsi(m);
			copia = static_cast<char*>(ptr.ToPointer());
			strcpy_s(dato.unCliente.nombreCompleto, copia);

			if (rbMasclino->Checked)
				strcpy_s(dato.unCliente.genero, "Masculino");
			else
				strcpy_s(dato.unCliente.genero, "Femenino");

			dato.unCliente.fnac.a = dtpFechaNac->Value.Year;
			dato.unCliente.fnac.m = dtpFechaNac->Value.Month;
			dato.unCliente.fnac.d = dtpFechaNac->Value.Day;

			/*dato.unCliente.fnac.h = dtpFechaNac->Value.Hour;
			dato.unCliente.fnac.min = dtpFechaNac->Value.Minute;
			dato.unCliente.fnac.sec = dtpFechaNac->Value.Second;*/

			if (rbRetiro->Checked)
				strcpy_s(dato.tipoMovimiento, "Retiro");
			else
				strcpy_s(dato.tipoMovimiento, "Deposito");

			dato.fmov.a = dtpFechaT->Value.Year;
			dato.fmov.m = dtpFechaT->Value.Month;
			dato.fmov.d = dtpFechaT->Value.Day;

			/*dato.fmov.h = dtpFechaT->Value.Hour;
			dato.fmov.min = dtpFechaT->Value.Minute;
			dato.fmov.sec = dtpFechaT->Value.Second;*/

			insertarArbol(R, dato);
			verArbol(R, n, A, pos, x);
			imprimir(A, pos, x);
			if (rbMasclino->Checked) {
				insertarArbolXEdad(RM, dato);
				verArbol(RM, nM, M, posm, xm);
				imprimirM(M, posm, xm);
			}
			else if (rbFemenino->Checked) {
				insertarArbolXEdad(RF, dato);
				verArbol(RF, nF, F, posf, xf);
				imprimirF(F, posf, xf);
			}
		}
	}
	private: System::Void btnP2_Click(System::Object^ sender, System::EventArgs^ e) {
		pXFecha->Visible = false;
		pMasculino->Visible = true;
		pFemenino->Visible = false;
	}
	private: System::Void bntP3_Click(System::Object^ sender, System::EventArgs^ e) {
		pXFecha->Visible = false;
		pMasculino->Visible = false;
		pFemenino->Visible = true;
	}
	private: System::Void btnP1_Click(System::Object^ sender, System::EventArgs^ e) {
		pXFecha->Visible = true;
		pMasculino->Visible = false;
		pFemenino->Visible = false;
	}


	private: System::Void fmrTransacciones_Load(System::Object^ sender, System::EventArgs^ e) {
		pXFecha->Visible = true;
		pMasculino->Visible = false;
		pFemenino->Visible = false;
	}
	};
}
