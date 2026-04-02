// @GLOBALS: 0:string:,1:bool:,2:object:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		var_0_bool = true;
		func_145();
		func_1781();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, float var_12_float, float var_13_float, int var_14_int)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_18_bool; object var_19_object;
			var_14_int = var_19_object;
			func_1339(var_18_bool, var_19_object);
			enable OnUse;
			object var_32_object;
			var_14_int = var_32_object;
			func_1976(var_32_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, float var_12_float, float var_13_float, int var_14_int, object var_15_object, object var_16_object, object var_36_object)
		{
		bool var_38_bool;
		@IsPlayerActor(var_36_object, var_38_bool);
		if(var_38_bool != 0) {
			func_145();
			object var_40_object;
			var_36_object = var_40_object;
			TaskCall(2);
			func_148(var_40_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, float var_12_float, float var_13_float, int var_14_int)
	{
		object var_16_object;
		if(var_14_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_14_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_16_object, "player");
			bool var_24_bool = false;
			if(var_16_object != 0) {
				float var_26_float; object var_27_object;
				var_16_object = var_27_object;
				func_1321(var_26_float, var_27_object);
				if(var_26_float <= 62500.0)
					var_24_bool = true;
			}
			if(var_24_bool != 0) {
				object var_36_object;
				var_16_object = var_36_object;
				func_89();
			}
			var_16_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		func_193();
		func_1781();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, float var_12_float, float var_13_float, int var_14_int)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_18_bool; object var_19_object;
			var_14_int = var_19_object;
			func_1339(var_18_bool, var_19_object);
			enable OnUse;
			object var_32_object;
			var_14_int = var_32_object;
			func_1976(var_32_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		func_1781();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, float var_13_float, float var_14_float, int var_15_int)
	{
		if(1 != 0) {
			func_1615();
			if(var_15_int == 19051) {
				object var_20_object = var_1_object;
				func_1817(var_0_bool);
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_bool;
				func_1799();
			}
			if(var_15_int == 19062) {
				object var_80_object = var_1_object;
				func_1817(var_0_bool);
			}
			if(var_14_float == 19048) {
				bool var_84_bool = false;
				bool var_85_bool = false;
				bool var_86_bool;
				func_1843(var_86_bool, var_1_object);
				if(var_86_bool != 0) {
					bool var_94_bool;
					func_1853(var_1_object);
					if(var_94_bool != 0)
						var_85_bool = true;
				}
				if(var_85_bool != 0) {
					bool var_102_bool;
					func_1865(var_1_object);
					if(var_102_bool != 0)
						var_84_bool = true;
				}
				if(var_84_bool != 0) {
					object var_108_object; object var_109_object;
					var_108_object = var_1_object;
					var_109_object = var_0_bool;
					func_1805();
					func_557(var_15_int, "Neutral");
					var_0_bool->SetMessage(517910); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520406, 21615, 21614); //@t
					var_0_bool->AddReply(517911, 19050, 19049); //@t
					return 0;
				}
				bool var_131_bool = false;
				bool var_132_bool = false;
				bool var_133_bool;
				func_1843(var_133_bool, var_1_object);
				if(!var_133_bool) { //@nz
					bool var_136_bool;
					func_1853(var_1_object);
					if(var_136_bool != 0)
						var_132_bool = true;
				}
				if(var_132_bool != 0) {
					bool var_138_bool;
					func_1877(var_1_object);
					if(var_138_bool != 0)
						var_131_bool = true;
				}
				if(var_131_bool != 0) {
					object var_144_object; object var_145_object;
					var_144_object = var_1_object;
					var_145_object = var_0_bool;
					func_1811();
					func_557(var_15_int, "Neutral");
					var_0_bool->SetMessage(517915); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(517916, 19055, 19054); //@t
					var_0_bool->AddReply(520410, 21620, 21619); //@t
					return 0;
				}
				bool var_156_bool;
				func_1853(var_1_object);
				if(var_156_bool != 0) {
					func_557(var_15_int, "Neutral");
					var_0_bool->SetMessage(517919); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_160_bool;
					func_1843(var_160_bool, var_1_object);
					if(var_160_bool != 0)
						var_0_bool->AddReply(517920, 19061, 19058); //@t
					bool var_165_bool;
					func_1843(var_165_bool, var_1_object);
					if(!var_165_bool) //@nz
						var_0_bool->AddReply(517921, 19063, 19059); //@t
					var_0_bool->AddReply(517922, -1, 19060); //@t
					return 0;
				}
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(517927); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518197, -1, 19310); //@t
				var_0_bool->AddReply(518198, -1, 19311); //@t
				var_0_bool->AddReply(517928, -1, 19066); //@t
				return 0;
			}
			if(var_14_float == 19063) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(517925); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517926, -1, 19064); //@t
				return 0;
			}
			if(var_14_float == 19061) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(517923); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517924, -1, 19062); //@t
				return 0;
			}
			if(var_14_float == 21620) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(520411); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520412, 19055, 21621); //@t
				return 0;
			}
			if(var_14_float == 19055) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(517917); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517918, 21618, 19056); //@t
				return 0;
			}
			if(var_14_float == 21618) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(520409); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520413, 21624, 21623); //@t
				var_0_bool->AddReply(520418, -1, 21628); //@t
				return 0;
			}
			if(var_14_float == 21624) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(520414); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520415, 21626, 21625); //@t
				var_0_bool->AddReply(520419, -1, 21629); //@t
				return 0;
			}
			if(var_14_float == 21626) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(520416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520417, -1, 21627); //@t
				return 0;
			}
			if(var_14_float == 19050) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(517912); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517913, -1, 19051); //@t
				var_0_bool->AddReply(517914, -1, 19052); //@t
				return 0;
			}
			if(var_14_float == 21615) {
				func_557(var_15_int, "Neutral");
				var_0_bool->SetMessage(520407); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520408, 19050, 21616); //@t
				return 0;
			}
			var_3_object = true;
			bool var_257_bool;
			func_1797(var_257_bool);
			if(var_257_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x244";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, float var_13_float, float var_14_float, int var_15_int)
	{
		if(1 != 0) {
			func_1615();
			if(var_14_float == 42563) {
				func_1101(var_15_int, "Neutral");
				var_0_bool->SetMessage(540554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540555, -1, 42564); //@t
				var_0_bool->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_object = true;
			bool var_39_bool;
			func_1797(var_39_bool);
			if(var_39_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x464";
	
	}

}


maintask task_8
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		@SetTimeEvent(0, 144);
		func_1173(var_11_float, var_12_float, var_13_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
	{
		func_1781();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int, object var_14_object)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) { //@nz
			disable OnUse;
			bool var_18_bool; object var_19_object;
			var_14_object = var_19_object;
			func_1339(var_18_bool, var_19_object);
			enable OnUse;
			object var_32_object;
			var_14_object = var_32_object;
			func_1976(var_32_object);
		}
	}

}


	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int, int var_14_int, float var_15_float, string var_18_string)
	{
	bool var_20_bool;
	if(var_18_string == "cleanup") {
		var_23_bool = GlobalVars[1];
		GlobalVars[1] = true;
		@IsLoaded(var_20_bool);
		if(!var_20_bool) { //@nz
			object var_25_object;
			func_1622(var_25_object);
			@RemoveActor(var_25_object);
		}
	} else if(var_18_string == "restore") {
		var_30_bool = GlobalVars[1];
		GlobalVars[1] = false;
	}
	
	}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int)
{
	var_14_bool = GlobalVars[1];
	if(var_14_bool != 0) {
		object var_15_object;
		func_1622(var_15_object);
		@RemoveActor(var_15_object);
	}
}


