// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		if(1 != 0) {
			func_1299();
			if(var_11_bool == 12062) {
				object var_16_object = var_1_object;
				func_1451(var_0_object);
				object var_50_object = var_1_object;
				func_1470(var_0_object);
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_1445();
			}
			if(var_11_bool == 35869) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_1481();
			}
			if(var_11_bool == 35746) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_1481();
			}
			if(var_10_cvector == 12052) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(510904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510905, 35745, 12053); //@t
				var_0_object->AddReply(534166, -1, 35746); //@t
				return 0;
			}
			if(var_10_cvector == 35745) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(534165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534167, 12054, 35747); //@t
				var_0_object->AddReply(534169, 35750, 35749); //@t
				return 0;
			}
			if(var_10_cvector == 35750) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(534170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534272, 35857, 35861); //@t
				return 0;
			}
			if(var_10_cvector == 12054) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(510906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510907, 12056, 12055); //@t
				return 0;
			}
			if(var_10_cvector == 12056) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(510908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510909, 12058, 12057); //@t
				var_0_object->AddReply(534168, 35857, 35748); //@t
				return 0;
			}
			if(var_10_cvector == 12058) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(510910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534268, 35857, 35856); //@t
				var_0_object->AddReply(534270, 35860, 35859); //@t
				return 0;
			}
			if(var_10_cvector == 35860) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(534271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534276, 12061, 35865); //@t
				return 0;
			}
			if(var_10_cvector == 35857) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(534269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510911, 12061, 12059); //@t
				var_0_object->AddReply(510912, 12061, 12060); //@t
				return 0;
			}
			if(var_10_cvector == 12061) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(510913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534273, 35864, 35862); //@t
				var_0_object->AddReply(534274, 35864, 35863); //@t
				return 0;
			}
			if(var_10_cvector == 35864) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(534275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510914, -1, 12062); //@t
				var_0_object->AddReply(534277, -1, 35869); //@t
				return 0;
			}
			var_3_string = true;
			bool var_202_bool;
			func_1583(var_202_bool);
			if(var_202_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		TaskCall(0);
		int var_11_int;
		func_0(var_13_object, var_11_int, var_12_object);
		TaskReturn();
		TaskCall(3);
		func_439();
		TaskReturn();
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool; object var_12_object;
		func_1630(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_540(var_9_cvector, var_12_object);
			object var_47_object;
			var_10_bool = var_47_object;
			func_1637(var_47_object);
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@RequestClearPath(var_10_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_540(var_9_cvector, var_10_bool);
		object var_11_object;
		var_10_bool = var_11_object;
		func_1624();
	}

}


task task_4
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1630(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_657();
			object var_47_object;
			var_10_bool = var_47_object;
			func_1637(var_47_object);
		}
	}

}


task task_5
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int)
	{
		cvector var_15_cvector; float var_16_float; cvector var_17_cvector; float var_18_float;
		if(var_10_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_15_cvector);
			@FindDirLength(var_16_float, var_15_cvector, 7000.0);
			cvector var_24_cvector;
			func_662(var_18_float, var_24_cvector, 1.7453294);
			var_24_cvector = var_17_cvector;
			var_18_float = var_17_cvector | var_17_cvector;
			bool var_54_bool = false;
			if(var_18_float >= 2500.0) {
				bool var_57_bool;
				var_61_bool = var_18_float >= ((var_16_float * var_16_float) * 2.25);
				if(var_61_bool != 1) {
					bool var_62_bool;
					func_833(true, var_62_bool);
					if(var_62_bool != 1)
						var_57_bool = false;
				}
				if(var_57_bool != 0)
					var_54_bool = true;
			}
			if(var_54_bool == 0) goto Label_816;
			@Stop();
			cvector var_82_cvector;
			func_981(var_82_cvector);
			var_1_object = var_82_cvector + var_17_cvector;
		}
	Label_816:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		func_817(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1624();
	}

}


task task_6
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1114(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1182(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1585(var_11_object);
}


void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	if(var_12_bool != 0) {
		bool var_14_bool;
		func_1409(var_14_bool, "quest_d3_03", "boy_attacked");
	}
}


