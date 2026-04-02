// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(1 != 0) {
			func_1353();
			if(var_9_bool == 13311) {
				object var_14_object; object var_15_object;
				var_14_object = var_1_object;
				var_15_object = var_0_object;
				func_1510();
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1516();
			}
			if(var_8_cvector == 13292) {
				bool var_24_bool;
				func_1522(var_1_object);
				if(var_24_bool != 0) {
					func_164(var_9_bool, "Neutral");
					var_0_object->SetMessage(512071); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512072, 13294, 13293); //@t
					var_0_object->AddReply(512083, 13294, 13306); //@t
					return 0;
				}
				func_164(var_9_bool, "Neutral");
				var_0_object->SetMessage(513029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513030, -1, 14237); //@t
				var_0_object->AddReply(536131, -1, 37890); //@t
				return 0;
			}
			if(var_8_cvector == 13294) {
				func_164(var_9_bool, "Neutral");
				var_0_object->SetMessage(512073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512074, 13298, 13295); //@t
				var_0_object->AddReply(512075, 13298, 13296); //@t
				var_0_object->AddReply(512076, 13298, 13297); //@t
				return 0;
			}
			if(var_8_cvector == 13298) {
				func_164(var_9_bool, "Neutral");
				var_0_object->SetMessage(512077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512078, 13302, 13301); //@t
				var_0_object->AddReply(512082, 13302, 13305); //@t
				return 0;
			}
			if(var_8_cvector == 13302) {
				func_164(var_9_bool, "Neutral");
				var_0_object->SetMessage(512079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512080, 13304, 13303); //@t
				var_0_object->AddReply(512084, 13304, 13309); //@t
				return 0;
			}
			if(var_8_cvector == 13304) {
				func_164(var_9_bool, "Neutral");
				var_0_object->SetMessage(512081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512085, -1, 13311); //@t
				return 0;
			}
			var_3_string = true;
			bool var_104_bool;
			func_1559(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@SetTimer(100, 1.0);
	
		for(;;) {
			@Sleep(3);
			func_401();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_bool, var_10_bool);
		if(var_10_bool != 0) {
			object var_12_object;
			var_8_bool = var_12_object;
			TaskCall(3);
			func_538(var_13_object, var_14_cvector, var_15_bool, var_12_object);
			TaskReturn();
		}
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_482();
		int var_9_int; object var_10_object;
		var_8_bool = var_10_object;
		TaskCall(0);
		func_0(var_11_object, var_9_int, var_10_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		if(var_8_bool == 100)
			func_1577();
	}

}


task task_3
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		bool var_8_bool;
		func_1465(var_8_bool, "quest_d6_03", "albinos_retreated");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int)
	{
		if(var_8_int == 100) {
			func_1577();
		} else {
			int var_99_int;
			func_611(var_6_cvector, var_7_bool, var_99_int, var_99_int);
		}
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		func_663(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1634();
	}

}


