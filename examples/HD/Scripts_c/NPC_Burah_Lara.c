// @GLOBALS: 0:object:,1:bool:,2:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_31_bool == 19154) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518022, -1, 19155); //@t
				var_0_object->AddReply(531564, -1, 32923); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2574(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_32_cvector == 19663) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2576();
				object var_86_object = var_1_object;
				func_2622(var_0_object);
			}
			if(var_32_cvector == 20148) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_2610();
			}
			if(var_31_bool == 19658) {
				bool var_120_bool;
				func_2662(var_120_bool, var_1_object);
				if(!var_120_bool) { //@nz
					object var_129_object; object var_130_object;
					var_129_object = var_1_object;
					var_130_object = var_0_object;
					func_2604();
					func_397(var_32_cvector, "Fear");
					var_0_object->SetMessage(518548); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518549, 20132, 19659); //@t
					var_0_object->AddReply(519021, 20141, 20140); //@t
					return 0;
				}
				func_397(var_32_cvector, "Sympathy");
				var_0_object->SetMessage(518550); //@t
				var_0_object->ClearReplies(); //@t
				bool var_159_bool;
				func_2672(var_1_object);
				if(var_159_bool != 0)
					var_0_object->AddReply(518551, 20163, 19661); //@t
				bool var_170_bool = false;
				bool var_171_bool;
				func_2684(var_1_object);
				if(var_171_bool != 0) {
					bool var_177_bool;
					func_2696(var_1_object);
					if(var_177_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0)
					var_0_object->AddReply(519028, 20149, 20148); //@t
				var_0_object->AddReply(518554, -1, 19664); //@t
				return 0;
			}
			if(var_31_bool == 20149) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519030, 20152, 20150); //@t
				var_0_object->AddReply(519031, -1, 20151); //@t
				return 0;
			}
			if(var_31_bool == 20152) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519033, 20154, 20153); //@t
				var_0_object->AddReply(519035, 20154, 20155); //@t
				return 0;
			}
			if(var_31_bool == 20154) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519036, 20157, 20156); //@t
				var_0_object->AddReply(519039, 20157, 20160); //@t
				return 0;
			}
			if(var_31_bool == 20157) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519037); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519038, -1, 20158); //@t
				var_0_object->AddReply(519040, -1, 20162); //@t
				return 0;
			}
			if(var_31_bool == 20163) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519041); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519042, 20165, 20164); //@t
				var_0_object->AddReply(519059, 20180, 20183); //@t
				return 0;
			}
			if(var_31_bool == 20165) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519044, 20167, 20166); //@t
				var_0_object->AddReply(519046, 20169, 20168); //@t
				return 0;
			}
			if(var_31_bool == 20169) {
				func_397(var_32_cvector, "Neutral");
				var_0_object->SetMessage(519047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519048, 20167, 20170); //@t
				return 0;
			}
			if(var_31_bool == 20167) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519049, 20177, 20172); //@t
				var_0_object->AddReply(519050, 20174, 20173); //@t
				return 0;
			}
			if(var_31_bool == 20174) {
				func_397(var_32_cvector, "Fear");
				var_0_object->SetMessage(519051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519052, -1, 20175); //@t
				var_0_object->AddReply(519053, 20177, 20176); //@t
				return 0;
			}
			if(var_31_bool == 20177) {
				func_397(var_32_cvector, "Neutral");
				var_0_object->SetMessage(519054); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519055, 19662, 20178); //@t
				var_0_object->AddReply(519056, 20180, 20179); //@t
				return 0;
			}
			if(var_31_bool == 20180) {
				func_397(var_32_cvector, "Neutral");
				var_0_object->SetMessage(519057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519058, -1, 20181); //@t
				return 0;
			}
			if(var_31_bool == 19662) {
				func_397(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518553, -1, 19663); //@t
				return 0;
			}
			if(var_31_bool == 20141) {
				func_397(var_32_cvector, "Fear");
				var_0_object->SetMessage(519022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519023, 20138, 20142); //@t
				return 0;
			}
			if(var_31_bool == 20132) {
				func_397(var_32_cvector, "Sympathy");
				var_0_object->SetMessage(519014); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519015, 20138, 20133); //@t
				var_0_object->AddReply(519016, 20135, 20134); //@t
				return 0;
			}
			if(var_31_bool == 20135) {
				func_397(var_32_cvector, "Fear");
				var_0_object->SetMessage(519017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519019, 20138, 20137); //@t
				var_0_object->AddReply(519018, -1, 20136); //@t
				return 0;
			}
			if(var_31_bool == 20138) {
				func_397(var_32_cvector, "Confusion");
				var_0_object->SetMessage(519020); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519024, 20145, 20144); //@t
				return 0;
			}
			if(var_31_bool == 20145) {
				func_397(var_32_cvector, "Neutral");
				var_0_object->SetMessage(519025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527912, 29261, 29260); //@t
				return 0;
			}
			if(var_31_bool == 29261) {
				func_397(var_32_cvector, "Tiredness");
				var_0_object->SetMessage(527913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519026, -1, 20146); //@t
				var_0_object->AddReply(519027, -1, 20147); //@t
				return 0;
			}
			var_3_string = true;
			bool var_351_bool;
			func_2574(var_351_bool);
			if(var_351_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a4";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_32_cvector == 22652) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2616();
			}
			if(var_31_bool == 22651) {
				func_1074(var_32_cvector, "Fear");
				var_0_object->SetMessage(521486); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool = false;
				bool var_62_bool;
				func_2650(var_1_object);
				if(var_62_bool != 0) {
					bool var_70_bool;
					func_2638(var_1_object);
					if(var_70_bool != 0)
						var_61_bool = true;
				}
				if(var_61_bool != 0)
					var_0_object->AddReply(521487, 22653, 22652); //@t
				var_0_object->AddReply(521490, -1, 22655); //@t
				return 0;
			}
			if(var_31_bool == 22653) {
				func_1074(var_32_cvector, "Confusion");
				var_0_object->SetMessage(521488); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521489, 25167, 22654); //@t
				var_0_object->AddReply(523891, 25171, 25170); //@t
				return 0;
			}
			if(var_31_bool == 25171) {
				func_1074(var_32_cvector, "Confusion");
				var_0_object->SetMessage(523892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523893, 25173, 25172); //@t
				return 0;
			}
			if(var_31_bool == 25167) {
				func_1074(var_32_cvector, "Confusion");
				var_0_object->SetMessage(523888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523889, 25173, 25168); //@t
				var_0_object->AddReply(523890, -1, 25169); //@t
				return 0;
			}
			if(var_31_bool == 25173) {
				func_1074(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523895, 25176, 25175); //@t
				var_0_object->AddReply(523898, -1, 25178); //@t
				return 0;
			}
			if(var_31_bool == 25176) {
				func_1074(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523897, -1, 25177); //@t
				return 0;
			}
			var_3_string = true;
			bool var_126_bool;
			func_2574(var_126_bool);
			if(var_126_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x449";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_31_bool == 23816) {
				func_1399(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522630, -1, 23817); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_2574(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x58e";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_31_bool == 36971) {
				func_1602(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_31_bool == 36973) {
				func_1602(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_31_bool == 36975) {
				func_1602(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_2574(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x659";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2482();
			if(var_31_int == 42560) {
				func_1856(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2574(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x757";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1927(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_1992();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2206(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_1961(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_1941(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2489(var_77_object);
					var_77_object = var_76_object;
					func_2356(var_75_bool, var_76_object);
				}
			} else {
				func_1956(var_31_int);
				func_1983();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2174();
		func_1992();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_1992();
		func_2436("Neutral");
		func_1983();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_1983();
		else
			func_2436("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2174();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2197(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_2836(var_49_object);
			func_2436("Neutral");
			func_1992();
			func_1983();
		}
	}

}


void func_0(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2211(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_2568(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_2566(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_2570(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_2572(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_2819(var_115_int);
	var_59_object->SetPlayerName(var_115_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	bool var_124_bool; object var_125_object;
	object var_126_object;
	func_2489(var_126_object);
	var_126_object = var_125_object;
	func_2298(var_124_bool, var_125_object);
	object var_219_object; object var_220_object;
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_268_bool = !var_62_bool; //@nz
		if(var_268_bool == 0) goto Label_70;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_70:
	object var_269_object;
	var_53_object = var_269_object;
	func_2280();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1539(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_537_object, object var_538_object)
{
	var_0_object = var_538_object;
	var_1_object = var_537_object;
	var_3_string = false;
	if(1 != 0) {
		func_1602(var_538_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_1572;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x607";
	}
Label_1572:
	bool var_562_bool;
	func_2574(var_562_bool);
	if(var_562_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1601;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1601:
		return 0;

	}
	
}


void func_2819(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb12";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


void func_2566(int var_112_int)
{
	var_112_int = 515541;
}


// @pe
void func_1798(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_597_object, object var_598_object)
{
	var_0_object = var_598_object;
	var_1_object = var_597_object;
	var_3_string = false;
	if(1 != 0) {
		func_1856(var_598_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1826;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x70a";
	}
Label_1826:
	bool var_619_bool;
	func_2574(var_619_bool);
	if(var_619_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1855;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1855:
		return 0;

	}
	
}


void func_2568(int var_111_int)
{
	var_111_int = 502866;
}


void func_2570(string var_113_string)
{
	var_113_string = "ui/NPC_Lara.png";
}


void func_2572(string var_114_string)
{
	var_114_string = "ui/NPC_Lara_b.png";
}


void func_2574(bool var_106_bool)
{
	var_106_bool = true;
}


void func_2576(void)
{
	@SetVariable("b4q01", 2);
	object var_43_object;
	func_2769(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2522(var_54_float);
	var_40_object->AddMark("b4q01LaraGotoRubin", "pt_map_warehouse_gangster", 1, 518593, var_54_float);
	func_2715();
	bool var_80_bool;
	func_2510(var_80_bool, "quest_b4_01", "place_rubin");
}
EMIT "Stack[-1] = 0";


// @pe
void func_2836(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_278_bool;
	func_2536(var_278_bool, 4);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_49_object = var_282_object;
		TaskCall(2);
		func_203(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	bool var_382_bool;
	func_2536(var_382_bool, 8);
	if(var_382_bool != 0) {
		int var_384_int; object var_385_object;
		var_49_object = var_385_object;
		TaskCall(4);
		func_921(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 0;
	}
	bool var_453_bool;
	func_2536(var_453_bool, 10);
	if(var_453_bool != 0) {
		int var_455_int; object var_456_object;
		var_49_object = var_456_object;
		TaskCall(6);
		func_1265(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	bool var_508_bool = false;
	bool var_509_bool;
	func_2536(var_509_bool, 12);
	if(var_509_bool != 0) {
		var_511_bool = GlobalVars[2];
		if(!var_511_bool) //@nz
			var_508_bool = true;
	}
	if(var_508_bool != 0) {
		int var_513_int; object var_514_object;
		var_49_object = var_514_object;
		TaskCall(8);
		func_1458(var_515_object, var_513_int, var_514_object);
		TaskReturn();
		var_572_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
	int var_573_int; object var_574_object;
	var_49_object = var_574_object;
	TaskCall(10);
	func_1717(var_575_object, var_573_int, var_574_object);
	TaskReturn();
}


// @pe
void func_284(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_312_bool;
		func_2662(var_312_bool, var_1_object);
		if(!var_312_bool) { //@nz
			object var_321_object; object var_322_object;
			var_321_object = var_1_object;
			var_322_object = var_0_object;
			func_2604();
			func_397(var_306_object, "Fear");
			var_0_object->SetMessage(518548); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518549, 20132, 19659); //@t
			var_0_object->AddReply(519021, 20141, 20140); //@t
		} else {
					func_397(var_306_object, "Sympathy");
					var_0_object->SetMessage(518550); //@t
					var_0_object->ClearReplies(); //@t
					bool var_350_bool;
					func_2672(var_1_object);
					if(var_350_bool != 0)
						var_0_object->AddReply(518551, 20163, 19661); //@t
					bool var_361_bool = false;
					bool var_362_bool;
					func_2684(var_1_object);
					if(var_362_bool != 0) {
						bool var_368_bool;
						func_2696(var_1_object);
						if(var_368_bool != 0)
							var_361_bool = true;
					}
					if(var_361_bool != 0)
						var_0_object->AddReply(519028, 20149, 20148); //@t
					var_0_object->AddReply(518554, -1, 19664); //@t
		}
	}
	for(;;) {
		bool var_340_bool;
		func_2574(var_340_bool);
		if(var_340_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2436(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_396;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_396:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


// @pe
void func_2604(void)
{
	@SetVariable("b4q01LaraWasBadRep", 1);
}


// @pe
void func_2610(void)
{
	@SetVariable("oob4Lara1", 1);
}


// @pe
void func_1074(object var_2_object, string var_415_string)
{
	bool var_416_bool;
	func_2574(var_416_bool);
	if(!var_416_bool) //@nz
		return 0;
	if(var_415_string == var_2_object)
		return 0;
	string var_419_string; bool var_420_bool;
	var_415_string = var_419_string;
	if(var_415_string == "")
		var_420_bool = false;
	else
		var_420_bool = true;
	func_2452(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	
}


void func_2356(bool var_135_bool, object var_136_object)
{
	string var_142_string; bool var_144_bool; int var_145_int; string var_146_string;
	var_142_string = "c";
	int var_143_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_136_object->HasProperty((var_142_string + (var_143_int + 1)), var_144_bool);
			if(!var_144_bool) { //@nz
			} else {
				var_143_int += 1;
			}
		}
		if(!var_143_int) { //@nz
			var_135_bool = false;
			return 10;
		}
		var_145_int = 0;
		if(var_143_int > 1)
			@irand(var_145_int, var_143_int);
		var_136_object->GetProperty((var_142_string + (var_145_int + 1)), var_146_string);
		bool var_158_bool; string var_159_string;
		var_146_string = var_159_string;
		func_2467(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


void func_2103(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2206(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2549(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2206(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			if(!var_42_int) { //@nz
				@Sleep(3, var_44_bool);
				if(!var_44_bool) { //@nz
				} else {
			} else {
			@irand(var_45_int, var_42_int);
			@irand(var_46_int, 5);
			if(var_46_int != 0)
				var_45_int = 0;
			string var_77_string; int var_78_int;
			var_45_int = var_78_int;
			func_2542(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2158;
			goto Label_2169;
			}
				Label_2158:
					bool var_70_bool;
					func_2172(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2164;
			}
		}
	Label_2169:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2164:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


// @pe
void func_2616(void)
{
	@SetVariable("oob8Lara1", 1);
}


// @pe
void func_2622(object var_87_object)
{
	object var_91_object;
	func_2769(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	func_2786(var_88_object, "pt_map_warehouse_gangster", (float)2);
	object var_111_object;
	func_2769(var_111_object);
	var_87_object->ShowMap(var_111_object);
}


// @pe
void func_1856(object var_2_object, string var_604_string)
{
	bool var_605_bool;
	func_2574(var_605_bool);
	if(!var_605_bool) //@nz
		return 0;
	if(var_604_string == var_2_object)
		return 0;
	string var_608_string; bool var_609_bool;
	var_604_string = var_608_string;
	if(var_604_string == "")
		var_609_bool = false;
	else
		var_609_bool = true;
	func_2452(var_608_string, var_609_bool);
	var_2_object = var_604_string;
	
}


// @pe
void func_1346(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_479_object, object var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_string = false;
	if(1 != 0) {
		func_1399(var_480_object, "Neutral");
		var_0_object->SetMessage(522629); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(522630, -1, 23817); //@t
		goto Label_1369;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x546";
	}
Label_1369:
	bool var_498_bool;
	func_2574(var_498_bool);
	if(var_498_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1398;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1398:
		return 0;

	}
	
}


// @pe
void func_1602(object var_2_object, string var_544_string)
{
	bool var_545_bool;
	func_2574(var_545_bool);
	if(!var_545_bool) //@nz
		return 0;
	if(var_544_string == var_2_object)
		return 0;
	string var_548_string; bool var_549_bool;
	var_544_string = var_548_string;
	if(var_544_string == "")
		var_549_bool = false;
	else
		var_549_bool = true;
	func_2452(var_548_string, var_549_bool);
	var_2_object = var_544_string;
	
}


// @pe
void func_2638(bool var_431_bool)
{
	int var_433_int;
	func_2505(var_433_int, "b8q02");
	if(var_433_int == 1)
		var_431_bool = true;
	var_431_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_219_object, object var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_220_object, "Neutral");
		var_0_object->SetMessage(518021); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518022, -1, 19155); //@t
		var_0_object->AddReply(531564, -1, 32923); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_250_bool;
	func_2574(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_2393(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_2527(var_179_int);
	string var_173_string = ("d" + var_179_int) + "m";
	int var_174_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_167_object->HasProperty((var_173_string + (var_174_int + 1)), var_175_bool);
			if(!var_175_bool) { //@nz
			} else {
				var_174_int += 1;
			}
		}
		if(!var_174_int) { //@nz
			var_166_bool = false;
			return 10;
		}
		var_176_int = 0;
		if(var_174_int > 1)
			@irand(var_176_int, var_174_int);
		var_167_object->GetProperty((var_173_string + (var_176_int + 1)), var_177_string);
		bool var_198_bool; string var_199_string;
		var_177_string = var_199_string;
		func_2467(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


// @pe
void func_2650(bool var_425_bool)
{
	int var_427_int;
	func_2505(var_427_int, "oob8Lara1");
	if(var_427_int == 0) {
		var_425_bool = true;
		return 0;
	}
	var_425_bool = false;
}


// @pe
void func_2662(bool var_312_bool, object var_313_object)
{
	object var_315_object;
	var_313_object = var_315_object;
	bool var_314_bool;
	func_2708(var_314_bool, var_315_object);
	if(var_314_bool != 0) {
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


// @pe
void func_2672(bool var_350_bool)
{
	int var_352_int;
	func_2505(var_352_int, "b4q01");
	if(var_352_int == 1)
		var_350_bool = true;
	var_350_bool = false;
}


// @pe
void func_1399(object var_2_object, string var_486_string)
{
	bool var_487_bool;
	func_2574(var_487_bool);
	if(!var_487_bool) //@nz
		return 0;
	if(var_486_string == var_2_object)
		return 0;
	string var_490_string; bool var_491_bool;
	var_486_string = var_490_string;
	if(var_486_string == "")
		var_491_bool = false;
	else
		var_491_bool = true;
	func_2452(var_490_string, var_491_bool);
	var_2_object = var_486_string;
	
}


// @pe
void func_2684(bool var_362_bool)
{
	int var_364_int;
	func_2505(var_364_int, "b4q01LaraWasBadRep");
	if(var_364_int == 1)
		var_362_bool = true;
	var_362_bool = false;
}


void func_2172(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2174(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2179(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2436(string var_252_string)
{
	bool var_256_bool; float var_257_float; float var_258_float;
	@lshHasAnimation(var_256_bool, var_252_string);
	if(var_256_bool != 0) {
		@lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		@lshPlayAnimation(var_257_float, var_258_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_252_string);
	}
	
}


void func_1927(object var_0_object)
{
	bool var_32_bool;
	func_2206(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2103();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2696(bool var_368_bool)
{
	int var_370_int;
	func_2505(var_370_int, "oob4Lara1");
	if(var_370_int == 0) {
		var_368_bool = true;
		return 0;
	}
	var_368_bool = false;
}


// @pe
void func_139(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_2574(var_227_bool);
	if(!var_227_bool) //@nz
		return 0;
	if(var_226_string == var_2_object)
		return 0;
	string var_230_string; bool var_231_bool;
	var_226_string = var_230_string;
	if(var_226_string == "")
		var_231_bool = false;
	else
		var_231_bool = true;
	func_2452(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


void func_2187(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


// @pe
void func_397(object var_2_object, string var_325_string)
{
	bool var_326_bool;
	func_2574(var_326_bool);
	if(!var_326_bool) //@nz
		return 0;
	if(var_325_string == var_2_object)
		return 0;
	string var_329_string; bool var_330_bool;
	var_325_string = var_329_string;
	if(var_325_string == "")
		var_330_bool = false;
	else
		var_330_bool = true;
	func_2452(var_329_string, var_330_bool);
	var_2_object = var_325_string;
	
}


void func_2452(string var_230_string, bool var_231_bool)
{
	bool var_237_bool; float var_238_float; float var_239_float;
	@lshHasAnimation(var_237_bool, var_230_string);
	if(var_237_bool != 0) {
		@lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		@lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_230_string);
	}
	
}


void func_2197(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2187(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_1941(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2197(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2708(bool var_314_bool, object var_315_object)
{
	float var_317_float;
	var_315_object->GetProperty("reputation", var_317_float);
	var_314_bool = var_317_float >= 0.7;
}


void func_921(object var_0_object, int var_384_int, object var_385_object)
{
	var_0_object = var_385_object;
	bool var_395_bool; object var_396_object;
	var_385_object = var_396_object;
	func_2211(var_395_bool, var_396_object, 70.0);
	if(!var_395_bool) { //@nz
		var_384_int = -2;
		return 8;
	}
	object var_391_object;
	@CreateDialog(var_391_object);
	int var_399_int;
	func_2568(var_399_int);
	var_391_object->SetNPCName(var_399_int);
	int var_400_int;
	func_2566(var_400_int);
	var_391_object->SetNPCDescription(var_400_int);
	string var_401_string;
	func_2570(var_401_string);
	var_391_object->SetPhoto(var_401_string);
	string var_402_string;
	func_2572(var_402_string);
	var_391_object->SetPhoto2(var_402_string);
	int var_403_int;
	func_2819(var_403_int);
	var_391_object->SetPlayerName(var_403_int);
	bool var_392_bool;
	@IsOverrideActive(var_392_bool);
	if(var_392_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	@DoDialog(var_391_object);
	bool var_405_bool; object var_406_object;
	object var_407_object;
	func_2489(var_407_object);
	var_407_object = var_406_object;
	func_2298(var_405_bool, var_406_object);
	object var_408_object; object var_409_object;
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(5);
	func_1002(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	bool var_394_bool;
	var_391_object->IsDialogEnd(var_394_bool);
	
	for(;;) {
		var_451_bool = !var_394_bool; //@nz
		if(var_451_bool == 0) goto Label_991;
		@sync();
		var_391_object->IsDialogEnd(var_394_bool);
	}
	
Label_991:
	object var_452_object;
	var_385_object = var_452_object;
	func_2280();
	@StopDialog(var_391_object);
	var_391_object->GetReturnValue(-1);
	int var_393_int = var_384_int;
}
EMIT "Stack[-4] = 0";


void func_2715(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 218, 1, 518596);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_2741(var_62_bool, var_63_object, 216);
}
EMIT "Stack[-1] = 0";


void func_2206(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2211(bool var_63_bool, object var_64_object, float var_65_float)
{
	cvector var_76_cvector; bool var_83_bool;
	var_64_object->GetPosition(var_76_cvector);
	float var_75_float;
	var_64_object->GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (var_84_float + var_75_float);
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	@GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (var_85_float + var_75_float);
	cvector var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_88_float = sqrt(var_78_cvector | var_78_cvector);
	var_78_cvector /= var_88_float;
	cvector var_79_cvector = -var_78_cvector;
	cvector var_90_cvector;
	func_2495(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_80_cvector = ((var_78_cvector * var_65_float) + (var_90_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_82_bool;
	@IsOverrideActive(var_82_bool);
	if(var_82_bool != 0)
		var_63_bool = false;
	@StopWorld();
	@CameraTransit((var_77_cvector + var_80_cvector), var_79_cvector, true);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	@Rotate(var_104_float, var_105_float);
	bool var_106_bool;
	func_2574(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2274;
		@LookAsyncCamera("head");
	}
Label_2274:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


void func_1956(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2467(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_2574(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2728(object var_71_object)
{
	object var_73_object;
	@GetDiaryRoot(var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_71_object = false;
	}
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_1961(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2179(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2482(void)
{
	bool var_34_bool;
	func_2574(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_1458(object var_0_object, int var_513_int, object var_514_object)
{
	var_0_object = var_514_object;
	bool var_524_bool; object var_525_object;
	var_514_object = var_525_object;
	func_2211(var_524_bool, var_525_object, 70.0);
	if(!var_524_bool) { //@nz
		var_513_int = -2;
		return 8;
	}
	object var_520_object;
	@CreateDialog(var_520_object);
	int var_528_int;
	func_2568(var_528_int);
	var_520_object->SetNPCName(var_528_int);
	int var_529_int;
	func_2566(var_529_int);
	var_520_object->SetNPCDescription(var_529_int);
	string var_530_string;
	func_2570(var_530_string);
	var_520_object->SetPhoto(var_530_string);
	string var_531_string;
	func_2572(var_531_string);
	var_520_object->SetPhoto2(var_531_string);
	int var_532_int;
	func_2819(var_532_int);
	var_520_object->SetPlayerName(var_532_int);
	bool var_521_bool;
	@IsOverrideActive(var_521_bool);
	if(var_521_bool != 0) {
		var_513_int = -2;
		return 8;
	}
	@DoDialog(var_520_object);
	bool var_534_bool; object var_535_object;
	object var_536_object;
	func_2489(var_536_object);
	var_536_object = var_535_object;
	func_2298(var_534_bool, var_535_object);
	object var_537_object; object var_538_object;
	var_514_object = var_537_object;
	var_520_object = var_538_object;
	TaskCall(9);
	func_1539(var_539_object, var_540_object, var_541_string, var_542_bool, var_537_object, var_538_object);
	TaskReturn();
	bool var_523_bool;
	var_520_object->IsDialogEnd(var_523_bool);
	
	for(;;) {
		var_570_bool = !var_523_bool; //@nz
		if(var_570_bool == 0) goto Label_1528;
		@sync();
		var_520_object->IsDialogEnd(var_523_bool);
	}
	
Label_1528:
	object var_571_object;
	var_514_object = var_571_object;
	func_2280();
	@StopDialog(var_520_object);
	var_520_object->GetReturnValue(-1);
	int var_522_int = var_513_int;
}
EMIT "Stack[-4] = 0";


void func_2741(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_2728(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	object var_69_object;
	var_68_object->Find(var_64_int, var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_64_int);
		var_62_bool = false;
	}
	var_69_object->AddChild(var_63_object);
	@SendWorldWndMessage(7);
	int var_70_int;
	var_63_object->GetCategory(var_70_int);
	@SetDiarySection(var_70_int);
	var_62_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1717(object var_0_object, int var_573_int, object var_574_object)
{
	var_0_object = var_574_object;
	bool var_584_bool; object var_585_object;
	var_574_object = var_585_object;
	func_2211(var_584_bool, var_585_object, 70.0);
	if(!var_584_bool) { //@nz
		var_573_int = -2;
		return 8;
	}
	object var_580_object;
	@CreateDialog(var_580_object);
	int var_588_int;
	func_2568(var_588_int);
	var_580_object->SetNPCName(var_588_int);
	int var_589_int;
	func_2566(var_589_int);
	var_580_object->SetNPCDescription(var_589_int);
	string var_590_string;
	func_2570(var_590_string);
	var_580_object->SetPhoto(var_590_string);
	string var_591_string;
	func_2572(var_591_string);
	var_580_object->SetPhoto2(var_591_string);
	int var_592_int;
	func_2819(var_592_int);
	var_580_object->SetPlayerName(var_592_int);
	bool var_581_bool;
	@IsOverrideActive(var_581_bool);
	if(var_581_bool != 0) {
		var_573_int = -2;
		return 8;
	}
	@DoDialog(var_580_object);
	bool var_594_bool; object var_595_object;
	object var_596_object;
	func_2489(var_596_object);
	var_596_object = var_595_object;
	func_2298(var_594_bool, var_595_object);
	object var_597_object; object var_598_object;
	var_574_object = var_597_object;
	var_580_object = var_598_object;
	TaskCall(11);
	func_1798(var_599_object, var_600_object, var_601_string, var_602_bool, var_597_object, var_598_object);
	TaskReturn();
	bool var_583_bool;
	var_580_object->IsDialogEnd(var_583_bool);
	
	for(;;) {
		var_627_bool = !var_583_bool; //@nz
		if(var_627_bool == 0) goto Label_1787;
		@sync();
		var_580_object->IsDialogEnd(var_583_bool);
	}
	
Label_1787:
	object var_628_object;
	var_574_object = var_628_object;
	func_2280();
	@StopDialog(var_580_object);
	var_580_object->GetReturnValue(-1);
	int var_582_int = var_573_int;
}
EMIT "Stack[-4] = 0";


void func_2489(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_1983(void)
{
	float var_632_float;
	@rand(var_632_float, 8, 16);
	@SetTimer(10, var_632_float);
}


void func_2495(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


void func_1992(void)
{
	@KillTimer(10);
}


void func_2505(int var_352_int, string var_353_string)
{
	int var_355_int;
	@GetVariable(var_353_string, var_355_int);
	var_355_int = var_352_int;
}


void func_203(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_2211(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2568(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2566(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2570(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2572(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_2819(var_300_int);
	var_288_object->SetPlayerName(var_300_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	bool var_302_bool; object var_303_object;
	object var_304_object;
	func_2489(var_304_object);
	var_304_object = var_303_object;
	func_2298(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_380_bool = !var_291_bool; //@nz
		if(var_380_bool == 0) goto Label_273;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_273:
	object var_381_object;
	var_282_object = var_381_object;
	func_2280();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


void func_2510(bool var_80_bool, string var_81_string, string var_82_string)
{
	object var_84_object;
	@FindActor(var_84_object, var_81_string);
	if(var_84_object == null)
		var_80_bool = false;
	@Trigger(var_84_object, var_82_string);
	var_80_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2769(object var_43_object)
{
	object var_46_object; object var_47_object;
	@GetMainOutdoorScene(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find main outdoor scene");
		var_47_object = null;
		var_47_object = var_43_object;
	}
	var_46_object->GetMap(var_47_object);
	var_47_object = var_43_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2522(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_2527(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


void func_2786(object var_88_object, string var_89_string, float var_90_float)
{
	object var_98_object;
	@GetMainOutdoorScene(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_96_cvector;
	cvector var_97_cvector;
	bool var_99_bool;
	var_98_object->GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector);
	if(!var_99_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_89_string) + " doesnt exist");
	var_98_object->GetMap(var_88_object);
	if(var_88_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_109_float = GetByIndex(var_96_cvector, 0);
	var_110_float = GetByIndex(var_96_cvector, 2);
	var_88_object->SetMapParams(var_109_float, var_110_float, var_90_float);
}
EMIT "Stack[-2] = 0";


void func_2280(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_2574(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2297;
		@UnlookAsync("head");
	}
Label_2297:
	
}


// @pe
void func_2536(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2527(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


// @pe
void func_1002(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_408_object, object var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if(1 != 0) {
		func_1074(var_409_object, "Fear");
		var_0_object->SetMessage(521486); //@t
		var_0_object->ClearReplies(); //@t
		bool var_424_bool = false;
		bool var_425_bool;
		func_2650(var_1_object);
		if(var_425_bool != 0) {
			bool var_431_bool;
			func_2638(var_1_object);
			if(var_431_bool != 0)
				var_424_bool = true;
		}
		if(var_424_bool != 0)
			var_0_object->AddReply(521487, 22653, 22652); //@t
		var_0_object->AddReply(521490, -1, 22655); //@t
		goto Label_1044;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ee";
	}
Label_1044:
	bool var_443_bool;
	func_2574(var_443_bool);
	if(var_443_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1073;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1073:
		return 0;

	}
	
}


void func_2542(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


void func_1265(object var_0_object, int var_455_int, object var_456_object)
{
	var_0_object = var_456_object;
	bool var_466_bool; object var_467_object;
	var_456_object = var_467_object;
	func_2211(var_466_bool, var_467_object, 70.0);
	if(!var_466_bool) { //@nz
		var_455_int = -2;
		return 8;
	}
	object var_462_object;
	@CreateDialog(var_462_object);
	int var_470_int;
	func_2568(var_470_int);
	var_462_object->SetNPCName(var_470_int);
	int var_471_int;
	func_2566(var_471_int);
	var_462_object->SetNPCDescription(var_471_int);
	string var_472_string;
	func_2570(var_472_string);
	var_462_object->SetPhoto(var_472_string);
	string var_473_string;
	func_2572(var_473_string);
	var_462_object->SetPhoto2(var_473_string);
	int var_474_int;
	func_2819(var_474_int);
	var_462_object->SetPlayerName(var_474_int);
	bool var_463_bool;
	@IsOverrideActive(var_463_bool);
	if(var_463_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	@DoDialog(var_462_object);
	bool var_476_bool; object var_477_object;
	object var_478_object;
	func_2489(var_478_object);
	var_478_object = var_477_object;
	func_2298(var_476_bool, var_477_object);
	object var_479_object; object var_480_object;
	var_456_object = var_479_object;
	var_462_object = var_480_object;
	TaskCall(7);
	func_1346(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	bool var_465_bool;
	var_462_object->IsDialogEnd(var_465_bool);
	
	for(;;) {
		var_506_bool = !var_465_bool; //@nz
		if(var_506_bool == 0) goto Label_1335;
		@sync();
		var_462_object->IsDialogEnd(var_465_bool);
	}
	
Label_1335:
	object var_507_object;
	var_456_object = var_507_object;
	func_2280();
	@StopDialog(var_462_object);
	var_462_object->GetReturnValue(-1);
	int var_464_int = var_455_int;
}
EMIT "Stack[-4] = 0";


void func_2549(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2542(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_2298(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2356(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2393(var_166_bool, var_167_object);
			if(!var_166_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@irand(var_132_int, 2);
		if(var_132_int != 0)
			@SetVariable("voice_common", ((var_131_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_211_bool; object var_212_object;
		var_125_object = var_212_object;
		func_2393(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2356(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2354;
	
Label_2354:
	var_124_bool = true;
	
}


