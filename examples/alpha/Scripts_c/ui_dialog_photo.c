// @IMPORTS: GetConversation/1,UITrace/1,LoadImage/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3
// @STRINGS: W:null conversation|A:GetPhoto
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string params=0
// @EVENT_0: op=0x14 vars=

task_0_event_0(var_0_string)
{
	Blit(var_0_string, (int)0, (int)0);
	return 0;
}


main(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj();
	GetConversation(var_2_object);
	var_3_bool = var_2_object == 0; //@ne
	if(var_3_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_2_object:GetPhoto(var_0_string);
	LoadImage(var_0_string);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


