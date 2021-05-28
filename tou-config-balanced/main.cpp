#include <iostream>
#include <filesystem>
#include <fstream>

int main()
{
	try {
		std::ofstream file(std::filesystem::temp_directory_path().parent_path().parent_path().parent_path() / "LocalLow/Innersloth/Among Us/GameSettings-Slot2");
		file << R"(<color=#704FA8FF>Mayor</color>
80
<color=#FF66CCFF>Lovers</color>
60
<color=#FFFF00FF>Sheriff</color>
90
<color=#FFA60AFF>Engineer</color>
90
<color=#66E666FF>Swapper</color>
70
<color=#00B3B3FF>Investigator</color>
0
<color=#0000FFFF>Time Lord</color>
70
<color=#006600FF>Medic</color>
90
<color=#FFCC80FF>Seer</color>
80
Child
0
<color=#CCA3CCFF>Spy</color>
0
<color=#D4AF37FF>Snitch</color>
90
<color=#660000FF>Altruist</color>
80
<color=#FFBFCCFF>Jester</color>
70
<color=#999999FF>Shifter</color>
90
<color=#00FF00FF>The Glitch</color>
90
<color=#8C4005FF>Executioner</color>
70
<color=#FF4D00FF>Arsonist</color>
80
<color=#FF0000FF>Janitor</color>
90
<color=#FF0000FF>Morphling</color>
70
<color=#FF0000FF>Camouflager</color>
80
<color=#FF0000FF>Miner</color>
90
<color=#FF0000FF>Swooper</color>
70
<color=#FFFF99FF>Torch</color>
10
<color=#808080FF>Diseased</color>
10
<color=#FF8080FF>Flash</color>
5
<color=#99E699FF>Tiebreaker</color>
20
<color=#758000FF>Drunk</color>
0
<color=#FF8080FF>Giant</color>
0
<color=#E600FFFF>Button Barry</color>
5
Camouflaged Comms
False
Camouflaged Meetings
False
Impostors can see the roles of their team
True
Dead can see everyone's roles
True
Max Impostor Roles
2
Max Neutral Roles
1
Role Appears Under Name
True
Probability of a completely vanilla game
0
Initial Mayor Vote Bank
1
Mayor Votes Show Anonymous
True
Both Lovers Die
True
Show Sheriff
False
Sheriff Miskill Kills Crewmate
False
Sheriff Kills Jester
True
Sheriff Kills The Glitch
True
Sheriff Kills Arsonist
True
Sheriff Kill Cooldown
30
Sheriff can report who they've killed
False
Engineer Fix Per
1
Footprint Size
1
Footprint Interval
1
Footprint Duration
10
Anonymous Footprint
False
Footprint Vent Visible
False
Revive During Rewind
True
Rewind Duration
3
Rewind Cooldown
30
Time Lord can use Vitals
False
Show Shielded Player
1
Show Medic Reports
True
Time Where Medic Reports Will Have Name
0
Time Where Medic Reports Will Have Color Type
15
Who gets murder attempt indicator
0
Shield breaks on murder attempt
True
Seer Cooldown
45
Info that Seer sees
1
Who Sees That They Are Revealed
1
Neutrals show up as Impostors
True
Snitch knows who they are on Game Start
False
Altruist Revive Duration
3
Target's body disappears on beginning of revive
True
Shifter Cooldown
30
Who gets the Shifter role on Shift
2
Mimic Cooldown
30
Mimic Duration
10
Hack Cooldown
30
Hack Duration
10
Glitch Kill Cooldown
30
Initial Glitch Kill Cooldown
10
Glitch Hack Distance
2
Executioner becomes on Target Dead
1
Douse Cooldown
45
Game keeps going so long as Arsonist is alive
False
Morphling Cooldown
30
Morphling Duration
10
Camouflager Cooldown
30
Camouflager Duration
10
Mine Cooldown
30
Swoop Cooldown
30
Swoop Duration
10)";
		file.close();
	} catch (const std::ios_base::failure& fail) {
		std::cerr << "Nie udało się zapisać ustawień zbalansowanych na slocie 2." << std::endl;
        std::cerr << fail.what() << std::endl;
		std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
		std::cin.get();
		std::exit(1);
    }

	std::cout << "Ustawienia zbalansowane zostały zapisane na slocie 2." << std::endl;
	std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
	std::cin.get();
}