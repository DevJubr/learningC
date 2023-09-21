#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isSunny = true;
    bool isWarm = true;

    bool canGoForPicnic = isSunny && isWarm;

    printf("Can I go for a picnic? %d\n", canGoForPicnic);

    bool isRaining = false;
    bool hasUmbrella = true;

    bool stayDry = isRaining || hasUmbrella;

    printf("Will I stay dry? %d\n", stayDry );

    return 0;
}
