#include "./Serialize.hpp"

int main()
{
    Data *data = new Data();

    data->a = 1337;
    data->b = 'c';
    data->c = true;

    uintptr_t raw = serialize(data);
    cout << "raw: " << raw << endl;
    Data *data2 = deserialize(raw);

    cout << "data2->a: " << data2->a << endl;
    cout << "data2->b: " << data2->b << endl;
    cout << "data2->c: " << data2->c << endl;

    delete data;
    return 0;
}