// @pe
void OnGameTime(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, float var_11_float, float var_12_float, int var_13_int, int var_14_int, float var_15_float)
{
	if(var_14_int == 0) {
		string var_18_string = "cleanup";
		func_1757();
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_57_bool;
	func_1359(var_57_bool);
	if(!var_57_bool) goto Label_0; //@nz
}


// @pe
void func_256(string var_150_string, string var_151_string, int var_152_int)
{
	if(var_152_int == 0) {
	} else {
		var_150_string += var_152_int;
	}
	
}


void func_1922(bool var_31_bool, object var_32_object, int var_33_int)
{
	object var_40_object;
	func_1909(var_40_object);
	object var_37_object;
	var_40_object = var_37_object;
	object var_38_object;
	var_37_object->Find(var_33_int, var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_33_int);
		var_31_bool = false;
	}
	var_38_object->AddChild(var_32_object);
	@SendWorldWndMessage(7);
	int var_39_int;
	var_32_object->GetCategory(var_39_int);
	@SetDiarySection(var_39_int);
	var_31_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1795(string var_102_string)
{
	var_102_string = "ui/NPC_Citizen3_b.png";
}


void func_1793(string var_101_string)
{
	var_101_string = "ui/NPC_Citizen3.png";
}


void func_1797(bool var_94_bool)
{
	var_94_bool = false;
}


// @pe
void func_1799(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_264(int var_143_int, string var_144_string)
{
	int var_147_int; bool var_148_bool;
	var_147_int = 0;
	
	for(;;) {
		string var_150_string; string var_151_string; int var_152_int;
		var_144_string = var_151_string;
		var_147_int = var_152_int;
		func_256(var_150_string, var_151_string, var_152_int);
		@HasAnimation(var_148_bool, "all", var_150_string);
		if(!var_148_bool) //@nz
			break;
		var_147_int += 1;
	}
	var_147_int = var_143_int;
}


void func_1544(bool var_294_bool, object var_295_object)
{
	bool var_303_bool; int var_304_int; string var_305_string;
	int var_307_int;
	func_1705(var_307_int);
	string var_301_string = ("d" + var_307_int) + "m";
	int var_302_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_295_object->HasProperty((var_301_string + (var_302_int + 1)), var_303_bool);
			if(!var_303_bool) { //@nz
			} else {
				var_302_int += 1;
			}
		}
		if(!var_302_int) { //@nz
			var_294_bool = false;
			return 10;
		}
		var_304_int = 0;
		if(var_302_int > 1)
			@irand(var_304_int, var_302_int);
		var_295_object->GetProperty((var_301_string + (var_304_int + 1)), var_305_string);
		bool var_321_bool; string var_322_string;
		var_305_string = var_322_string;
		func_1600(var_321_bool, var_322_string);
		var_321_bool = var_294_bool;
		return 10;

	}
}


