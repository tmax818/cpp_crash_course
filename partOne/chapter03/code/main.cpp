/**

*/
#include <cstdio>

struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }

    int get_year() {
        return year;
    }

    void set_year(int new_year) {
        year = new_year;
    }

    int year;
};

struct College {
    char name[256];
};

void print_name(College* college_ptr) {
    printf("%s College\n", college_ptr->name);
}

void print_names(College* colleges, size_t n_colleges) {
    for(size_t i = 0; i < n_colleges; i++) {
        printf("%s College\n", colleges[i].name);
    }
}


void demo_gettysburg() {
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int* gettysburg_address = &gettysburg;
    printf("gettysburg address: %p\n", gettysburg_address);
}

void demo_gettysburg_dereference() {
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int* gettysburg_address = &gettysburg;
    *gettysburg_address = 17325;
    printf("gettysburg address: %p\n", gettysburg_address);
    printf("gettysburg: %d and *gettysburg_address: %d\n", gettysburg, *gettysburg_address);
}

struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        new_element->next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() {
    demo_gettysburg();
    demo_gettysburg_dereference();

    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr->set_year(2020);
    printf("Address of clock: %p\n", clock_ptr); 
    printf("Value of clock's year: %d\n", clock_ptr->get_year());
    printf("Value of clock's year: %d\n", (*clock_ptr).get_year());

    College best_colleges[]{"Magdalen", "Nuffield", "Kellogg"};
    print_name(best_colleges);
    print_names(best_colleges, sizeof(best_colleges)/sizeof(College));

    return 0;
}