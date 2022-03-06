# include <iostream>
# include <stdint.h>

typedef struct	s_Data
{
	int			data;
}				Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int		main(void)
{
	Data *d = new Data;

	d->data = 123;
	std::cout << "Before serialize addr: " << d << "\tBefore serialize val: " << d->data << std::endl;
	uintptr_t ptr_serialize = serialize(d);
	std::cout << "Serialize() addr: " << ptr_serialize << std::endl;
	Data *new_d = deserialize(ptr_serialize);
	std::cout << "Deserialize() addr: " << new_d << std::endl;
	std::cout << "After deserialize addr: " << new_d << "\tAfter deserialize val: " << new_d->data << std::endl;
	delete d;
	return (0);
}