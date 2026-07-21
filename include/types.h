typedef enum
{
    READY,
    RUNNING,
    COMPLETED,
    UNKNOWN
} MissionStatus;

typedef struct
{
    int id;
    char name[30];
    int status;
} Mission;

typedef struct
{
    int id;
    const char *name;
    void (*handler)(void);
} Menu;