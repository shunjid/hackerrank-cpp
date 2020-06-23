#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int number_of_definition, number_of_queries;
    cin >> number_of_definition >> number_of_queries;

    vector<int> definitions[number_of_definition];
    vector<int> queries[number_of_queries];

    // take definitions
    for (int i = 0; i < number_of_definition; i++)
    {
        int each_definition_size;
        cin >> each_definition_size;

        // first element of each definition is the size itself
        definitions[i].push_back(each_definition_size);

        // push other elements in the definition
        for (int j = 1; j <= each_definition_size; j++)
        {
            int value;
            cin >> value;
            definitions[i].push_back(value);
        }
    }

    // take queries
    for (int i = 0; i < number_of_queries; i++)
    {
        int definition_index, value_index;
        cin >> definition_index >> value_index;

        queries[i].push_back(definition_index);
        queries[i].push_back(value_index);
    }

    // result based on query size
    for (int i = 0; i < number_of_queries; i++)
    {
        const int definition_index = queries[i].at(0);
        const int value_position = queries[i].at(1) + 1;

        cout << definitions[definition_index].at(value_position) << endl;
    }

    return 0;
}