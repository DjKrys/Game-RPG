#include "Text.h"



Text::Text()
{
	std::string key;

	key = "logo";
	_txt[key].push_back("-----------------------------------------------------------------------------------------------------------------------");
	_txt[key].push_back("#######################################################################################################################");
	_txt[key].push_back("******************************************************* GRA RPG *******************************************************");
	_txt[key].push_back("#######################################################################################################################");
	_txt[key].push_back("-----------------------------------------------------------------------------------------------------------------------");

	key = "menu";
	_txt[key].push_back("Witaj w minimalnej wersji Gry RPG");
	_txt[key].push_back("Obecnie jestes w menu gry, co chcesz zrobic ?");
	_txt[key].push_back("1. Zagraj w gre");
	_txt[key].push_back("2. Wczytaj gre");
	_txt[key].push_back("3. Wyjdz z gry");

	key = "welcome";
	_txt[key].push_back("Jestes w swoim domu.");
	_txt[key].push_back("Nagle w nocy podczas poruszania w korytarzu slyszysz dziwne odglosy.");
	_txt[key].push_back("Zdezorietowany(a) nie wiesz co robic i stoisz wbity jak kolek w podloge,");
	_txt[key].push_back("gdy nagle postawiasz sie przelamac i sprawdzic to.");

	key = "action";
	_txt[key].push_back("'b - > otworz plecak'");
	_txt[key].push_back("'f - > walka'");
	_txt[key].push_back("'g - > podnies rzecz jaka jest w lokacji'");
	_txt[key].push_back("'t - > wroc do gry'");

	key = "bag";
	_txt[key].push_back("'d - > usun element'");
	_txt[key].push_back("'t - > zamknij plecak'");

	key = "select";
	_txt[key].push_back("Wybierz przedmiot");

	key = "arena";
	_txt[key].push_back("Witajcie na arenie, niech zwyciezy lepszy xD");

	key = "gazeta";
	_txt[key].push_back("Gazeta jest juz Twoja :)");
	_txt[key].push_back("Niestety to tylko skrawek pamieru nic nie znaczacy");

	key = "noz";
	_txt[key].push_back("Noz jest juz Twoj :)");
	_txt[key].push_back("Dzieki niemu bedziesz mogl zabijac");

	key = "atack";
	_txt[key].push_back("'a - > atakuj'");

	key = "win";
	_txt[key].push_back("Wygrales walke, GRATULACJE");

	key = "management";
	_txt[key].push_back("'p - > zarzadzanie graczem'");

	key = "bedroom";
	_txt[key].push_back("Stajesz kolo lozka i rozgladasz sie.");
	_txt[key].push_back("Po lewej stronie znajduje sie komoda, gdzie z jednej z szuflad wystaje kartka papieu.");
	_txt[key].push_back("Na przeciwko wejscia znajduje sie ogroma mysz(enemy)");
	_txt[key].push_back("Twoja uwage przykuwa takze gazeta(item) wystajaca spod lozka.");

	key = "kitchen";
	_txt[key].push_back("Kuchnia wyglada inaczej niz zwykle.");
	_txt[key].push_back("Jednakowoz nic nie wydaje siê wychodzic poza schemat");
	_txt[key].push_back("Lecz nagle na blacie dostrzegasz noz(item), a spod sto³u wychodzi mysz(enemy)");

	key = "garage";
	_txt[key].push_back("W garazu znajduje sie nic dziwnego, tylko stary zjedzony przez rdze Maluch 126p.");
	_txt[key].push_back("Ale moze z czasem byc pomocny.");

	key = "corridor_travel";
	_txt[key].push_back("1. Idz do kuchnii");
	_txt[key].push_back("2. Idz do garazu");
	_txt[key].push_back("3. Idz do sypialni");

	key = "bedroom_travel";
	_txt[key].push_back("1. Idz do kuchnii");
	_txt[key].push_back("2. Idz do garazu");

	key = "kitchen_travel";
	_txt[key].push_back("1. Idz do sypialni");
	_txt[key].push_back("2. Idz do garazu");

	key = "garage_travel";
	_txt[key].push_back("1. Idz do kuchnii");
	_txt[key].push_back("2. Idz do sypialni");

	key = "delete";
	_txt[key].push_back("Usunieto przedmiot");

	key = "info_backpack";
	_txt[key].push_back("Pojemnosc plecaka wynosi: ");
	_txt[key].push_back("Obecny stan zapelnienia: ");

	key = "info_backpack1";
	_txt[key].push_back("Przedmioty: ");
	_txt[key].push_back("Nazwa:	Waga:	Wartosc(obrazenia):");

	key = "name";
	_txt[key].push_back("Podaj imie gracza: ");

	key = "hp";
	_txt[key].push_back("Podaj HP gracza: ");
	
	key = "level";
	_txt[key].push_back("Podaj level gracza: ");
	
	key = "strength";
	_txt[key].push_back("Podaj wytrzymaosc gracza: ");
	
	key = "mana";
	_txt[key].push_back("Podaj mana gracza: ");
	
	key = "force";
	_txt[key].push_back("Podaj sile gracza: ");

	key = "notImplementedException";
	_txt[key].push_back("notImplementedException");

}

Text::Text(const Text &)
{
}

Text::~Text()
{
}

void Text::print(std::string a)
{
	for (int i = 0; i < _txt[a].size(); i++)
	{
		std::cout << _txt[a][i] << std::endl;
	}
}

std::map<std::string, std::vector<std::string>>& Text::getTxt()
{
	return _txt;
}

Text & Text::getText()
{
	static Text _text;
	return _text;
}