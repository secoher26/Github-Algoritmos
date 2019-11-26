#include "game.h"
#include <ctime>

Game::Game(string name, int level)
{
    player = name;
    int n = 9 - level;
    this->level = level;
    cout<< "Tiene "<<n<<endl;
    timeXPlay = new double[n];
    int size = sizeof(timeXPlay)/sizeof(*timeXPlay);
    for(int i = 0; i < size ; i++)
        timeXPlay[i]=0;
}



void Game::addTimePlay(double time)
{
    int size = sizeof(*timeXPlay);
    cout<< "Size " << size << endl;
    for(int i = 0; i < size ; i++){
        cout << "Contiene "<<timeXPlay[i]<<endl;
            if (timeXPlay[i] == 0){
                timeXPlay[i] = time;
                break;
            }
        }
}

void Game::setDate()
{
    time_t now = time(0);
    char* date = ctime(&now);
    datePlayed = date;
}

void Game::setDate(string date)
{
    datePlayed = date;
}

void Game::calculateTotalTime()
{
    double sum = 0;
    int size = sizeof(*timeXPlay);
    for(int i = 0; i < size ; i++)
        sum += timeXPlay[i];
    timeTaken = sum;
}


/*void Game::saveGame()
{
    Json::Value event;
    Json::Value timeEach(Json::arrayValue);
    Json::Value solvedC(Json::arrayValue);

    event["Game"]["player"] = player;
    event["Game"]["timeTaken"] = timeTaken;

    //calculateTotalTime();
    //cout << "tiempo total: "<< timeTaken <<endl;
     double sum = 0;
    int sizeCombination = sizeof(*timeXPlay);
    for (int i = 0 ; i < sizeCombination ; i++)
    {

        double col = timeXPlay[i];
        sum += col;
        timeEach.append(Json::Value(col));
        if (sum == timeTaken)
            break;
    }

    for (int i = 0; i < 4 ; i++)
    {
        string color = solvedCombination[i];
        solvedC.append(Json::Value(color));
    }

    event["Game"]["timeXPlay"] = timeEach;
    event["Game"]["datePlayed"]=datePlayed;
    event["Game"]["solvedCombination"] = solvedC;



    ofstream file_id;
    file_id.open("master_mind_jugada_actual.dat");

    Json::StyledWriter styledWriter;
    file_id << styledWriter.write(event);
    file_id.close();
}

void Game::loadGame()
{
    ifstream ifs("master_mind_jugada_actual.dat");
        Json::Reader reader;
        Json::Value json;
        reader.parse(ifs, json);

    string datePlayed = json["Game"]["datePlayed"].asString();
    string player = json["Game"]["player"].asString();
    //double timeTaken = json["Game"]["timeTaken"].asDouble();

    const Json::Value arrayC = json["solvedCombination"];
    const Json::Value arrayT = json["solvedCombination"];
    string combination[4];
    //double* times[4];

    Configuration conf;
    conf.cargarConfig();
    Game game(player, conf.nivel);

    for(unsigned int index=0; index<arrayC.size(); index++)
    {
    combination[index] = arrayC[index].asString();
    }

    for(unsigned int index=0; index<arrayT.size(); index++)
    {
    game.addTimePlay(arrayT[index].asInt());
    }

    //Nombre del jugador y nivel de dificultad
        game.setDate(datePlayed); //Fecha del juego
        cout << "Esta vivo" <<endl;
        memcpy(game.solvedCombination, combination, sizeof(game.solvedCombination)); //Combinacion ganadora
        game.calculateTotalTime();

        return game;

}*/


void Game::saveRecord(){
    //Primero hace en un solo string la combinación
    string combination = "";
    for (int i = 0; i < 4 ; i++){
        combination += this->solvedCombination[i];
        if (i != 3){
            combination += "-";
        }
    }
    string record;
    record += this->player;
    record += ",";
    record += to_string(this->timeTaken);
    record += ",";
    record += combination;
    record += ",";
    if(this->level == 1){
        record += "Fácil,";
    }
    if(this->level == 2){
        record += "Medio,";
    }
    if(this->level == 3){
        record += "Difícil,";
    }
    record += this->datePlayed;

    //Escribe en el archivo master_mind_records.dat
    ofstream myfile("master_mind_records.dat", ofstream::app);
    myfile << record;
    myfile.close();
}

ListaEnlazada* Game::loadRecords(){
    ListaEnlazada * listaRecords = new ListaEnlazada();
    ifstream myFile("master_mind_records.dat", ifstream::in);
    while(!myFile.eof()){
        string textLine;
        getline(myFile, textLine);
        listaRecords->insertarInicio(textLine);
    }
    return listaRecords;
}
