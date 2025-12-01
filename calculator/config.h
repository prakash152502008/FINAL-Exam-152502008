#ifndef CONFIG_H
#define CONFIG_H

typedef struct {
    int enableLogging;
} AppConfig;

void loadConfig(AppConfig *config);

#endif
