#include <VALORANT/VALORANT.h>

/*
									 '."""""""""""""""""`.
									   `.       ...       `.
										 `.    /   `.       `.
										  .'"":_    :"""""".'|
										.'//)/) `  (/)/)).'  |
									  .'/)_/""   __ ""\.'    |
									  |"""(((""""((("""|     |
		 ||							  |    ""     ""   |     |
		 ||							  |			       |     '
		_||							  |   BANANAESSZ   |   .'			ME :D <-----------------------------> VALORANT E-GIRLS <3
	   /__3							  |                | .'			       
	  / /||		YOU					  |                |'		       _______________                        |*\_/*|________
	 / / // .--.					  """""""""""""""""			      |  ___________  |     .-.     .-.      ||_/-\_|______  |
	 \ \// / (OO)													  | | C:\>_     | |    .****. .****.     | |           | |
	  \//  |( _ )													  | |   0   0   | |    .*****.*****.     | |   0   0   | |
	  // \__/`-'\__		 Hopefully some monkey finds this useful.	  | |     -     | |     .*********.      | |     -     | |
	 // \__      _ \												  | |   \___/   | |      .*******.       | |   \___/   | |
 _.-'/    | ._._.|\ \	 I'm so sleepy. 							  | |___     ___| |       .*****.        | |___________| |
(_.-'     |      \ \ \												  |_____|\_/|_____|        .***.         |_______________|
   .-._   /    o ) / /	 I go to sleep now, goodnight.				    _|__|/ \|_|_.............*.............._|________|_
  /_ \ \ /   \__/ / /												   / ********** \                          / ********** \
	\ \_/   / /  |_/												 /  ************  \                      /  ************  \
	 \     / /														--------------------                    --------------------
	  `-._/-' 

*/


BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call != DLL_PROCESS_ATTACH) return FALSE;

	BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
	if (!BaseAddress) return FALSE;

	NamePoolData = reinterpret_cast<FNamePool*>(BaseAddress + NamePoolDataOffset);

	FName NoneFName(0); 
	
	std::string None = NoneFName.GetName();

	if (None != "None") return FALSE;

	ImSorryForTheQualityOfThis LOG(FileName);

	FNameEntryAllocator Entries = NamePoolData->Entries;

	LOG.LogToFile("[ (*^-^*) Kinda Sorta Some Information ]\n");

	LOG.LogToFile("Base Address ", BaseAddress);
	LOG.LogToFile("FNamePool* NamePoolData ", NamePoolData);
	LOG.LogToFile("Entries.CurrentBlock " + std::to_string(Entries.CurrentBlock));
	LOG.LogToFile("Entries.CurrentByteCursor " + std::to_string(Entries.CurrentByteCursor));
	LOG.LogToFile("Entries.Blocks ", Entries.Blocks);

	LOG.LogToFile("\n[ End Of Kinda Sorta Some Information `(°.°)`  ]\n");
	
	NamePoolData->Entries.Log(LOG);

    return TRUE;
}