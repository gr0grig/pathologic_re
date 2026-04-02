// @GLOBALS: 0:string:,1:bool:,2:object:

task task_0
{
	void OnLoad(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, string var_6_string, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, float var_18_float, float var_19_float, int var_20_int)
	{
		bool var_21_bool;
		func_2023(var_21_bool);
		if(var_21_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_2
{
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		var_0_bool = true;
		func_185();
		func_2007();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, float var_18_float, float var_19_float, int var_20_int)
	{
		bool var_21_bool; bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			func_185();
			disable OnUse;
			bool var_24_bool; object var_25_object;
			var_20_int = var_25_object;
			func_1625(var_24_bool, var_25_object);
			enable OnUse;
			object var_38_object;
			var_20_int = var_38_object;
			func_2237(var_21_bool, var_22_bool, var_38_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, object var_5_object, string var_6_string, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, float var_18_float, float var_19_float, int var_20_int, object var_21_object, object var_22_object, object var_42_object)
		{
		bool var_44_bool;
		@IsPlayerActor(var_42_object, var_44_bool);
		if(var_44_bool != 0) {
			func_185();
			object var_46_object;
			var_42_object = var_46_object;
			TaskCall(3);
			func_188(var_46_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, object var_5_object, string var_6_string, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, float var_18_float, float var_19_float, int var_20_int)
	{
		object var_22_object;
		if(var_20_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_20_int == 21)) goto Label_184;
			if(true == 0) goto Label_184;
			@FindActor(var_22_object, "player");
			bool var_30_bool = false;
			if(var_22_object != 0) {
				float var_32_float; object var_33_object;
				var_22_object = var_33_object;
				func_1607(var_32_float, var_33_object);
				if(var_32_float <= 62500.0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				object var_42_object;
				var_22_object = var_42_object;
				func_129();
			}
			var_22_object = null;
		}
	Label_184:
	
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		func_233();
		func_2007();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, float var_18_float, float var_19_float, int var_20_int)
	{
		bool var_21_bool; bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			func_233();
			disable OnUse;
			bool var_24_bool; object var_25_object;
			var_20_int = var_25_object;
			func_1625(var_24_bool, var_25_object);
			enable OnUse;
			object var_38_object;
			var_20_int = var_38_object;
			func_2237(var_21_bool, var_22_bool, var_38_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		func_2007();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, int var_7_int, int var_8_int, object var_9_object, object var_10_object, object var_11_object, string var_12_string, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, float var_19_float, float var_20_float, int var_21_int)
	{
		if(1 != 0) {
			func_1821();
			if(var_21_int == 19051) {
				object var_26_object = var_1_bool;
				func_2048(var_0_bool);
				object var_80_object; object var_81_object;
				var_80_object = var_1_bool;
				var_81_object = var_0_bool;
				func_2025();
			}
			if(var_21_int == 19062) {
				object var_86_object = var_1_bool;
				func_2048(var_0_bool);
			}
			if(var_21_int == 43908) {
				object var_90_object = var_1_bool;
				func_2031(var_0_bool);
			}
			if(var_21_int == 19310) {
				object var_95_object = var_1_bool;
				func_2031(var_0_bool);
			}
			if(var_20_float == 19048) {
				bool var_99_bool = false;
				bool var_100_bool = false;
				bool var_101_bool;
				func_2074(var_101_bool, var_1_bool);
				if(var_101_bool != 0) {
					bool var_109_bool;
					func_2084(var_1_bool);
					if(var_109_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0) {
					bool var_117_bool;
					func_2096(var_1_bool);
					if(var_117_bool != 0)
						var_99_bool = true;
				}
				if(var_99_bool != 0) {
					object var_123_object; object var_124_object;
					var_123_object = var_1_bool;
					var_124_object = var_0_bool;
					func_2036();
					func_597(var_21_int, "Neutral");
					var_0_bool->SetMessage(517910); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520406, 21615, 21614); //@t
					var_0_bool->AddReply(517911, 19050, 19049); //@t
					return 0;
				}
				bool var_151_bool = false;
				bool var_152_bool = false;
				bool var_153_bool;
				func_2074(var_153_bool, var_1_bool);
				if(!var_153_bool) { //@nz
					bool var_156_bool;
					func_2084(var_1_bool);
					if(var_156_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0) {
					bool var_158_bool;
					func_2108(var_1_bool);
					if(var_158_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0) {
					object var_164_object; object var_165_object;
					var_164_object = var_1_bool;
					var_165_object = var_0_bool;
					func_2042();
					func_597(var_21_int, "Neutral");
					var_0_bool->SetMessage(517915); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(517916, 19055, 19054); //@t
					var_0_bool->AddReply(520410, 21620, 21619); //@t
					return 0;
				}
				bool var_176_bool;
				func_2084(var_1_bool);
				if(var_176_bool != 0) {
					func_597(var_21_int, "Neutral");
					var_0_bool->SetMessage(517919); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_180_bool;
					func_2074(var_180_bool, var_1_bool);
					if(var_180_bool != 0)
						var_0_bool->AddReply(517920, 19061, 19058); //@t
					bool var_185_bool;
					func_2074(var_185_bool, var_1_bool);
					if(!var_185_bool) //@nz
						var_0_bool->AddReply(517921, 19063, 19059); //@t
					var_0_bool->AddReply(541718, -1, 43908); //@t
					var_0_bool->AddReply(517922, -1, 19060); //@t
					return 0;
				}
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(517927); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518197, -1, 19310); //@t
				var_0_bool->AddReply(517928, -1, 19066); //@t
				return 0;
			}
			if(var_20_float == 19063) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(517925); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517926, -1, 19064); //@t
				return 0;
			}
			if(var_20_float == 19061) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(517923); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517924, -1, 19062); //@t
				return 0;
			}
			if(var_20_float == 21620) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(520411); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520412, 19055, 21621); //@t
				return 0;
			}
			if(var_20_float == 19055) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(517917); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517918, 21618, 19056); //@t
				return 0;
			}
			if(var_20_float == 21618) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(520409); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520413, 21624, 21623); //@t
				var_0_bool->AddReply(520418, -1, 21628); //@t
				return 0;
			}
			if(var_20_float == 21624) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(520414); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520415, 21626, 21625); //@t
				var_0_bool->AddReply(520419, -1, 21629); //@t
				return 0;
			}
			if(var_20_float == 21626) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(520416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520417, -1, 21627); //@t
				return 0;
			}
			if(var_20_float == 19050) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(517912); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517913, -1, 19051); //@t
				var_0_bool->AddReply(517914, -1, 19052); //@t
				return 0;
			}
			if(var_20_float == 21615) {
				func_597(var_21_int, "Neutral");
				var_0_bool->SetMessage(520407); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520408, 19050, 21616); //@t
				return 0;
			}
			var_3_object = true;
			bool var_277_bool;
			func_2023(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x26c";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, float var_19_float, float var_20_float, int var_21_int)
	{
		if(1 != 0) {
			func_1821();
			if(var_20_float == 21937) {
				func_1150(var_21_int, "Neutral");
				var_0_bool->SetMessage(520726); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520727, -1, 21938); //@t
				var_0_bool->AddReply(520728, -1, 21939); //@t
				return 0;
			}
			var_3_object = true;
			bool var_50_bool;
			func_2023(var_50_bool);
			if(var_50_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x495";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, int var_17_int, int var_18_int, float var_19_float, float var_20_float, int var_21_int)
	{
		if(1 != 0) {
			func_1821();
			if(var_21_int == 43906) {
				object var_26_object = var_1_bool;
				func_2031(var_0_bool);
			}
			if(var_20_float == 43905) {
				func_1351(var_21_int, "Neutral");
				var_0_bool->SetMessage(541715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541716, -1, 43906); //@t
				var_0_bool->AddReply(541717, -1, 43907); //@t
				var_0_bool->AddReply(541742, -1, 43939); //@t
				return 0;
			}
			var_3_object = true;
			bool var_58_bool;
			func_2023(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x55e";
	
	}

}


maintask task_11
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		func_2181();
		@SetTimeEvent(0, 144);
		@SetTimeEvent(1, 24);
		@SetTimeEvent(1, 48);
		@SetTimeEvent(1, 72);
		@SetTimeEvent(1, 96);
		@SetTimeEvent(1, 120);
		func_1459(var_17_float, var_18_float, var_19_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
	{
		func_2007();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int, object var_20_object)
	{
		bool var_21_bool; bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			disable OnUse;
			bool var_24_bool; object var_25_object;
			var_20_object = var_25_object;
			func_1625(var_24_bool, var_25_object);
			enable OnUse;
			object var_38_object;
			var_20_object = var_38_object;
			func_2237(var_21_bool, var_22_bool, var_38_object);
		}
	}

}


	void OnTrigger(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int, int var_20_int, float var_21_float, string var_24_string)
	{
	bool var_26_bool;
	if(var_24_string == "cleanup") {
		var_29_bool = GlobalVars[1];
		GlobalVars[1] = true;
		@IsLoaded(var_26_bool);
		if(!var_26_bool) { //@nz
			object var_31_object;
			func_1843(var_31_object);
			@RemoveActor(var_31_object);
		}
	} else if(var_24_string == "restore") {
		var_36_bool = GlobalVars[1];
		GlobalVars[1] = false;
	}
	
	}


void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int)
{
	var_20_bool = GlobalVars[1];
	if(var_20_bool != 0) {
		object var_21_object;
		func_1843(var_21_object);
		@RemoveActor(var_21_object);
	}
}


// @pe
void OnGameTime(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, float var_17_float, float var_18_float, int var_19_int, int var_20_int, float var_21_float)
{
	if(var_20_int == 0) {
		string var_24_string = "cleanup";
		func_1983();
	} else if(var_20_int == 1) {
		func_2181();
	}
	
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_102_bool;
	func_1645(var_102_bool);
	if(!var_102_bool) goto Label_0; //@nz
}


void func_2048(object var_26_object)
{
	@SetVariable("b1q02", 2);
	func_2127();
	float var_29_float;
	var_26_object->GetProperty("health", var_29_float);
	var_26_object->SetProperty("health", (var_29_float - 0.3));
	@Trace("blood is given");
	object var_59_object;
	var_26_object = var_59_object;
	func_1918(var_59_object, "b1q02_blood", 1);
}


void func_1018(bool var_0_bool, int var_43_int, object var_44_object)
{
	var_0_bool = var_44_object;
	bool var_54_bool; object var_55_object;
	var_44_object = var_55_object;
	func_1650(var_54_bool, var_55_object, 100.0);
	if(!var_54_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_102_int;
	func_2017(var_102_int);
	var_50_object->SetNPCName(var_102_int);
	int var_103_int;
	func_2015(var_103_int);
	var_50_object->SetNPCDescription(var_103_int);
	string var_104_string;
	func_2019(var_104_string);
	var_50_object->SetPhoto(var_104_string);
	string var_105_string;
	func_2021(var_105_string);
	var_50_object->SetPhoto2(var_105_string);
	int var_106_int;
	func_2204(var_106_int);
	var_50_object->SetPlayerName(var_106_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	object var_115_object; object var_116_object;
	var_44_object = var_115_object;
	var_50_object = var_116_object;
	TaskCall(8);
	func_1092(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_164_bool = !var_53_bool; //@nz
		if(var_164_bool == 0) goto Label_1081;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_1081:
	object var_165_object;
	var_44_object = var_165_object;
	func_1719();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


void func_2181(void)
{
	@ClearSubContainer(0);
	int var_23_int;
	func_1931(var_23_int);
	int var_21_int;
	var_23_int = var_21_int;
	func_1828("tourniquet", 1, 1, 5);
	func_1828("bandage", 1, 1, 5);
}


// @pe
void func_1288(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_382_object, object var_383_object)
{
	var_0_bool = var_383_object;
	var_1_bool = var_382_object;
	var_3_object = false;
	if(1 != 0) {
		func_1351(var_383_object, "Neutral");
		var_0_bool->SetMessage(541715); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(541716, -1, 43906); //@t
		var_0_bool->AddReply(541717, -1, 43907); //@t
		var_0_bool->AddReply(541742, -1, 43939); //@t
		goto Label_1321;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x50c";
	}
Label_1321:
	bool var_407_bool;
	func_2023(var_407_bool);
	if(var_407_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1790(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1350;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1350:
		return 0;

	}
	
}


void func_1547(void)
{
	string var_85_string;
	@GetProperty("loc", var_85_string);
	var_87_string = GlobalVars[0];
	var_85_string = var_87_string;
	GlobalVars[0] = var_87_string;
}


// @pe
void func_396(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_205_object, object var_206_object)
{
	var_0_bool = var_206_object;
	var_1_bool = var_205_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_212_bool = false;
		bool var_213_bool = false;
		bool var_214_bool;
		func_2074(var_214_bool, var_1_bool);
		if(var_214_bool != 0) {
			bool var_222_bool;
			func_2084(var_1_bool);
			if(var_222_bool != 0)
				var_213_bool = true;
		}
		if(var_213_bool != 0) {
			bool var_230_bool;
			func_2096(var_1_bool);
			if(var_230_bool != 0)
				var_212_bool = true;
		}
		if(var_212_bool != 0) {
			object var_236_object; object var_237_object;
			var_236_object = var_1_bool;
			var_237_object = var_0_bool;
			func_2036();
			func_597(var_206_object, "Neutral");
			var_0_bool->SetMessage(517910); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520406, 21615, 21614); //@t
			var_0_bool->AddReply(517911, 19050, 19049); //@t
		} else {
					bool var_263_bool = false;
					bool var_264_bool = false;
					bool var_265_bool;
					func_2074(var_265_bool, var_1_bool);
					if(!var_265_bool) { //@nz
						bool var_268_bool;
						func_2084(var_1_bool);
						if(var_268_bool != 0)
							var_264_bool = true;
					}
					if(var_264_bool != 0) {
						bool var_270_bool;
						func_2108(var_1_bool);
						if(var_270_bool != 0)
							var_263_bool = true;
					}
					if(var_263_bool == 0) goto Label_499;
					object var_276_object; object var_277_object;
					var_276_object = var_1_bool;
					var_277_object = var_0_bool;
					func_2042();
					func_597(var_206_object, "Neutral");
					var_0_bool->SetMessage(517915); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(517916, 19055, 19054); //@t
					var_0_bool->AddReply(520410, 21620, 21619); //@t
		}
	}
Label_567:
	for(;;) {
		bool var_255_bool;
		func_2023(var_255_bool);
		if(var_255_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1790(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_596;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_596:
			return 0;

		}

	}
	
Label_499:
	bool var_288_bool;
	func_2084(var_1_bool);
	if(var_288_bool != 0) {
		func_597(var_206_object, "Neutral");
		var_0_bool->SetMessage(517919); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_292_bool;
		func_2074(var_292_bool, var_1_bool);
		if(var_292_bool != 0)
			var_0_bool->AddReply(517920, 19061, 19058); //@t
		bool var_297_bool;
		func_2074(var_297_bool, var_1_bool);
		if(!var_297_bool) //@nz
			var_0_bool->AddReply(517921, 19063, 19059); //@t
		var_0_bool->AddReply(541718, -1, 43908); //@t
		var_0_bool->AddReply(517922, -1, 19060); //@t
		goto Label_567;
	}
	func_597(var_206_object, "Neutral");
	var_0_bool->SetMessage(517927); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518197, -1, 19310); //@t
	var_0_bool->AddReply(517928, -1, 19066); //@t
	goto Label_567;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x190";


void func_1931(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_1806(string var_126_string, bool var_127_bool)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_126_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_126_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, var_127_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_126_string);
	}
	
}


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_353_bool;
		func_2023(var_353_bool);
		if(var_353_bool == 0) goto Label_28;
		func_1790("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_37:
	}
	if(false == 0) goto Label_37;
	return 0;
	
Label_28:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_1555(bool var_0_bool, bool var_1_bool)
{
	cvector var_106_cvector;
	@GetAnimationOffset(var_106_cvector, "all", "walk_stopl");
	cvector var_107_cvector;
	@GetAnimationOffset(var_107_cvector, "all", "walk_stopr");
	var_112_float = GetByIndex(var_106_cvector, 2);
	var_113_float = GetByIndex(var_107_cvector, 2);
	float var_116_float;
	var_118_float = GetByIndex(var_106_cvector, 2);
	func_1859(var_116_float, (var_118_float - ((var_112_float + var_113_float) / 2.0)));
	var_1_bool = var_116_float + 40;
}


// @pe
void func_1940(bool var_175_bool, int var_176_int)
{
	int var_177_int;
	func_1931(var_177_int);
	var_175_bool = var_177_int == var_176_int;
}


// @pe
void func_2074(bool var_214_bool, object var_215_object)
{
	object var_217_object;
	var_215_object = var_217_object;
	bool var_216_bool;
	func_2120(var_216_bool, var_217_object);
	if(var_216_bool != 0) {
		var_214_bool = true;
		return 0;
	}
	var_214_bool = false;
}


void func_1946(string var_212_string, int var_213_int)
{
	string var_215_string = "idle";
	if(var_213_int != 0)
		var_215_string += var_213_int;
	var_215_string = var_212_string;
}


void func_2204(int var_106_int)
{
	int var_108_int;
	@GetVariable("branch", var_108_int);
	if(var_108_int == 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x8ab";
	}
	if(var_108_int == 1) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
}


void func_1821(void)
{
	bool var_23_bool;
	func_2023(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1150(object var_2_object, string var_122_string)
{
	bool var_123_bool;
	func_2023(var_123_bool);
	if(!var_123_bool) //@nz
		return 0;
	if(var_122_string == var_2_object)
		return 0;
	string var_126_string; bool var_127_bool;
	var_122_string = var_126_string;
	if(var_122_string == "")
		var_127_bool = false;
	else
		var_127_bool = true;
	func_1806(var_126_string, var_127_bool);
	var_2_object = var_122_string;
	
}


void func_1953(int var_206_int)
{
	int var_209_int; bool var_210_bool;
	var_209_int = 0;
	
	for(;;) {
		string var_212_string; int var_213_int;
		var_209_int = var_213_int;
		func_1946(var_212_string, var_213_int);
		@HasAnimation(var_210_bool, "all", var_212_string);
		if(!var_210_bool) //@nz
			break;
		var_209_int += 1;
	}
	var_209_int = var_206_int;
}


// @pe
void func_2084(bool var_222_bool)
{
	int var_224_int;
	func_1882(var_224_int, "b1q02");
	if(var_224_int == 1)
		var_222_bool = true;
	var_222_bool = false;
}


void func_1828(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_1867(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


// @pe
void func_296(string var_195_string, string var_196_string, int var_197_int)
{
	if(var_197_int == 0) {
	} else {
		var_195_string += var_197_int;
	}
	
}


void func_304(int var_188_int, string var_189_string)
{
	int var_192_int; bool var_193_bool;
	var_192_int = 0;
	
	for(;;) {
		string var_195_string; string var_196_string; int var_197_int;
		var_189_string = var_196_string;
		var_192_int = var_197_int;
		func_296(var_195_string, var_196_string, var_197_int);
		@HasAnimation(var_193_bool, "all", var_195_string);
		if(!var_193_bool) //@nz
			break;
		var_192_int += 1;
	}
	var_192_int = var_188_int;
}


// @pe
void func_2096(bool var_230_bool)
{
	int var_232_int;
	func_1882(var_232_int, "oob1Gorbun1");
	if(var_232_int == 0) {
		var_230_bool = true;
		return 0;
	}
	var_230_bool = false;
}


// @pe
void func_1970(string var_88_string, int var_89_int)
{
	if(var_89_int == 0) {
		var_93_string = GlobalVars[0];
		var_88_string = "pt_" + var_93_string;
	} else {
		var_95_string = GlobalVars[0];
		var_88_string = ("pt_" + var_95_string) + var_89_int;
	}
	
}


void func_1459(bool var_0_bool, bool var_1_bool, object var_2_object)
{
	bool var_73_bool; int var_74_int; bool var_75_bool; cvector var_76_cvector; cvector var_77_cvector; cvector var_78_cvector; float var_79_float; cvector var_80_cvector; bool var_81_bool; cvector var_82_cvector;
	@SensePlayerOnly(true);
	func_1547();
	object var_72_object;
	@GetScene(var_72_object);
	var_2_object = 0;
	
	for(;;) {
		string var_88_string;
		func_1970(var_88_string, var_2_object);
		var_72_object->GetLocator(var_88_string, var_73_bool);
		if(!var_73_bool) { //@nz
		} else {
		}
		bool var_98_bool;
		func_1645(var_98_bool);
		if(!var_98_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_1555(var_81_bool, var_82_cvector);

		for(;;) {
			@irand(var_74_int, (var_2_object + 1));
			string var_122_string; int var_123_int;
			var_74_int = var_123_int;
			func_1970(var_122_string, var_123_int);
			var_72_object->GetLocator(var_122_string, var_75_bool, var_76_cvector, var_77_cvector);
			cvector var_124_cvector;
			func_1602(var_124_cvector);
			var_78_cvector = var_76_cvector - var_124_cvector;
			float var_127_float; cvector var_128_cvector;
			var_78_cvector = var_128_cvector;
			func_1872(var_127_float, var_128_cvector);
			if(var_127_float > var_1_bool) {
				@GetHeight(var_79_float);
				var_137_float = GetByIndex(var_80_cvector, 1);
				SetByIndex(var_80_cvector, 1) = (var_137_float + var_79_float);
				@CanReachByPF(var_81_bool, var_80_cvector);
				if(var_81_bool != 0) {
					var_140_float = sqrt(var_78_cvector | var_78_cvector);
					var_82_cvector = var_80_cvector - (var_78_cvector * (var_0_bool / var_140_float));
					bool var_143_bool; cvector var_144_cvector; cvector var_145_cvector;
					var_82_cvector = var_144_cvector;
					var_77_cvector = var_145_cvector;
					TaskCall(2);
					func_53(var_146_bool, var_143_bool, var_144_cvector, var_145_cvector);
					TaskReturn();
					if(var_146_bool != 0) {
						int var_170_int;
						var_74_int = var_170_int;
						TaskCall(4);
						func_238(var_170_int);
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


void func_1843(object var_31_object)
{
	object var_33_object;
	@self(var_33_object);
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_53(bool var_0_bool, bool var_143_bool, cvector var_144_cvector, cvector var_145_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_59:
	for(;;) {
		bool var_151_bool; cvector var_152_cvector;
		var_144_cvector = var_152_cvector;
		func_1615(var_151_bool, var_152_cvector);
		var_161_bool = !var_151_bool; //@nz
		if(var_161_bool == 0) goto Label_66;
	}
	
Label_66:
	bool var_148_bool;
	@MovePoint(var_144_cvector, false, var_148_bool);
	if(var_148_bool != 0) {
	} else {
		goto Label_59;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_148_bool);
	if(!var_148_bool) { //@nz
		var_143_bool = false;
		return 2;
	}
	var_167_float = GetByIndex(var_145_cvector, 0);
	var_168_float = GetByIndex(var_145_cvector, 2);
	@Rotate(var_167_float, var_168_float, var_148_bool);
	if(!var_148_bool) { //@nz
		var_143_bool = false;
		return 2;
	}
	var_143_bool = true;
	
}


void func_1918(object var_59_object, string var_60_string, int var_61_int)
{
	object var_63_object;
	@CreateInvItem(var_63_object);
	var_63_object->SetItemName(var_60_string);
	object var_64_object; object var_65_object; int var_66_int;
	var_59_object = var_64_object;
	var_63_object = var_65_object;
	var_61_int = var_66_int;
	func_1899(var_64_object, var_65_object, var_66_int);
}
EMIT "Stack[-1] = 0";


void func_1719(void)
{
	bool var_167_bool;
	@CameraSwitchToNormal(true);
	bool var_169_bool;
	func_2023(var_169_bool);
	if(var_169_bool != 0) {
	} else {
		@HasAnimationTrack(var_167_bool, "head");
		if(var_167_bool == 0) goto Label_1736;
		@UnlookAsync("head");
	}
Label_1736:
	
}


void func_185(void)
{
	@Stop();
}


void func_1849(cvector var_81_cvector, cvector var_82_cvector)
{
	float var_85_float = sqrt(var_82_cvector | var_82_cvector);
	if(var_85_float < 0.000001)
		var_81_cvector = [0.0, 0.0, 0.0];
	var_81_cvector = var_82_cvector / var_85_float;
}


void func_188(object var_46_object)
{
	bool var_48_bool;
	@WaitForAnimEnd(var_48_bool);
	if(!var_48_bool) { //@nz
	}
	object var_50_object;
	var_46_object = var_50_object;
	func_1634(var_50_object);
	@Sleep(6);
}


void func_2237(object var_38_object, object var_186_object, object var_363_object)
{
	int var_40_int;
	@GetVariable("mt_gorbun", var_40_int);
	if(!var_40_int) { //@nz
		int var_43_int; object var_44_object;
		var_38_object = var_44_object;
		TaskCall(7);
		func_1018(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		@SetVariable("mt_gorbun", 1);
	}
	bool var_175_bool;
	func_1940(var_175_bool, 1);
	if(var_175_bool != 0) {
		int var_184_int; object var_185_object;
		var_38_object = var_185_object;
		TaskCall(5);
		func_322(var_186_object, var_184_int, var_185_object);
		TaskReturn();
		if(1000 == var_186_object) {
			bool var_320_bool; object var_321_object;
			var_38_object = var_321_object;
			func_1737(var_320_bool, var_321_object, (float)110);
			if(!var_320_bool) //@nz
				return 2;
			object var_351_object;
			var_38_object = var_351_object;
			TaskCall(1);
			func_13(var_351_object);
			TaskReturn();
			object var_358_object;
			var_38_object = var_358_object;
			func_1785();
		}
		return 2;
	}
	int var_361_int; object var_362_object;
	var_38_object = var_362_object;
	TaskCall(9);
	func_1214(var_363_object, var_361_int, var_362_object);
	TaskReturn();
	if(1000 == var_363_object) {
		bool var_418_bool; object var_419_object;
		var_38_object = var_419_object;
		func_1737(var_418_bool, var_419_object, (float)110);
		if(!var_418_bool) //@nz
			return 2;
		object var_422_object;
		var_38_object = var_422_object;
		TaskCall(1);
		func_13(var_422_object);
		TaskReturn();
		object var_424_object;
		var_38_object = var_424_object;
		func_1785();
	}
}


// @pe
void func_2108(bool var_270_bool)
{
	int var_272_int;
	func_1882(var_272_int, "oob1Gorbun2");
	if(var_272_int == 0) {
		var_270_bool = true;
		return 0;
	}
	var_270_bool = false;
}


void func_1214(bool var_0_bool, int var_361_int, object var_362_object)
{
	var_0_bool = var_362_object;
	bool var_372_bool; object var_373_object;
	var_362_object = var_373_object;
	func_1650(var_372_bool, var_373_object, 100.0);
	if(!var_372_bool) { //@nz
		var_361_int = -2;
		return 8;
	}
	object var_368_object;
	@CreateDialog(var_368_object);
	int var_376_int;
	func_2017(var_376_int);
	var_368_object->SetNPCName(var_376_int);
	int var_377_int;
	func_2015(var_377_int);
	var_368_object->SetNPCDescription(var_377_int);
	string var_378_string;
	func_2019(var_378_string);
	var_368_object->SetPhoto(var_378_string);
	string var_379_string;
	func_2021(var_379_string);
	var_368_object->SetPhoto2(var_379_string);
	int var_380_int;
	func_2204(var_380_int);
	var_368_object->SetPlayerName(var_380_int);
	bool var_369_bool;
	@IsOverrideActive(var_369_bool);
	if(var_369_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	@DoDialog(var_368_object);
	object var_382_object; object var_383_object;
	var_362_object = var_382_object;
	var_368_object = var_383_object;
	TaskCall(10);
	func_1288(var_384_object, var_385_object, var_386_string, var_387_bool, var_382_object, var_383_object);
	TaskReturn();
	bool var_371_bool;
	var_368_object->IsDialogEnd(var_371_bool);
	
	for(;;) {
		var_415_bool = !var_371_bool; //@nz
		if(var_415_bool == 0) goto Label_1277;
		@sync();
		var_368_object->IsDialogEnd(var_371_bool);
	}
	
Label_1277:
	object var_416_object;
	var_362_object = var_416_object;
	func_1719();
	@StopDialog(var_368_object);
	var_368_object->GetReturnValue(-1);
	int var_370_int = var_361_int;
}
EMIT "Stack[-4] = 0";


void func_1602(cvector var_124_cvector)
{
	cvector var_126_cvector;
	@GetPosition(var_126_cvector);
	var_126_cvector = var_124_cvector;
}


// @pe
void func_1859(float var_116_float, float var_117_float)
{
	if(var_117_float < 0)
		var_116_float = -var_117_float;
	else
		var_117_float = var_116_float;
	
}


// @pe
void func_1092(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_115_object, object var_116_object)
{
	var_0_bool = var_116_object;
	var_1_bool = var_115_object;
	var_3_object = false;
	if(1 != 0) {
		func_1150(var_116_object, "Neutral");
		var_0_bool->SetMessage(520726); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520727, -1, 21938); //@t
		var_0_bool->AddReply(520728, -1, 21939); //@t
		goto Label_1120;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x448";
	}
Label_1120:
	bool var_146_bool;
	func_2023(var_146_bool);
	if(var_146_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1790(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1149;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1149:
		return 0;

	}
	
}


void func_322(bool var_0_bool, int var_184_int, object var_185_object)
{
	var_0_bool = var_185_object;
	bool var_195_bool; object var_196_object;
	var_185_object = var_196_object;
	func_1650(var_195_bool, var_196_object, 100.0);
	if(!var_195_bool) { //@nz
		var_184_int = -2;
		return 8;
	}
	object var_191_object;
	@CreateDialog(var_191_object);
	int var_199_int;
	func_2017(var_199_int);
	var_191_object->SetNPCName(var_199_int);
	int var_200_int;
	func_2015(var_200_int);
	var_191_object->SetNPCDescription(var_200_int);
	string var_201_string;
	func_2019(var_201_string);
	var_191_object->SetPhoto(var_201_string);
	string var_202_string;
	func_2021(var_202_string);
	var_191_object->SetPhoto2(var_202_string);
	int var_203_int;
	func_2204(var_203_int);
	var_191_object->SetPlayerName(var_203_int);
	bool var_192_bool;
	@IsOverrideActive(var_192_bool);
	if(var_192_bool != 0) {
		var_184_int = -2;
		return 8;
	}
	@DoDialog(var_191_object);
	object var_205_object; object var_206_object;
	var_185_object = var_205_object;
	var_191_object = var_206_object;
	TaskCall(6);
	func_396(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	bool var_194_bool;
	var_191_object->IsDialogEnd(var_194_bool);
	
	for(;;) {
		var_317_bool = !var_194_bool; //@nz
		if(var_317_bool == 0) goto Label_385;
		@sync();
		var_191_object->IsDialogEnd(var_194_bool);
	}
	
Label_385:
	object var_318_object;
	var_185_object = var_318_object;
	func_1719();
	@StopDialog(var_191_object);
	var_191_object->GetReturnValue(-1);
	int var_193_int = var_184_int;
}
EMIT "Stack[-4] = 0";


void func_1607(float var_32_float, object var_33_object)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_33_object->GetPosition(var_38_cvector);
	var_32_float = (var_38_cvector - var_37_cvector) | (var_38_cvector - var_37_cvector);
}


// @pe
void func_1351(object var_2_object, string var_389_string)
{
	bool var_390_bool;
	func_2023(var_390_bool);
	if(!var_390_bool) //@nz
		return 0;
	if(var_389_string == var_2_object)
		return 0;
	string var_393_string; bool var_394_bool;
	var_389_string = var_393_string;
	if(var_389_string == "")
		var_394_bool = false;
	else
		var_394_bool = true;
	func_1806(var_393_string, var_394_bool);
	var_2_object = var_389_string;
	
}


void func_2120(bool var_216_bool, object var_217_object)
{
	float var_219_float;
	var_217_object->GetProperty("health", var_219_float);
	var_216_bool = var_219_float >= 0.4;
}


void func_1737(bool var_320_bool, object var_321_object, float var_322_float)
{
	cvector var_332_cvector;
	var_321_object->GetPosition(var_332_cvector);
	float var_331_float;
	var_321_object->GetEyesHeight(var_331_float);
	var_339_float = GetByIndex(var_332_cvector, 1);
	SetByIndex(var_332_cvector, 1) = (var_339_float + var_331_float);
	cvector var_333_cvector;
	@GetPosition(var_333_cvector);
	@GetEyesHeight(var_331_float);
	var_340_float = GetByIndex(var_333_cvector, 1);
	SetByIndex(var_333_cvector, 1) = (var_340_float + var_331_float);
	cvector var_334_cvector = var_332_cvector - var_333_cvector;
	var_341_float = GetByIndex(var_334_cvector, 1);
	SetByIndex(var_334_cvector, 1) = (float)0;
	var_343_float = sqrt(var_334_cvector | var_334_cvector);
	var_334_cvector /= var_343_float;
	cvector var_335_cvector = -var_334_cvector;
	cvector var_336_cvector = (var_334_cvector * var_322_float) - [0.0, 10.0, 0.0];
	bool var_338_bool;
	@IsOverrideActive(var_338_bool);
	if(var_338_bool != 0)
		var_320_bool = false;
	@StopWorld();
	@CameraTransit((var_333_cvector + var_336_cvector), var_335_cvector, true);
	var_348_float = GetByIndex(var_336_cvector, 0);
	var_349_float = GetByIndex(var_336_cvector, 2);
	@Rotate(var_348_float, var_349_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_320_bool = true;
}


void func_1867(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


void func_1615(bool var_151_bool, cvector var_152_cvector)
{
	cvector var_156_cvector;
	@GetPosition(var_156_cvector);
	cvector var_157_cvector = var_152_cvector - var_156_cvector;
	var_159_float = GetByIndex(var_157_cvector, 0);
	var_160_float = GetByIndex(var_157_cvector, 2);
	bool var_158_bool;
	@Rotate(var_159_float, var_160_float, var_158_bool);
	var_158_bool = var_151_bool;
}


// @pe
void func_1872(float var_127_float, cvector var_128_cvector)
{
	var_129_float = GetByIndex(var_128_cvector, 0);
	var_130_float = GetByIndex(var_128_cvector, 0);
	var_132_float = GetByIndex(var_128_cvector, 2);
	var_133_float = GetByIndex(var_128_cvector, 2);
	var_127_float = sqrt((var_129_float * var_130_float) + (var_132_float * var_133_float));
}


void func_2127(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 202, 2, 517942);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_2153(var_37_bool, var_38_object, 200);
}
EMIT "Stack[-1] = 0";


// @pe
void func_597(object var_2_object, string var_240_string)
{
	bool var_241_bool;
	func_2023(var_241_bool);
	if(!var_241_bool) //@nz
		return 0;
	if(var_240_string == var_2_object)
		return 0;
	string var_244_string; bool var_245_bool;
	var_240_string = var_244_string;
	if(var_240_string == "")
		var_245_bool = false;
	else
		var_245_bool = true;
	func_1806(var_244_string, var_245_bool);
	var_2_object = var_240_string;
	
}


void func_1625(bool var_24_bool, object var_25_object)
{
	cvector var_27_cvector;
	var_25_object->GetPosition(var_27_cvector);
	bool var_28_bool; cvector var_29_cvector;
	var_27_cvector = var_29_cvector;
	func_1615(var_28_bool, var_29_cvector);
	var_28_bool = var_24_bool;
}


void func_1882(int var_224_int, string var_225_string)
{
	int var_227_int;
	@GetVariable(var_225_string, var_227_int);
	var_227_int = var_224_int;
}


void func_2140(object var_46_object)
{
	object var_48_object;
	@GetDiaryRoot(var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_46_object = false;
	}
	var_48_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_2015(int var_103_int)
{
	var_103_int = 515594;
}


void func_1887(int var_75_int, int var_76_int)
{
	object var_78_object;
	@CreateIntVector(var_78_object);
	var_78_object->add(var_75_int);
	var_78_object->add(var_76_int);
	@SendWorldWndMessage(3, var_78_object);
}
EMIT "Stack[-1] = 0";


void func_2017(int var_102_int)
{
	var_102_int = 512583;
}


void func_1634(object var_50_object)
{
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector = var_54_cvector - var_55_cvector;
	var_57_float = GetByIndex(var_56_cvector, 0);
	var_58_float = GetByIndex(var_56_cvector, 2);
	@RotateAsync(var_57_float, var_58_float);
}


void func_2019(string var_104_string)
{
	var_104_string = "ui/NPC_Citizen3.png";
}


void func_2021(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen3_b.png";
}


void func_2023(bool var_97_bool)
{
	var_97_bool = false;
}


void func_233(void)
{
	@StopGroup0();
	@StopAnimation();
}


// @pe
void func_2025(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1899(object var_64_object, object var_65_object, int var_66_int)
{
	int var_70_int;
	var_65_object->GetItemID(var_70_int);
	int var_71_int;
	@GetInvItemProperty(var_71_int, var_70_int, "Category");
	bool var_72_bool;
	var_64_object->AddItem(var_72_bool, var_65_object, var_71_int, var_66_int);
	if(!var_72_bool) { //@nz
		var_64_object->DropItems(var_65_object, var_66_int);
	} else {
		int var_75_int; int var_76_int;
		var_70_int = var_75_int;
		var_66_int = var_76_int;
		func_1887(var_75_int, var_76_int);
	}
	
}


void func_2153(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_2140(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	object var_44_object;
	var_43_object->Find(var_39_int, var_44_object);
	if(!var_44_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_39_int);
		var_37_bool = false;
	}
	var_44_object->AddChild(var_38_object);
	@SendWorldWndMessage(7);
	int var_45_int;
	var_38_object->GetCategory(var_45_int);
	@SetDiarySection(var_45_int);
	var_37_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1645(bool var_98_bool)
{
	bool var_100_bool;
	@IsLoaded(var_100_bool);
	var_100_bool = var_98_bool;
}


void func_238(int var_170_int)
{
	string var_178_string; string var_180_string; int var_181_int; int var_182_int; int var_183_int; int var_184_int;
	if(var_170_int != 0)
		var_178_string = "ptidle" + var_170_int;
	else
		var_178_string = "ptidle";
	bool var_179_bool;
	@HasProperty(var_178_string, var_179_bool);
	if(var_179_bool != 0) {
		@GetProperty(var_178_string, var_180_string);
		int var_188_int; string var_189_string;
		var_180_string = var_189_string;
		func_304(var_188_int, var_189_string);
		var_188_int = var_181_int;
		@irand(var_182_int, var_181_int);
		string var_203_string; string var_204_string; int var_205_int;
		var_180_string = var_204_string;
		var_182_int = var_205_int;
		func_296(var_203_string, var_204_string, var_205_int);
		@PlayAnimation("all", var_203_string);
		@WaitForAnimEnd();
	} else {
		int var_206_int;
		func_1953(var_206_int);
		var_206_int = var_183_int;
		if(var_183_int == 0) goto Label_286;
		@irand(var_184_int, var_183_int);
		string var_221_string; int var_222_int;
		var_184_int = var_222_int;
		func_1946(var_221_string, var_222_int);
		@PlayAnimation("all", var_221_string);
		@WaitForAnimEnd();

	}
Label_286:
	
}


// @pe
void func_2031(object var_27_object)
{
	var_27_object->SetReturnValue(1000);
}


void func_1650(bool var_54_bool, object var_55_object, float var_56_float)
{
	cvector var_67_cvector; bool var_74_bool;
	var_55_object->GetPosition(var_67_cvector);
	float var_66_float;
	var_55_object->GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_66_float);
	cvector var_68_cvector;
	@GetPosition(var_68_cvector);
	@GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_66_float);
	cvector var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_79_float = sqrt(var_69_cvector | var_69_cvector);
	var_69_cvector /= var_79_float;
	cvector var_70_cvector = -var_69_cvector;
	cvector var_81_cvector;
	func_1849(var_81_cvector, (var_70_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_71_cvector = ((var_69_cvector * var_56_float) + (var_81_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_73_bool;
	@IsOverrideActive(var_73_bool);
	if(var_73_bool != 0)
		var_54_bool = false;
	@StopWorld();
	@CameraTransit((var_68_cvector + var_71_cvector), var_70_cvector, true);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	bool var_97_bool;
	func_2023(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		@HasAnimationTrack(var_74_bool, "head");
		if(var_74_bool == 0) goto Label_1713;
		@LookAsyncCamera("head");
	}
Label_1713:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_54_bool = true;
	
}


// @pe
void func_2036(void)
{
	@SetVariable("oob1Gorbun1", 1);
}


// @pe
void func_1785(void)
{
	@CameraSwitchToNormal(true);
}


// @pe
void func_2042(void)
{
	@SetVariable("oob1Gorbun2", 1);
}


void func_1790(string var_148_string)
{
	bool var_152_bool; float var_153_float; float var_154_float;
	@lshHasAnimation(var_152_bool, var_148_string);
	if(var_152_bool != 0) {
		@lshGetAnimTimes(var_148_string, var_153_float, var_154_float);
		@lshPlayAnimation(var_153_float, var_154_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_148_string);
	}
	
}


