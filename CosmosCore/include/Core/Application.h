#ifndef APPLICATION_H
#define APPLICATION_H



namespace CosmosCore {
class Application {
   public:
    Application(Application const&) = delete;
    Application& operator=(Application const&) = delete;

    static Application& Get();
    void PrintTest();
    int GetData();

   private:
    Application();
    ~Application();

   private:
    int data = 0;
};

}  // namespace CosmosCore

#endif