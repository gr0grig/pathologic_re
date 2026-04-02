include dgame.sci
////////////////////////////////////////////////////////
// danko day 1
////////////////////////////////////////////////////////

// CONSTANTS
// CONSTANTS

void D1_Init()
{
	ClearMapMarks();
}

void D1_Update(int iHour) 
{
	if (iHour == 10) {
		d1q01GeorgMail();
	}
	
	if (iHour == 23) {
		D1_EveningMail();
	}
}

void d1q01GeorgMail()
{
	if (GetVariable("d1q01") == c_iQuestDisabled) {
		AddMessage_D1_Danko_Georg();
	}
}

void D1_EveningMail()
{
	AddMessage_D1_Danko_Alexandr();
}