task task_4
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_995(var_12_object, var_13_int, var_14_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float, cvector var_12_cvector, cvector var_13_cvector)
{
	object var_14_object;
	var_8_object = var_14_object;
	int var_15_int;
	var_9_int = var_15_int;
	float var_16_float;
	var_10_float = var_16_float;
	cvector var_17_cvector;
	var_12_cvector = var_17_cvector;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	func_1063(var_16_float, var_17_cvector, var_18_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1561(var_9_object);
}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_1082(var_20_bool, var_21_object, 70.0);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_68_int;
	func_1553(var_68_int);
	var_16_object->SetNPCName(var_68_int);
	int var_69_int;
	func_1551(var_69_int);
	var_16_object->SetNPCDescription(var_69_int);
	string var_70_string;
	func_1555(var_70_string);
	var_16_object->SetPhoto(var_70_string);
	string var_71_string;
	func_1557(var_71_string);
	var_16_object->SetPhoto2(var_71_string);
	int var_72_int;
	func_1534(var_72_int);
	var_16_object->SetPlayerName(var_72_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	bool var_81_bool; object var_82_object;
	object var_83_object;
	func_1401(var_83_object);
	var_83_object = var_82_object;
	func_1169(var_81_bool, var_82_object);
	object var_176_object; object var_177_object;
	var_10_object = var_176_object;
	var_16_object = var_177_object;
	TaskCall(1);
	func_81(var_178_object, var_179_object, var_180_string, var_181_bool, var_176_object, var_177_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_241_bool = !var_19_bool; //@nz
		if(var_241_bool == 0) goto Label_70;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_70:
	object var_242_object;
	var_10_object = var_242_object;
	func_1151();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1417(float var_68_float, float var_69_float, float var_70_float)
{
	if(var_69_float < var_70_float)
		var_69_float = var_68_float;
	else
		var_70_float = var_68_float;
	
}


void func_1551(int var_69_int)
{
	var_69_int = 515595;
}


// @pe
void func_1424(float var_78_float, float var_79_float, float var_80_float, float var_81_float)
{
	if(var_79_float < var_80_float) {
		var_80_float = var_78_float;
		return 0;
	}
	if(var_79_float > var_81_float) {
		var_81_float = var_78_float;
		return 0;
	}
	var_79_float = var_78_float;
}


void func_1553(int var_68_int)
{
	var_68_int = 512611;
}


void func_1169(bool var_81_bool, object var_82_object)
{
	int var_88_int; int var_89_int;
	@GetVariable("voice_common", var_88_int);
	if(var_88_int != 0) {
		bool var_92_bool; object var_93_object;
		var_82_object = var_93_object;
		func_1227(var_92_bool, var_93_object);
		if(!var_92_bool) { //@nz
			bool var_123_bool; object var_124_object;
			var_82_object = var_124_object;
			func_1264(var_123_bool, var_124_object);
			if(!var_123_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@irand(var_89_int, 2);
		if(var_89_int != 0)
			@SetVariable("voice_common", ((var_88_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_168_bool; object var_169_object;
		var_82_object = var_169_object;
		func_1264(var_168_bool, var_169_object);
		if(!var_168_bool) { //@nz
			bool var_171_bool; object var_172_object;
			var_82_object = var_172_object;
			func_1227(var_171_bool, var_172_object);
			if(!var_171_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1225;
	
Label_1225:
	var_81_bool = true;
	
}


void func_1555(string var_70_string)
{
	var_70_string = "ui/NPC_Albinos.png";
}


void func_401(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1077(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_1493(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1077(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_448;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_1486(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_477;
				}
			} else if(var_19_int != 0) {
				goto Label_477;
			}
			}
					bool var_54_bool;
					func_480(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_472;
			}
		}
	Label_477:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_472:
		@ResetAAS();
		var_19_int += 1;
	}
	
}


void func_1557(string var_71_string)
{
	var_71_string = "ui/NPC_Albinos_b.png";
}


void func_1559(bool var_63_bool)
{
	var_63_bool = false;
}


void func_663(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1561(object var_9_object)
{
	@KillTimer(100);
	bool var_11_bool;
	func_1465(var_11_bool, "quest_d6_03", "albinos_dead");
	object var_17_object;
	var_9_object = var_17_object;
	TaskCall(4);
	func_695(var_17_object);
	TaskReturn();
}


void func_538(object var_0_object, object var_1_object, object var_2_object, object var_12_object)
{
	float var_22_float; cvector var_24_cvector; float var_25_float;
	cvector var_26_cvector;
	func_508(var_25_float, var_26_cvector, 1.7453294);
	cvector var_21_cvector;
	var_26_cvector = var_21_cvector;
	if((var_21_cvector | var_21_cvector) < 2500.0) {
		cvector var_58_cvector;
		func_508(var_25_float, var_58_cvector, 2.6179938);
		var_58_cvector = var_21_cvector;
		var_22_float = var_21_cvector | var_21_cvector;
		if(var_22_float < 2500.0) {
			var_63_float = sqrt(var_22_float);
			@Trace("Can't retreat, distance: " + var_63_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_66_float = GetByIndex(var_21_cvector, 0);
	var_67_float = GetByIndex(var_21_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	cvector var_68_cvector;
	func_841(var_68_cvector);
	@SetTimer(120, 0.5);
	
Label_580:
	bool var_23_bool;
	@MovePoint((var_68_cvector + var_21_cvector), 1, var_23_bool);
	if(var_23_bool != 0) {
		if(var_12_object == null) {
			goto Label_610;
		EMIT "GOTO 0x260";

		Label_610:
			for(;;) {
				return 10;
		}
			cvector var_76_cvector;
			func_508(var_25_float, var_76_cvector, 2.6179938);
			var_76_cvector = var_24_cvector;
			if((var_24_cvector | var_24_cvector) >= 2500.0) {
				cvector var_80_cvector;
				func_841(var_80_cvector);
				var_1_object = var_80_cvector + var_24_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_580; //@nz

	}
}


// @pe
void func_1435(float var_162_float, cvector var_163_cvector, cvector var_164_cvector)
{
	var_169_float = sqrt((var_163_cvector | var_163_cvector) * (var_164_cvector | var_164_cvector));
	var_162_float = (var_163_cvector | var_164_cvector) / var_169_float;
}


void func_1307(string var_217_string)
{
	bool var_221_bool; float var_222_float; float var_223_float;
	@lshHasAnimation(var_221_bool, var_217_string);
	if(var_221_bool != 0) {
		@lshGetAnimTimes(var_217_string, var_222_float, var_223_float);
		@lshPlayAnimation(var_222_float, var_223_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_217_string);
	}
	
}


// @pe
void func_795(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1360(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_1443(int var_185_int, string var_186_string)
{
	int var_188_int;
	@GetVariable(var_186_string, var_188_int);
	var_188_int = var_185_int;
}


// @pe
void func_164(object var_2_object, string var_191_string)
{
	bool var_192_bool;
	func_1559(var_192_bool);
	if(!var_192_bool) //@nz
		return 0;
	if(var_191_string == var_2_object)
		return 0;
	string var_195_string; bool var_196_bool;
	var_191_string = var_195_string;
	if(var_191_string == "")
		var_196_bool = false;
	else
		var_196_bool = true;
	func_1323(var_195_string, var_196_bool);
	var_2_object = var_191_string;
	
}


void func_679(object var_0_object, bool var_151_bool)
{
	cvector var_154_cvector;
	@GetDirection(var_154_cvector);
	cvector var_156_cvector;
	func_846(var_156_cvector, var_0_object);
	cvector var_155_cvector;
	var_156_cvector = var_155_cvector;
	float var_162_float; cvector var_163_cvector; cvector var_164_cvector;
	var_154_cvector = var_163_cvector;
	var_155_cvector = var_164_cvector;
	func_1435(var_162_float, var_163_cvector, var_164_cvector);
	var_151_bool = var_162_float >= -0.34202012;
}


void func_1448(float var_88_float)
{
	object var_90_object;
	@CreateFloatVector(var_90_object);
	var_90_object->add(var_88_float);
	if(var_88_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_90_object);
}
EMIT "Stack[-1] = 0";


void func_1577(void)
{
	object var_13_object; float var_14_float;
	@FindActor(var_13_object, "player");
	if(var_13_object != 0) {
		float var_17_float; object var_18_object;
		var_13_object = var_18_object;
		func_853(var_17_float, var_18_object);
		if(var_17_float <= 640000.0) {
			float var_27_float; object var_28_object;
			func_878(var_27_float, var_28_object, 0.05, 0);
			var_27_float = var_14_float;
			@ReportHit(var_28_object, 6, var_14_float, 0.05);
		}
	}
}
EMIT "Stack[-2] = 0";


void func_1063(object var_14_object, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_21_object;
	@GetScene(var_21_object);
	object var_22_object;
	@AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	object var_25_object;
	var_14_object = var_25_object;
	func_951(var_25_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1323(string var_195_string, bool var_196_bool)
{
	bool var_202_bool; float var_203_float; float var_204_float;
	@lshHasAnimation(var_202_bool, var_195_string);
	if(var_202_bool != 0) {
		@lshGetAnimTimes(var_195_string, var_203_float, var_204_float);
		@lshPlayAnimation(var_203_float, var_204_float, var_196_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_195_string);
	}
	
}


void func_1407(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_49_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_49_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_49_float;
}


void func_1077(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_951(object var_25_object)
{
	string var_39_string;
	if(var_25_object == null)
		return 14;
	bool var_33_bool;
	@IsDead(var_33_bool);
	if(var_33_bool != 0)
		return 14;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 14;
	cvector var_35_cvector;
	var_25_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	if(((var_44_float * var_45_float) + (var_47_float * var_48_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


// @pe
void func_695(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_704(var_18_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1465(bool var_11_bool, string var_12_string, string var_13_string)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(var_15_object == null)
		var_11_bool = false;
	@Trigger(var_15_object, var_13_string);
	var_11_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1082(bool var_20_bool, object var_21_object, float var_22_float)
{
	cvector var_33_cvector; bool var_40_bool;
	var_21_object->GetPosition(var_33_cvector);
	float var_32_float;
	var_21_object->GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_41_float + var_32_float);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	@GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_42_float + var_32_float);
	cvector var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_45_float = sqrt(var_35_cvector | var_35_cvector);
	var_35_cvector /= var_45_float;
	cvector var_36_cvector = -var_35_cvector;
	cvector var_47_cvector;
	func_1407(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector, true);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_61_float, var_62_float);
	bool var_63_bool;
	func_1559(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_1145;
		@LookAsyncCamera("head");
	}
Label_1145:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


// @pe
void func_827(string var_58_string, int var_59_int)
{
	if(var_59_int == 2) {
		var_58_string = "fire";
		return 0;
	EMIT "GOTO 0x347";
	}
	if(var_59_int == 1) {
		var_58_string = "bullet";
		return 0;
	}
	var_58_string = "phys";
}


void func_1338(bool var_115_bool, string var_116_string)
{
	bool var_118_bool;
	bool var_119_bool;
	func_1559(var_119_bool);
	if(var_119_bool != 0) {
		@lshHasSpeech(var_118_bool, var_116_string);
		if(var_118_bool != 0) {
			@lshPlaySpeech(var_116_string);
			var_115_bool = true;
		}
	}
	var_115_bool = false;
}


void func_704(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_795("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1360(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_1477(int var_136_int)
{
	float var_138_float;
	@GetGameTime(var_138_float);
	var_136_int = 1 + (var_138_float / 24);
}


void func_1353(void)
{
	bool var_11_bool;
	func_1559(var_11_bool);
	if(var_11_bool != 0)
		@lshStopSpeech();
}


void func_841(cvector var_171_cvector)
{
	cvector var_173_cvector;
	@GetPosition(var_173_cvector);
	var_173_cvector = var_171_cvector;
}


void func_1227(bool var_92_bool, object var_93_object)
{
	string var_99_string; bool var_101_bool; int var_102_int; string var_103_string;
	var_99_string = "c";
	int var_100_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_93_object->HasProperty((var_99_string + (var_100_int + 1)), var_101_bool);
			if(!var_101_bool) { //@nz
			} else {
				var_100_int += 1;
			}
		}
		if(!var_100_int) { //@nz
			var_92_bool = false;
			return 10;
		}
		var_102_int = 0;
		if(var_100_int > 1)
			@irand(var_102_int, var_100_int);
		var_93_object->GetProperty((var_99_string + (var_102_int + 1)), var_103_string);
		bool var_115_bool; string var_116_string;
		var_103_string = var_116_string;
		func_1338(var_115_bool, var_116_string);
		var_115_bool = var_92_bool;
		return 10;

	}
}


void func_1486(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_846(cvector var_42_cvector, object var_43_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_43_object->GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
}


void func_1360(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_1380:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_1380;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_176_object, object var_177_object)
{
	var_0_object = var_177_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_183_bool;
		func_1522(var_176_object);
		if(var_183_bool != 0) {
			func_164(var_177_object, "Neutral");
			var_0_object->SetMessage(512071); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512072, 13294, 13293); //@t
			var_0_object->AddReply(512083, 13294, 13306); //@t
		} else {
					func_164(var_177_object, "Neutral");
					var_0_object->SetMessage(513029); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513030, -1, 14237); //@t
					var_0_object->AddReply(536131, -1, 37890); //@t
		}
	}
	for(;;) {
		bool var_215_bool;
		func_1559(var_215_bool);
		if(var_215_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1307(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_163;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_163:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1493(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_1486(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


void func_853(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_861(bool var_84_bool, object var_85_object)
{
	bool var_87_bool;
	@IsPlayerActor(var_85_object, var_87_bool);
	var_87_bool = var_84_bool;
}


void func_480(bool var_54_bool)
{
	var_54_bool = true;
}


void func_482(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_611(object var_0_object, object var_1_object, object var_2_object, int var_99_int)
{
	cvector var_104_cvector; float var_105_float; cvector var_106_cvector; float var_107_float;
	if(var_99_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_104_cvector);
		@FindDirLength(var_105_float, var_104_cvector, 7000.0);
		cvector var_113_cvector;
		func_508(var_107_float, var_113_cvector, 1.7453294);
		var_113_cvector = var_106_cvector;
		var_107_float = var_106_cvector | var_106_cvector;
		bool var_143_bool = false;
		if(var_107_float >= 2500.0) {
			bool var_146_bool;
			var_150_bool = var_107_float >= ((var_105_float * var_105_float) * 2.25);
			if(var_150_bool != 1) {
				bool var_151_bool;
				func_679(true, var_151_bool);
				if(var_151_bool != 1)
					var_146_bool = false;
			}
			if(var_146_bool != 0)
				var_143_bool = true;
		}
		if(var_143_bool == 0) goto Label_662;
		@Stop();
		cvector var_171_cvector;
		func_841(var_171_cvector);
		var_1_object = var_171_cvector + var_106_cvector;
	}
Label_662:
	
}


void func_866(bool var_43_bool, object var_44_object, string var_45_string)
{
	var_50_bool = IsFuncExist(var_44_object, "HasProperty", 2);
	if(!var_50_bool) { //@nz
		var_43_bool = false;
		return 2;
	}
	bool var_47_bool;
	var_44_object->HasProperty(var_45_string, var_47_bool);
	var_47_bool = var_43_bool;
}


void func_995(object var_12_object, int var_13_int, float var_14_float)
{
	cvector var_24_cvector; object var_25_object; int var_26_int; bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	bool var_33_bool = false;
	bool var_34_bool = false;
	if(var_12_object != 0) {
		if(var_13_int != 4)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_13_int != 5)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		cvector var_40_cvector; cvector var_41_cvector;
		cvector var_42_cvector; object var_43_object;
		var_12_object = var_43_object;
		func_846(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1407(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		@CreateVectorVector(var_25_object);
		var_26_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_26_int), var_27_bool, var_28_cvector, var_29_cvector);
			if(!var_27_bool) { //@nz
				break;
			Label_1057:
				var_25_object = null;
	}
			object var_102_object;
			var_12_object = var_102_object;
			func_951(var_102_object);
		}
		if((var_29_cvector | var_24_cvector) >= 0.70710677)
			var_25_object->add(var_28_cvector);
		var_26_int += 1;
	}
	int var_30_int;
	var_25_object->size(var_30_int);
	if(var_30_int == 0) goto Label_1057;
	int var_31_int;
	@irand(var_31_int, var_30_int);
	cvector var_32_cvector;
	var_25_object->get(var_32_cvector, var_31_int);
	object var_57_object; int var_58_int; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	var_12_object = var_57_object;
	var_13_int = var_58_int;
	var_14_float = var_59_float;
	var_32_cvector = var_60_cvector;
	var_61_cvector = -var_24_cvector;
	func_1063(var_59_float, var_60_cvector, var_61_cvector);
}


// @pe
void func_1510(void)
{
	@SetVariable("d6q03", 2);
}


// @pe
void func_1516(void)
{
	@SetVariable("ood6Albinos1", 1);
}


void func_878(float var_27_float, object var_28_object, float var_29_float, int var_30_int)
{
	int var_37_int; int var_39_int;
	object var_44_object;
	var_28_object = var_44_object;
	bool var_43_bool;
	func_866(var_43_bool, var_44_object, "health");
	if(!var_43_bool) //@nz
		var_27_float = 0.0;
	bool var_53_bool; object var_54_object;
	func_866(var_53_bool, var_54_object, "armor");
	if(!var_53_bool) //@nz
		var_37_int = 0;
	else
		var_54_object->GetProperty("armor", var_37_int);
	string var_58_string; int var_59_int;
	var_30_int = var_59_int;
	func_827(var_58_string, var_59_int);
	string var_38_string = "armor_" + var_58_string;
	bool var_64_bool; object var_65_object; string var_66_string;
	var_28_object = var_65_object;
	func_866(var_64_bool, var_65_object, var_66_string);
	if(!var_64_bool) //@nz
		var_39_int = 0;
	else
		var_28_object->GetProperty(var_66_string, var_39_int);

	float var_68_float;
	func_1417(var_68_float, ((var_37_int + var_39_int) / 100.0), (float)1);
	float var_40_float;
	var_68_float = var_40_float;
	float var_41_float;
	var_28_object->GetProperty("health", var_41_float);
	float var_42_float = var_29_float * (1 - var_40_float);
	float var_78_float;
	func_1424(var_78_float, (var_41_float - var_42_float), (float)0, (float)1);
	var_28_object->SetProperty("health", var_78_float);
	bool var_84_bool; object var_85_object;
	var_28_object = var_85_object;
	func_861(var_84_bool, var_85_object);
	if(var_84_bool != 0) {
		float var_88_float = -var_42_float;
		func_1448(var_88_float);
	}
	var_42_float = var_27_float;
	
}


void func_1264(bool var_123_bool, object var_124_object)
{
	bool var_132_bool; int var_133_int; string var_134_string;
	int var_136_int;
	func_1477(var_136_int);
	string var_130_string = ("d" + var_136_int) + "m";
	int var_131_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_124_object->HasProperty((var_130_string + (var_131_int + 1)), var_132_bool);
			if(!var_132_bool) { //@nz
			} else {
				var_131_int += 1;
			}
		}
		if(!var_131_int) { //@nz
			var_123_bool = false;
			return 10;
		}
		var_133_int = 0;
		if(var_131_int > 1)
			@irand(var_133_int, var_131_int);
		var_124_object->GetProperty((var_130_string + (var_133_int + 1)), var_134_string);
		bool var_155_bool; string var_156_string;
		var_134_string = var_156_string;
		func_1338(var_155_bool, var_156_string);
		var_155_bool = var_123_bool;
		return 10;

	}
}


// @pe
void func_1522(bool var_183_bool)
{
	int var_185_int;
	func_1443(var_185_int, "ood6Albinos1");
	if(var_185_int == 0) {
		var_183_bool = true;
		return 0;
	}
	var_183_bool = false;
}


void func_1401(object var_83_object)
{
	object var_85_object;
	@self(var_85_object);
	var_85_object = var_83_object;
}
EMIT "Stack[-1] = 0";


void func_508(object var_0_object, cvector var_113_cvector, float var_114_float)
{
	cvector var_121_cvector;
	@GetPosition(var_121_cvector);
	cvector var_122_cvector;
	var_0_object->GetPosition(var_122_cvector); //@t
	cvector var_123_cvector;
	@GetDirection(var_123_cvector);
	cvector var_127_cvector;
	cvector var_129_cvector;
	func_1407(var_129_cvector, (var_121_cvector - var_122_cvector));
	func_1407(var_127_cvector, (var_129_cvector + (var_123_cvector * 0.75)));
	cvector var_124_cvector;
	var_127_cvector = var_124_cvector;
	cvector var_125_cvector;
	float var_126_float;
	@FindLongestDir(var_125_cvector, var_126_float, var_124_cvector, var_114_float, 32, 7000.0);
	if((var_126_float - 100) < 0)
		var_126_float = 0;
	var_113_cvector = var_125_cvector * var_126_float;
}


void func_1534(int var_72_int)
{
	int var_74_int;
	@GetVariable("branch", var_74_int);
	if(var_74_int == 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x60d";
	}
	if(var_74_int == 1) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
}


void func_1151(void)
{
	bool var_244_bool;
	@CameraSwitchToNormal(true);
	bool var_246_bool;
	func_1559(var_246_bool);
	if(var_246_bool != 0) {
	} else {
		@HasAnimationTrack(var_244_bool, "head");
		if(var_244_bool == 0) goto Label_1168;
		@UnlookAsync("head");
	}
Label_1168:
	
}


