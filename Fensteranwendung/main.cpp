//Name des selbst erstellten Formularfensters austauschen
#include "Hauptfenster.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace Fensteranwendung;

[STAThread]							// Angabe, dass kein Multithrading benutzt wird
void main(array<String^>^ args) {	// 

	// optionale Hilfsangaben, um ein schöneres Endergebnis zu sehen
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Name des eigenen Projekts und Formulars ersetzen 
	Fensteranwendung::Hauptfenster^ fenster1 = gcnew Fensteranwendung::Hauptfenster;

	// jetzt mit eingefügtem namespace "Fensteranwendung"
//	Hauptfenster^ fenster2 = gcnew Hauptfenster;

	//Anwendung soll mit Fenster 1 starten
	Application::Run(fenster1);
//	Application::Run(fenster2);
}
