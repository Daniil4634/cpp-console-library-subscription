#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#include "club_member.h"
#include "constants.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Вывод результатов из клуба \"Спартак\"\n\n";
  
    vector<club_member> members;

    // Добавить участников клуба
    members.push_back(club_member("Иванов", "Иван", "Иванович", "2:30:10"));
    members.push_back(club_member("Петров", "Петр", "Петрович", "3:05:20"));
    members.push_back(club_member("Сидоров", "Сидор", "Сидорович", "2:40:50"));
    members.push_back(club_member("Алексеев", "Алексей", "Алексеевич", "2:20:30"));
    members.push_back(club_member("Смирнов", "Семен", "Семенович", "2:55:45"));

    cout << "***** Участники клуба \"Спартак\" *****\n\n";

    for (const club_member& member : members)
    {
        /********** Вывод информации о члене клуба **********/
        cout << "Фамилия: " << member.last_name << endl;
        cout << "Имя: " << member.first_name << endl;
        cout << "Отчество: " << member.middle_name << endl;
        cout << "Результат: " << member.result << endl;
      
        cout << endl;
    }

    cout << "***** Участники с результатом лучше 2:50:00 *****\n\n";

    for (const club_member& member : members)
    {
        /********** Вывод информации о члене клуба с результатом лучше 2:50:00 **********/
        if (member.result < "2:50:00")
        {
            cout << "Фамилия: " << member.last_name << endl;
            cout << "Имя: " << member.first_name << endl;
            cout << "Отчество: " << member.middle_name << endl;
            cout << "Результат: " << member.result << endl;
          
            cout << endl;
        }
    }

    return 0;
}