void func_0(object var_0_object, int var_11_int, object var_12_object)
{
	var_0_object = var_12_object;
	bool var_22_bool; object var_23_object;
	var_12_object = var_23_object;
	func_1201(var_22_bool, var_23_object, 70.0);
	if(!var_22_bool) { //@nz
		var_11_int = -2;
		return 8;
	}
	object var_18_object;
	@CreateDialog(var_18_object);
	int var_69_int;
	func_1577(var_69_int);
	var_18_object->SetNPCName(var_69_int);
	int var_70_int;
	func_1575(var_70_int);
	var_18_object->SetNPCDescription(var_70_int);
	string var_71_string;
	func_1579(var_71_string);
	var_18_object->SetPhoto(var_71_string);
	string var_72_string;
	func_1581(var_72_string);
	var_18_object->SetPhoto2(var_72_string);
	int var_73_int;
	func_1558(var_73_int);
	var_18_object->SetPlayerName(var_73_int);
	bool var_19_bool;
	@IsOverrideActive(var_19_bool);
	if(var_19_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	@DoDialog(var_18_object);
	object var_82_object; object var_83_object;
	var_12_object = var_82_object;
	var_18_object = var_83_object;
	TaskCall(1);
	func_74(var_84_object, var_85_object, var_86_string, var_87_bool, var_82_object, var_83_object);
	TaskReturn();
	bool var_21_bool;
	var_18_object->IsDialogEnd(var_21_bool);
	
	for(;;) {
		var_121_bool = !var_21_bool; //@nz
		if(var_121_bool == 0) goto Label_63;
		@sync();
		var_18_object->IsDialogEnd(var_21_bool);
	}
	
Label_63:
	object var_122_object;
	var_12_object = var_122_object;
	func_1269();
	@StopDialog(var_18_object);
	var_18_object->GetReturnValue(-1);
	int var_20_int = var_11_int;
}
EMIT "Stack[-4] = 0";


void func_1409(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_132(object var_2_object, string var_89_string)
{
	bool var_90_bool;
	func_1583(var_90_bool);
	if(!var_90_bool) //@nz
		return 0;
	if(var_89_string == var_2_object)
		return 0;
	string var_93_string; bool var_94_bool;
	var_89_string = var_93_string;
	if(var_89_string == "")
		var_94_bool = false;
	else
		var_94_bool = true;
	func_1293(var_93_string, var_94_bool);
	var_2_object = var_89_string;
	
}


void func_1286(string var_110_string)
{
	float var_113_float; float var_114_float;
	@lshGetAnimTimes(var_110_string, var_113_float, var_114_float);
	@lshPlayAnimation(var_113_float, var_114_float, false);
}


void func_1293(string var_93_string, bool var_94_bool)
{
	float var_99_float; float var_100_float;
	@lshGetAnimTimes(var_93_string, var_99_float, var_100_float);
	@lshPlayAnimation(var_99_float, var_100_float, var_94_bool);
}


void func_1421(string var_190_string, int var_191_int)
{
	string var_193_string = "idle";
	if(var_191_int != 0)
		var_193_string += var_191_int;
	var_193_string = var_190_string;
}


void func_655(bool var_209_bool)
{
	var_209_bool = true;
}


void func_528(float var_154_float)
{
	float var_156_float;
	@GetCameraFarDistance(var_156_float);
	var_156_float = var_154_float;
}


void func_657(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1299(void)
{
	bool var_13_bool;
	func_1583(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_1428(int var_184_int)
{
	int var_187_int; bool var_188_bool;
	var_187_int = 0;
	
	for(;;) {
		string var_190_string; int var_191_int;
		var_187_int = var_191_int;
		func_1421(var_190_string, var_191_int);
		@HasAnimation(var_188_bool, "all", var_190_string);
		if(!var_188_bool) //@nz
			break;
		var_187_int += 1;
	}
	var_187_int = var_184_int;
}


void func_1558(int var_73_int)
{
	int var_75_int;
	@GetVariable("branch", var_75_int);
	if(var_75_int == 0) {
		var_73_int = 1;
		return 2;
	EMIT "GOTO 0x625";
	}
	if(var_75_int == 1) {
		var_73_int = 2;
		return 2;
	}
	var_73_int = 3;
}


void func_662(object var_0_object, cvector var_24_cvector, float var_25_float)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_0_object->GetPosition(var_33_cvector); //@t
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_38_cvector;
	cvector var_40_cvector;
	func_1347(var_40_cvector, (var_32_cvector - var_33_cvector));
	func_1347(var_38_cvector, (var_40_cvector + (var_34_cvector * 0.75)));
	cvector var_35_cvector;
	var_38_cvector = var_35_cvector;
	cvector var_36_cvector;
	float var_37_float;
	@FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, 32, 7000.0);
	if((var_37_float - 100) < 0)
		var_37_float = 0;
	var_24_cvector = var_36_cvector * var_37_float;
}


void func_1046(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_1010(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_993(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


void func_1306(string var_36_string)
{
	bool var_45_bool; int var_46_int; bool var_47_bool; int var_48_int; bool var_49_bool; float var_50_float; cvector var_51_cvector; cvector var_52_cvector;
	@IsExisting3DSound(var_45_bool, var_36_string);
	if(!var_45_bool) { //@nz
		var_46_int = 0;

		for(;;) {
			@IsExisting3DSound(var_47_bool, (var_36_string + (var_46_int + 1)));
			if(!var_47_bool) { //@nz
				break;
			Label_1326:
				@irand(var_48_int, var_46_int);
				var_36_string += (var_48_int + 1);
	}
			@Is3DSoundLoaded(var_49_bool, var_36_string);
			if(var_49_bool != 0) {
				@GetEyesHeight(var_50_float);
				@GetDirection(var_51_cvector);
				var_52_cvector = var_51_cvector * 50;
				var_63_float = GetByIndex(var_52_cvector, 1);
				SetByIndex(var_52_cvector, 1) = (var_63_float + var_50_float);
				@PlayGlobalSound(var_36_string, var_52_cvector);
			}
		}
		var_46_int += 1;
	}
	var_58_bool = !var_46_int; //@nz
	if(var_58_bool == 0) goto Label_1326;
}


void func_540(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1182(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1070(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1445(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1575(int var_70_int)
{
	var_70_int = 515560;
}


void func_1577(int var_69_int)
{
	var_69_int = 503345;
}


void func_1579(string var_71_string)
{
	var_71_string = "ui/NPC_Citizen3.png";
}


void func_1451(object var_16_object)
{
	@SetVariable("d3q03", 2);
	func_1491();
	float var_19_float;
	var_16_object->GetProperty("disease", var_19_float);
	if(var_19_float < 0.5)
		var_16_object->SetProperty("disease", 0.5);
}


void func_1581(string var_72_string)
{
	var_72_string = "ui/NPC_Citizen3_b.png";
}


void func_556(object var_158_object, cvector var_159_cvector)
{
	object var_161_object;
	@FindShiftedPathTo(var_161_object, var_159_cvector);
	var_161_object = var_158_object;
}
EMIT "Stack[-1] = 0";


void func_1583(bool var_64_bool)
{
	var_64_bool = false;
}


void func_1196(bool var_180_bool)
{
	bool var_182_bool;
	@IsLoaded(var_182_bool);
	var_182_bool = var_180_bool;
}


void func_1201(bool var_22_bool, object var_23_object, float var_24_float)
{
	cvector var_35_cvector; bool var_42_bool;
	var_23_object->GetPosition(var_35_cvector);
	float var_34_float;
	var_23_object->GetEyesHeight(var_34_float);
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (var_43_float + var_34_float);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	@GetEyesHeight(var_34_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_44_float + var_34_float);
	cvector var_37_cvector = var_35_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (float)0;
	var_47_float = sqrt(var_37_cvector | var_37_cvector);
	var_37_cvector /= var_47_float;
	cvector var_38_cvector = -var_37_cvector;
	cvector var_49_cvector;
	func_1347(var_49_cvector, (var_38_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_39_cvector = ((var_37_cvector * var_24_float) + (var_49_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_41_bool;
	@IsOverrideActive(var_41_bool);
	if(var_41_bool != 0)
		var_22_bool = false;
	@StopWorld();
	@CameraTransit((var_36_cvector + var_39_cvector), var_38_cvector);
	var_62_float = GetByIndex(var_39_cvector, 0);
	var_63_float = GetByIndex(var_39_cvector, 2);
	@Rotate(var_62_float, var_63_float);
	bool var_64_bool;
	func_1583(var_64_bool);
	if(var_64_bool != 0) {
	} else {
		@HasAnimationTrack(var_42_bool, "head");
		if(var_42_bool == 0) goto Label_1263;
		@LookAsyncCamera("head");
	}
Label_1263:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_22_bool = true;
	
}


void func_817(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1070(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


// @pe
void func_1585(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(6);
	func_849(var_12_object);
	TaskReturn();
}


// @pe
void func_949(string var_35_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_36_string;
	var_35_string = var_36_string;
	func_1306(var_36_string);
	@PlayAnimation("all", var_35_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_35_string);
	@RemoveEnvelope();
}


void func_692(object var_0_object, object var_1_object, object var_2_object, object var_48_object)
{
	float var_58_float; cvector var_60_cvector; float var_61_float;
	cvector var_62_cvector;
	func_662(var_61_float, var_62_cvector, 1.7453294);
	cvector var_57_cvector;
	var_62_cvector = var_57_cvector;
	if((var_57_cvector | var_57_cvector) < 2500.0) {
		cvector var_94_cvector;
		func_662(var_61_float, var_94_cvector, 2.6179938);
		var_94_cvector = var_57_cvector;
		var_58_float = var_57_cvector | var_57_cvector;
		if(var_58_float < 2500.0) {
			var_99_float = sqrt(var_58_float);
			@Trace("Can't retreat, distance: " + var_99_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_102_float = GetByIndex(var_57_cvector, 0);
	var_103_float = GetByIndex(var_57_cvector, 2);
	@Rotate(var_102_float, var_103_float);
	cvector var_104_cvector;
	func_981(var_104_cvector);
	@SetTimer(120, 0.5);
	
Label_734:
	bool var_59_bool;
	@MovePoint((var_104_cvector + var_57_cvector), 1, var_59_bool);
	if(var_59_bool != 0) {
		if(var_48_object == null) {
			goto Label_764;
		EMIT "GOTO 0x2fa";

		Label_764:
			for(;;) {
				return 10;
		}
			cvector var_112_cvector;
			func_662(var_61_float, var_112_cvector, 2.6179938);
			var_112_cvector = var_60_cvector;
			if((var_60_cvector | var_60_cvector) >= 2500.0) {
				cvector var_116_cvector;
				func_981(var_116_cvector);
				var_1_object = var_116_cvector + var_60_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_734; //@nz

	}
}


void func_439(void)
{
	bool var_131_bool;
	func_1409(var_131_bool, "quest_d3_03", "boy_free");
	@SetProperty("noaccess", 0);
	
	for(;;) {
		func_469(var_129_bool, var_130_bool);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1470(object var_50_object)
{
	@Trace("powder is given");
	object var_53_object;
	var_50_object = var_53_object;
	func_1396(var_53_object, "powder", 1);
}


void func_576(void)
{
	int var_175_int; int var_176_int; bool var_177_bool; float var_178_float; bool var_179_bool;
	@WaitForAnimEnd();
	bool var_180_bool;
	func_1196(var_180_bool);
	if(!var_180_bool) //@nz
		return 14;
	int var_184_int;
	func_1428(var_184_int);
	int var_173_int;
	var_184_int = var_173_int;
	int var_174_int = 0;
	
	for(;;) {
		bool var_197_bool = false;
		if(var_174_int < 5) {
			bool var_200_bool;
			func_1196(var_200_bool);
			if(var_200_bool != 0)
				var_197_bool = true;
		}
		if(var_197_bool != 0) {
			@irand(var_175_int, 3);
			if(var_175_int == 0) {
				if(var_173_int == 0) goto Label_623;
				@irand(var_176_int, var_173_int);
				string var_206_string; int var_207_int;
				var_176_int = var_207_int;
				func_1421(var_206_string, var_207_int);
				@PlayAnimation("all", var_206_string);
				@WaitForAnimEnd(var_177_bool);
				if(!var_177_bool) { //@nz
				} else {
			} else {
			if(var_175_int == 1) {
				@rand(var_178_float, 4);
				@Sleep((var_178_float + 1), var_179_bool);
				if(!var_179_bool) { //@nz
					goto Label_652;
				}
			} else if(var_174_int != 0) {
				goto Label_652;
			}
			}
					bool var_209_bool;
					func_655(var_209_bool);
					var_210_bool = !var_209_bool; //@nz
					if(var_210_bool == 0) goto Label_647;
			}
		}
	Label_652:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_647:
		@ResetAAS();
		var_174_int += 1;
	}
	
}


void func_833(object var_0_object, bool var_62_bool)
{
	cvector var_65_cvector;
	@GetDirection(var_65_cvector);
	cvector var_67_cvector;
	func_986(var_67_cvector, var_0_object);
	cvector var_66_cvector;
	var_67_cvector = var_66_cvector;
	float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1357(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= -0.34202012;
}


void func_1347(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_453(bool var_164_bool)
{
	var_164_bool = true;
}


// @pe
void func_1481(void)
{
	func_1504();
	bool var_90_bool;
	func_1409(var_90_bool, "quest_d3_03", "fail");
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_82_object, object var_83_object)
{
	var_0_object = var_83_object;
	var_1_object = var_82_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_83_object, "Neutral");
		var_0_object->SetMessage(510904); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(510905, 35745, 12053); //@t
		var_0_object->AddReply(534166, -1, 35746); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_108_bool;
	func_1583(var_108_bool);
	if(var_108_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1286(var_2_object);
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


// @pe
void func_1357(float var_73_float, cvector var_74_cvector, cvector var_75_cvector)
{
	var_80_float = sqrt((var_74_cvector | var_74_cvector) * (var_75_cvector | var_75_cvector));
	var_73_float = (var_74_cvector | var_75_cvector) / var_80_float;
}


// @pe
void func_849(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_858(var_13_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1491(void)
{
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 84, 2, 512166);
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_1530(var_27_bool, var_28_object, 27);
}
EMIT "Stack[-1] = 0";


void func_469(object var_0_object, object var_1_object)
{
	float var_145_float; cvector var_146_cvector; cvector var_147_cvector; bool var_148_bool; object var_149_object; bool var_150_bool;
	@rand(var_145_float, 0.5);
	@Sleep(var_145_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_481:
				@GetPosition(var_147_cvector);
				float var_154_float;
				func_528(var_154_float);
				@GetRandomPFPointInCircle(var_146_cvector, var_147_cvector, var_154_float, var_148_bool);
				if(var_148_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_481;
			}
				var_1_object = false;
		}
		}
		goto Label_497;

	Label_497:
		object var_158_object; cvector var_159_cvector;
		var_146_cvector = var_159_cvector;
		func_556(var_158_object, var_159_cvector);
		var_158_object = var_149_object;
		if(var_149_object != null) {
			@RotatePath(var_149_object, var_150_bool);
			if(var_150_bool != 0) {
				bool var_164_bool;
				func_453(var_164_bool);
				@FollowPath(var_149_object, var_164_bool, var_150_bool);
				var_149_object = null;
				if(var_150_bool != 0) {
					TaskCall(4);
					func_576();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_149_object = null;
	}
	
}


void func_981(cvector var_82_cvector)
{
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
}


void func_1365(int var_69_int, int var_70_int)
{
	object var_72_object;
	@CreateIntVector(var_72_object);
	var_72_object->add(var_69_int);
	var_72_object->add(var_70_int);
	@SendWorldWndMessage(3, var_72_object);
}
EMIT "Stack[-1] = 0";


void func_986(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_858(object var_13_object)
{
	cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; string var_28_string; object var_29_object; bool var_30_bool; bool var_31_bool; float var_32_float; cvector var_33_cvector;
	if(var_13_object == null) {
		func_949("fdie");
	} else {
		var_13_object->GetPosition(var_24_cvector);
		@GetPosition(var_25_cvector);
		@GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_67_float = GetByIndex(var_27_cvector, 0);
		var_68_float = GetByIndex(var_26_cvector, 0);
		var_70_float = GetByIndex(var_27_cvector, 2);
		var_71_float = GetByIndex(var_26_cvector, 2);
		if(((var_67_float * var_68_float) + (var_70_float * var_71_float)) >= 0)
			var_28_string = "fdie";
		else
			var_28_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_13_object = var_29_object;
		var_78_bool = IsFuncExist(var_13_object, "GetScriptProperty", 2);
		if(var_78_bool != 0) {
			var_13_object->HasScriptProperty(var_30_bool, "Owner");
			if(var_30_bool != 0) {
				var_13_object->GetScriptProperty(var_29_object, "Owner");
				if(var_29_object == null)
					var_13_object = var_29_object;
			}
		}
		var_85_bool = IsFuncExist(var_29_object, "@GetEyesHeight", 1);
		if(var_85_bool != 0) {
			var_29_object->GetEyesHeight(var_32_float);
			var_33_cvector = [0.0, 0.0, 0.0];
			var_86_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_86_float;
			SetByIndex(var_33_cvector, 1) = var_86_float;
			@LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = true;
		} else {
			var_31_bool = false;

		}
		string var_88_string;
		var_28_string = var_88_string;
		func_1306(var_88_string);
		@PlayAnimation("all", var_28_string);
		@WaitForAnimEnd();
		if(var_31_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_28_string);
		@RemoveEnvelope();
		var_29_object = null;
	}
	
}


void func_1114(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_986(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1347(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1176:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1070(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1176;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1182(var_61_float, var_62_cvector, var_63_cvector);
}


// @pe
void func_1630(bool var_11_bool, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_1046(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
}


void func_1504(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 86, 2, 512168);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_1530(var_87_bool, var_88_object, 27);
}
EMIT "Stack[-1] = 0";


void func_993(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


void func_1377(object var_58_object, object var_59_object, int var_60_int)
{
	int var_64_int;
	var_59_object->GetItemID(var_64_int);
	int var_65_int;
	@GetInvItemProperty(var_65_int, var_64_int, "Category");
	bool var_66_bool;
	var_58_object->AddItem(var_66_bool, var_59_object, var_65_int, var_60_int);
	if(!var_66_bool) { //@nz
		var_58_object->DropItems(var_59_object, var_60_int);
	} else {
		int var_69_int; int var_70_int;
		var_64_int = var_69_int;
		var_60_int = var_70_int;
		func_1365(var_69_int, var_70_int);
	}
	
}


// @pe
void func_1637(object var_47_object)
{
	object var_48_object;
	var_47_object = var_48_object;
	TaskCall(5);
	func_692(var_49_object, var_50_cvector, var_51_bool, var_48_object);
	TaskReturn();
}


void func_1005(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_1517(object var_36_object)
{
	object var_38_object;
	@GetDiaryRoot(var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_36_object = false;
	}
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_1010(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_1005(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1396(object var_53_object, string var_54_string, int var_55_int)
{
	object var_57_object;
	@CreateInvItem(var_57_object);
	var_57_object->SetItemName(var_54_string);
	object var_58_object; object var_59_object; int var_60_int;
	var_53_object = var_58_object;
	var_57_object = var_59_object;
	var_55_int = var_60_int;
	func_1377(var_58_object, var_59_object, var_60_int);
}
EMIT "Stack[-1] = 0";


void func_1269(void)
{
	bool var_124_bool;
	@CameraSwitchToNormal();
	bool var_125_bool;
	func_1583(var_125_bool);
	if(var_125_bool != 0) {
	} else {
		@HasAnimationTrack(var_124_bool, "head");
		if(var_124_bool == 0) goto Label_1285;
		@UnlookAsync("head");
	}
Label_1285:
	
}


void func_1530(bool var_27_bool, object var_28_object, int var_29_int)
{
	object var_36_object;
	func_1517(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	object var_34_object;
	var_33_object->Find(var_29_int, var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_29_int);
		var_27_bool = false;
	}
	var_34_object->AddChild(var_28_object);
	@SendWorldWndMessage(7);
	int var_35_int;
	var_28_object->GetCategory(var_35_int);
	@SetDiarySection(var_35_int);
	var_27_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


