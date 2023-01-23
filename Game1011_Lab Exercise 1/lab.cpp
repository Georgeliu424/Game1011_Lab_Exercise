#include<iostream>
#include <vector>
using namespace std;

 class Achievements
{
 private:
	string Titile;
	string Description;
	int scoreValue;



 public:
	 Achievements(string Title,string Description, int scoreValue)
	 {
		 this->Titile = Title;
		 this->Description = Description;
		 this->scoreValue = scoreValue;
	 }


	 string GetTitle() const
	 {
		 return Titile;
	 }


	 string GetDescription() const
	 {
		 return Description;
	 }

	 
	 int GetscoreValue()
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
	Games(string gameName, string publisher, string developer, int achievementCount)
	{
		this->name = name;
		this->publisher = publisher;
		this->developer = developer;
		this->achievementCount = achievementCount;
	}
	
	string GetName()
	{
		return name;
	}

	string GetGame() const
	{
		return name;
	}

	string GetPublisher() const
	{
		return publisher;
	}

	std::string GetDeveloperName() const
	{
		return developer;
	}

	int GetAchievementCount() const
	{
		return achievementCount;
	}


};

class Platform
{
private:
	string platformName;
	string Manufacturer;
	int gameCount;

public:
	Platform(string platformName, string Manufacturer, int gameCount)
	{
		this->platformName = platformName;
		this->Manufacturer = Manufacturer;
		this->gameCount = gameCount;
	}

	string GetPlatformName() const
	{
		return platformName;
	}

	string GetManufacturerName() const
	{
		return Manufacturer;
	}

	int GetGameCount() const
	{
		return gameCount;
	}

};

int main()
{
	string platformName;
	string ManufacturerName;
	int gameCount;

	cout << "Welcome to achievement tracker system.\n";
	cout << " Please Enter your Platform Name :";
	cin >> platformName;
	cout << "Please Enter your Manufacturer Name :";
	cin >> ManufacturerName;
	cout << "Number of games in platform '" << platformName << "': ";
	cin >> gameCount;

	Platform* platform = new Platform(platformName, ManufacturerName, gameCount);



	return 0;
}