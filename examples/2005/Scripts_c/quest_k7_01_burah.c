// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1419();
			if(var_8_bool == 27656) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1645();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_1719();
				object var_80_object = var_1_object;
				func_1682(var_0_object);
				object var_104_object = var_1_object;
				func_1578(var_0_object);
			}
			if(var_8_bool == 27454) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_1626();
			}
			if(var_8_bool == 27456) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_1594();
			}
			if(var_8_bool == 27460) {
				object var_161_object = var_1_object;
				func_1632(var_0_object);
			}
			if(var_8_bool == 27660) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_1645();
				object var_181_object = var_1_object;
				func_1682(var_0_object);
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_object;
				func_1719();
				object var_185_object = var_1_object;
				func_1578(var_0_object);
			}
			if(var_8_bool == 27669) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_1693();
				object var_202_object = var_1_object;
				func_1703(var_0_object);
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_1713();
			}
			if(var_7_cvector == 27653) {
				bool var_226_bool;
				func_1772(var_1_object);
				if(var_226_bool != 0) {
					object var_232_object; object var_233_object;
					var_232_object = var_1_object;
					var_233_object = var_0_object;
					func_1676();
					func_240(var_8_bool, "Neutral");
					var_0_object->SetMessage(526373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526374, 27655, 27654); //@t
					var_0_object->AddReply(528676, 27655, 30089); //@t
					return 0;
				}
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526173); //@t
				var_0_object->ClearReplies(); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_1736(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_1748(var_1_object);
					if(var_264_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(526174, 27455, 27454); //@t
				bool var_273_bool = false;
				bool var_274_bool;
				func_1736(var_1_object);
				if(var_274_bool != 0) {
					bool var_276_bool;
					func_1725(var_276_bool, var_1_object);
					if(var_276_bool != 0)
						var_273_bool = true;
				}
				if(var_273_bool != 0)
					var_0_object->AddReply(526178, 27459, 27458); //@t
				bool var_288_bool;
				func_1760(var_1_object);
				if(var_288_bool != 0)
					var_0_object->AddReply(526378, 27659, 27658); //@t
				bool var_297_bool;
				func_1784(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(526387, 27668, 27667); //@t
				var_0_object->AddReply(526181, -1, 27461); //@t
				var_0_object->AddReply(528675, -1, 30088); //@t
				return 0;
			}
			if(var_7_cvector == 27668) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526389, -1, 27669); //@t
				return 0;
			}
			if(var_7_cvector == 27659) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526380, -1, 27660); //@t
				return 0;
			}
			if(var_7_cvector == 27459) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528687, 30103, 30102); //@t
				return 0;
			}
			if(var_7_cvector == 30103) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528689, 30105, 30104); //@t
				return 0;
			}
			if(var_7_cvector == 30105) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528691, 30107, 30106); //@t
				var_0_object->AddReply(528697, 30113, 30112); //@t
				return 0;
			}
			if(var_7_cvector == 30113) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528699, 30107, 30114); //@t
				return 0;
			}
			if(var_7_cvector == 30107) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528693, 30109, 30108); //@t
				return 0;
			}
			if(var_7_cvector == 30109) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528702, 30118, 30117); //@t
				var_0_object->AddReply(528700, 30116, 30115); //@t
				return 0;
			}
			if(var_7_cvector == 30116) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528704, 30118, 30119); //@t
				return 0;
			}
			if(var_7_cvector == 30118) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528695, 30111, 30110); //@t
				return 0;
			}
			if(var_7_cvector == 30111) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526180, -1, 27460); //@t
				return 0;
			}
			if(var_7_cvector == 27455) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528685, 30101, 30100); //@t
				return 0;
			}
			if(var_7_cvector == 30101) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528686); //@t
				var_0_object->ClearReplies(); //@t
				bool var_406_bool;
				func_1725(var_406_bool, var_1_object);
				if(!var_406_bool) //@nz
					var_0_object->AddReply(526176, -1, 27456); //@t
				bool var_412_bool;
				func_1725(var_412_bool, var_1_object);
				if(var_412_bool != 0)
					var_0_object->AddReply(526177, 27459, 27457); //@t
				return 0;
			}
			if(var_7_cvector == 27655) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(526375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528677, 30092, 30091); //@t
				return 0;
			}
			if(var_7_cvector == 30092) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528679, 30094, 30093); //@t
				var_0_object->AddReply(528681, 30094, 30095); //@t
				return 0;
			}
			if(var_7_cvector == 30094) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528682, 30098, 30097); //@t
				return 0;
			}
			if(var_7_cvector == 30098) {
				func_240(var_8_bool, "Neutral");
				var_0_object->SetMessage(528683); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526376, -1, 27656); //@t
				var_0_object->AddReply(526377, -1, 27657); //@t
				return 0;
			}
			var_3_string = true;
			bool var_451_bool;
			func_1964(var_451_bool);
			if(var_451_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x107";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_871(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1426(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1426(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_984();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_999();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_942();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1163(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_911(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_891(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1426(var_53_object);
					var_53_object = var_52_object;
					func_1311(var_51_bool, var_52_object);
				}
			} else {
				func_906(var_7_int);
				func_933();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_933();
		else
			func_1391("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1124();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1154(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_822(var_25_object);
			func_1391("Neutral");
			func_942();
			func_933();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1163(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1540(float var_28_float)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_30_float = var_28_float;
}


void func_1796(void)
{
	object var_168_object;
	@CreateDiaryEntry(var_168_object, 422, 1, 526221);
	bool var_172_bool; object var_173_object;
	var_168_object = var_173_object;
	func_1861(var_172_bool, var_173_object, 416);
}
EMIT "Stack[-1] = 0";


void func_1528(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1545(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1426(var_39_object);
	var_39_object = var_38_object;
	func_1253(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1168(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1958(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1956(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1960(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1962(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1939(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_300_bool = !var_36_bool; //@nz
		if(var_300_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_301_object;
	var_27_object = var_301_object;
	func_1236();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1809(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 434, 2, 526390);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1861(var_36_bool, var_37_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1554(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1561(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1554(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1053(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1163(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1561(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1163(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1554(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1108;
			goto Label_1119;
			}
				Label_1108:
					bool var_59_bool;
					func_1122(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1114;
			}
		}
	Label_1119:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1114:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1822(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 435, 2, 526391);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_1861(var_59_bool, var_60_object, 434);
}
EMIT "Stack[-1] = 0";


void func_1311(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1404(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


// @pe
void func_1578(object var_105_object)
{
	object var_109_object;
	func_1889(var_109_object);
	object var_106_object;
	var_109_object = var_106_object;
	func_1906(var_106_object, "pt_map_burah_home", (float)2);
	object var_129_object;
	func_1889(var_129_object);
	var_105_object->ShowMap(var_129_object);
}


void func_1835(void)
{
	object var_192_object;
	@CreateDiaryEntry(var_192_object, 437, 2, 526393);
	bool var_196_bool; object var_197_object;
	var_192_object = var_197_object;
	func_1861(var_196_bool, var_197_object, 434);
}
EMIT "Stack[-1] = 0";


// @pe
void func_822(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1848(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1594(void)
{
	object var_141_object;
	int var_142_int;
	func_1442(var_142_int, "k7q01CorpseMark");
	if(var_142_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_150_object;
		func_1889(var_150_object);
		var_150_object = var_141_object;
		float var_155_float;
		func_1540(var_155_float);
		var_141_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_155_float);
		bool var_156_bool;
		func_1528(var_156_bool, "quest_k7_01", "place_corpse");
		var_141_object = null;
	}
}


void func_1348(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1545(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1404(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1861(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1848(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1626(void)
{
	@SetVariable("ook7Burah1", 1);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1772(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1676();
			func_240(var_193_object, "Neutral");
			var_0_object->SetMessage(526373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526374, 27655, 27654); //@t
			var_0_object->AddReply(528676, 27655, 30089); //@t
		} else {
					func_240(var_193_object, "Neutral");
					var_0_object->SetMessage(526173); //@t
					var_0_object->ClearReplies(); //@t
					bool var_245_bool = false;
					bool var_246_bool;
					func_1736(var_1_object);
					if(var_246_bool != 0) {
						bool var_252_bool;
						func_1748(var_1_object);
						if(var_252_bool != 0)
							var_245_bool = true;
					}
					if(var_245_bool != 0)
						var_0_object->AddReply(526174, 27455, 27454); //@t
					bool var_261_bool = false;
					bool var_262_bool;
					func_1736(var_1_object);
					if(var_262_bool != 0) {
						bool var_264_bool;
						func_1725(var_264_bool, var_1_object);
						if(var_264_bool != 0)
							var_261_bool = true;
					}
					if(var_261_bool != 0)
						var_0_object->AddReply(526178, 27459, 27458); //@t
					bool var_276_bool;
					func_1760(var_1_object);
					if(var_276_bool != 0)
						var_0_object->AddReply(526378, 27659, 27658); //@t
					bool var_285_bool;
					func_1784(var_1_object);
					if(var_285_bool != 0)
						var_0_object->AddReply(526387, 27668, 27667); //@t
					var_0_object->AddReply(526181, -1, 27461); //@t
					var_0_object->AddReply(528675, -1, 30088); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_1964(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1391(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_239;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_239:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1632(object var_161_object)
{
	@SetVariable("k7q01", 4);
	func_1796();
	int var_164_int;
	var_161_object->RemoveItemByType(var_164_int, "bird_balahon", 1);
}


void func_1889(object var_17_object)
{
	object var_20_object; object var_21_object;
	@GetMainOutdoorScene(var_20_object);
	if(var_20_object == null) {
		@Trace("Can't find main outdoor scene");
		var_21_object = null;
		var_21_object = var_17_object;
	}
	var_20_object->GetMap(var_21_object);
	var_21_object = var_17_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1122(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1124(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_871(object var_0_object)
{
	bool var_7_bool;
	func_1163(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_867();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1053();
	}
}
EMIT "Return(); Pop(0)";


void func_1129(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1645(void)
{
	object var_17_object;
	func_1889(var_17_object);
	object var_16_object;
	var_17_object = var_16_object;
	float var_28_float;
	func_1540(var_28_float);
	var_16_object->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, var_28_float);
	func_1809();
	func_1822();
	object var_62_object;
	func_1447(var_62_object, "quest_k7_03");
	bool var_70_bool;
	func_1528(var_70_bool, "quest_k7_03", "place_family");
}
EMIT "Stack[-1] = 0";


void func_1391(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_1137(object var_209_object, string var_210_string, int var_211_int)
{
	int var_213_int;
	var_209_object->GetProperty(var_210_string, var_213_int);
	var_209_object->SetProperty(var_210_string, (var_213_int + var_211_int));
}


void func_1906(object var_106_object, string var_107_string, float var_108_float)
{
	object var_116_object;
	@GetMainOutdoorScene(var_116_object);
	if(var_116_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_114_cvector;
	cvector var_115_cvector;
	bool var_117_bool;
	var_116_object->GetLocator(var_107_string, var_117_bool, var_114_cvector, var_115_cvector);
	if(!var_117_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_107_string) + " doesnt exist");
	var_116_object->GetMap(var_106_object);
	if(var_106_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_127_float = GetByIndex(var_114_cvector, 0);
	var_128_float = GetByIndex(var_114_cvector, 2);
	var_106_object->SetMapParams(var_127_float, var_128_float, var_108_float);
}
EMIT "Stack[-2] = 0";


void func_1398(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_1144(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_891(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1154(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1404(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1964(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1154(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1144(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_906(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1163(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1676(void)
{
	@SetVariable("ook7Burah2", 1);
}


void func_1419(void)
{
	bool var_10_bool;
	func_1964(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_911(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1129(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1168(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1432(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1964(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1230;
		@LookAsyncCamera("head");
	}
Label_1230:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1426(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1939(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x7a2";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1682(object var_80_object)
{
	@Trace("tvirin 5 is given");
	object var_83_object;
	var_80_object = var_83_object;
	func_1508(var_83_object, "tvirin", 5);
}


void func_1432(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1693(void)
{
	func_1835();
	bool var_199_bool;
	func_1528(var_199_bool, "quest_k7_03", "completed");
}


void func_1442(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1956(int var_180_int)
{
	var_180_int = 515592;
}


void func_933(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1958(int var_179_int)
{
	var_179_int = 511961;
}


// @pe
void func_1703(object var_202_object)
{
	@Trace("money2000 is given");
	object var_205_object;
	var_202_object = var_205_object;
	func_1470(var_205_object, 2000);
}


void func_1960(string var_181_string)
{
	var_181_string = "ui/NPC_Burah.png";
}


void func_1447(object var_62_object, string var_63_string)
{
	object var_66_object;
	@GetMainOutdoorScene(var_66_object);
	object var_67_object;
	@AddBlankActor(var_67_object, var_66_object, var_63_string, (var_63_string + ".bin"));
	var_67_object = var_62_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1962(string var_182_string)
{
	var_182_string = "ui/NPC_Burah_b.png";
}


void func_1964(bool var_75_bool)
{
	var_75_bool = true;
}


void func_942(void)
{
	@KillTimer(10);
}


// @pe
void func_1713(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1458(int var_99_int, int var_100_int)
{
	object var_102_object;
	@CreateIntVector(var_102_object);
	var_102_object->add(var_99_int);
	var_102_object->add(var_100_int);
	@SendWorldWndMessage(3, var_102_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1719(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1725(bool var_264_bool, object var_265_object)
{
	object var_267_object;
	var_265_object = var_267_object;
	bool var_266_bool;
	func_1521(var_266_bool, var_267_object, "bird_balahon");
	if(var_266_bool != 0) {
		var_264_bool = true;
		return 0;
	}
	var_264_bool = false;
}


void func_1470(object var_205_object, int var_206_int)
{
	int var_208_int;
	object var_209_object;
	var_205_object = var_209_object;
	int var_211_int;
	func_1137(var_209_object, "money", var_211_int);
	if(var_211_int > 0) {
		@GetInvItemByName(var_208_int, "Money");
		int var_218_int; int var_219_int;
		var_208_int = var_218_int;
		var_206_int = var_219_int;
		func_1458(var_218_int, var_219_int);
	}
}


// @pe
void func_1736(bool var_246_bool)
{
	int var_248_int;
	func_1442(var_248_int, "k7q01");
	if(var_248_int == 3)
		var_246_bool = true;
	var_246_bool = false;
}


void func_1489(object var_88_object, object var_89_object, int var_90_int)
{
	int var_94_int;
	var_89_object->GetItemID(var_94_int);
	int var_95_int;
	@GetInvItemProperty(var_95_int, var_94_int, "Category");
	bool var_96_bool;
	var_88_object->AddItem(var_96_bool, var_89_object, var_95_int, var_90_int);
	if(!var_96_bool) { //@nz
		var_88_object->DropItems(var_89_object, var_90_int);
	} else {
		int var_99_int; int var_100_int;
		var_94_int = var_99_int;
		var_90_int = var_100_int;
		func_1458(var_99_int, var_100_int);
	}
	
}


void func_1236(void)
{
	bool var_303_bool;
	@CameraSwitchToNormal();
	bool var_304_bool;
	func_1964(var_304_bool);
	if(var_304_bool != 0) {
	} else {
		@HasAnimationTrack(var_303_bool, "head");
		if(var_303_bool == 0) goto Label_1252;
		@UnlookAsync("head");
	}
Label_1252:
	
}


// @pe
void func_1748(bool var_252_bool)
{
	int var_254_int;
	func_1442(var_254_int, "ook7Burah1");
	if(var_254_int == 0) {
		var_252_bool = true;
		return 0;
	}
	var_252_bool = false;
}


// @pe
void func_984(void)
{
	func_1124();
	func_942();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1760(bool var_276_bool)
{
	int var_278_int;
	func_1442(var_278_int, "k7q03");
	if(var_278_int == 0) {
		var_276_bool = true;
		return 0;
	}
	var_276_bool = false;
}


void func_1508(object var_83_object, string var_84_string, int var_85_int)
{
	object var_87_object;
	@CreateInvItem(var_87_object);
	var_87_object->SetItemName(var_84_string);
	object var_88_object; object var_89_object; int var_90_int;
	var_83_object = var_88_object;
	var_87_object = var_89_object;
	var_85_int = var_90_int;
	func_1489(var_88_object, var_89_object, var_90_int);
}
EMIT "Stack[-1] = 0";


void func_1253(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1311(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1348(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1348(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1311(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1309;
	
Label_1309:
	var_37_bool = true;
	
}


void func_999(void)
{
	@StopGroup0();
	func_942();
	func_1391("Neutral");
	func_933();
}


// @pe
void func_1772(bool var_199_bool)
{
	int var_201_int;
	func_1442(var_201_int, "ook7Burah2");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


// @pe
void func_240(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1964(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_1398(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1521(bool var_266_bool, object var_267_object, string var_268_string)
{
	int var_271_int;
	@GetInvItemByName(var_271_int, var_268_string);
	bool var_272_bool;
	var_267_object->HasItem(var_271_int, var_272_bool);
	var_272_bool = var_266_bool;
}


// @pe
void func_1784(bool var_285_bool)
{
	int var_287_int;
	func_1442(var_287_int, "k7q03");
	if(var_287_int == 2)
		var_285_bool = true;
	var_285_bool = false;
}


