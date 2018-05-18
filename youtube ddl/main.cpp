#include <QApplication>
#include "UI/youtubedlgui.h"
#include "UTIL/settings.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Settings settings;

  a.setOrganizationName(settings.getOrganizationName());
  a.setOrganizationDomain(settings.getOrganizationDomain());
  a.setApplicationName(settings.getApplicationName());
  a.setApplicationVersion(settings.getApplicationVersion());

  YouTubeDlGui mainWindow;
  mainWindow.show();

  return a.exec();
}
