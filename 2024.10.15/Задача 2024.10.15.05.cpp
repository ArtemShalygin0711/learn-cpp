class Pizza
{
    int mAmountOfCheese;
    int mWidthOfDow;
    int mAmountOfTomatoSouce;
    bool mUsePinaples;
    bool mBakeWithCrunch;
    int mAmountOfSlices;
public:
    void Cheese(int Amountofcheese) { mAmountOfCheese = Amountofcheese; }
    int Cheese() { return mAmountOfCheese; }
    void Dow(int widthofdow) { mWidthOfDow = widthofdow; }
    int Dow() { return mWidthOfDow; }
    void TomatoSouce(int amountoftomatosouce) { mAmountOfTomatoSouce = amountoftomatosouce; }
    int TomatoSouce() { return mAmountOfTomatoSouce; }
    void Pinaples(bool usepinaples) { mUsePinaples = usepinaples; }
    bool Pinaples() { return mUsePinaples; }
    void Crunch(bool crunch) { mBakeWithCrunch = crunch; }
    bool Crunch() { return mBakeWithCrunch; }
    void slices(int slice) { mAmountOfSlices = slice; }
    int slices() { return mAmountOfSlices; }
    Pizza(int Cheeses, int Dows, int Tomato, bool Pinaple, bool Crunches, int Slice):mAmountOfCheese(Cheeses), mWidthOfDow(Dows), mAmountOfTomatoSouce(Tomato), mUsePinaples(Pinaple), mBakeWithCrunch(Crunches), mAmountOfSlices(Slice){}
    ~Pizza() {}

private:

};
