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
		void setTitle(string title)
		{
			this->Titile = title;
		}

		void setDescription(string description)
		{
			this->Description = description;
		}

		void setScore(int scorevalue)
		{
			this->scoreValue = scorevalue;
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
	string gamename;
	string publisher;
	string developer;

	int achievementCount;


public:
	void setGamename(string gamename)
	{
		this->gamename = gamename;
	}
	
	void setPublisher(string publisher)
	{
		this->publisher = publisher;
	}

	void setDeveloper(string developer)
	{
		this->developer = developer;
	}

	void setAchievementCount(int achievementCount)
	{
		this->achievementCount = achievementCount;
	}


	string GetGamename() const
	{
		return gamename;
	}

	string GetPublisher() const
	{
		return publisher;
	}

	std::string GetDeveloper() const
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


public:
	void setplatformName(string platformName)
	{
		this->platformName = platformName;
	}

	void setManufacturer(string Manufacturer)
	{
		this->Manufacturer = Manufacturer;
	}



	string GetPlatformName() const
	{
		return platformName;
	}

	string GetManufacturer() const
	{
		return Manufacturer;
	}


};

int main()
{
	string word;
	string platformName;
	string ManufacturerName;
	int gameCount =0;
	int PlatformCount = 0;
	int achievement = 0;
	int score;

	bool inputnumber =0;

	Platform* platform = new Platform;

	cout << "Welcome to achievement tracker system.\n";
	cout << "Please input your Platform Name :" << endl;
	cin >> platformName;
	platform->setplatformName(platformName);

	cout<< "who makes the " << platform->GetPlatformName() << ": ";
	cin >> ManufacturerName;
	platform->setManufacturer(ManufacturerName);

	cout<<"How many games dose"<< platform->GetPlatformName() << " have : (enter a number at least 5) ";
	cin >> gameCount;

	while (!inputnumber)
	{
		if (gameCount < 5)
		{
			std::cout << "Please Try again : ";
			std::cin >> gameCount;
			inputnumber = false;
		}
		else
		{
			inputnumber = true;
		}
	}
	inputnumber = false;

	Games* games = new Games[gameCount];
	Achievements** achievements = new Achievements * [gameCount];


	cout << "Please input the following information for " << gameCount << "games:" << endl;

	for (int i = 0; i < gameCount; i++)
	{
		cout << "Title for game " << i++ <<":" << endl;
		cin >> word;
		games[i].setGamename(word);

		cout<<" who is the Developer for  "<< games[i].GetGamename() << ": ";
		cin >> word;
		games[i].setDeveloper(word);

		cout<<"who is the Publisher for  "<<games[i].GetGamename() << ": ";
		cin >> word;
		games[i].setPublisher(word);

		cout << endl;

		cout << "How many achievements dose " << games[i].GetGamename() << " have (enter a number at least 5) :";
		cin >> achievement;

		while (!inputnumber)
		{
			if (achievement < 5)
			{
				std::cout << "Please Try again : ";
				std::cin >> achievement;
				inputnumber = false;
			}
			else
			{
				inputnumber = true;
			}
		}
		inputnumber = false;
		games[i].setAchievementCount(achievement);
		achievements[i] = new Achievements[achievement];

		cout << endl;
		for (int j=0;j<achievement;j++)
		{
			cout << "Title :" << j + 1 << ":";
			cin >> word;
			achievements[i][j].setTitle(word);
			cout<<"Description for "<<achievements[i][j].GetTitle()<<" : ";
			cin >> word;
			achievements[i][j].setDescription(word);
			cout << "Score for " << achievements[i][j].GetTitle() << " : ";
			cin >> score;
			achievements[i][j].setScore(score);
			cout << endl;

		}

	}

	return 0;
}