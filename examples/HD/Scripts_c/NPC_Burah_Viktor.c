// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, bool var_25_bool, cvector var_26_cvector, cvector var_27_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, bool var_27_bool, cvector var_28_cvector, cvector var_29_cvector)
	{
		if(1 != 0) {
			func_2001();
			if(var_28_cvector == 19184) {
				func_152(var_29_cvector, "Neutral");
				var_0_object->SetMessage(518051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518052, 29827, 19185); //@t
				var_0_object->AddReply(528440, -1, 29826); //@t
				return 0;
			}
			if(var_28_cvector == 29827) {
				func_152(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528442, 29830, 29828); //@t
				var_0_object->AddReply(528443, -1, 29829); //@t
				return 0;
			}
			if(var_28_cvector == 29830) {
				func_152(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528445, -1, 29831); //@t
				var_0_object->AddReply(528446, -1, 29832); //@t
				return 0;
			}
			var_3_string = true;
			bool var_78_bool;
			func_2086(var_78_bool);
			if(var_78_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, bool var_27_bool, cvector var_28_cvector, cvector var_29_cvector)
	{
		if(1 != 0) {
			func_2001();
			if(var_29_cvector == 22234) {
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_2088();
			}
			if(var_28_cvector == 22233) {
				bool var_85_bool;
				func_2181(var_1_object);
				if(var_85_bool != 0) {
					func_421(var_29_cvector, "Anger");
					var_0_object->SetMessage(521037); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528490, 29880, 29879); //@t
					var_0_object->AddReply(528510, 29882, 29899); //@t
					return 0;
				}
				func_421(var_29_cvector, "Neutral");
				var_0_object->SetMessage(521039); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521040, -1, 22236); //@t
				return 0;
			}
			if(var_28_cvector == 29880) {
				func_421(var_29_cvector, "Anger");
				var_0_object->SetMessage(528491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528492, 29882, 29881); //@t
				return 0;
			}
			if(var_28_cvector == 29882) {
				func_421(var_29_cvector, "Confusion");
				var_0_object->SetMessage(528493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528494, 29884, 29883); //@t
				var_0_object->AddReply(528511, 29902, 29901); //@t
				return 0;
			}
			if(var_28_cvector == 29902) {
				func_421(var_29_cvector, "Fear");
				var_0_object->SetMessage(528512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528513, 29904, 29903); //@t
				return 0;
			}
			if(var_28_cvector == 29904) {
				func_421(var_29_cvector, "Fear");
				var_0_object->SetMessage(528514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528515, 29886, 29905); //@t
				return 0;
			}
			if(var_28_cvector == 29884) {
				func_421(var_29_cvector, "Confusion");
				var_0_object->SetMessage(528495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528496, 29886, 29885); //@t
				return 0;
			}
			if(var_28_cvector == 29886) {
				func_421(var_29_cvector, "Fear");
				var_0_object->SetMessage(528497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528498, 29888, 29887); //@t
				return 0;
			}
			if(var_28_cvector == 29888) {
				func_421(var_29_cvector, "Fear");
				var_0_object->SetMessage(528499); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528500, 29890, 29889); //@t
				return 0;
			}
			if(var_28_cvector == 29890) {
				func_421(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528501); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528504, 29894, 29893); //@t
				var_0_object->AddReply(528517, 29896, 29908); //@t
				return 0;
			}
			if(var_28_cvector == 29894) {
				func_421(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528506, 29896, 29895); //@t
				return 0;
			}
			if(var_28_cvector == 29896) {
				func_421(var_29_cvector, "Surprise");
				var_0_object->SetMessage(528507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528508, 29898, 29897); //@t
				return 0;
			}
			if(var_28_cvector == 29898) {
				func_421(var_29_cvector, "Surprise");
				var_0_object->SetMessage(528509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521038, -1, 22234); //@t
				return 0;
			}
			var_3_string = true;
			bool var_205_bool;
			func_2086(var_205_bool);
			if(var_205_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bc";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, bool var_27_bool, cvector var_28_cvector, cvector var_29_cvector)
	{
		if(1 != 0) {
			func_2001();
			if(var_29_cvector == 22516) {
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_2122();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_2151();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_2138();
			}
			if(var_29_cvector == 29846) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_2122();
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_2151();
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2138();
			}
			if(var_29_cvector == 22515) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_2122();
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_2151();
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_2138();
			}
			if(var_28_cvector == 22514) {
				bool var_86_bool = false;
				bool var_87_bool;
				func_2157(var_1_object);
				if(!var_87_bool) { //@nz
					bool var_96_bool;
					func_2169(var_1_object);
					if(var_96_bool != 0)
						var_86_bool = true;
				}
				if(var_86_bool != 0) {
					object var_102_object; object var_103_object;
					var_102_object = var_1_object;
					var_103_object = var_0_object;
					func_2116();
					object var_106_object; object var_107_object;
					var_106_object = var_1_object;
					var_107_object = var_0_object;
					func_2145();
					func_895(var_29_cvector, "Neutral");
					var_0_object->SetMessage(521320); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528448, 29835, 29834); //@t
					return 0;
				}
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(521323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521324, -1, 22518); //@t
				return 0;
			}
			if(var_28_cvector == 29835) {
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528450, 29837, 29836); //@t
				return 0;
			}
			if(var_28_cvector == 29837) {
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528452, 29840, 29838); //@t
				var_0_object->AddReply(528453, 29840, 29839); //@t
				return 0;
			}
			if(var_28_cvector == 29840) {
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528455, 29842, 29841); //@t
				var_0_object->AddReply(521321, -1, 22515); //@t
				return 0;
			}
			if(var_28_cvector == 29842) {
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528457, 29845, 29844); //@t
				return 0;
			}
			if(var_28_cvector == 29845) {
				func_895(var_29_cvector, "Neutral");
				var_0_object->SetMessage(528458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521322, -1, 22516); //@t
				var_0_object->AddReply(528459, -1, 29846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_180_bool;
			func_2086(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x396";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, bool var_27_bool, cvector var_28_cvector, cvector var_29_cvector)
	{
		if(1 != 0) {
			func_2001();
			if(var_28_cvector == 36906) {
				func_1297(var_29_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_28_cvector == 36953) {
				func_1297(var_29_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_28_cvector == 36957) {
				func_1297(var_29_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_2086(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x528";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, bool var_27_bool, cvector var_28_cvector, cvector var_29_cvector)
	{
		if(1 != 0) {
			func_2001();
			if(var_28_cvector == 42563) {
				func_1551(var_29_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_2086(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x626";
	
	}

}


maintask task_11
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, bool var_25_bool, cvector var_26_cvector, cvector var_27_cvector)
	{
		var_28_bool = GlobalVars[1];
		GlobalVars[1] = true;
		func_1630(var_25_bool, var_26_cvector, var_27_cvector);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, bool var_25_bool, cvector var_26_cvector, cvector var_27_cvector, string var_28_string)
	{
		if(var_28_string == "icot_viktor_NPC_Trigger")
			func_1669(var_28_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, bool var_25_bool, cvector var_26_cvector, cvector var_27_cvector)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
		func_1658(var_25_bool, var_26_cvector, var_27_cvector);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, bool var_25_bool, cvector var_26_cvector, cvector var_27_cvector, object var_28_object)
	{
		bool var_30_bool;
		if(actor != 0) {
			@IsOverrideActive(var_30_bool);
			if(!var_30_bool) { //@nz
				disable OnUse;
				bool var_33_bool; object var_34_object;
				var_28_object = var_34_object;
				func_1716(var_33_bool, var_34_object);
				enable OnUse;
				object var_47_object;
				var_28_object = var_47_object;
				func_2281(var_47_object);
			}
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_33_bool;
	func_1725(var_33_bool);
	if(!var_33_bool) goto Label_0; //@nz
}


void func_1153(object var_0_object, int var_435_int, object var_436_object)
{
	var_0_object = var_436_object;
	bool var_446_bool; object var_447_object;
	var_436_object = var_447_object;
	func_1730(var_446_bool, var_447_object, 70.0);
	if(!var_446_bool) { //@nz
		var_435_int = -2;
		return 8;
	}
	object var_442_object;
	@CreateDialog(var_442_object);
	int var_450_int;
	func_2080(var_450_int);
	var_442_object->SetNPCName(var_450_int);
	int var_451_int;
	func_2078(var_451_int);
	var_442_object->SetNPCDescription(var_451_int);
	string var_452_string;
	func_2082(var_452_string);
	var_442_object->SetPhoto(var_452_string);
	string var_453_string;
	func_2084(var_453_string);
	var_442_object->SetPhoto2(var_453_string);
	int var_454_int;
	func_2264(var_454_int);
	var_442_object->SetPlayerName(var_454_int);
	bool var_443_bool;
	@IsOverrideActive(var_443_bool);
	if(var_443_bool != 0) {
		var_435_int = -2;
		return 8;
	}
	@DoDialog(var_442_object);
	bool var_456_bool; object var_457_object;
	object var_458_object;
	func_2008(var_458_object);
	var_458_object = var_457_object;
	func_1817(var_456_bool, var_457_object);
	object var_459_object; object var_460_object;
	var_436_object = var_459_object;
	var_442_object = var_460_object;
	TaskCall(8);
	func_1234(var_461_object, var_462_object, var_463_string, var_464_bool, var_459_object, var_460_object);
	TaskReturn();
	bool var_445_bool;
	var_442_object->IsDialogEnd(var_445_bool);
	
	for(;;) {
		var_492_bool = !var_445_bool; //@nz
		if(var_492_bool == 0) goto Label_1223;
		@sync();
		var_442_object->IsDialogEnd(var_445_bool);
	}
	
Label_1223:
	object var_493_object;
	var_436_object = var_493_object;
	func_1799();
	@StopDialog(var_442_object);
	var_442_object->GetReturnValue(-1);
	int var_444_int = var_435_int;
}
EMIT "Stack[-4] = 0";


void func_1412(object var_0_object, int var_495_int, object var_496_object)
{
	var_0_object = var_496_object;
	bool var_506_bool; object var_507_object;
	var_496_object = var_507_object;
	func_1730(var_506_bool, var_507_object, 70.0);
	if(!var_506_bool) { //@nz
		var_495_int = -2;
		return 8;
	}
	object var_502_object;
	@CreateDialog(var_502_object);
	int var_510_int;
	func_2080(var_510_int);
	var_502_object->SetNPCName(var_510_int);
	int var_511_int;
	func_2078(var_511_int);
	var_502_object->SetNPCDescription(var_511_int);
	string var_512_string;
	func_2082(var_512_string);
	var_502_object->SetPhoto(var_512_string);
	string var_513_string;
	func_2084(var_513_string);
	var_502_object->SetPhoto2(var_513_string);
	int var_514_int;
	func_2264(var_514_int);
	var_502_object->SetPlayerName(var_514_int);
	bool var_503_bool;
	@IsOverrideActive(var_503_bool);
	if(var_503_bool != 0) {
		var_495_int = -2;
		return 8;
	}
	@DoDialog(var_502_object);
	bool var_516_bool; object var_517_object;
	object var_518_object;
	func_2008(var_518_object);
	var_518_object = var_517_object;
	func_1817(var_516_bool, var_517_object);
	object var_519_object; object var_520_object;
	var_496_object = var_519_object;
	var_502_object = var_520_object;
	TaskCall(10);
	func_1493(var_521_object, var_522_object, var_523_string, var_524_bool, var_519_object, var_520_object);
	TaskReturn();
	bool var_505_bool;
	var_502_object->IsDialogEnd(var_505_bool);
	
	for(;;) {
		var_549_bool = !var_505_bool; //@nz
		if(var_549_bool == 0) goto Label_1482;
		@sync();
		var_502_object->IsDialogEnd(var_505_bool);
	}
	
Label_1482:
	object var_550_object;
	var_496_object = var_550_object;
	func_1799();
	@StopDialog(var_502_object);
	var_502_object->GetReturnValue(-1);
	int var_504_int = var_495_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2181(bool var_394_bool)
{
	int var_396_int;
	func_2024(var_396_int, "b7q01");
	if(var_396_int == 5)
		var_394_bool = true;
	var_394_bool = false;
}


void func_1669(object var_0_object)
{
	if(!var_0_object) { //@nz
		var_0_object = true;
		@PlayAnimation("all", "stand");
		@WaitForAnimEnd();
	}
}


void func_1799(void)
{
	bool var_269_bool;
	@CameraSwitchToNormal(true);
	bool var_271_bool;
	func_2086(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		@HasAnimationTrack(var_269_bool, "head");
		if(var_269_bool == 0) goto Label_1816;
		@UnlookAsync("head");
	}
Label_1816:
	
}


void func_262(object var_0_object, int var_363_int, object var_364_object)
{
	var_0_object = var_364_object;
	bool var_374_bool; object var_375_object;
	var_364_object = var_375_object;
	func_1730(var_374_bool, var_375_object, 70.0);
	if(!var_374_bool) { //@nz
		var_363_int = -2;
		return 8;
	}
	object var_370_object;
	@CreateDialog(var_370_object);
	int var_378_int;
	func_2080(var_378_int);
	var_370_object->SetNPCName(var_378_int);
	int var_379_int;
	func_2078(var_379_int);
	var_370_object->SetNPCDescription(var_379_int);
	string var_380_string;
	func_2082(var_380_string);
	var_370_object->SetPhoto(var_380_string);
	string var_381_string;
	func_2084(var_381_string);
	var_370_object->SetPhoto2(var_381_string);
	int var_382_int;
	func_2264(var_382_int);
	var_370_object->SetPlayerName(var_382_int);
	bool var_371_bool;
	@IsOverrideActive(var_371_bool);
	if(var_371_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	@DoDialog(var_370_object);
	bool var_384_bool; object var_385_object;
	object var_386_object;
	func_2008(var_386_object);
	var_386_object = var_385_object;
	func_1817(var_384_bool, var_385_object);
	object var_387_object; object var_388_object;
	var_364_object = var_387_object;
	var_370_object = var_388_object;
	TaskCall(4);
	func_343(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	bool var_373_bool;
	var_370_object->IsDialogEnd(var_373_bool);
	
	for(;;) {
		var_428_bool = !var_373_bool; //@nz
		if(var_428_bool == 0) goto Label_332;
		@sync();
		var_370_object->IsDialogEnd(var_373_bool);
	}
	
Label_332:
	object var_429_object;
	var_364_object = var_429_object;
	func_1799();
	@StopDialog(var_370_object);
	var_370_object->GetReturnValue(-1);
	int var_372_int = var_363_int;
}
EMIT "Stack[-4] = 0";


void func_2058(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_13(object var_0_object, int var_50_int, object var_51_object)
{
	var_0_object = var_51_object;
	bool var_61_bool; object var_62_object;
	var_51_object = var_62_object;
	func_1730(var_61_bool, var_62_object, 70.0);
	if(!var_61_bool) { //@nz
		var_50_int = -2;
		return 8;
	}
	object var_57_object;
	@CreateDialog(var_57_object);
	int var_109_int;
	func_2080(var_109_int);
	var_57_object->SetNPCName(var_109_int);
	int var_110_int;
	func_2078(var_110_int);
	var_57_object->SetNPCDescription(var_110_int);
	string var_111_string;
	func_2082(var_111_string);
	var_57_object->SetPhoto(var_111_string);
	string var_112_string;
	func_2084(var_112_string);
	var_57_object->SetPhoto2(var_112_string);
	int var_113_int;
	func_2264(var_113_int);
	var_57_object->SetPlayerName(var_113_int);
	bool var_58_bool;
	@IsOverrideActive(var_58_bool);
	if(var_58_bool != 0) {
		var_50_int = -2;
		return 8;
	}
	@DoDialog(var_57_object);
	bool var_122_bool; object var_123_object;
	object var_124_object;
	func_2008(var_124_object);
	var_124_object = var_123_object;
	func_1817(var_122_bool, var_123_object);
	object var_217_object; object var_218_object;
	var_51_object = var_217_object;
	var_57_object = var_218_object;
	TaskCall(2);
	func_94(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object);
	TaskReturn();
	bool var_60_bool;
	var_57_object->IsDialogEnd(var_60_bool);
	
	for(;;) {
		var_266_bool = !var_60_bool; //@nz
		if(var_266_bool == 0) goto Label_83;
		@sync();
		var_57_object->IsDialogEnd(var_60_bool);
	}
	
Label_83:
	object var_267_object;
	var_51_object = var_267_object;
	func_1799();
	@StopDialog(var_57_object);
	var_57_object->GetReturnValue(-1);
	int var_59_int = var_50_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1551(object var_2_object, string var_526_string)
{
	bool var_527_bool;
	func_2086(var_527_bool);
	if(!var_527_bool) //@nz
		return 0;
	if(var_526_string == var_2_object)
		return 0;
	string var_530_string; bool var_531_bool;
	var_526_string = var_530_string;
	if(var_526_string == "")
		var_531_bool = false;
	else
		var_531_bool = true;
	func_1971(var_530_string, var_531_bool);
	var_2_object = var_526_string;
	
}


void func_2063(int var_177_int)
{
	float var_179_float;
	@GetGameTime(var_179_float);
	var_177_int = 1 + (var_179_float / 24);
}


// @pe
void func_1297(object var_2_object, string var_466_string)
{
	bool var_467_bool;
	func_2086(var_467_bool);
	if(!var_467_bool) //@nz
		return 0;
	if(var_466_string == var_2_object)
		return 0;
	string var_470_string; bool var_471_bool;
	var_466_string = var_470_string;
	if(var_466_string == "")
		var_471_bool = false;
	else
		var_471_bool = true;
	func_1971(var_470_string, var_471_bool);
	var_2_object = var_466_string;
	
}


void func_2193(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 262, 1, 521035);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_2219(var_59_bool, var_60_object, 253);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2072(bool var_276_bool, int var_277_int)
{
	int var_278_int;
	func_2063(var_278_int);
	var_276_bool = var_278_int == var_277_int;
}


// @pe
void func_152(object var_2_object, string var_224_string)
{
	bool var_225_bool;
	func_2086(var_225_bool);
	if(!var_225_bool) //@nz
		return 0;
	if(var_224_string == var_2_object)
		return 0;
	string var_228_string; bool var_229_bool;
	var_224_string = var_228_string;
	if(var_224_string == "")
		var_229_bool = false;
	else
		var_229_bool = true;
	func_1971(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	
}


void func_1817(bool var_122_bool, object var_123_object)
{
	int var_129_int; int var_130_int;
	@GetVariable("voice_common", var_129_int);
	if(var_129_int != 0) {
		bool var_133_bool; object var_134_object;
		var_123_object = var_134_object;
		func_1875(var_133_bool, var_134_object);
		if(!var_133_bool) { //@nz
			bool var_164_bool; object var_165_object;
			var_123_object = var_165_object;
			func_1912(var_164_bool, var_165_object);
			if(!var_164_bool) { //@nz
				var_122_bool = false;
				return 4;
			}
		}
		@irand(var_130_int, 2);
		if(var_130_int != 0)
			@SetVariable("voice_common", ((var_129_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_209_bool; object var_210_object;
		var_123_object = var_210_object;
		func_1912(var_209_bool, var_210_object);
		if(!var_209_bool) { //@nz
			bool var_212_bool; object var_213_object;
			var_123_object = var_213_object;
			func_1875(var_212_bool, var_213_object);
			if(!var_212_bool) { //@nz
				var_122_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1873;
	
Label_1873:
	var_122_bool = true;
	
}


void func_2206(object var_68_object)
{
	object var_70_object;
	@GetDiaryRoot(var_70_object);
	if(!var_70_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_68_object = false;
	}
	var_70_object = var_68_object;
}
EMIT "Stack[-1] = 0";


void func_2078(int var_110_int)
{
	var_110_int = 515554;
}


void func_2080(int var_109_int)
{
	var_109_int = 502879;
}


void func_2082(string var_111_string)
{
	var_111_string = "ui/NPC_Viktor.png";
}


void func_1955(string var_38_string)
{
	bool var_42_bool; float var_43_float; float var_44_float;
	@lshHasAnimation(var_42_bool, var_38_string);
	if(var_42_bool != 0) {
		@lshGetAnimTimes(var_38_string, var_43_float, var_44_float);
		@lshPlayAnimation(var_43_float, var_44_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_38_string);
	}
	
}


void func_2084(string var_112_string)
{
	var_112_string = "ui/NPC_Viktor_b.png";
}


// @pe
void func_421(object var_2_object, string var_400_string)
{
	bool var_401_bool;
	func_2086(var_401_bool);
	if(!var_401_bool) //@nz
		return 0;
	if(var_400_string == var_2_object)
		return 0;
	string var_404_string; bool var_405_bool;
	var_400_string = var_404_string;
	if(var_400_string == "")
		var_405_bool = false;
	else
		var_405_bool = true;
	func_1971(var_404_string, var_405_bool);
	var_2_object = var_400_string;
	
}


void func_2086(bool var_104_bool)
{
	var_104_bool = true;
}


// @pe
void func_802(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_303_object, object var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_310_bool = false;
		bool var_311_bool;
		func_2157(var_1_object);
		if(!var_311_bool) { //@nz
			bool var_320_bool;
			func_2169(var_1_object);
			if(var_320_bool != 0)
				var_310_bool = true;
		}
		if(var_310_bool != 0) {
			object var_326_object; object var_327_object;
			var_326_object = var_1_object;
			var_327_object = var_0_object;
			func_2116();
			object var_330_object; object var_331_object;
			var_330_object = var_1_object;
			var_331_object = var_0_object;
			func_2145();
			func_895(var_304_object, "Neutral");
			var_0_object->SetMessage(521320); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528448, 29835, 29834); //@t
		} else {
					func_895(var_304_object, "Neutral");
					var_0_object->SetMessage(521323); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521324, -1, 22518); //@t
		}
	}
	for(;;) {
		bool var_346_bool;
		func_2086(var_346_bool);
		if(var_346_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1955(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_894;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_894:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x326";


void func_2088(void)
{
	@SetVariable("b7q01", 6);
	object var_40_object;
	func_2247(var_40_object);
	object var_37_object;
	var_40_object = var_37_object;
	float var_51_float;
	func_2058(var_51_float);
	var_37_object->AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", 1, 521021, var_51_float);
	func_2193();
	bool var_77_bool;
	func_2046(var_77_bool, "quest_b7_01", "place_aglaja");
}
EMIT "Stack[-1] = 0";


void func_1706(bool var_37_bool, cvector var_38_cvector)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector = var_38_cvector - var_42_cvector;
	var_45_float = GetByIndex(var_43_cvector, 0);
	var_46_float = GetByIndex(var_43_cvector, 2);
	bool var_44_bool;
	@Rotate(var_45_float, var_46_float, var_44_bool);
	var_44_bool = var_37_bool;
}


void func_2219(bool var_59_bool, object var_60_object, int var_61_int)
{
	object var_68_object;
	func_2206(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	object var_66_object;
	var_65_object->Find(var_61_int, var_66_object);
	if(!var_66_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_61_int);
		var_59_bool = false;
	}
	var_66_object->AddChild(var_60_object);
	@SendWorldWndMessage(7);
	int var_67_int;
	var_60_object->GetCategory(var_67_int);
	@SetDiarySection(var_67_int);
	var_59_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1971(string var_228_string, bool var_229_bool)
{
	bool var_235_bool; float var_236_float; float var_237_float;
	@lshHasAnimation(var_235_bool, var_228_string);
	if(var_235_bool != 0) {
		@lshGetAnimTimes(var_228_string, var_236_float, var_237_float);
		@lshPlayAnimation(var_236_float, var_237_float, var_229_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_228_string);
	}
	
}


void func_1716(bool var_33_bool, object var_34_object)
{
	cvector var_36_cvector;
	var_34_object->GetPosition(var_36_cvector);
	bool var_37_bool; cvector var_38_cvector;
	var_36_cvector = var_38_cvector;
	func_1706(var_37_bool, var_38_cvector);
	var_37_bool = var_33_bool;
}


void func_1725(bool var_29_bool)
{
	bool var_31_bool;
	@IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
}


void func_1730(bool var_61_bool, object var_62_object, float var_63_float)
{
	cvector var_74_cvector; bool var_81_bool;
	var_62_object->GetPosition(var_74_cvector);
	float var_73_float;
	var_62_object->GetEyesHeight(var_73_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	SetByIndex(var_74_cvector, 1) = (var_82_float + var_73_float);
	cvector var_75_cvector;
	@GetPosition(var_75_cvector);
	@GetEyesHeight(var_73_float);
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (var_83_float + var_73_float);
	cvector var_76_cvector = var_74_cvector - var_75_cvector;
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (float)0;
	var_86_float = sqrt(var_76_cvector | var_76_cvector);
	var_76_cvector /= var_86_float;
	cvector var_77_cvector = -var_76_cvector;
	cvector var_88_cvector;
	func_2014(var_88_cvector, (var_77_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_78_cvector = ((var_76_cvector * var_63_float) + (var_88_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_80_bool;
	@IsOverrideActive(var_80_bool);
	if(var_80_bool != 0)
		var_61_bool = false;
	@StopWorld();
	@CameraTransit((var_75_cvector + var_78_cvector), var_77_cvector, true);
	var_102_float = GetByIndex(var_78_cvector, 0);
	var_103_float = GetByIndex(var_78_cvector, 2);
	@Rotate(var_102_float, var_103_float);
	bool var_104_bool;
	func_2086(var_104_bool);
	if(var_104_bool != 0) {
	} else {
		@HasAnimationTrack(var_81_bool, "head");
		if(var_81_bool == 0) goto Label_1793;
		@LookAsyncCamera("head");
	}
Label_1793:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_61_bool = true;
	
}


void func_1986(bool var_156_bool, string var_157_string)
{
	bool var_159_bool;
	bool var_160_bool;
	func_2086(var_160_bool);
	if(var_160_bool != 0) {
		@lshHasSpeech(var_159_bool, var_157_string);
		if(var_159_bool != 0) {
			@lshPlaySpeech(var_157_string);
			var_156_bool = true;
		}
	}
	var_156_bool = false;
}


// @pe
void func_2116(void)
{
	@SetVariable("oob6Viktor1", 1);
}


void func_2247(object var_38_object)
{
	object var_41_object; object var_42_object;
	@GetMainOutdoorScene(var_41_object);
	if(var_41_object == null) {
		@Trace("Can't find main outdoor scene");
		var_42_object = null;
		var_42_object = var_38_object;
	}
	var_41_object->GetMap(var_42_object);
	var_42_object = var_38_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2122(void)
{
	object var_38_object;
	func_2247(var_38_object);
	object var_37_object;
	var_38_object = var_37_object;
	float var_49_float;
	func_2058(var_49_float);
	var_37_object->AddMark("b6q03ViktorGotoMaria", "pt_map_maria", 3, 521341, var_49_float);
}
EMIT "Stack[-1] = 0";


void func_2001(void)
{
	bool var_31_bool;
	func_2086(var_31_bool);
	if(var_31_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1234(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_459_object, object var_460_object)
{
	var_0_object = var_460_object;
	var_1_object = var_459_object;
	var_3_string = false;
	if(1 != 0) {
		func_1297(var_460_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1267;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4d6";
	}
Label_1267:
	bool var_484_bool;
	func_2086(var_484_bool);
	if(var_484_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1955(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1296;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1296:
		return 0;

	}
	
}


void func_1875(bool var_133_bool, object var_134_object)
{
	string var_140_string; bool var_142_bool; int var_143_int; string var_144_string;
	var_140_string = "c";
	int var_141_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_134_object->HasProperty((var_140_string + (var_141_int + 1)), var_142_bool);
			if(!var_142_bool) { //@nz
			} else {
				var_141_int += 1;
			}
		}
		if(!var_141_int) { //@nz
			var_133_bool = false;
			return 10;
		}
		var_143_int = 0;
		if(var_141_int > 1)
			@irand(var_143_int, var_141_int);
		var_134_object->GetProperty((var_140_string + (var_143_int + 1)), var_144_string);
		bool var_156_bool; string var_157_string;
		var_144_string = var_157_string;
		func_1986(var_156_bool, var_157_string);
		var_156_bool = var_133_bool;
		return 10;

	}
}


void func_721(object var_0_object, int var_279_int, object var_280_object)
{
	var_0_object = var_280_object;
	bool var_290_bool; object var_291_object;
	var_280_object = var_291_object;
	func_1730(var_290_bool, var_291_object, 70.0);
	if(!var_290_bool) { //@nz
		var_279_int = -2;
		return 8;
	}
	object var_286_object;
	@CreateDialog(var_286_object);
	int var_294_int;
	func_2080(var_294_int);
	var_286_object->SetNPCName(var_294_int);
	int var_295_int;
	func_2078(var_295_int);
	var_286_object->SetNPCDescription(var_295_int);
	string var_296_string;
	func_2082(var_296_string);
	var_286_object->SetPhoto(var_296_string);
	string var_297_string;
	func_2084(var_297_string);
	var_286_object->SetPhoto2(var_297_string);
	int var_298_int;
	func_2264(var_298_int);
	var_286_object->SetPlayerName(var_298_int);
	bool var_287_bool;
	@IsOverrideActive(var_287_bool);
	if(var_287_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	@DoDialog(var_286_object);
	bool var_300_bool; object var_301_object;
	object var_302_object;
	func_2008(var_302_object);
	var_302_object = var_301_object;
	func_1817(var_300_bool, var_301_object);
	object var_303_object; object var_304_object;
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(6);
	func_802(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	bool var_289_bool;
	var_286_object->IsDialogEnd(var_289_bool);
	
	for(;;) {
		var_359_bool = !var_289_bool; //@nz
		if(var_359_bool == 0) goto Label_791;
		@sync();
		var_286_object->IsDialogEnd(var_289_bool);
	}
	
Label_791:
	object var_360_object;
	var_280_object = var_360_object;
	func_1799();
	@StopDialog(var_286_object);
	var_286_object->GetReturnValue(-1);
	int var_288_int = var_279_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1493(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_519_object, object var_520_object)
{
	var_0_object = var_520_object;
	var_1_object = var_519_object;
	var_3_string = false;
	if(1 != 0) {
		func_1551(var_520_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1521;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5d9";
	}
Label_1521:
	bool var_541_bool;
	func_2086(var_541_bool);
	if(var_541_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1955(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1550;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1550:
		return 0;

	}
	
}


// @pe
void func_343(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_387_object, object var_388_object)
{
	var_0_object = var_388_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_394_bool;
		func_2181(var_387_object);
		if(var_394_bool != 0) {
			func_421(var_388_object, "Anger");
			var_0_object->SetMessage(521037); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528490, 29880, 29879); //@t
			var_0_object->AddReply(528510, 29882, 29899); //@t
		} else {
					func_421(var_388_object, "Neutral");
					var_0_object->SetMessage(521039); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521040, -1, 22236); //@t
		}
	}
	for(;;) {
		bool var_415_bool;
		func_2086(var_415_bool);
		if(var_415_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1955(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_420;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_420:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15b";


void func_2008(object var_124_object)
{
	object var_126_object;
	@self(var_126_object);
	var_126_object = var_124_object;
}
EMIT "Stack[-1] = 0";


void func_2264(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	if(var_115_int == 0) {
		var_113_int = 1;
		return 2;
	EMIT "GOTO 0x8e7";
	}
	if(var_115_int == 1) {
		var_113_int = 2;
		return 2;
	}
	var_113_int = 3;
}


// @pe
void func_2138(void)
{
	func_2029("cot_maria@door1", false);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_217_object, object var_218_object)
{
	var_0_object = var_218_object;
	var_1_object = var_217_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_218_object, "Neutral");
		var_0_object->SetMessage(518051); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518052, 29827, 19185); //@t
		var_0_object->AddReply(528440, -1, 29826); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_248_bool;
	func_2086(var_248_bool);
	if(var_248_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1955(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_1630(object var_0_object, object var_1_object, object var_2_object)
{
	@GetPosition(var_1_object);
	@GetDirection(var_2_object);
	var_0_object = false;
	bool var_29_bool;
	func_1725(var_29_bool);
	if(!var_29_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
		func_1658(var_25_bool, var_26_cvector, var_27_cvector);
	}
	for(;;) {
		func_1955("Neutral");
		@lshWaitForAnimEnd();
	}
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


void func_2014(cvector var_88_cvector, cvector var_89_cvector)
{
	float var_92_float = sqrt(var_89_cvector | var_89_cvector);
	if(var_92_float < 0.000001)
		var_88_cvector = [0.0, 0.0, 0.0];
	var_88_cvector = var_89_cvector / var_92_float;
}


// @pe
void func_2145(void)
{
	@SetVariable("b6ViktorVisit", 1);
}


// @pe
void func_2151(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_2024(int var_313_int, string var_314_string)
{
	int var_316_int;
	@GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
}


// @pe
void func_2281(object var_47_object)
{
	var_48_bool = GlobalVars[1];
	if(!var_48_bool) { //@nz
		int var_50_int; object var_51_object;
		var_47_object = var_51_object;
		TaskCall(1);
		func_13(var_52_object, var_50_int, var_51_object);
		TaskReturn();
		var_275_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_276_bool;
	func_2072(var_276_bool, 6);
	if(var_276_bool != 0) {
		int var_279_int; object var_280_object;
		var_47_object = var_280_object;
		TaskCall(5);
		func_721(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 0;
	}
	bool var_361_bool;
	func_2072(var_361_bool, 7);
	if(var_361_bool != 0) {
		int var_363_int; object var_364_object;
		var_47_object = var_364_object;
		TaskCall(3);
		func_262(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		return 0;
	}
	bool var_430_bool = false;
	bool var_431_bool;
	func_2072(var_431_bool, 12);
	if(var_431_bool != 0) {
		var_433_bool = GlobalVars[2];
		if(!var_433_bool) //@nz
			var_430_bool = true;
	}
	if(var_430_bool != 0) {
		int var_435_int; object var_436_object;
		var_47_object = var_436_object;
		TaskCall(7);
		func_1153(var_437_object, var_435_int, var_436_object);
		TaskReturn();
		var_494_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_495_int; object var_496_object;
	var_47_object = var_496_object;
	TaskCall(9);
	func_1412(var_497_object, var_495_int, var_496_object);
	TaskReturn();
}


// @pe
void func_2157(bool var_311_bool)
{
	int var_313_int;
	func_2024(var_313_int, "b6q03NinaTalk");
	if(var_313_int != 0) {
		var_311_bool = true;
		return 0;
	}
	var_311_bool = false;
}


void func_2029(string var_58_string, bool var_59_bool)
{
	object var_61_object;
	@FindActor(var_61_object, var_58_string);
	if(!var_61_object) //@nz
		@Trace(("Door " + var_58_string) + " not found");
	else
		var_61_object->SetProperty("locked", var_59_bool);
	
}
EMIT "Stack[-1] = 0";


void func_1912(bool var_164_bool, object var_165_object)
{
	bool var_173_bool; int var_174_int; string var_175_string;
	int var_177_int;
	func_2063(var_177_int);
	string var_171_string = ("d" + var_177_int) + "m";
	int var_172_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_165_object->HasProperty((var_171_string + (var_172_int + 1)), var_173_bool);
			if(!var_173_bool) { //@nz
			} else {
				var_172_int += 1;
			}
		}
		if(!var_172_int) { //@nz
			var_164_bool = false;
			return 10;
		}
		var_174_int = 0;
		if(var_172_int > 1)
			@irand(var_174_int, var_172_int);
		var_165_object->GetProperty((var_171_string + (var_174_int + 1)), var_175_string);
		bool var_196_bool; string var_197_string;
		var_175_string = var_197_string;
		func_1986(var_196_bool, var_197_string);
		var_196_bool = var_164_bool;
		return 10;

	}
}


// @pe
void func_2169(bool var_320_bool)
{
	int var_322_int;
	func_2024(var_322_int, "oob6Viktor1");
	if(var_322_int == 0) {
		var_320_bool = true;
		return 0;
	}
	var_320_bool = false;
}


void func_1658(object var_0_object, object var_1_object, object var_2_object)
{
	@SetPosition(var_1_object);
	@SetDirection(var_2_object);
	var_0_object = false;
	@LockAnimation("all", "stand", 0);
}


void func_2046(bool var_77_bool, string var_78_string, string var_79_string)
{
	object var_81_object;
	@FindActor(var_81_object, var_78_string);
	if(var_81_object == null)
		var_77_bool = false;
	@Trigger(var_81_object, var_79_string);
	var_77_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_895(object var_2_object, string var_334_string)
{
	bool var_335_bool;
	func_2086(var_335_bool);
	if(!var_335_bool) //@nz
		return 0;
	if(var_334_string == var_2_object)
		return 0;
	string var_338_string; bool var_339_bool;
	var_334_string = var_338_string;
	if(var_334_string == "")
		var_339_bool = false;
	else
		var_339_bool = true;
	func_1971(var_338_string, var_339_bool);
	var_2_object = var_334_string;
	
}


