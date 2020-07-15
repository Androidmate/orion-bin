#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
    if(argv[1] == NULL){
        std::cout<<"orion: try 'orion -h' or 'orion --help' for more information"<<std::endl;
        return 0;
    }

    if(strcmp(argv[1], "-h")==0 ||strcmp(argv[1], "--help")==0){
        std::cout<<"usage: orion [options...]"<<std::endl;
        std::cout<<" -i, --install \tInstall orion"<<std::endl;
        std::cout<<" -r, --remove \tRemove orion"<<std::endl;
        return 0;
    }

    if(strcmp(argv[1], "-i")==0 || strcmp(argv[1], "--install")==0){
        std::cout<<"orion:\tInstalling..."<<std::endl;
        system("curl -s -o phase1 https://raw.githubusercontent.com/Androidmate/orion/master/phases/phase1");
        system("chmod +x phase1");
        std::cout<<"\tDownloaded"<<std::endl;
        return 0;
    }

    if(strcmp(argv[1], "-r")==0 || strcmp(argv[1], "--remove")==0){
        std::cout<<"orion:\tRemoving..."<<std::endl;
        remove("phase1");
        std::cout<<"\torion has been removed."<<std::endl;
        return 0;
    }

    std::cout<<"orion: try 'orion -h' or 'orion --help' for more information"<<std::endl;
    return 0;
}
