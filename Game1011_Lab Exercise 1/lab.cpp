#include<iostream>
using namespace std;

 class Achievements
{
 private:
	string Titile;
	string Description;
	int scoreValue;



 public:
	 Achievements()
	 {

	 }

	 void SetTitle(string GameTitle)
	 {
		 Titile = GameTitle;
	 }
	 string GetTitle()
	 {
		 return Titile;
	 }


	 void SetDescription (string description)
	 {
		 Description = description;
	 }

	 string GetDescription()
	 {
		 return Description;
	 }

	 int SetScore(int AchivementScore)
	 {
		 scoreValue = AchivementScore;
	 }
	 
	 int GetScore()
	 {
		 return scoreValue;
	 }

};


class Games
{
private:
	string name;
	string publisher;
	string developer;
	
	Achievements* achievements;
	int achievementCount;


public:
	Games()
	{
		
	}
	void setName( string GameName)
	{
		name = GameName;
	}
	string GetName()
	{
		return name;
	}

	void setPublisher(string newPublisher)
	{
		publisher = newPublisher;
	}

	string GetPublisher()
	{
		return publisher;
	}
	void setDeveloper(string newDeveloper)
	{
		developer = newDeveloper;
	}
	string GetDeveloper()
	{
		return developer;
	}

	void SetAchievements(Achievements*achievements,int achievementCount)
	{
		this->achievements = achievements;
		this->achievementCount = achievementCount;
	}



};

class Platform
{
private:
	string name;
	string Manufacturer;
	int gameCount;
	Games* games;

public:
	void setGame(Games* games, int getGameCount)
	{
		games = games;
		gameCount = getGameCount;
	}

	void setName(string platformName)
	{
		name = platformName;
	}

	string GetName()
	{
		return name;
	}
	void setManufacturer(string ManufacturerName)
	{
		Manufacturer = ManufacturerName;
	}
	string GetManufacturer()
	{
		return Manufacturer;
	}


};

int main()
{






	return 0;
}