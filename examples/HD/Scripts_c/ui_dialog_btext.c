// @IMPORTS: GetConversation/1,UITrace/1,_strupr/1,GetWindowSize/2,SetOwnerDraw/1,ProcessEvents/0,GetTextHeightInWidth/4,PrintInWidth/9
// @STRINGS: W:null conversation|A:GetNPCName|A:GetNPCDescription|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,string,int,int params=0
// @EVENT_0: op=0x18 vars=

task_0_event_0(var_0_string, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0;
	var_12_int = var_2_int - (int)50;
	GetTextHeightInWidth(var_7_int, "default", var_12_int, var_0_string);
	var_14_int = var_7_int + (int)18;
	(int)0 = (int)0 + var_14_int;
	var_17_int = var_2_int - (int)50;
	GetTextHeightInWidth(var_7_int, "default", var_17_int, var_1_string);
	var_8_int = var_8_int + var_7_int;
	var_18_int = var_3_int - var_8_int;
	var_9_int = var_18_int / (int)2;
	var_9_int = var_8_int;
	var_23_int = var_2_int - (int)50;
	PrintInWidth(var_7_int, "default", (int)25, var_8_int, var_23_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	var_28_int = var_7_int + (int)18;
	var_8_int = var_8_int + var_28_int;
	var_32_int = var_2_int - (int)50;
	PrintInWidth(var_7_int, "default", (int)25, var_8_int, var_32_int, var_1_string, (float)0.800000011920929, (float)0.800000011920929, (float)0.800000011920929);
	return 6;
}


main(var_0_string, var_1_string, var_2_int, var_3_int)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_int = 0;
	GetConversation(var_7_object);
	var_10_bool = var_7_object == 0; //@ne
	if(var_10_bool != 0) {
		UITrace("null conversation");
		return 6;
	}
	@@var_7_object:GetNPCName(var_0_string);
	_strupr(var_0_string);
	@@var_7_object:GetNPCDescription(var_1_string);
	GetWindowSize(var_2_int, var_3_int);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 6;
}
EMIT "Stack[-3] = 0";


