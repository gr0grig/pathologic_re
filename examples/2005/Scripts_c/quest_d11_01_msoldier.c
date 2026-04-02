// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_2143();
			if(var_20_bool == 42007) {
				object var_25_object = var_1_object;
				func_2320(var_0_object);
				object var_31_object = var_1_object;
				func_2326(var_0_object);
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_2343();
			}
			if(var_20_bool == 42008) {
				object var_71_object = var_1_object;
				func_2303(var_0_object);
			}
			if(var_20_bool == 15679) {
				object var_89_object = var_1_object;
				func_2303(var_0_object);
			}
			if(var_20_bool == 42005) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_2349();
			}
			if(var_19_object == 15673) {
				bool var_105_bool;
				func_2382(var_1_object);
				if(var_105_bool != 0) {
					object var_113_object; object var_114_object;
					var_113_object = var_1_object;
					var_114_object = var_0_object;
					func_2365();
					func_142(var_20_bool, "Neutral");
					var_0_object->SetMessage(514445); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514456, 15687, 15686); //@t
					var_0_object->AddReply(514446, 15675, 15674); //@t
					return 0;
				}
			}
			if(var_19_object == 15675) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(514447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514448, 15677, 15676); //@t
				var_0_object->AddReply(514452, 15681, 15680); //@t
				return 0;
			}
			if(var_19_object == 15681) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(514453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514454, 15677, 15682); //@t
				var_0_object->AddReply(514455, 15677, 15684); //@t
				return 0;
			}
			if(var_19_object == 15677) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(514449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514450, 42006, 15678); //@t
				var_0_object->AddReply(514451, -1, 15679); //@t
				var_0_object->AddReply(540038, -1, 42005); //@t
				return 0;
			}
			if(var_19_object == 42006) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(540039); //@t
				var_0_object->ClearReplies(); //@t
				bool var_173_bool;
				func_2371(var_173_bool, var_1_object);
				if(var_173_bool != 0)
					var_0_object->AddReply(540040, -1, 42007); //@t
				var_0_object->AddReply(540041, -1, 42008); //@t
				return 0;
			}
			if(var_19_object == 15687) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(514457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514458, 15689, 15688); //@t
				return 0;
			}
			if(var_19_object == 15689) {
				func_142(var_20_bool, "Neutral");
				var_0_object->SetMessage(514459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514460, 15681, 15690); //@t
				return 0;
			}
			var_3_string = true;
			bool var_202_bool;
			func_2505(var_202_bool);
			if(var_202_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		var_19_bool = GlobalVars[1];
		GlobalVars[1] = false;
	
		while(true != 0) {
			func_459(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
		}
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_22_int; bool var_23_bool;
		func_524(var_22_int, var_23_bool);
		int var_27_int; object var_28_object;
		var_19_bool = var_28_object;
		TaskCall(0);
		func_0(var_29_object, var_27_int, var_28_object);
		TaskReturn();
		var_29_object = var_22_int;
		if(var_22_int == 0) {
			var_159_bool = GlobalVars[1];
			GlobalVars[1] = true;
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd(var_23_bool);
			@PlayAnimation("all", "attack_end2");
			@WaitForAnimEnd(var_23_bool);
			bool var_164_bool;
			func_2247(var_164_bool, "quest_d11_01", "teleport");
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_524(var_18_object, var_19_bool);
		bool var_23_bool;
		func_2247(var_23_bool, "quest_d11_01", "soldier_attack");
		object var_29_object;
		var_19_bool = var_29_object;
		TaskCall(3);
		func_624(var_29_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool == 10) {
			bool var_22_bool;
			func_486(var_17_bool, var_18_object, var_19_bool, var_22_bool);
			if(var_22_bool != 0) {
				if(!var_2_object) { //@nz
					func_2132(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_2259(var_1_object);
		} else {
			int var_27_int;
			func_1511(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_2132(var_23_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_1367(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_2557();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_21_bool;
		@IsOverrideActive(var_21_bool);
		if(!var_21_bool) { //@nz
			object var_23_object;
			var_19_object = var_23_object;
			func_2484(var_23_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_1936(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_2004(var_27_float, var_28_cvector, var_29_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	var_23_bool = GlobalVars[1];
	if(var_23_bool != 0) {
	}
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_2507(var_20_object);
}


void func_0(object var_0_object, int var_27_int, object var_28_object)
{
	var_0_object = var_28_object;
	bool var_38_bool; object var_39_object;
	var_28_object = var_39_object;
	func_2034(var_38_bool, var_39_object, 70.0);
	if(!var_38_bool) { //@nz
		var_27_int = -2;
		return 8;
	}
	object var_34_object;
	@CreateDialog(var_34_object);
	int var_85_int;
	func_2499(var_85_int);
	var_34_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2497(var_86_int);
	var_34_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2501(var_87_string);
	var_34_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2503(var_88_string);
	var_34_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2461(var_89_int);
	var_34_object->SetPlayerName(var_89_int);
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0) {
		var_27_int = -2;
		return 8;
	}
	@DoDialog(var_34_object);
	object var_98_object; object var_99_object;
	var_28_object = var_98_object;
	var_34_object = var_99_object;
	TaskCall(1);
	func_74(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_37_bool;
	var_34_object->IsDialogEnd(var_37_bool);
	
	for(;;) {
		var_149_bool = !var_37_bool; //@nz
		if(var_149_bool == 0) goto Label_63;
		@sync();
		var_34_object->IsDialogEnd(var_37_bool);
	}
	
Label_63:
	object var_150_object;
	var_28_object = var_150_object;
	func_2102();
	@StopDialog(var_34_object);
	var_34_object->GetReturnValue(-1);
	int var_36_int = var_27_int;
}
EMIT "Stack[-4] = 0";


void func_1284(object var_0_object)
{
	func_2259(var_0_object);
}


void func_1289(int var_469_int)
{
	var_469_int = 0;
}


void func_1291(void)
{
	func_2150("attack_stay");
}


// @pe
void func_524(object var_2_object, string var_3_string)
{
	func_619();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1549(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_1868(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_2320(object var_25_object)
{
	int var_28_int;
	var_25_object->RemoveItemByType(var_28_int, "burah_serum", 1);
}


// @pe
void func_1296(void)
{
}


void func_1298(bool var_494_bool)
{
	var_494_bool = true;
}


void func_1556(string var_208_string)
{
	var_208_string = "walk";
}


void func_1300(int var_390_int)
{
	var_390_int = 1;
}


void func_1558(string var_209_string)
{
	var_209_string = "run";
}


// @pe
void func_2326(object var_32_object)
{
	@SetVariable("d11q01", 3);
	func_2394();
	bool var_58_bool;
	func_2247(var_58_bool, "quest_d11_01", "restore_andrei");
	var_32_object->SetReturnValue(1);
}


// @pe
void func_1560(object var_26_object)
{
	object var_27_object;
	var_26_object = var_27_object;
	func_1585(var_27_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1302(float var_385_float)
{
	var_385_float = 0.5;
}


void func_538(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_2029(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_2286(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_2029(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_585;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_2279(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_614;
				}
			} else if(var_38_int != 0) {
				goto Label_614;
			}
			}
					bool var_71_bool;
					func_617(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_609;
			}
		}
	Label_614:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_609:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_1304(object var_2_object, bool var_139_bool, object var_140_object, float var_141_float, float var_142_float, bool var_143_bool, bool var_144_bool)
{
	object var_152_object;
	func_2259(var_152_object);
	@SetTimer(1, 5);
	bool var_150_bool;
	@CanSee(var_150_bool, var_152_object);
	if(var_150_bool != 0) {
		var_2_object = true;
		object var_156_object;
		var_140_object = var_156_object;
		func_2132(var_156_object);
	} else {
		var_2_object = false;
	}
	bool var_163_bool; object var_164_object;
	func_1737(var_163_bool, var_164_object);
	if(var_163_bool != 0) {
		object var_167_object;
		func_2191(var_167_object);
		@SendPlayerEnemy(var_164_object, var_167_object);
	}
	bool var_168_bool; object var_169_object; float var_170_float; float var_171_float; bool var_172_bool; bool var_173_bool;
	var_140_object = var_169_object;
	var_141_float = var_170_float;
	var_142_float = var_171_float;
	var_143_bool = var_172_bool;
	var_144_bool = var_173_bool;
	bool var_151_bool;
	func_1409(var_150_bool, var_151_bool, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool);
	var_168_bool = var_151_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_151_bool = var_139_bool;
	
}


void func_1533(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1827(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


// @pe
void func_2343(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1832(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_1827(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2349(void)
{
	@SetVariable("d11q01", 3);
	bool var_97_bool;
	func_2247(var_97_bool, "quest_d11_01", "soldier_attack");
	bool var_100_bool;
	func_2247(var_100_bool, "quest_d11_01", "restore_andrei");
}


void func_1585(object var_27_object)
{
	cvector var_38_cvector; cvector var_39_cvector; cvector var_40_cvector; cvector var_41_cvector; string var_42_string; object var_43_object; bool var_44_bool; bool var_45_bool; float var_46_float; cvector var_47_cvector;
	if(var_27_object == null) {
		func_1676("fdie");
	} else {
		var_27_object->GetPosition(var_38_cvector);
		@GetPosition(var_39_cvector);
		@GetDirection(var_40_cvector);
		var_41_cvector = var_39_cvector - var_38_cvector;
		var_81_float = GetByIndex(var_41_cvector, 0);
		var_82_float = GetByIndex(var_40_cvector, 0);
		var_84_float = GetByIndex(var_41_cvector, 2);
		var_85_float = GetByIndex(var_40_cvector, 2);
		if(((var_81_float * var_82_float) + (var_84_float * var_85_float)) >= 0)
			var_42_string = "fdie";
		else
			var_42_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_27_object = var_43_object;
		var_92_bool = IsFuncExist(var_27_object, "GetScriptProperty", 2);
		if(var_92_bool != 0) {
			var_27_object->HasScriptProperty(var_44_bool, "Owner");
			if(var_44_bool != 0) {
				var_27_object->GetScriptProperty(var_43_object, "Owner");
				if(var_43_object == null)
					var_27_object = var_43_object;
			}
		}
		var_99_bool = IsFuncExist(var_43_object, "@GetEyesHeight", 1);
		if(var_99_bool != 0) {
			var_43_object->GetEyesHeight(var_46_float);
			var_47_cvector = [0.0, 0.0, 0.0];
			var_100_float = GetByIndex(var_47_cvector, 1);
			var_46_float = var_100_float;
			SetByIndex(var_47_cvector, 1) = var_100_float;
			@LookAsync(var_27_object, "head", var_47_cvector);
			var_45_bool = true;
		} else {
			var_45_bool = false;

		}
		string var_102_string;
		var_42_string = var_102_string;
		func_2150(var_102_string);
		@PlayAnimation("all", var_42_string);
		@WaitForAnimEnd();
		if(var_45_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_42_string);
		@RemoveEnvelope();
		var_43_object = null;
	}
	
}


void func_2102(void)
{
	bool var_152_bool;
	@CameraSwitchToNormal();
	bool var_153_bool;
	func_2505(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_2118;
		@UnlookAsync("head");
	}
Label_2118:
	
}


void func_1082(bool var_495_bool, float var_496_float)
{
	float var_499_float; bool var_500_bool;
	@rand(var_499_float);
	if(var_499_float < var_496_float) {

		for(;;) {
			@IsAnimationPlaying(var_500_bool);
			if(!var_500_bool) { //@nz
			} else {
				bool var_503_bool;
				func_1180(var_503_bool);
				if(var_503_bool != 0) {
					var_495_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_495_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1284(var_500_bool);
}


// @pe
void func_2365(void)
{
	@SetVariable("ood11Officer1", 1);
}


// @pe
void func_2371(bool var_173_bool, object var_174_object)
{
	object var_176_object;
	var_174_object = var_176_object;
	bool var_175_bool;
	func_2230(var_175_bool, var_176_object, "burah_serum");
	if(var_175_bool != 0) {
		var_173_bool = true;
		return 0;
	}
	var_173_bool = false;
}


void func_2119(string var_138_string)
{
	float var_141_float; float var_142_float;
	@lshGetAnimTimes(var_138_string, var_141_float, var_142_float);
	@lshPlayAnimation(var_141_float, var_142_float, false);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_98_object, object var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_105_bool;
		func_2382(var_1_object);
		if(var_105_bool != 0) {
			object var_113_object; object var_114_object;
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_2365();
			func_142(var_99_object, "Neutral");
			var_0_object->SetMessage(514445); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514456, 15687, 15686); //@t
			var_0_object->AddReply(514446, 15675, 15674); //@t
		} else {
				return 0;
		}
	}
	bool var_136_bool;
	func_2505(var_136_bool);
	if(var_136_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2119(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_141:
		return 0;

	}
	
}
EMIT "GOTO 0x4e";


void func_1868(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_1832(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_1742(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_2126(string var_121_string, bool var_122_bool)
{
	float var_127_float; float var_128_float;
	@lshGetAnimTimes(var_121_string, var_127_float, var_128_float);
	@lshPlayAnimation(var_127_float, var_128_float, var_122_bool);
}


// @pe
void func_2382(bool var_105_bool)
{
	int var_107_int;
	func_2225(var_107_int, "ood11Officer1");
	if(var_107_int == 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


void func_2132(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_1109(object var_0_object, bool var_296_bool, float var_297_float)
{
	bool var_303_bool; cvector var_304_cvector; cvector var_305_cvector; cvector var_306_cvector; float var_307_float;
	
	for(;;) {
		@IsAnimationPlaying(var_303_bool);
		if(!var_303_bool) //@nz
			break;
		bool var_309_bool;
		func_1180(var_309_bool);
		if(var_309_bool != 0) {
			var_296_bool = true;
			return 10;
		}
		bool var_352_bool;
		func_1868(var_352_bool, var_0_object);
		if(!var_352_bool) { //@nz
			var_296_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_304_cvector); //@t
		@GetPFPosition(var_305_cvector);
		var_306_cvector = var_304_cvector - var_305_cvector;
		var_307_float = var_306_cvector | var_306_cvector;
		if(var_307_float < (var_297_float * var_297_float)) {
			bool var_357_bool; float var_358_float;
			var_297_float = var_358_float;
			func_945(var_306_cvector, var_307_float, var_357_bool, var_358_float);
			var_296_bool = true;
			return 10;
		}
		@sync();
	}
	func_1284(var_307_float);
	var_296_bool = false;
}


void func_1367(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1533(var_19_object);
}


void func_2394(void)
{
	object var_36_object;
	@CreateDiaryEntry(var_36_object, 769, 1, 540066);
	bool var_40_bool; object var_41_object;
	var_36_object = var_41_object;
	func_2433(var_40_bool, var_41_object, 192);
}
EMIT "Stack[-1] = 0";


void func_2143(void)
{
	bool var_22_bool;
	func_2505(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_1892(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_2150(string var_50_string)
{
	bool var_59_bool; int var_60_int; bool var_61_bool; int var_62_int; bool var_63_bool; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	@IsExisting3DSound(var_59_bool, var_50_string);
	if(!var_59_bool) { //@nz
		var_60_int = 0;

		for(;;) {
			@IsExisting3DSound(var_61_bool, (var_50_string + (var_60_int + 1)));
			if(!var_61_bool) { //@nz
				break;
			Label_2170:
				@irand(var_62_int, var_60_int);
				var_50_string += (var_62_int + 1);
	}
			@Is3DSoundLoaded(var_63_bool, var_50_string);
			if(var_63_bool != 0) {
				@GetEyesHeight(var_64_float);
				@GetDirection(var_65_cvector);
				var_66_cvector = var_65_cvector * 50;
				var_77_float = GetByIndex(var_66_cvector, 1);
				SetByIndex(var_66_cvector, 1) = (var_77_float + var_64_float);
				@PlayGlobalSound(var_50_string, var_66_cvector);
			}
		}
		var_60_int += 1;
	}
	var_72_bool = !var_60_int; //@nz
	if(var_72_bool == 0) goto Label_2170;
}


void func_871(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_64_bool; bool var_65_bool; cvector var_66_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_64_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_64_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_65_bool, ("attack" + (var_2_object + 1)));
			if(!var_65_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_66_cvector, "all", "bjump");
		var_80_float = GetByIndex(var_66_cvector, 2);
		var_4_bool = -var_80_float;

	}
}


void func_2407(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 768, 1, 540065);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_2433(var_80_bool, var_81_object, 192);
}
EMIT "Stack[-1] = 0";


void func_617(bool var_71_bool)
{
	var_71_bool = true;
}


void func_619(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_624(object var_29_object)
{
	
	for(;;) {
		object var_36_object;
		func_642(var_32_int, var_33_bool, var_34_float, var_35_int, var_36_object, var_36_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_2420(object var_49_object)
{
	object var_51_object;
	@GetDiaryRoot(var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_49_object = false;
	}
	var_51_object = var_49_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_636(float var_405_float)
{
	var_405_float = 0.1;
}


// @pe
void func_639(int var_412_int)
{
	var_412_int = 0;
}


void func_1152(object var_0_object, bool var_311_bool)
{
	cvector var_317_cvector; cvector var_318_cvector;
	bool var_322_bool;
	func_1868(var_322_bool, var_0_object);
	if(!var_322_bool) { //@nz
		var_311_bool = false;
		return 10;
	}
	bool var_325_bool;
	float var_321_float;
	func_1241(var_321_float, var_325_bool);
	if(var_325_bool != 0) {
		var_0_object->GetPFPosition(var_317_cvector); //@t
		@GetPFPosition(var_318_cvector);
		var_0_object->GetAttackDistance(var_321_float); //@t
		var_311_bool = ((var_317_cvector - var_318_cvector) | (var_317_cvector - var_318_cvector)) <= ((var_321_float + 50) * (var_321_float + 50));
		return 10;
	}
	var_311_bool = false;
}


void func_1409(object var_0_object, object var_1_object, bool var_168_bool, object var_169_object, float var_170_float, float var_171_float, bool var_172_bool, bool var_173_bool)
{
	bool var_182_bool; object var_184_object; cvector var_185_cvector; cvector var_186_cvector; float var_188_float; object var_189_object;
	var_0_object = false;
	var_1_object = var_169_object;
	bool var_183_bool;
	var_173_bool = var_183_bool;
	
	for(;;) {
		bool var_190_bool; object var_191_object;
		var_169_object = var_191_object;
		func_1549(var_190_bool, var_191_object);
		if(!var_190_bool) { //@nz
			var_168_bool = false;
			return 16;
		}
		var_169_object->GetPosition(var_185_cvector);
		@GetPosition(var_186_cvector);
		var_188_float = (var_185_cvector - var_186_cvector) | (var_185_cvector - var_186_cvector);
		bool var_195_bool = false;
		if(var_171_float > 0) {
			if(var_188_float > (var_171_float * var_171_float))
				var_195_bool = true;
		}
		if(var_195_bool != 0) {
			@Stop();
			var_168_bool = false;
			return 16;
		}
		if(var_188_float > (var_170_float * var_170_float)) {
			var_169_object->GetPFPosition(var_185_cvector);
			@FindPathTo(var_189_object, var_185_cvector);
			if(var_189_object != null) {
				var_189_object = var_184_object;
				var_189_object = null;
			}
			if(var_184_object != null) {
				if(var_183_bool == 0) goto Label_1462;
				var_183_bool = false;
				@RotatePath(var_184_object, var_182_bool);
				if(!var_182_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_208_string;
						func_1556(var_208_string);
						string var_209_string;
						func_1558(var_209_string);
						@FollowPath(var_184_object, var_172_bool, var_182_bool, var_208_string, var_209_string);
						if(!var_182_bool) { //@nz
							if(var_0_object == 0) goto Label_1481;
							var_184_object = null;
						}
					EMIT "GOTO 0x5ca";

					Label_1481:
						} else {
					var_184_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_182_bool);
					if(!var_182_bool) { //@nz
						if(var_0_object != 0) {
							var_184_object = null;
							goto Label_1509;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1509;
		}
			var_189_object = null;
			goto Label_1507;

		Label_1507:
			var_184_object = null;

		}
	Label_1509:
		for(;;) {
			var_168_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_642(object var_0_object, string var_3_string, int var_5_int, object var_36_object, bool var_37_bool, float var_38_float, bool var_145_bool, bool var_237_bool)
{
	float var_50_float; cvector var_51_cvector; cvector var_52_cvector; bool var_54_bool; float var_57_float; cvector var_58_cvector; bool var_59_bool; float var_60_float;
	func_871(var_58_cvector, var_59_bool, var_60_float);
	var_5_int = 0;
	var_85_bool = IsFuncExist(var_36_object, "@GetAttackDistance", 1);
	if(var_85_bool != 0) {
		var_36_object->GetAttackDistance(var_50_float);
		var_50_float += 50;
	} else {
						var_38_float = var_50_float;
	}
	if(var_50_float >= 150)
		var_50_float = 150;
	var_3_string = false;
	var_0_object = var_36_object;
	bool var_53_bool;
	@IsPlayerActor(var_0_object, var_53_bool);
	if(var_53_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_91_object;
		func_2191(var_91_object);
		@SendPlayerEnemy(var_36_object, var_91_object);
	}
	if(var_37_bool != 0)
		var_54_bool = false;
	else
		var_54_bool = true;

	
Label_682:
	for(;;) {
		bool var_96_bool = false;
		bool var_97_bool;
		func_1868(var_97_bool, var_0_object);
		if(var_97_bool != 0) {
			if(!var_3_string) //@nz
				var_96_bool = true;
		}
		if(var_96_bool != 0) {
			func_1284(var_60_float);
			var_0_object->GetPFPosition(var_51_cvector); //@t
			@GetPFPosition(var_52_cvector);
			var_57_float = (var_51_cvector - var_52_cvector) | (var_51_cvector - var_52_cvector);
			if(var_57_float >= ((400.0 + var_50_float) * (400.0 + var_50_float))) {
				bool var_139_bool; float var_141_float;
				var_50_float = var_141_float;
				TaskCall(4);
				func_1304(var_147_bool, var_139_bool, var_0_object, var_141_float, 10000.0, true, false);
				TaskReturn();
				if(!var_145_bool) { //@nz
				} else {
					var_54_bool = false;
			} else {
			if(var_57_float >= (var_38_float * var_38_float)) {
				var_0_object->GetPFPosition(var_58_cvector); //@t
				@CanReachByPF(var_59_bool, var_58_cvector);
				if(!var_59_bool) { //@nz
					bool var_231_bool; float var_233_float;
					var_50_float = var_233_float;
					TaskCall(4);
					func_1304(var_239_bool, var_231_bool, var_0_object, var_233_float, 10000.0, true, false);
					TaskReturn();
					if(!var_237_bool) { //@nz
						goto Label_854;
					}
					var_54_bool = false;
					goto Label_682;
				}
				if(!var_54_bool) { //@nz
					func_2018(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1284(var_60_float);
					@StopAsync();
					var_54_bool = true;
					bool var_253_bool;
					func_1868(var_253_bool, var_0_object);
					if(!var_253_bool) { //@nz
						goto Label_854;
					}
				}
				@rand(var_60_float);
				bool var_256_bool;
				var_258_bool = var_60_float < 0.25;
				if(var_258_bool != 1) {
					bool var_259_bool;
					func_1241(true, var_259_bool);
					if(var_259_bool != 1)
						var_256_bool = false;
				}
				if(var_256_bool != 0) {
					@Face(var_0_object);
					func_1291();
					@PlayAnimation("all", "attack_stay");
					bool var_296_bool; float var_297_float;
					func_1109(var_60_float, var_296_bool, var_297_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1284(var_60_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_514_bool;
					func_1241(var_60_float, var_514_bool);
					var_515_bool = !var_514_bool; //@nz
					if(var_515_bool == 0) goto Label_844;
					bool var_516_bool;
					func_1868(var_516_bool, var_0_object);
					if(!var_516_bool) { //@nz
						goto Label_854;
					}
					var_0_object->GetPFPosition(var_51_cvector); //@t
					@GetPFPosition(var_52_cvector);
					if(!(((var_51_cvector - var_52_cvector) | (var_51_cvector - var_52_cvector)) < (var_297_float * var_297_float))) goto Label_844;
					bool var_521_bool; float var_522_float;
					var_38_float = var_522_float;
					func_945(var_59_bool, var_60_float, var_521_bool, var_522_float);
					var_523_bool = !var_521_bool; //@nz
					if(var_523_bool == 0) goto Label_844;
					goto Label_854;
			}
				bool var_524_bool; float var_525_float;
				var_38_float = var_525_float;
				func_945(var_59_bool, var_60_float, var_524_bool, var_525_float);
				if(!var_524_bool) { //@nz
					goto Label_854;
				}
				var_54_bool = true;

			}
		Label_844:
			goto Label_853;
			}
			Label_853:
			}
		}
	Label_854:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_53_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2433(bool var_40_bool, object var_41_object, int var_42_int)
{
	object var_49_object;
	func_2420(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	object var_47_object;
	var_46_object->Find(var_42_int, var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_42_int);
		var_40_bool = false;
	}
	var_47_object->AddChild(var_41_object);
	@SendWorldWndMessage(7);
	int var_48_int;
	var_41_object->GetCategory(var_48_int);
	@SetDiarySection(var_48_int);
	var_40_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_906(object var_0_object, float var_394_float, int var_395_int)
{
	object var_399_object; float var_400_float; float var_401_float;
	@GetVictim((var_394_float * 0.9), var_399_object);
	@ReportAttack(var_0_object);
	if(var_399_object == var_0_object) {
		float var_405_float; object var_406_object; int var_407_int;
		var_399_object = var_406_object;
		var_395_int = var_407_int;
		func_636(var_407_int);
		var_405_float = var_400_float;
		float var_408_float; object var_409_object; float var_410_float; int var_411_int;
		var_399_object = var_409_object;
		int var_412_int; object var_413_object; int var_414_int;
		var_399_object = var_413_object;
		var_395_int = var_414_int;
		func_639(var_414_int);
		var_412_int = var_411_int;
		func_1754(var_408_float, var_409_object, var_410_float, var_411_int);
		var_408_float = var_401_float;
		int var_469_int;
		func_1289(var_469_int);
		@ReportHit(var_0_object, var_469_int, var_401_float, var_410_float);
		object var_470_object; float var_471_float;
		var_399_object = var_470_object;
		var_401_float = var_471_float;
		func_1296();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1676(string var_49_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_50_string;
	var_49_string = var_50_string;
	func_2150(var_50_string);
	@PlayAnimation("all", var_49_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_49_string);
	@RemoveEnvelope();
}


// @pe
void func_142(object var_2_object, string var_117_string)
{
	bool var_118_bool;
	func_2505(var_118_bool);
	if(!var_118_bool) //@nz
		return 0;
	if(var_117_string == var_2_object)
		return 0;
	string var_121_string; bool var_122_bool;
	var_117_string = var_121_string;
	if(var_117_string == "")
		var_122_bool = false;
	else
		var_122_bool = true;
	func_2126(var_121_string, var_122_bool);
	var_2_object = var_117_string;
	
}


void func_2191(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_1936(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_1722(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2197(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_1998:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_1892(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_1998;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_2004(var_70_float, var_71_cvector, var_72_cvector);
}


void func_2197(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


void func_1180(bool var_309_bool)
{
	bool var_310_bool = false;
	bool var_311_bool;
	func_1152(var_310_bool, var_311_bool);
	if(var_311_bool != 0) {
		bool var_328_bool;
		func_1196(var_309_bool, var_310_bool, var_328_bool);
		if(var_328_bool != 0)
			var_310_bool = true;
	}
	if(var_310_bool != 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_2461(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x9ac";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_2207(float var_446_float, float var_447_float, float var_448_float)
{
	if(var_447_float < var_448_float)
		var_447_float = var_446_float;
	else
		var_448_float = var_446_float;
	
}


// @pe
void func_2214(float var_456_float, float var_457_float, float var_458_float, float var_459_float)
{
	if(var_457_float < var_458_float) {
		var_458_float = var_456_float;
		return 0;
	}
	if(var_457_float > var_459_float) {
		var_459_float = var_456_float;
		return 0;
	}
	var_457_float = var_456_float;
}


void func_1196(object var_0_object, bool var_4_bool, bool var_328_bool)
{
	object var_334_object; float var_336_float; cvector var_337_cvector; cvector var_338_cvector;
	@GetScene(var_334_object);
	bool var_335_bool = false;
	
	for(;;) {
		cvector var_339_cvector;
		func_1722(var_339_cvector, var_0_object);
		var_345_int = -var_339_cvector;
		@FindDirLength(var_336_float, var_345_int, var_4_bool);
		if(var_336_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_337_cvector); //@t
				@GetPFPosition(var_338_cvector);
				@WaitForAnimEnd();
				func_1284(var_338_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_335_bool = true;
				bool var_350_bool;
				func_1152(var_338_cvector, var_350_bool);
				var_351_bool = !var_350_bool; //@nz
				if(var_351_bool == 0) goto Label_1237;
		}
		for(;;) {
			var_335_bool = var_328_bool;

		}

	Label_1237:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1708(string var_436_string, int var_437_int)
{
	if(var_437_int == 2) {
		var_436_string = "fire";
		return 0;
	EMIT "GOTO 0x6b8";
	}
	if(var_437_int == 1) {
		var_436_string = "bullet";
		return 0;
	}
	var_436_string = "phys";
}


void func_2478(int var_24_int)
{
	int var_26_int;
	@GetVariable("branch", var_26_int);
	var_26_int = var_24_int;
}


void func_2225(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_945(object var_0_object, object var_1_object, bool var_357_bool, float var_358_float)
{
	string var_366_string;
	func_1284(var_366_string);
	int var_363_int;
	@irand(var_363_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2268();
	@PlayAnimation("all", ("attack_begin" + (var_363_int + 1)));
	@WaitForAnimEnd();
	int var_365_int;
	func_1252(var_365_int, var_366_string);
	bool var_391_bool;
	func_1868(var_391_bool, var_0_object);
	if(!var_391_bool) { //@nz
		@StopAsync();
		var_357_bool = false;
		return 8;
	}
	float var_394_float; int var_395_int;
	var_358_float = var_394_float;
	var_363_int = var_395_int;
	func_906(var_366_string, var_394_float, var_395_int);
	bool var_364_bool;
	@HasAnimation(var_364_bool, "all", ("attack_middle" + var_363_int));
	if(var_364_bool != 0) {
		func_2268();
		@PlayAnimation("all", ("attack_middle" + var_363_int));
		@WaitForAnimEnd();
		func_1284(var_366_string);
		bool var_479_bool;
		func_1868(var_479_bool, var_0_object);
		if(!var_479_bool) { //@nz
			@StopAsync();
			var_357_bool = false;
			return 8;
		}
		float var_482_float; int var_483_int;
		var_358_float = var_482_float;
		func_906(var_366_string, var_482_float, var_483_int);
		var_365_int = 1;

		for(;;) {
			var_366_string = (("attack_middle" + var_483_int) + "_") + var_365_int;
			@HasAnimation(var_364_bool, "all", var_366_string);
			if(!var_364_bool) { //@nz
			} else {
				func_2268();
				@PlayAnimation("all", var_366_string);
				@WaitForAnimEnd();
				func_1284(var_366_string);
				bool var_505_bool;
				func_1868(var_505_bool, var_0_object);
				if(!var_505_bool) { //@nz
					@StopAsync();
					var_357_bool = false;
					return 8;
				}
				float var_508_float; int var_509_int;
				var_358_float = var_508_float;
				var_363_int = var_509_int;
				func_906(var_366_string, var_508_float, var_509_int);
				var_365_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_363_int));
		bool var_494_bool;
		func_1298(var_494_bool);
		if(var_494_bool != 0) {
			bool var_495_bool;
			func_1082(var_495_bool, 0.75);
			@StopAsync();
		}
		var_357_bool = true;
		return 8;

	}
}


// @pe
void func_2484(object var_23_object)
{
	int var_24_int;
	func_2478(var_24_int);
	if(var_24_int == 1)
		@WorkWithCorpse(var_23_object);
	else
		@Barter(var_23_object);
	
}


void func_2230(bool var_175_bool, object var_176_object, string var_177_string)
{
	int var_180_int;
	@GetInvItemByName(var_180_int, var_177_string);
	bool var_181_bool;
	var_176_object->HasItem(var_180_int, var_181_bool);
	var_181_bool = var_175_bool;
}


void func_1722(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


void func_2237(float var_464_float)
{
	object var_466_object;
	@CreateFloatVector(var_466_object);
	var_466_object->add(var_464_float);
	@SendWorldWndMessage(15, var_466_object);
}
EMIT "Stack[-1] = 0";


void func_1729(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_2497(int var_86_int)
{
	var_86_int = 515572;
}


void func_2499(int var_85_int)
{
	var_85_int = 504031;
}


void func_2501(string var_87_string)
{
	var_87_string = "ui/NPC_Citizen2.png";
}


void func_2247(bool var_23_bool, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(var_27_object == null)
		var_23_bool = false;
	@Trigger(var_27_object, var_25_string);
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2503(string var_88_string)
{
	var_88_string = "ui/NPC_Citizen2_b.png";
}


void func_1737(bool var_163_bool, object var_164_object)
{
	bool var_166_bool;
	@IsPlayerActor(var_164_object, var_166_bool);
	var_166_bool = var_163_bool;
}


void func_2505(bool var_80_bool)
{
	var_80_bool = false;
}


// @pe
void func_459(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_2029(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_538();
	if(!false) //@nz
		@KillTimer(10);
}


void func_2507(object var_20_object)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	func_2191(var_23_object);
	var_22_object->RemoveStationaryActor(var_23_object);
	object var_26_object;
	var_20_object = var_26_object;
	TaskCall(5);
	func_1560(var_26_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1742(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_2259(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2004(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_1892(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1241(object var_0_object, bool var_259_bool)
{
	bool var_261_bool;
	var_264_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_264_bool != 0) {
		var_0_object->IsAttacking(var_261_bool); //@t
		var_261_bool = var_259_bool;
	}
	var_259_bool = false;
}


void func_1754(float var_408_float, object var_409_object, float var_410_float, int var_411_int)
{
	int var_421_int; int var_423_int;
	object var_428_object;
	var_409_object = var_428_object;
	bool var_427_bool;
	func_1742(var_427_bool, var_428_object, "health");
	if(!var_427_bool) //@nz
		var_408_float = 0.0;
	bool var_431_bool; object var_432_object;
	func_1742(var_431_bool, var_432_object, "armor");
	if(!var_431_bool) //@nz
		var_421_int = 0;
	else
		var_432_object->GetProperty("armor", var_421_int);
	string var_436_string; int var_437_int;
	var_411_int = var_437_int;
	func_1708(var_436_string, var_437_int);
	string var_422_string = "armor_" + var_436_string;
	bool var_442_bool; object var_443_object; string var_444_string;
	var_409_object = var_443_object;
	func_1742(var_442_bool, var_443_object, var_444_string);
	if(!var_442_bool) //@nz
		var_423_int = 0;
	else
		var_409_object->GetProperty(var_444_string, var_423_int);

	float var_446_float;
	func_2207(var_446_float, ((var_421_int + var_423_int) / 100.0), (float)1);
	float var_424_float;
	var_446_float = var_424_float;
	float var_425_float;
	var_409_object->GetProperty("health", var_425_float);
	float var_426_float = var_410_float * (1 - var_424_float);
	float var_456_float;
	func_2214(var_456_float, (var_425_float - var_426_float), (float)0, (float)1);
	var_409_object->SetProperty("health", var_456_float);
	bool var_462_bool; object var_463_object;
	var_409_object = var_463_object;
	func_1737(var_462_bool, var_463_object);
	if(var_462_bool != 0) {
		float var_464_float = -var_426_float;
		func_2237(var_464_float);
	}
	var_426_float = var_408_float;
	
}


void func_2268(void)
{
	object var_370_object;
	@GetScene(var_370_object);
	object var_372_object;
	func_2191(var_372_object);
	@BroadcastMessage("battle", var_372_object, var_370_object);
}
EMIT "Stack[-1] = 0";


void func_2018(object var_242_object)
{
	cvector var_246_cvector;
	var_242_object->GetPosition(var_246_cvector);
	cvector var_247_cvector;
	@GetPosition(var_247_cvector);
	cvector var_248_cvector = var_246_cvector - var_247_cvector;
	var_249_float = GetByIndex(var_248_cvector, 0);
	var_250_float = GetByIndex(var_248_cvector, 2);
	@RotateAsync(var_249_float, var_250_float);
}


void func_1252(object var_2_object, int var_5_int)
{
	int var_379_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_378_float;
	@rand(var_378_float);
	float var_385_float;
	func_1302(var_385_float);
	if(var_378_float < var_385_float) {
		@irand(var_379_int, var_2_object);
		@Speak("attack" + (var_379_int + 1));
		int var_390_int;
		func_1300(var_390_int);
		var_5_int = var_390_int;
	}
}


void func_486(object var_0_object, object var_1_object, bool var_4_bool, bool var_22_bool)
{
	if(var_4_bool == null)
		var_22_bool = false;
	float var_26_float;
	func_1729(var_26_float, var_4_bool);
	float var_24_float = sqrt(var_26_float);
	if(var_2_object != 0)
		var_24_float -= var_1_object;
	var_22_bool = var_24_float < var_0_object;
}


void func_2279(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


// @pe
void func_1511(object var_0_object, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_1549(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2029(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_2286(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_2279(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_2034(bool var_38_bool, object var_39_object, float var_40_float)
{
	cvector var_51_cvector; bool var_58_bool;
	var_39_object->GetPosition(var_51_cvector);
	float var_50_float;
	var_39_object->GetEyesHeight(var_50_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_50_float);
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	@GetEyesHeight(var_50_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_60_float + var_50_float);
	cvector var_53_cvector = var_51_cvector - var_52_cvector;
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (float)0;
	var_63_float = sqrt(var_53_cvector | var_53_cvector);
	var_53_cvector /= var_63_float;
	cvector var_54_cvector = -var_53_cvector;
	cvector var_65_cvector;
	func_2197(var_65_cvector, (var_54_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_55_cvector = ((var_53_cvector * var_40_float) + (var_65_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0)
		var_38_bool = false;
	@StopWorld();
	@CameraTransit((var_52_cvector + var_55_cvector), var_54_cvector);
	var_78_float = GetByIndex(var_55_cvector, 0);
	var_79_float = GetByIndex(var_55_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2505(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_58_bool, "head");
		if(var_58_bool == 0) goto Label_2096;
		@LookAsyncCamera("head");
	}
Label_2096:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_38_bool = true;
	
}


// @pe
void func_2303(object var_72_object)
{
	@SetVariable("d11q01", 3);
	func_2407();
	bool var_83_bool;
	func_2247(var_83_bool, "quest_d11_01", "restore_andrei");
	var_72_object->SetReturnValue(0);
}


