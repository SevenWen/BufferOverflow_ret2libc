#include<stdio.h>
typedef struct s string;
struct s
{
	char *ch;
};
int print_penguin()
{
	string penguin[29];
	penguin[0].ch="				    \"\(\"r^^^-.";
	penguin[1].ch="                                    | `-_   \",_";
	penguin[2].ch="                                  _-\'`+-_ `--`/";
	penguin[3].ch="                                ,\'_-     ``--\\";
	penguin[4].ch="                               (-_       ^(\\:/)";
	penguin[5].ch="                               (-       ^^^^ ^\\";
	penguin[6].ch="                 _.--^^^-._     \\-     _,._  ` `.";
	penguin[7].ch="              .-\'        ` `._   )-   ( <._^`-.  `.";
	penguin[8].ch="          _.-\'                `-_|- _  /^^ `^^^`-. `.";
	penguin[9].ch="        ({  |    \\ /   /      //-_-_+ /           `. \\";
	penguin[10].ch="         \\\\   _.---.          \\+-_+_`}`-._         `.\\";
	penguin[11].ch="           `\"\"      )   .^\\    \\__..-^     `-_        `\\";
	penguin[12].ch="                    .   )  \\                  `.";
	penguin[13].ch="                   }   / /\\ `.....         ,    \\";
	penguin[14].ch="                  ;  _/ /  `--. _/   .\'^`-..-    )";
	penguin[15].ch="                 (  (  /     / /  _-'     ;     /";
	penguin[16].ch="                ( `. ``     / /  /       /._   /";
	penguin[17].ch="             __/ `. `._    (_(  /^.     (, ,`./";
	penguin[18].ch="       _-:::::(    `._ `-......`,` ^.    ``--'";
	penguin[19].ch="      <::::::::\\      `-......-`   /:|.";
	penguin[20].ch="      < _`:;;::-\\                .|:::/^.";
	penguin[21].ch="       \\  ^      `-.__    __..--<:;,\'^.  `.          _";
	penguin[22].ch="        \\  \\          ^^^^             `.  `.       / | /\\";
	penguin[23].ch="         )` `.                           `. .`-.   (  // / _";
	penguin[24].ch="         ) \\ \\                            `. / `._/ // /.' }";
	penguin[25].ch=" /^`-..\'^ `_``_`^-.                         ( / _-_ <  /  _-\'";
	penguin[26].ch="<__  _..._--_..__- )                     __\\ -_-_-.-_.-\'";
	penguin[27].ch="    ^^     ^^     ^^                      /'   ___.---'";
	penguin[28].ch="                                         <.--\'\'\"";
	
	//finally printing the duck
	int i;
	for(i=0;i<29;i++)
		printf("%s\n",penguin[i].ch);
	return 0;
}