void func_1673(object var_58_object, object var_59_object, int var_60_int)
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
		func_1661(var_69_int, var_70_int);
	}
	
}


// @pe
void func_1805(void)
{
	@SetVariable("oob1Gorbun1", 1);
}


void func_13(bool var_0_bool, bool var_98_bool, cvector var_99_cvector, cvector var_100_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_106_bool; cvector var_107_cvector;
		var_99_cvector = var_107_cvector;
		func_1329(var_106_bool, var_107_cvector);
		var_116_bool = !var_106_bool; //@nz
		if(var_116_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_103_bool;
	@MovePoint(var_99_cvector, false, var_103_bool);
	if(var_103_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_103_bool);
	if(!var_103_bool) { //@nz
		var_98_bool = false;
		return 2;
	}
	var_122_float = GetByIndex(var_100_cvector, 0);
	var_123_float = GetByIndex(var_100_cvector, 2);
	@Rotate(var_122_float, var_123_float, var_103_bool);
	if(!var_103_bool) { //@nz
		var_98_bool = false;
		return 2;
	}
	var_98_bool = true;
	
}


void func_145(void)
{
	@Stop();
}


// @pe
void func_1811(void)
{
	@SetVariable("oob1Gorbun2", 1);
}


void func_148(object var_40_object)
{
	bool var_42_bool;
	@WaitForAnimEnd(var_42_bool);
	if(!var_42_bool) { //@nz
	}
	object var_44_object;
	var_40_object = var_44_object;
	func_1348(var_44_object);
	@Sleep(6);
}


// @pe
void func_1043(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_352_object, object var_353_object)
{
	var_0_bool = var_353_object;
	var_1_object = var_352_object;
	var_3_object = false;
	if(1 != 0) {
		func_1101(var_353_object, "Neutral");
		var_0_bool->SetMessage(540554); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540555, -1, 42564); //@t
		var_0_bool->AddReply(540794, -1, 42843); //@t
		goto Label_1071;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x417";
	}
Label_1071:
	bool var_374_bool;
	func_1797(var_374_bool);
	if(var_374_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1587(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1100;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1100:
		return 0;

	}
	
}


void func_1173(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_28_bool; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; float var_34_float; cvector var_35_cvector; bool var_36_bool; cvector var_37_cvector;
	@SensePlayerOnly(true);
	func_1261();
	object var_27_object;
	@GetScene(var_27_object);
	var_2_object = 0;
	
	for(;;) {
		string var_43_string;
		func_1744(var_43_string, var_2_object);
		var_27_object->GetLocator(var_43_string, var_28_bool);
		if(!var_28_bool) { //@nz
		} else {
		}
		bool var_53_bool;
		func_1359(var_53_bool);
		if(!var_53_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_1269(var_36_bool, var_37_cvector);

		for(;;) {
			@irand(var_29_int, (var_2_object + 1));
			string var_77_string; int var_78_int;
			var_29_int = var_78_int;
			func_1744(var_77_string, var_78_int);
			var_27_object->GetLocator(var_77_string, var_30_bool, var_31_cvector, var_32_cvector);
			cvector var_79_cvector;
			func_1316(var_79_cvector);
			var_33_cvector = var_31_cvector - var_79_cvector;
			float var_82_float; cvector var_83_cvector;
			var_33_cvector = var_83_cvector;
			func_1646(var_82_float, var_83_cvector);
			if(var_82_float > var_1_object) {
				@GetHeight(var_34_float);
				var_92_float = GetByIndex(var_35_cvector, 1);
				SetByIndex(var_35_cvector, 1) = (var_92_float + var_34_float);
				@CanReachByPF(var_36_bool, var_35_cvector);
				if(var_36_bool != 0) {
					var_95_float = sqrt(var_33_cvector | var_33_cvector);
					var_37_cvector = var_35_cvector - (var_33_cvector * (var_0_bool / var_95_float));
					bool var_98_bool; cvector var_99_cvector; cvector var_100_cvector;
					var_37_cvector = var_99_cvector;
					var_32_cvector = var_100_cvector;
					TaskCall(1);
					func_13(var_101_bool, var_98_bool, var_99_cvector, var_100_cvector);
					TaskReturn();
					if(var_101_bool != 0) {
						int var_125_int;
						var_29_int = var_125_int;
						TaskCall(3);
						func_198(var_125_int);
						TaskReturn();
					}
				}
			}
			@Sleep(1);
		}

	}
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


void func_1432(void)
{
	bool var_236_bool;
	@CameraSwitchToNormal();
	bool var_237_bool;
	func_1797(var_237_bool);
	if(var_237_bool != 0) {
	} else {
		@HasAnimationTrack(var_236_bool, "head");
		if(var_236_bool == 0) goto Label_1448;
		@UnlookAsync("head");
	}
Label_1448:
	
}


void func_1817(object var_20_object)
{
	@SetVariable("b1q02", 2);
	func_1896();
	float var_23_float;
	var_20_object->GetProperty("health", var_23_float);
	var_20_object->SetProperty("health", (var_23_float - 0.3));
	@Trace("blood is given");
	object var_53_object;
	var_20_object = var_53_object;
	func_1692(var_53_object, "b1q02_blood", 1);
}


void func_282(bool var_0_bool, int var_41_int, object var_42_object)
{
	var_0_bool = var_42_object;
	bool var_52_bool; object var_53_object;
	var_42_object = var_53_object;
	func_1364(var_52_bool, var_53_object, 100.0);
	if(!var_52_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_99_int;
	func_1791(var_99_int);
	var_48_object->SetNPCName(var_99_int);
	int var_100_int;
	func_1789(var_100_int);
	var_48_object->SetNPCDescription(var_100_int);
	string var_101_string;
	func_1793(var_101_string);
	var_48_object->SetPhoto(var_101_string);
	string var_102_string;
	func_1795(var_102_string);
	var_48_object->SetPhoto2(var_102_string);
	int var_103_int;
	func_1950(var_103_int);
	var_48_object->SetPlayerName(var_103_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	object var_112_object; object var_113_object;
	var_42_object = var_112_object;
	var_48_object = var_113_object;
	TaskCall(5);
	func_356(var_114_object, var_115_object, var_116_string, var_117_bool, var_112_object, var_113_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_233_bool = !var_51_bool; //@nz
		if(var_233_bool == 0) goto Label_345;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_345:
	object var_234_object;
	var_42_object = var_234_object;
	func_1432();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_1692(object var_53_object, string var_54_string, int var_55_int)
{
	object var_57_object;
	@CreateInvItem(var_57_object);
	var_57_object->SetItemName(var_54_string);
	object var_58_object; object var_59_object; int var_60_int;
	var_53_object = var_58_object;
	var_57_object = var_59_object;
	var_55_int = var_60_int;
	func_1673(var_58_object, var_59_object, var_60_int);
}
EMIT "Stack[-1] = 0";


void func_1950(int var_103_int)
{
	int var_105_int;
	@GetVariable("branch", var_105_int);
	if(var_105_int == 0) {
		var_103_int = 1;
		return 2;
	EMIT "GOTO 0x7ad";
	}
	if(var_105_int == 1) {
		var_103_int = 2;
		return 2;
	}
	var_103_int = 3;
}


void func_1316(cvector var_79_cvector)
{
	cvector var_81_cvector;
	@GetPosition(var_81_cvector);
	var_81_cvector = var_79_cvector;
}


void func_1661(int var_69_int, int var_70_int)
{
	object var_72_object;
	@CreateIntVector(var_72_object);
	var_72_object->add(var_69_int);
	var_72_object->add(var_70_int);
	@SendWorldWndMessage(3, var_72_object);
}
EMIT "Stack[-1] = 0";


void func_1321(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_1449(bool var_252_bool, object var_253_object)
{
	int var_259_int; int var_260_int;
	@GetVariable("voice_common", var_259_int);
	if(var_259_int != 0) {
		bool var_263_bool; object var_264_object;
		var_253_object = var_264_object;
		func_1507(var_263_bool, var_264_object);
		if(!var_263_bool) { //@nz
			bool var_294_bool; object var_295_object;
			var_253_object = var_295_object;
			func_1544(var_294_bool, var_295_object);
			if(!var_294_bool) { //@nz
				var_252_bool = false;
				return 4;
			}
		}
		@irand(var_260_int, 2);
		if(var_260_int != 0)
			@SetVariable("voice_common", ((var_259_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_334_bool; object var_335_object;
		var_253_object = var_335_object;
		func_1544(var_334_bool, var_335_object);
		if(!var_334_bool) { //@nz
			bool var_337_bool; object var_338_object;
			var_253_object = var_338_object;
			func_1507(var_337_bool, var_338_object);
			if(!var_337_bool) { //@nz
				var_252_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1505;
	
Label_1505:
	var_252_bool = true;
	
}


void func_1705(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_35_int = 1 + (var_37_float / 24);
}


// @pe
void func_557(object var_2_object, string var_147_string)
{
	bool var_148_bool;
	func_1797(var_148_bool);
	if(!var_148_bool) //@nz
		return 0;
	if(var_147_string == var_2_object)
		return 0;
	string var_151_string; bool var_152_bool;
	var_147_string = var_151_string;
	if(var_147_string == "")
		var_152_bool = false;
	else
		var_152_bool = true;
	func_1594(var_151_string, var_152_bool);
	var_2_object = var_147_string;
	
}


void func_1329(bool var_106_bool, cvector var_107_cvector)
{
	cvector var_111_cvector;
	@GetPosition(var_111_cvector);
	cvector var_112_cvector = var_107_cvector - var_111_cvector;
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_112_cvector, 2);
	bool var_113_bool;
	@Rotate(var_114_float, var_115_float, var_113_bool);
	var_113_bool = var_106_bool;
}


// @pe
void func_1714(bool var_33_bool, int var_34_int)
{
	int var_35_int;
	func_1705(var_35_int);
	var_33_bool = var_35_int == var_34_int;
}


// @pe
void func_1843(bool var_121_bool, object var_122_object)
{
	object var_124_object;
	var_122_object = var_124_object;
	bool var_123_bool;
	func_1889(var_123_bool, var_124_object);
	if(var_123_bool != 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_1587(string var_168_string)
{
	float var_171_float; float var_172_float;
	@lshGetAnimTimes(var_168_string, var_171_float, var_172_float);
	@lshPlayAnimation(var_171_float, var_172_float, false);
}


void func_1720(string var_167_string, int var_168_int)
{
	string var_170_string = "idle";
	if(var_168_int != 0)
		var_170_string += var_168_int;
	var_170_string = var_167_string;
}


// @pe
void func_1976(object var_32_object)
{
	bool var_33_bool;
	func_1714(var_33_bool, 1);
	if(var_33_bool != 0) {
		int var_41_int; object var_42_object;
		var_32_object = var_42_object;
		TaskCall(4);
		func_282(var_43_object, var_41_int, var_42_object);
		TaskReturn();
		return 0;
	}
	int var_241_int; object var_242_object;
	var_32_object = var_242_object;
	TaskCall(6);
	func_962(var_243_object, var_241_int, var_242_object);
	TaskReturn();
}


void func_1594(string var_151_string, bool var_152_bool)
{
	float var_157_float; float var_158_float;
	@lshGetAnimTimes(var_151_string, var_157_float, var_158_float);
	@lshPlayAnimation(var_157_float, var_158_float, var_152_bool);
}


void func_1339(bool var_18_bool, object var_19_object)
{
	cvector var_21_cvector;
	var_19_object->GetPosition(var_21_cvector);
	bool var_22_bool; cvector var_23_cvector;
	var_21_cvector = var_23_cvector;
	func_1329(var_22_bool, var_23_cvector);
	var_22_bool = var_18_bool;
}


// @pe
void func_1853(bool var_129_bool)
{
	int var_131_int;
	func_1656(var_131_int, "b1q02");
	if(var_131_int == 1)
		var_129_bool = true;
	var_129_bool = false;
}


void func_1727(int var_161_int)
{
	int var_164_int; bool var_165_bool;
	var_164_int = 0;
	
	for(;;) {
		string var_167_string; int var_168_int;
		var_164_int = var_168_int;
		func_1720(var_167_string, var_168_int);
		@HasAnimation(var_165_bool, "all", var_167_string);
		if(!var_165_bool) //@nz
			break;
		var_164_int += 1;
	}
	var_164_int = var_161_int;
}


void func_1600(bool var_286_bool, string var_287_string)
{
	bool var_289_bool;
	bool var_290_bool;
	func_1797(var_290_bool);
	if(var_290_bool != 0) {
		@lshHasSpeech(var_289_bool, var_287_string);
		if(var_289_bool != 0) {
			@lshPlaySpeech(var_287_string);
			var_286_bool = true;
		}
	}
	var_286_bool = false;
}


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


void func_962(bool var_0_bool, int var_241_int, object var_242_object)
{
	var_0_bool = var_242_object;
	bool var_252_bool; object var_253_object;
	object var_254_object;
	func_1622(var_254_object);
	var_254_object = var_253_object;
	func_1449(var_252_bool, var_253_object);
	bool var_342_bool; object var_343_object;
	var_242_object = var_343_object;
	func_1364(var_342_bool, var_343_object, 100.0);
	if(!var_342_bool) { //@nz
		var_241_int = -2;
		return 8;
	}
	object var_248_object;
	@CreateDialog(var_248_object);
	int var_346_int;
	func_1791(var_346_int);
	var_248_object->SetNPCName(var_346_int);
	int var_347_int;
	func_1789(var_347_int);
	var_248_object->SetNPCDescription(var_347_int);
	string var_348_string;
	func_1793(var_348_string);
	var_248_object->SetPhoto(var_348_string);
	string var_349_string;
	func_1795(var_349_string);
	var_248_object->SetPhoto2(var_349_string);
	int var_350_int;
	func_1950(var_350_int);
	var_248_object->SetPlayerName(var_350_int);
	bool var_249_bool;
	@IsOverrideActive(var_249_bool);
	if(var_249_bool != 0) {
		var_241_int = -2;
		return 8;
	}
	@DoDialog(var_248_object);
	object var_352_object; object var_353_object;
	var_242_object = var_352_object;
	var_248_object = var_353_object;
	TaskCall(7);
	func_1043(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	bool var_251_bool;
	var_248_object->IsDialogEnd(var_251_bool);
	
	for(;;) {
		var_382_bool = !var_251_bool; //@nz
		if(var_382_bool == 0) goto Label_1032;
		@sync();
		var_248_object->IsDialogEnd(var_251_bool);
	}
	
Label_1032:
	object var_383_object;
	var_242_object = var_383_object;
	func_1432();
	@StopDialog(var_248_object);
	var_248_object->GetReturnValue(-1);
	int var_250_int = var_241_int;
}
EMIT "Stack[-4] = 0";


void func_1348(object var_44_object)
{
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_51_float = GetByIndex(var_50_cvector, 0);
	var_52_float = GetByIndex(var_50_cvector, 2);
	@RotateAsync(var_51_float, var_52_float);
}


void func_198(int var_125_int)
{
	string var_133_string; string var_135_string; int var_136_int; int var_137_int; int var_138_int; int var_139_int;
	if(var_125_int != 0)
		var_133_string = "ptidle" + var_125_int;
	else
		var_133_string = "ptidle";
	bool var_134_bool;
	@HasProperty(var_133_string, var_134_bool);
	if(var_134_bool != 0) {
		@GetProperty(var_133_string, var_135_string);
		int var_143_int; string var_144_string;
		var_135_string = var_144_string;
		func_264(var_143_int, var_144_string);
		var_143_int = var_136_int;
		@irand(var_137_int, var_136_int);
		string var_158_string; string var_159_string; int var_160_int;
		var_135_string = var_159_string;
		var_137_int = var_160_int;
		func_256(var_158_string, var_159_string, var_160_int);
		@PlayAnimation("all", var_158_string);
		@WaitForAnimEnd();
	} else {
		int var_161_int;
		func_1727(var_161_int);
		var_161_int = var_138_int;
		if(var_138_int == 0) goto Label_246;
		@irand(var_139_int, var_138_int);
		string var_176_string; int var_177_int;
		var_139_int = var_177_int;
		func_1720(var_176_string, var_177_int);
		@PlayAnimation("all", var_176_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


// @pe
void func_1865(bool var_137_bool)
{
	int var_139_int;
	func_1656(var_139_int, "oob1Gorbun1");
	if(var_139_int == 0) {
		var_137_bool = true;
		return 0;
	}
	var_137_bool = false;
}


// @pe
void func_1101(object var_2_object, string var_359_string)
{
	bool var_360_bool;
	func_1797(var_360_bool);
	if(!var_360_bool) //@nz
		return 0;
	if(var_359_string == var_2_object)
		return 0;
	string var_363_string; bool var_364_bool;
	var_359_string = var_363_string;
	if(var_359_string == "")
		var_364_bool = false;
	else
		var_364_bool = true;
	func_1594(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	
}


void func_1359(bool var_53_bool)
{
	bool var_55_bool;
	@IsLoaded(var_55_bool);
	var_55_bool = var_53_bool;
}


void func_1615(void)
{
	bool var_17_bool;
	func_1797(var_17_bool);
	if(var_17_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1744(string var_43_string, int var_44_int)
{
	if(var_44_int == 0) {
		var_48_string = GlobalVars[0];
		var_43_string = "pt_" + var_48_string;
	} else {
		var_50_string = GlobalVars[0];
		var_43_string = ("pt_" + var_50_string) + var_44_int;
	}
	
}


void func_1364(bool var_52_bool, object var_53_object, float var_54_float)
{
	cvector var_65_cvector; bool var_72_bool;
	var_53_object->GetPosition(var_65_cvector);
	float var_64_float;
	var_53_object->GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (var_73_float + var_64_float);
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	@GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_64_float);
	cvector var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_77_float = sqrt(var_67_cvector | var_67_cvector);
	var_67_cvector /= var_77_float;
	cvector var_68_cvector = -var_67_cvector;
	cvector var_79_cvector;
	func_1628(var_79_cvector, (var_68_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_69_cvector = ((var_67_cvector * var_54_float) + (var_79_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_71_bool;
	@IsOverrideActive(var_71_bool);
	if(var_71_bool != 0)
		var_52_bool = false;
	@StopWorld();
	@CameraTransit((var_66_cvector + var_69_cvector), var_68_cvector);
	var_92_float = GetByIndex(var_69_cvector, 0);
	var_93_float = GetByIndex(var_69_cvector, 2);
	@Rotate(var_92_float, var_93_float);
	bool var_94_bool;
	func_1797(var_94_bool);
	if(var_94_bool != 0) {
	} else {
		@HasAnimationTrack(var_72_bool, "head");
		if(var_72_bool == 0) goto Label_1426;
		@LookAsyncCamera("head");
	}
Label_1426:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_52_bool = true;
	
}


// @pe
void func_1877(bool var_186_bool)
{
	int var_188_int;
	func_1656(var_188_int, "oob1Gorbun2");
	if(var_188_int == 0) {
		var_186_bool = true;
		return 0;
	}
	var_186_bool = false;
}


void func_1622(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_1628(cvector var_79_cvector, cvector var_80_cvector)
{
	float var_83_float = sqrt(var_80_cvector | var_80_cvector);
	if(var_83_float < 0.000001)
		var_79_cvector = [0.0, 0.0, 0.0];
	var_79_cvector = var_80_cvector / var_83_float;
}


void func_1889(bool var_123_bool, object var_124_object)
{
	float var_126_float;
	var_124_object->GetProperty("health", var_126_float);
	var_123_bool = var_126_float >= 0.4;
}


void func_1507(bool var_263_bool, object var_264_object)
{
	string var_270_string; bool var_272_bool; int var_273_int; string var_274_string;
	var_270_string = "c";
	int var_271_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_264_object->HasProperty((var_270_string + (var_271_int + 1)), var_272_bool);
			if(!var_272_bool) { //@nz
			} else {
				var_271_int += 1;
			}
		}
		if(!var_271_int) { //@nz
			var_263_bool = false;
			return 10;
		}
		var_273_int = 0;
		if(var_271_int > 1)
			@irand(var_273_int, var_271_int);
		var_264_object->GetProperty((var_270_string + (var_273_int + 1)), var_274_string);
		bool var_286_bool; string var_287_string;
		var_274_string = var_287_string;
		func_1600(var_286_bool, var_287_string);
		var_286_bool = var_263_bool;
		return 10;

	}
}


// @pe
void func_356(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_112_object, object var_113_object)
{
	var_0_bool = var_113_object;
	var_1_object = var_112_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_119_bool = false;
		bool var_120_bool = false;
		bool var_121_bool;
		func_1843(var_121_bool, var_1_object);
		if(var_121_bool != 0) {
			bool var_129_bool;
			func_1853(var_1_object);
			if(var_129_bool != 0)
				var_120_bool = true;
		}
		if(var_120_bool != 0) {
			bool var_137_bool;
			func_1865(var_1_object);
			if(var_137_bool != 0)
				var_119_bool = true;
		}
		if(var_119_bool != 0) {
			object var_143_object; object var_144_object;
			var_143_object = var_1_object;
			var_144_object = var_0_bool;
			func_1805();
			func_557(var_113_object, "Neutral");
			var_0_bool->SetMessage(517910); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520406, 21615, 21614); //@t
			var_0_bool->AddReply(517911, 19050, 19049); //@t
		} else {
					bool var_179_bool = false;
					bool var_180_bool = false;
					bool var_181_bool;
					func_1843(var_181_bool, var_1_object);
					if(!var_181_bool) { //@nz
						bool var_184_bool;
						func_1853(var_1_object);
						if(var_184_bool != 0)
							var_180_bool = true;
					}
					if(var_180_bool != 0) {
						bool var_186_bool;
						func_1877(var_1_object);
						if(var_186_bool != 0)
							var_179_bool = true;
					}
					if(var_179_bool == 0) goto Label_459;
					object var_192_object; object var_193_object;
					var_192_object = var_1_object;
					var_193_object = var_0_bool;
					func_1811();
					func_557(var_113_object, "Neutral");
					var_0_bool->SetMessage(517915); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(517916, 19055, 19054); //@t
					var_0_bool->AddReply(520410, 21620, 21619); //@t
		}
	}
Label_527:
	for(;;) {
		bool var_166_bool;
		func_1797(var_166_bool);
		if(var_166_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1587(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_556;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_556:
			return 0;

		}

	}
	
Label_459:
	bool var_204_bool;
	func_1853(var_1_object);
	if(var_204_bool != 0) {
		func_557(var_113_object, "Neutral");
		var_0_bool->SetMessage(517919); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_208_bool;
		func_1843(var_208_bool, var_1_object);
		if(var_208_bool != 0)
			var_0_bool->AddReply(517920, 19061, 19058); //@t
		bool var_213_bool;
		func_1843(var_213_bool, var_1_object);
		if(!var_213_bool) //@nz
			var_0_bool->AddReply(517921, 19063, 19059); //@t
		var_0_bool->AddReply(517922, -1, 19060); //@t
		goto Label_527;
	}
	func_557(var_113_object, "Neutral");
	var_0_bool->SetMessage(517927); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518197, -1, 19310); //@t
	var_0_bool->AddReply(518198, -1, 19311); //@t
	var_0_bool->AddReply(517928, -1, 19066); //@t
	goto Label_527;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x168";


// @pe
void func_1638(float var_71_float, float var_72_float)
{
	if(var_72_float < 0)
		var_71_float = -var_72_float;
	else
		var_72_float = var_71_float;
	
}


void func_1896(void)
{
	object var_27_object;
	@CreateDiaryEntry(var_27_object, 202, 2, 517942);
	bool var_31_bool; object var_32_object;
	var_27_object = var_32_object;
	func_1922(var_31_bool, var_32_object, 200);
}
EMIT "Stack[-1] = 0";


void func_1261(void)
{
	string var_40_string;
	@GetProperty("loc", var_40_string);
	var_42_string = GlobalVars[0];
	var_40_string = var_42_string;
	GlobalVars[0] = var_42_string;
}


// @pe
void func_1646(float var_82_float, cvector var_83_cvector)
{
	var_84_float = GetByIndex(var_83_cvector, 0);
	var_85_float = GetByIndex(var_83_cvector, 0);
	var_87_float = GetByIndex(var_83_cvector, 2);
	var_88_float = GetByIndex(var_83_cvector, 2);
	var_82_float = sqrt((var_84_float * var_85_float) + (var_87_float * var_88_float));
}


void func_1269(bool var_0_bool, object var_1_object)
{
	cvector var_61_cvector;
	@GetAnimationOffset(var_61_cvector, "all", "walk_stopl");
	cvector var_62_cvector;
	@GetAnimationOffset(var_62_cvector, "all", "walk_stopr");
	var_67_float = GetByIndex(var_61_cvector, 2);
	var_68_float = GetByIndex(var_62_cvector, 2);
	float var_71_float;
	var_73_float = GetByIndex(var_61_cvector, 2);
	func_1638(var_71_float, (var_73_float - ((var_67_float + var_68_float) / 2.0)));
	var_1_object = var_71_float + 40;
}


void func_1909(object var_40_object)
{
	object var_42_object;
	@GetDiaryRoot(var_42_object);
	if(!var_42_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_40_object = false;
	}
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_1656(int var_131_int, string var_132_string)
{
	int var_134_int;
	@GetVariable(var_132_string, var_134_int);
	var_134_int = var_131_int;
}


void func_1789(int var_100_int)
{
	var_100_int = 515594;
}


void func_1791(int var_99_int)
{
	var_99_int = 512583;
}


