#include <iostream>
#include <filesystem>
#include <fstream>

int main()
{
	try {
		std::ofstream file(std::filesystem::temp_directory_path().parent_path().parent_path().parent_path() / "LocalLow/Innersloth/Among Us/GameSettings-Slot1");
		file << R"(<color=#704FA8FF>Mayor</color>
60
<color=#FF66CCFF>Lovers</color>
70
<color=#FFFF00FF>Sheriff</color>
90
<color=#FFA60AFF>Engineer</color>
60
<color=#66E666FF>Swapper</color>
50
<color=#00B3B3FF>Investigator</color>
0
<color=#0000FFFF>Time Lord</color>
30
<color=#006600FF>Medic</color>
40
<color=#FFCC80FF>Seer</color>
20
<color=#CCA3CCFF>Spy</color>
30
<color=#D4AF37FF>Snitch</color>
70
<color=#660000FF>Altruist</color>
60
<color=#FFBFCCFF>Jester</color>
70
<color=#999999FF>Shifter</color>
50
<color=#00FF00FF>The Glitch</color>
20
<color=#8C4005FF>Executioner</color>
60
<color=#FF4D00FF>Arsonist</color>
30
<color=#662962>Phantom</color>
40
<color=#FF0000FF>Janitor</color>
50
<color=#FF0000FF>Morphling</color>
70
<color=#FF0000FF>Camouflager</color>
40
<color=#FF0000FF>Miner</color>
60
<color=#FF0000FF>Swooper</color>
30
<color=#FF0000FF>Undertaker</color>
70
<color=#FF0000FF>Assassin</color>
50
<color=#FF0000FF>Underdog</color>
40
<color=#FFFF99FF>Torch</color>
10
<color=#808080FF>Diseased</color>
10
<color=#FF8080FF>Flash</color>
10
<color=#99E699FF>Tiebreaker</color>
10
<color=#758000FF>Drunk</color>
10
<color=#FF8080FF>Giant</color>
10
<color=#E600FFFF>Button Barry</color>
5
Camouflaged Comms
True
Camouflaged Meetings
False
Impostors can see the roles of their team
True
Dead can see everyone's roles
False
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
True
Sheriff Kills Jester
False
Sheriff Kills The Glitch
True
Sheriff Kills Arsonist
True
Sheriff Kill Cooldown
30
Sheriff can report who they've killed
False
Engineer Fix Per
0
Footprint Size
4
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
Snitch sees neutral roles
False
Altruist Revive Duration
5
Target's body disappears on beginning of revive
True
Shifter Cooldown
30
Who gets the Shifter role on Shift
2
Mimic Cooldown
35
Mimic Duration
10
Hack Cooldown
35
Hack Duration
10
Glitch Kill Cooldown
35
Initial Glitch Kill Cooldown
10
Glitch Hack Distance
2
Executioner becomes on Target Dead
1
Douse Cooldown
35
Game keeps going so long as Arsonist is alive
False
Morphling Cooldown
30
Morphling Duration
15
Camouflager Cooldown
30
Camouflager Duration
10
Mine Cooldown
30
Swoop Cooldown
30
Swoop Duration
10
Drag Cooldown
25
Number of Assassin Kills
3
Assassin can Guess "Crewmate"
True
Assassin can Guess Neutral roles
True
Assassin can kill more than once per meeting
False)";
		file.close();
	} catch (const std::ios_base::failure& fail) {
		std::cerr << "Nie udało się zapisać ustawień podstawowych na slocie 1." << std::endl;
        std::cerr << fail.what() << std::endl;
		std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
		std::cin.get();
		std::exit(1);
    }

	std::cout << "Ustawienia podstawowe zostały zapisane na slocie 1." << std::endl;
	std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
	std::cin.get();
}