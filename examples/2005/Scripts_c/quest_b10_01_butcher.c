// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(1 != 0) {
			func_1883();
			if(var_16_object == 23053) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(521881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522417, 23585, 23584); //@t
				var_0_object->AddReply(521882, -1, 23054); //@t
				return 0;
			}
			if(var_16_object == 23585) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(522418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522419, -1, 23586); //@t
				var_0_object->AddReply(522420, 23589, 23587); //@t
				return 0;
			}
			if(var_16_object == 23589) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(522422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522423, 23588, 23590); //@t
				var_0_object->AddReply(522424, -1, 23591); //@t
				return 0;
			}
			if(var_16_object == 23588) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(522421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522426, -1, 23593); //@t
				var_0_object->AddReply(522425, -1, 23592); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_2096(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		int var_20_int; bool var_21_bool; cvector var_22_cvector; object var_23_object;
		@GetPFPosition(var_1_object);
		@GetDirection(var_0_object);
	
		for(;;) {
			func_380();
			@irand(var_20_int, 10);
			@Sleep((var_20_int + 5), var_21_bool);
			if(var_21_bool != 0) {
				func_265();
			} else {
			for(;;) {
				func_380();
				@GetPFPosition(var_22_cvector);
				float var_28_float; cvector var_30_cvector;
				var_22_cvector = var_30_cvector;
				func_1947(var_28_float, var_1_object, var_30_cvector);
				if(var_28_float > 40000) {
					@FindPathTo(var_23_object, var_1_object);
					if(var_23_object != null) {
						@RotatePath(var_23_object, var_21_bool);
						if(!var_21_bool) { //@nz
						} else {
						@FollowPath(var_23_object, false, var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_377;
						}
						var_39_float = GetByIndex(var_0_object, 0);
						var_40_float = GetByIndex(var_0_object, 2);
						@Rotate(var_39_float, var_40_float, var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_377;
						}
						@WaitForAnimEnd(var_21_bool);
						if(!var_21_bool) { //@nz
							goto Label_377;
						}
						goto Label_378;
					EMIT "GOTO 0x16a";
					}
					@Sleep(1);
					var_23_object = null;
					goto Label_377;
				}
				var_44_float = GetByIndex(var_0_object, 0);
				var_45_float = GetByIndex(var_0_object, 2);
				@Rotate(var_44_float, var_45_float, var_21_bool);
				if(!var_21_bool) { //@nz
					goto Label_377;
				}
				@WaitForAnimEnd(var_21_bool);
				if(!var_21_bool) { //@nz
					goto Label_377;
				}
				goto Label_378;
				}
			Label_377:
			}
			}
		Label_378:
		}
	
	}
	EMIT "Return(); Pop(8)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		TaskCall(0);
		int var_19_int;
		object var_20_object;
		func_0(var_21_object, var_19_int, var_20_object);
		TaskReturn();
		bool var_18_bool;
		@IsPlayerActor(var_20_object, var_18_bool);
		if(var_18_bool != 0) {
			object var_138_object;
			var_16_bool = var_138_object;
			TaskCall(3);
			func_381(var_138_object);
			TaskReturn();
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_18_bool;
		@IsPlayerActor(var_16_bool, var_18_bool);
		if(var_18_bool != 0) {
			object var_20_object;
			var_16_bool = var_20_object;
			TaskCall(3);
			func_381(var_20_object);
			TaskReturn();
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int == 1) {
			func_1991(var_1_object);
		} else {
			int var_24_int;
			func_1264(var_15_bool, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(!var_2_object) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = true;
			object var_20_object;
			var_16_object = var_20_object;
			func_1872(var_20_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(var_2_object != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1120(var_16_object);
		object var_21_object;
		var_16_object = var_21_object;
		func_2153();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			object var_20_object;
			var_16_object = var_20_object;
			func_2034(var_20_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1681(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_1749(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2098(var_17_object);
}


void func_0(object var_0_object, int var_19_int, object var_20_object)
{
	var_0_object = var_20_object;
	bool var_30_bool; object var_31_object;
	var_20_object = var_31_object;
	func_1774(var_30_bool, var_31_object, 70.0);
	if(!var_30_bool) { //@nz
		var_19_int = -2;
		return 8;
	}
	object var_26_object;
	@CreateDialog(var_26_object);
	int var_77_int;
	func_2090(var_77_int);
	var_26_object->SetNPCName(var_77_int);
	int var_78_int;
	func_2088(var_78_int);
	var_26_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_2092(var_79_string);
	var_26_object->SetPhoto(var_79_string);
	string var_80_string;
	func_2094(var_80_string);
	var_26_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_2011(var_81_int);
	var_26_object->SetPlayerName(var_81_int);
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	if(var_27_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	@DoDialog(var_26_object);
	object var_90_object; object var_91_object;
	var_20_object = var_90_object;
	var_26_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_29_bool;
	var_26_object->IsDialogEnd(var_29_bool);
	
	for(;;) {
		var_129_bool = !var_29_bool; //@nz
		if(var_129_bool == 0) goto Label_63;
		@sync();
		var_26_object->IsDialogEnd(var_29_bool);
	}
	
Label_63:
	object var_130_object;
	var_20_object = var_130_object;
	func_1842();
	@StopDialog(var_26_object);
	var_26_object->GetReturnValue(-1);
	int var_28_int = var_19_int;
}
EMIT "Stack[-4] = 0";


void func_1286(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_265(void)
{
}


void func_1037(object var_0_object)
{
	func_1991(var_0_object);
}


void func_2064(void)
{
	int var_26_int;
	func_2028(var_26_int);
	if(var_26_int != 1) {
	}
	func_2047("liver");
	func_2047("kidney");
	func_2047("heart");
	func_2047("blood");
}


void func_1042(int var_460_int)
{
	var_460_int = 0;
}


void func_1044(void)
{
	func_1890("attack_stay");
}


// @pe
void func_1302(bool var_27_bool, object var_28_object)
{
	object var_30_object;
	var_28_object = var_30_object;
	bool var_29_bool;
	func_1613(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
}


// @pe
void func_1049(void)
{
}


void func_1051(bool var_485_bool)
{
	var_485_bool = true;
}


void func_1053(int var_381_int)
{
	var_381_int = 1;
}


void func_1309(string var_199_string)
{
	var_199_string = "walk";
}


void func_1055(float var_376_float)
{
	var_376_float = 0.5;
}


void func_1311(string var_200_string)
{
	var_200_string = "run";
}


void func_1057(object var_2_object, bool var_130_bool, object var_131_object, float var_132_float, float var_133_float, bool var_134_bool, bool var_135_bool)
{
	object var_143_object;
	func_1991(var_143_object);
	@SetTimer(1, 5);
	bool var_141_bool;
	@CanSee(var_141_bool, var_143_object);
	if(var_141_bool != 0) {
		var_2_object = true;
		object var_147_object;
		var_131_object = var_147_object;
		func_1872(var_147_object);
	} else {
		var_2_object = false;
	}
	bool var_154_bool; object var_155_object;
	func_1482(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		object var_158_object;
		func_1931(var_158_object);
		@SendPlayerEnemy(var_155_object, var_158_object);
	}
	bool var_159_bool; object var_160_object; float var_161_float; float var_162_float; bool var_163_bool; bool var_164_bool;
	var_131_object = var_160_object;
	var_132_float = var_161_float;
	var_133_float = var_162_float;
	var_134_bool = var_163_bool;
	var_135_bool = var_164_bool;
	bool var_142_bool;
	func_1162(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool);
	var_159_bool = var_142_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_142_bool = var_130_bool;
	
}


// @pe
void func_1313(object var_49_object)
{
	object var_50_object;
	var_49_object = var_50_object;
	func_1338(var_50_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1572(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_2088(int var_78_int)
{
	var_78_int = 515562;
}


void func_1577(bool var_33_bool, object var_34_object)
{
	if(var_34_object == null) {
		var_33_bool = false;
		return 4;
	}
	bool var_40_bool = false;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", 1);
	if(var_43_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_34_object = var_45_object;
		func_1572(var_44_bool, var_45_object);
		if(var_44_bool != 0)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		var_33_bool = false;
		return 4;
	}
	object var_37_object;
	@GetScene(var_37_object);
	if(var_37_object == null) {
		var_33_bool = false;
		return 4;
	}
	object var_38_object;
	var_34_object->GetScene(var_38_object);
	if(var_37_object != var_38_object) {
		var_33_bool = false;
		return 4;
	}
	var_33_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2090(int var_77_int)
{
	var_77_int = 503347;
}


void func_2092(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen1.png";
}


void func_2094(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen1_b.png";
}


void func_2096(bool var_72_bool)
{
	var_72_bool = false;
}


void func_2098(object var_17_object)
{
	bool var_20_bool;
	func_1979(var_20_bool, "quest_b10_01", "butcher_dead");
	func_2064();
	object var_19_object;
	@GetScene(var_19_object);
	object var_46_object;
	func_1931(var_46_object);
	var_19_object->RemoveStationaryActor(var_46_object);
	object var_49_object;
	var_17_object = var_49_object;
	TaskCall(5);
	func_1313(var_49_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1842(void)
{
	bool var_132_bool;
	@CameraSwitchToNormal();
	bool var_133_bool;
	func_2096(var_133_bool);
	if(var_133_bool != 0) {
	} else {
		@HasAnimationTrack(var_132_bool, "head");
		if(var_132_bool == 0) goto Label_1858;
		@UnlookAsync("head");
	}
Label_1858:
	
}


void func_1338(object var_50_object)
{
	cvector var_61_cvector; cvector var_62_cvector; cvector var_63_cvector; cvector var_64_cvector; string var_65_string; object var_66_object; bool var_67_bool; bool var_68_bool; float var_69_float; cvector var_70_cvector;
	if(var_50_object == null) {
		func_1429("fdie");
	} else {
		var_50_object->GetPosition(var_61_cvector);
		@GetPosition(var_62_cvector);
		@GetDirection(var_63_cvector);
		var_64_cvector = var_62_cvector - var_61_cvector;
		var_104_float = GetByIndex(var_64_cvector, 0);
		var_105_float = GetByIndex(var_63_cvector, 0);
		var_107_float = GetByIndex(var_64_cvector, 2);
		var_108_float = GetByIndex(var_63_cvector, 2);
		if(((var_104_float * var_105_float) + (var_107_float * var_108_float)) >= 0)
			var_65_string = "fdie";
		else
			var_65_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_50_object = var_66_object;
		var_115_bool = IsFuncExist(var_50_object, "GetScriptProperty", 2);
		if(var_115_bool != 0) {
			var_50_object->HasScriptProperty(var_67_bool, "Owner");
			if(var_67_bool != 0) {
				var_50_object->GetScriptProperty(var_66_object, "Owner");
				if(var_66_object == null)
					var_50_object = var_66_object;
			}
		}
		var_122_bool = IsFuncExist(var_66_object, "@GetEyesHeight", 1);
		if(var_122_bool != 0) {
			var_66_object->GetEyesHeight(var_69_float);
			var_70_cvector = [0.0, 0.0, 0.0];
			var_123_float = GetByIndex(var_70_cvector, 1);
			var_69_float = var_123_float;
			SetByIndex(var_70_cvector, 1) = var_123_float;
			@LookAsync(var_50_object, "head", var_70_cvector);
			var_68_bool = true;
		} else {
			var_68_bool = false;

		}
		string var_125_string;
		var_65_string = var_125_string;
		func_1890(var_125_string);
		@PlayAnimation("all", var_65_string);
		@WaitForAnimEnd();
		if(var_68_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_65_string);
		@RemoveEnvelope();
		var_66_object = null;
	}
	
}


void func_1859(string var_118_string)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_118_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, false);
}


void func_835(bool var_486_bool, float var_487_float)
{
	float var_490_float; bool var_491_bool;
	@rand(var_490_float);
	if(var_490_float < var_487_float) {

		for(;;) {
			@IsAnimationPlaying(var_491_bool);
			if(!var_491_bool) { //@nz
			} else {
				bool var_494_bool;
				func_933(var_494_bool);
				if(var_494_bool != 0) {
					var_486_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_486_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1037(var_491_bool);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_91_object, "Neutral");
		var_0_object->SetMessage(521881); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(522417, 23585, 23584); //@t
		var_0_object->AddReply(521882, -1, 23054); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_116_bool;
	func_2096(var_116_bool);
	if(var_116_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1859(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_1866(string var_101_string, bool var_102_bool)
{
	float var_107_float; float var_108_float;
	@lshGetAnimTimes(var_101_string, var_107_float, var_108_float);
	@lshPlayAnimation(var_107_float, var_108_float, var_102_bool);
}


void func_1613(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_1577(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_1487(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_1872(object var_20_object)
{
	float var_23_float;
	var_20_object->GetEyesHeight(var_23_float);
	cvector var_24_cvector = [0.0, 0.0, 0.0];
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	@LookAsync(var_20_object, "head", var_24_cvector);
}


void func_1883(void)
{
	bool var_19_bool;
	func_2096(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_862(object var_0_object, bool var_287_bool, float var_288_float)
{
	bool var_294_bool; cvector var_295_cvector; cvector var_296_cvector; cvector var_297_cvector; float var_298_float;
	
	for(;;) {
		@IsAnimationPlaying(var_294_bool);
		if(!var_294_bool) //@nz
			break;
		bool var_300_bool;
		func_933(var_300_bool);
		if(var_300_bool != 0) {
			var_287_bool = true;
			return 10;
		}
		bool var_343_bool;
		func_1613(var_343_bool, var_0_object);
		if(!var_343_bool) { //@nz
			var_287_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_295_cvector); //@t
		@GetPFPosition(var_296_cvector);
		var_297_cvector = var_295_cvector - var_296_cvector;
		var_298_float = var_297_cvector | var_297_cvector;
		if(var_298_float < (var_288_float * var_288_float)) {
			bool var_348_bool; float var_349_float;
			var_288_float = var_349_float;
			func_698(var_297_cvector, var_298_float, var_348_bool, var_349_float);
			var_287_bool = true;
			return 10;
		}
		@sync();
	}
	func_1037(var_298_float);
	var_287_bool = false;
}


void func_1120(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1286(var_16_object);
}


void func_1890(string var_73_string)
{
	bool var_82_bool; int var_83_int; bool var_84_bool; int var_85_int; bool var_86_bool; float var_87_float; cvector var_88_cvector; cvector var_89_cvector;
	@IsExisting3DSound(var_82_bool, var_73_string);
	if(!var_82_bool) { //@nz
		var_83_int = 0;

		for(;;) {
			@IsExisting3DSound(var_84_bool, (var_73_string + (var_83_int + 1)));
			if(!var_84_bool) { //@nz
				break;
			Label_1910:
				@irand(var_85_int, var_83_int);
				var_73_string += (var_85_int + 1);
	}
			@Is3DSoundLoaded(var_86_bool, var_73_string);
			if(var_86_bool != 0) {
				@GetEyesHeight(var_87_float);
				@GetDirection(var_88_cvector);
				var_89_cvector = var_88_cvector * 50;
				var_100_float = GetByIndex(var_89_cvector, 1);
				SetByIndex(var_89_cvector, 1) = (var_100_float + var_87_float);
				@PlayGlobalSound(var_73_string, var_89_cvector);
			}
		}
		var_83_int += 1;
	}
	var_95_bool = !var_83_int; //@nz
	if(var_95_bool == 0) goto Label_1910;
}


void func_1637(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


void func_624(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_55_bool; bool var_56_bool; cvector var_57_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_55_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_55_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, ("attack" + (var_2_object + 1)));
			if(!var_56_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_57_cvector, "all", "bjump");
		var_71_float = GetByIndex(var_57_cvector, 2);
		var_4_bool = -var_71_float;

	}
}


void func_380(void)
{
}


// @pe
void func_381(object var_20_object)
{
	object var_27_object;
	func_395(var_23_int, var_24_bool, var_25_float, var_26_int, var_27_object, var_27_object, true, 180.0);
}


// @pe
void func_132(object var_2_object, string var_97_string)
{
	bool var_98_bool;
	func_2096(var_98_bool);
	if(!var_98_bool) //@nz
		return 0;
	if(var_97_string == var_2_object)
		return 0;
	string var_101_string; bool var_102_bool;
	var_97_string = var_101_string;
	if(var_97_string == "")
		var_102_bool = false;
	else
		var_102_bool = true;
	func_1866(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	
}


// @pe
void func_389(float var_396_float)
{
	var_396_float = 0.1;
}


// @pe
void func_392(int var_403_int)
{
	var_403_int = 0;
}


void func_905(object var_0_object, bool var_302_bool)
{
	cvector var_308_cvector; cvector var_309_cvector;
	bool var_313_bool;
	func_1613(var_313_bool, var_0_object);
	if(!var_313_bool) { //@nz
		var_302_bool = false;
		return 10;
	}
	bool var_316_bool;
	float var_312_float;
	func_994(var_312_float, var_316_bool);
	if(var_316_bool != 0) {
		var_0_object->GetPFPosition(var_308_cvector); //@t
		@GetPFPosition(var_309_cvector);
		var_0_object->GetAttackDistance(var_312_float); //@t
		var_302_bool = ((var_308_cvector - var_309_cvector) | (var_308_cvector - var_309_cvector)) <= ((var_312_float + 50) * (var_312_float + 50));
		return 10;
	}
	var_302_bool = false;
}


void func_1162(object var_0_object, object var_1_object, bool var_159_bool, object var_160_object, float var_161_float, float var_162_float, bool var_163_bool, bool var_164_bool)
{
	bool var_173_bool; object var_175_object; cvector var_176_cvector; cvector var_177_cvector; float var_179_float; object var_180_object;
	var_0_object = false;
	var_1_object = var_160_object;
	bool var_174_bool;
	var_164_bool = var_174_bool;
	
	for(;;) {
		bool var_181_bool; object var_182_object;
		var_160_object = var_182_object;
		func_1302(var_181_bool, var_182_object);
		if(!var_181_bool) { //@nz
			var_159_bool = false;
			return 16;
		}
		var_160_object->GetPosition(var_176_cvector);
		@GetPosition(var_177_cvector);
		var_179_float = (var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector);
		bool var_186_bool = false;
		if(var_162_float > 0) {
			if(var_179_float > (var_162_float * var_162_float))
				var_186_bool = true;
		}
		if(var_186_bool != 0) {
			@Stop();
			var_159_bool = false;
			return 16;
		}
		if(var_179_float > (var_161_float * var_161_float)) {
			var_160_object->GetPFPosition(var_176_cvector);
			@FindPathTo(var_180_object, var_176_cvector);
			if(var_180_object != null) {
				var_180_object = var_175_object;
				var_180_object = null;
			}
			if(var_175_object != null) {
				if(var_174_bool == 0) goto Label_1215;
				var_174_bool = false;
				@RotatePath(var_175_object, var_173_bool);
				if(!var_173_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_199_string;
						func_1309(var_199_string);
						string var_200_string;
						func_1311(var_200_string);
						@FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string);
						if(!var_173_bool) { //@nz
							if(var_0_object == 0) goto Label_1234;
							var_175_object = null;
						}
					EMIT "GOTO 0x4d3";

					Label_1234:
						} else {
					var_175_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_173_bool);
					if(!var_173_bool) { //@nz
						if(var_0_object != 0) {
							var_175_object = null;
							goto Label_1262;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1262;
		}
			var_180_object = null;
			goto Label_1260;

		Label_1260:
			var_175_object = null;

		}
	Label_1262:
		for(;;) {
			var_159_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_395(object var_0_object, string var_3_string, cvector var_5_cvector, object var_27_object, bool var_28_bool, float var_29_float, bool var_136_bool, bool var_228_bool)
{
	float var_41_float; cvector var_42_cvector; cvector var_43_cvector; bool var_45_bool; float var_48_float; cvector var_49_cvector; bool var_50_bool; float var_51_float;
	func_624(var_49_cvector, var_50_bool, var_51_float);
	var_5_cvector = 0;
	var_76_bool = IsFuncExist(var_27_object, "@GetAttackDistance", 1);
	if(var_76_bool != 0) {
		var_27_object->GetAttackDistance(var_41_float);
		var_41_float += 50;
	} else {
						var_29_float = var_41_float;
	}
	if(var_41_float >= 150)
		var_41_float = 150;
	var_3_string = false;
	var_0_object = var_27_object;
	bool var_44_bool;
	@IsPlayerActor(var_0_object, var_44_bool);
	if(var_44_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_82_object;
		func_1931(var_82_object);
		@SendPlayerEnemy(var_27_object, var_82_object);
	}
	if(var_28_bool != 0)
		var_45_bool = false;
	else
		var_45_bool = true;

	
Label_435:
	for(;;) {
		bool var_87_bool = false;
		bool var_88_bool;
		func_1613(var_88_bool, var_0_object);
		if(var_88_bool != 0) {
			if(!var_3_string) //@nz
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			func_1037(var_51_float);
			var_0_object->GetPFPosition(var_42_cvector); //@t
			@GetPFPosition(var_43_cvector);
			var_48_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
			if(var_48_float >= ((400.0 + var_41_float) * (400.0 + var_41_float))) {
				bool var_130_bool; float var_132_float;
				var_41_float = var_132_float;
				TaskCall(4);
				func_1057(var_138_bool, var_130_bool, var_0_object, var_132_float, 3000.0, true, false);
				TaskReturn();
				if(!var_136_bool) { //@nz
				} else {
					var_45_bool = false;
			} else {
			if(var_48_float >= (var_29_float * var_29_float)) {
				var_0_object->GetPFPosition(var_49_cvector); //@t
				@CanReachByPF(var_50_bool, var_49_cvector);
				if(!var_50_bool) { //@nz
					bool var_222_bool; float var_224_float;
					var_41_float = var_224_float;
					TaskCall(4);
					func_1057(var_230_bool, var_222_bool, var_0_object, var_224_float, 3000.0, true, false);
					TaskReturn();
					if(!var_228_bool) { //@nz
						goto Label_607;
					}
					var_45_bool = false;
					goto Label_435;
				}
				if(!var_45_bool) { //@nz
					func_1763(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1037(var_51_float);
					@StopAsync();
					var_45_bool = true;
					bool var_244_bool;
					func_1613(var_244_bool, var_0_object);
					if(!var_244_bool) { //@nz
						goto Label_607;
					}
				}
				@rand(var_51_float);
				bool var_247_bool;
				var_249_bool = var_51_float < 0.25;
				if(var_249_bool != 1) {
					bool var_250_bool;
					func_994(true, var_250_bool);
					if(var_250_bool != 1)
						var_247_bool = false;
				}
				if(var_247_bool != 0) {
					@Face(var_0_object);
					func_1044();
					@PlayAnimation("all", "attack_stay");
					bool var_287_bool; float var_288_float;
					func_862(var_51_float, var_287_bool, var_288_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1037(var_51_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_505_bool;
					func_994(var_51_float, var_505_bool);
					var_506_bool = !var_505_bool; //@nz
					if(var_506_bool == 0) goto Label_597;
					bool var_507_bool;
					func_1613(var_507_bool, var_0_object);
					if(!var_507_bool) { //@nz
						goto Label_607;
					}
					var_0_object->GetPFPosition(var_42_cvector); //@t
					@GetPFPosition(var_43_cvector);
					if(!(((var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector)) < (var_288_float * var_288_float))) goto Label_597;
					bool var_512_bool; float var_513_float;
					var_29_float = var_513_float;
					func_698(var_50_bool, var_51_float, var_512_bool, var_513_float);
					var_514_bool = !var_512_bool; //@nz
					if(var_514_bool == 0) goto Label_597;
					goto Label_607;
			}
				bool var_515_bool; float var_516_float;
				var_29_float = var_516_float;
				func_698(var_50_bool, var_51_float, var_515_bool, var_516_float);
				if(!var_515_bool) { //@nz
					goto Label_607;
				}
				var_45_bool = true;

			}
		Label_597:
			goto Label_606;
			}
			Label_606:
			}
		}
	Label_607:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_44_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1931(object var_46_object)
{
	object var_48_object;
	@self(var_48_object);
	var_48_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_1681(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_1475(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_1937(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_1743:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1637(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_1743;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_1749(var_67_float, var_68_cvector, var_69_cvector);
}


void func_1937(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_659(object var_0_object, float var_385_float, int var_386_int)
{
	object var_390_object; float var_391_float; float var_392_float;
	@GetVictim((var_385_float * 0.9), var_390_object);
	@ReportAttack(var_0_object);
	if(var_390_object == var_0_object) {
		float var_396_float; object var_397_object; int var_398_int;
		var_390_object = var_397_object;
		var_386_int = var_398_int;
		func_389(var_398_int);
		var_396_float = var_391_float;
		float var_399_float; object var_400_object; float var_401_float; int var_402_int;
		var_390_object = var_400_object;
		int var_403_int; object var_404_object; int var_405_int;
		var_390_object = var_404_object;
		var_386_int = var_405_int;
		func_392(var_405_int);
		var_403_int = var_402_int;
		func_1499(var_399_float, var_400_object, var_401_float, var_402_int);
		var_399_float = var_392_float;
		int var_460_int;
		func_1042(var_460_int);
		@ReportHit(var_0_object, var_460_int, var_392_float, var_401_float);
		object var_461_object; float var_462_float;
		var_390_object = var_461_object;
		var_392_float = var_462_float;
		func_1049();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1429(string var_72_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_73_string;
	var_72_string = var_73_string;
	func_1890(var_73_string);
	@PlayAnimation("all", var_72_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_72_string);
	@RemoveEnvelope();
}


void func_1947(float var_28_float, cvector var_29_cvector, cvector var_30_cvector)
{
	var_28_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


// @pe
void func_1951(float var_437_float, float var_438_float, float var_439_float)
{
	if(var_438_float < var_439_float)
		var_438_float = var_437_float;
	else
		var_439_float = var_437_float;
	
}


void func_933(bool var_300_bool)
{
	bool var_301_bool = false;
	bool var_302_bool;
	func_905(var_301_bool, var_302_bool);
	if(var_302_bool != 0) {
		bool var_319_bool;
		func_949(var_300_bool, var_301_bool, var_319_bool);
		if(var_319_bool != 0)
			var_301_bool = true;
	}
	if(var_301_bool != 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


// @pe
void func_1958(float var_447_float, float var_448_float, float var_449_float, float var_450_float)
{
	if(var_448_float < var_449_float) {
		var_449_float = var_447_float;
		return 0;
	}
	if(var_448_float > var_450_float) {
		var_450_float = var_447_float;
		return 0;
	}
	var_448_float = var_447_float;
}


void func_1969(float var_455_float)
{
	object var_457_object;
	@CreateFloatVector(var_457_object);
	var_457_object->add(var_455_float);
	@SendWorldWndMessage(15, var_457_object);
}
EMIT "Stack[-1] = 0";


void func_949(object var_0_object, bool var_4_bool, bool var_319_bool)
{
	object var_325_object; float var_327_float; cvector var_328_cvector; cvector var_329_cvector;
	@GetScene(var_325_object);
	bool var_326_bool = false;
	
	for(;;) {
		cvector var_330_cvector;
		func_1475(var_330_cvector, var_0_object);
		var_336_int = -var_330_cvector;
		@FindDirLength(var_327_float, var_336_int, var_4_bool);
		if(var_327_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_328_cvector); //@t
				@GetPFPosition(var_329_cvector);
				@WaitForAnimEnd();
				func_1037(var_329_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_326_bool = true;
				bool var_341_bool;
				func_905(var_329_cvector, var_341_bool);
				var_342_bool = !var_341_bool; //@nz
				if(var_342_bool == 0) goto Label_990;
		}
		for(;;) {
			var_326_bool = var_319_bool;

		}

	Label_990:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1461(string var_427_string, int var_428_int)
{
	if(var_428_int == 2) {
		var_427_string = "fire";
		return 0;
	EMIT "GOTO 0x5c1";
	}
	if(var_428_int == 1) {
		var_427_string = "bullet";
		return 0;
	}
	var_427_string = "phys";
}


void func_698(object var_0_object, object var_1_object, bool var_348_bool, float var_349_float)
{
	string var_357_string;
	func_1037(var_357_string);
	int var_354_int;
	@irand(var_354_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2000();
	@PlayAnimation("all", ("attack_begin" + (var_354_int + 1)));
	@WaitForAnimEnd();
	int var_356_int;
	func_1005(var_356_int, var_357_string);
	bool var_382_bool;
	func_1613(var_382_bool, var_0_object);
	if(!var_382_bool) { //@nz
		@StopAsync();
		var_348_bool = false;
		return 8;
	}
	float var_385_float; int var_386_int;
	var_349_float = var_385_float;
	var_354_int = var_386_int;
	func_659(var_357_string, var_385_float, var_386_int);
	bool var_355_bool;
	@HasAnimation(var_355_bool, "all", ("attack_middle" + var_354_int));
	if(var_355_bool != 0) {
		func_2000();
		@PlayAnimation("all", ("attack_middle" + var_354_int));
		@WaitForAnimEnd();
		func_1037(var_357_string);
		bool var_470_bool;
		func_1613(var_470_bool, var_0_object);
		if(!var_470_bool) { //@nz
			@StopAsync();
			var_348_bool = false;
			return 8;
		}
		float var_473_float; int var_474_int;
		var_349_float = var_473_float;
		func_659(var_357_string, var_473_float, var_474_int);
		var_356_int = 1;

		for(;;) {
			var_357_string = (("attack_middle" + var_474_int) + "_") + var_356_int;
			@HasAnimation(var_355_bool, "all", var_357_string);
			if(!var_355_bool) { //@nz
			} else {
				func_2000();
				@PlayAnimation("all", var_357_string);
				@WaitForAnimEnd();
				func_1037(var_357_string);
				bool var_496_bool;
				func_1613(var_496_bool, var_0_object);
				if(!var_496_bool) { //@nz
					@StopAsync();
					var_348_bool = false;
					return 8;
				}
				float var_499_float; int var_500_int;
				var_349_float = var_499_float;
				var_354_int = var_500_int;
				func_659(var_357_string, var_499_float, var_500_int);
				var_356_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_354_int));
		bool var_485_bool;
		func_1051(var_485_bool);
		if(var_485_bool != 0) {
			bool var_486_bool;
			func_835(var_486_bool, 0.75);
			@StopAsync();
		}
		var_348_bool = true;
		return 8;

	}
}


void func_1979(bool var_20_bool, string var_21_string, string var_22_string)
{
	object var_24_object;
	@FindActor(var_24_object, var_21_string);
	if(var_24_object == null)
		var_20_bool = false;
	@Trigger(var_24_object, var_22_string);
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1475(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


void func_1991(object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	if(var_21_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1482(bool var_154_bool, object var_155_object)
{
	bool var_157_bool;
	@IsPlayerActor(var_155_object, var_157_bool);
	var_157_bool = var_154_bool;
}


void func_1487(bool var_51_bool, object var_52_object, string var_53_string)
{
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", 2);
	if(!var_58_bool) { //@nz
		var_51_bool = false;
		return 2;
	}
	bool var_55_bool;
	var_52_object->HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
}


void func_2000(void)
{
	object var_361_object;
	@GetScene(var_361_object);
	object var_363_object;
	func_1931(var_363_object);
	@BroadcastMessage("battle", var_363_object, var_361_object);
}
EMIT "Stack[-1] = 0";


void func_1749(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1637(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2011(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x7ea";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


void func_1499(float var_399_float, object var_400_object, float var_401_float, int var_402_int)
{
	int var_412_int; int var_414_int;
	object var_419_object;
	var_400_object = var_419_object;
	bool var_418_bool;
	func_1487(var_418_bool, var_419_object, "health");
	if(!var_418_bool) //@nz
		var_399_float = 0.0;
	bool var_422_bool; object var_423_object;
	func_1487(var_422_bool, var_423_object, "armor");
	if(!var_422_bool) //@nz
		var_412_int = 0;
	else
		var_423_object->GetProperty("armor", var_412_int);
	string var_427_string; int var_428_int;
	var_402_int = var_428_int;
	func_1461(var_427_string, var_428_int);
	string var_413_string = "armor_" + var_427_string;
	bool var_433_bool; object var_434_object; string var_435_string;
	var_400_object = var_434_object;
	func_1487(var_433_bool, var_434_object, var_435_string);
	if(!var_433_bool) //@nz
		var_414_int = 0;
	else
		var_400_object->GetProperty(var_435_string, var_414_int);

	float var_437_float;
	func_1951(var_437_float, ((var_412_int + var_414_int) / 100.0), (float)1);
	float var_415_float;
	var_437_float = var_415_float;
	float var_416_float;
	var_400_object->GetProperty("health", var_416_float);
	float var_417_float = var_401_float * (1 - var_415_float);
	float var_447_float;
	func_1958(var_447_float, (var_416_float - var_417_float), (float)0, (float)1);
	var_400_object->SetProperty("health", var_447_float);
	bool var_453_bool; object var_454_object;
	var_400_object = var_454_object;
	func_1482(var_453_bool, var_454_object);
	if(var_453_bool != 0) {
		float var_455_float = -var_417_float;
		func_1969(var_455_float);
	}
	var_417_float = var_399_float;
	
}


void func_994(object var_0_object, bool var_250_bool)
{
	bool var_252_bool;
	var_255_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_255_bool != 0) {
		var_0_object->IsAttacking(var_252_bool); //@t
		var_252_bool = var_250_bool;
	}
	var_250_bool = false;
}


void func_1763(object var_233_object)
{
	cvector var_237_cvector;
	var_233_object->GetPosition(var_237_cvector);
	cvector var_238_cvector;
	@GetPosition(var_238_cvector);
	cvector var_239_cvector = var_237_cvector - var_238_cvector;
	var_240_float = GetByIndex(var_239_cvector, 0);
	var_241_float = GetByIndex(var_239_cvector, 2);
	@RotateAsync(var_240_float, var_241_float);
}


void func_2028(int var_26_int)
{
	int var_28_int;
	@GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
}


void func_1005(object var_2_object, cvector var_5_cvector)
{
	int var_370_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_cvector != 0) {
		if((var_5_cvector + -1) > 0)
			return 4;
	}
	float var_369_float;
	@rand(var_369_float);
	float var_376_float;
	func_1055(var_376_float);
	if(var_369_float < var_376_float) {
		@irand(var_370_int, var_2_object);
		@Speak("attack" + (var_370_int + 1));
		int var_381_int;
		func_1053(var_381_int);
		var_5_cvector = var_381_int;
	}
}


void func_1774(bool var_30_bool, object var_31_object, float var_32_float)
{
	cvector var_43_cvector; bool var_50_bool;
	var_31_object->GetPosition(var_43_cvector);
	float var_42_float;
	var_31_object->GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_42_float);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	@GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_42_float);
	cvector var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_55_float = sqrt(var_45_cvector | var_45_cvector);
	var_45_cvector /= var_55_float;
	cvector var_46_cvector = -var_45_cvector;
	cvector var_57_cvector;
	func_1937(var_57_cvector, (var_46_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_47_cvector = ((var_45_cvector * var_32_float) + (var_57_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0)
		var_30_bool = false;
	@StopWorld();
	@CameraTransit((var_44_cvector + var_47_cvector), var_46_cvector);
	var_70_float = GetByIndex(var_47_cvector, 0);
	var_71_float = GetByIndex(var_47_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_2096(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_50_bool, "head");
		if(var_50_bool == 0) goto Label_1836;
		@LookAsyncCamera("head");
	}
Label_1836:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_30_bool = true;
	
}


// @pe
void func_1264(object var_0_object, object var_1_object, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1302(var_27_bool, var_1_object);
	if(!var_27_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2034(object var_20_object)
{
	int var_21_int;
	func_2028(var_21_int);
	if(var_21_int == 1)
		@WorkWithCorpse(var_20_object);
	else
		@Barter(var_20_object);
	
}


void func_2047(string var_32_string)
{
	object var_36_object;
	@CreateInvItem(var_36_object);
	var_36_object->SetItemName(var_32_string);
	var_36_object->SetProperty("Organ", 1);
	int var_37_int;
	var_36_object->GetItemID(var_37_int);
	bool var_38_bool;
	@AddItem(var_38_bool, var_36_object, 0, 1);
}
EMIT "Stack[-3] = 0";


