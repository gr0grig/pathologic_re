// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_31_bool == 26830) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525475, 27554, 26831); //@t
				var_0_object->AddReply(526277, 27557, 27553); //@t
				return 0;
			}
			if(var_31_bool == 27554) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526279, 27557, 27555); //@t
				var_0_object->AddReply(526280, 27557, 27556); //@t
				return 0;
			}
			if(var_31_bool == 27557) {
				func_152(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526282, -1, 27560); //@t
				var_0_object->AddReply(526283, -1, 27561); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_2652(var_76_bool);
			if(var_76_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_32_cvector == 27393) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2660();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_2667();
			}
			if(var_32_cvector == 27390) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_2660();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_2667();
			}
			if(var_31_bool == 27383) {
				bool var_81_bool;
				func_2761(var_1_object);
				if(var_81_bool != 0) {
					object var_89_object; object var_90_object;
					var_89_object = var_1_object;
					var_90_object = var_0_object;
					func_2654();
					func_431(var_32_cvector, "Neutral");
					var_0_object->SetMessage(526097); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526098, 27386, 27384); //@t
					var_0_object->AddReply(526099, 27386, 27385); //@t
					return 0;
				}
				func_431(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526108, -1, 27395); //@t
				var_0_object->AddReply(528917, -1, 30347); //@t
				return 0;
			}
			if(var_31_bool == 27386) {
				func_431(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526101, 27388, 27387); //@t
				return 0;
			}
			if(var_31_bool == 27388) {
				func_431(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526103, 27392, 27389); //@t
				var_0_object->AddReply(526104, -1, 27390); //@t
				return 0;
			}
			if(var_31_bool == 27392) {
				func_431(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526106, -1, 27393); //@t
				return 0;
			}
			var_3_string = true;
			bool var_144_bool;
			func_2652(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c6";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_32_cvector == 27398) {
				object var_37_object = var_1_object;
				func_2683(var_0_object);
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_2693();
			}
			if(var_31_bool == 27397) {
				bool var_64_bool = false;
				bool var_65_bool;
				func_2773(var_1_object);
				if(var_65_bool != 0) {
					bool var_73_bool;
					func_2785(var_1_object);
					if(var_73_bool != 0)
						var_64_bool = true;
				}
				if(var_64_bool != 0) {
					object var_79_object; object var_80_object;
					var_79_object = var_1_object;
					var_80_object = var_0_object;
					func_2677();
					func_783(var_32_cvector, "Neutral");
					var_0_object->SetMessage(526118); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528252, 29614, 29613); //@t
					var_0_object->AddReply(528256, 29614, 29617); //@t
					return 0;
				}
				func_783(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526121, -1, 27400); //@t
				return 0;
			}
			if(var_31_bool == 29614) {
				func_783(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528254, 29616, 29615); //@t
				var_0_object->AddReply(528257, 29616, 29619); //@t
				return 0;
			}
			if(var_31_bool == 29616) {
				func_783(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526119, -1, 27398); //@t
				return 0;
			}
			var_3_string = true;
			bool var_124_bool;
			func_2652(var_124_bool);
			if(var_124_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x326";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_32_cvector == 41290) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2708();
			}
			if(var_32_cvector == 41293) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_2699();
			}
			if(var_32_cvector == 41300) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_2699();
			}
			if(var_31_bool == 41283) {
				bool var_90_bool = false;
				bool var_91_bool;
				func_2739(var_1_object);
				if(!var_91_bool) { //@nz
					bool var_98_bool;
					func_2809(var_1_object);
					if(var_98_bool != 0)
						var_90_bool = true;
				}
				if(var_90_bool != 0) {
					object var_104_object; object var_105_object;
					var_104_object = var_1_object;
					var_105_object = var_0_object;
					func_2724();
					func_1154(var_32_cvector, "Neutral");
					var_0_object->SetMessage(539339); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539340, 41285, 41284); //@t
					var_0_object->AddReply(539351, 41287, 41295); //@t
					return 0;
				}
				func_1154(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539352); //@t
				var_0_object->ClearReplies(); //@t
				bool var_129_bool = false;
				bool var_130_bool = false;
				bool var_131_bool;
				func_2797(var_1_object);
				if(!var_131_bool) { //@nz
					bool var_138_bool;
					func_2751(var_138_bool, var_1_object);
					if(var_138_bool != 0)
						var_130_bool = true;
				}
				if(var_130_bool != 0) {
					bool var_188_bool;
					func_2739(var_1_object);
					if(!var_188_bool) //@nz
						var_129_bool = true;
				}
				if(var_129_bool != 0)
					var_0_object->AddReply(539353, 41299, 41298); //@t
				var_0_object->AddReply(539356, -1, 41301); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0x482";
			EMIT "Pop(1)";
			EMIT "Push((int) 539357)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
			EMIT "Pop(0)";
			EMIT "Push((int) 539358)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 41303)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_31_bool == 41299) {
				func_1154(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539355, -1, 41300); //@t
				return 0;
			}
			if(var_31_bool == 41285) {
				func_1154(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539342, 41287, 41286); //@t
				return 0;
			}
			if(var_31_bool == 41287) {
				func_1154(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539344, 41289, 41288); //@t
				return 0;
			}
			if(var_31_bool == 41289) {
				bool var_220_bool;
				func_2751(var_220_bool, var_1_object);
				if(!var_220_bool) { //@nz
					func_1154(var_32_cvector, "Neutral");
					var_0_object->SetMessage(539345); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539346, -1, 41290); //@t
					var_0_object->AddReply(539347, -1, 41291); //@t
					return 0;
				}
				bool var_231_bool;
				func_2751(var_231_bool, var_1_object);
				if(var_231_bool != 0) {
					func_1154(var_32_cvector, "Neutral");
					var_0_object->SetMessage(539348); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539349, -1, 41293); //@t
					var_0_object->AddReply(539350, -1, 41294); //@t
					return 0;
				}
			}
			var_3_string = true;
			bool var_241_bool;
			func_2652(var_241_bool);
			if(var_241_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x499";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_32_cvector == 41369) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2730();
			}
			if(var_32_cvector == 42820) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2730();
			}
			if(var_31_bool == 41366) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539435); //@t
				var_0_object->ClearReplies(); //@t
				bool var_83_bool;
				func_2821(var_1_object);
				if(var_83_bool != 0)
					var_0_object->AddReply(539436, 42812, 41367); //@t
				var_0_object->AddReply(539439, -1, 41370); //@t
				var_0_object->AddReply(540767, -1, 42811); //@t
				return 0;
			}
			if(var_31_bool == 42812) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540769, 42814, 42813); //@t
				var_0_object->AddReply(540772, 42817, 42816); //@t
				return 0;
			}
			if(var_31_bool == 42817) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540774, 41368, 42818); //@t
				return 0;
			}
			if(var_31_bool == 42814) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540771, 42823, 42815); //@t
				var_0_object->AddReply(540776, 41368, 42821); //@t
				return 0;
			}
			if(var_31_bool == 42823) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540778, 41368, 42824); //@t
				var_0_object->AddReply(540779, -1, 42825); //@t
				return 0;
			}
			if(var_31_bool == 41368) {
				func_1579(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539438, -1, 41369); //@t
				var_0_object->AddReply(540775, -1, 42820); //@t
				return 0;
			}
			var_3_string = true;
			bool var_147_bool;
			func_2652(var_147_bool);
			if(var_147_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x642";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2534();
			if(var_31_int == 42554) {
				func_1918(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2652(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x795";
	
	}

}


maintask task_13
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_1986(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2057();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2278(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2026(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2006(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2541(var_77_object);
					var_77_object = var_76_object;
					func_2426(var_75_bool, var_76_object);
				}
			} else {
				func_2021(var_31_int);
				func_2048();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2239();
		func_2057();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_2057();
		func_2506("Neutral");
		func_2048();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2048();
		else
			func_2506("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2239();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2269(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3043(var_49_object);
			func_2506("Neutral");
			func_2057();
			func_2048();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_35_bool;
	func_2278(var_35_bool);
	if(!var_35_bool) goto Label_0; //@nz
}


void func_2048(void)
{
	float var_45_float;
	@rand(var_45_float, 8, 16);
	@SetTimer(10, var_45_float);
}


void func_2562(int var_53_int, int var_54_int)
{
	object var_56_object;
	@CreateIntVector(var_56_object);
	var_56_object->add(var_53_int);
	var_56_object->add(var_54_int);
	@SendWorldWndMessage(3, var_56_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2821(bool var_312_bool)
{
	int var_314_int;
	func_2557(var_314_int, "k5q04");
	if(var_314_int == 2)
		var_312_bool = true;
	var_312_bool = false;
}


void func_262(object var_0_object, int var_341_int, object var_342_object)
{
	var_0_object = var_342_object;
	bool var_352_bool; object var_353_object;
	object var_354_object;
	func_2541(var_354_object);
	var_354_object = var_353_object;
	func_2368(var_352_bool, var_353_object);
	bool var_355_bool; object var_356_object;
	var_342_object = var_356_object;
	func_2283(var_355_bool, var_356_object, 70.0);
	if(!var_355_bool) { //@nz
		var_341_int = -2;
		return 8;
	}
	object var_348_object;
	@CreateDialog(var_348_object);
	int var_359_int;
	func_2646(var_359_int);
	var_348_object->SetNPCName(var_359_int);
	int var_360_int;
	func_2644(var_360_int);
	var_348_object->SetNPCDescription(var_360_int);
	string var_361_string;
	func_2648(var_361_string);
	var_348_object->SetPhoto(var_361_string);
	string var_362_string;
	func_2650(var_362_string);
	var_348_object->SetPhoto2(var_362_string);
	int var_363_int;
	func_2932(var_363_int);
	var_348_object->SetPlayerName(var_363_int);
	bool var_349_bool;
	@IsOverrideActive(var_349_bool);
	if(var_349_bool != 0) {
		var_341_int = -2;
		return 8;
	}
	@DoDialog(var_348_object);
	object var_365_object; object var_366_object;
	var_342_object = var_365_object;
	var_348_object = var_366_object;
	TaskCall(4);
	func_343(var_367_object, var_368_object, var_369_string, var_370_bool, var_365_object, var_366_object);
	TaskReturn();
	bool var_351_bool;
	var_348_object->IsDialogEnd(var_351_bool);
	
	for(;;) {
		var_413_bool = !var_351_bool; //@nz
		if(var_413_bool == 0) goto Label_332;
		@sync();
		var_348_object->IsDialogEnd(var_351_bool);
	}
	
Label_332:
	object var_414_object;
	var_342_object = var_414_object;
	func_2351();
	@StopDialog(var_348_object);
	var_348_object->GetReturnValue(-1);
	int var_350_int = var_341_int;
}
EMIT "Stack[-4] = 0";


void func_2057(void)
{
	@KillTimer(10);
}


void func_13(object var_0_object, int var_54_int, object var_55_object)
{
	var_0_object = var_55_object;
	bool var_65_bool; object var_66_object;
	object var_67_object;
	func_2541(var_67_object);
	var_67_object = var_66_object;
	func_2368(var_65_bool, var_66_object);
	bool var_160_bool; object var_161_object;
	var_55_object = var_161_object;
	func_2283(var_160_bool, var_161_object, 70.0);
	if(!var_160_bool) { //@nz
		var_54_int = -2;
		return 8;
	}
	object var_61_object;
	@CreateDialog(var_61_object);
	int var_207_int;
	func_2646(var_207_int);
	var_61_object->SetNPCName(var_207_int);
	int var_208_int;
	func_2644(var_208_int);
	var_61_object->SetNPCDescription(var_208_int);
	string var_209_string;
	func_2648(var_209_string);
	var_61_object->SetPhoto(var_209_string);
	string var_210_string;
	func_2650(var_210_string);
	var_61_object->SetPhoto2(var_210_string);
	int var_211_int;
	func_2932(var_211_int);
	var_61_object->SetPlayerName(var_211_int);
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	@DoDialog(var_61_object);
	object var_220_object; object var_221_object;
	var_55_object = var_220_object;
	var_61_object = var_221_object;
	TaskCall(2);
	func_94(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object);
	TaskReturn();
	bool var_64_bool;
	var_61_object->IsDialogEnd(var_64_bool);
	
	for(;;) {
		var_259_bool = !var_64_bool; //@nz
		if(var_259_bool == 0) goto Label_83;
		@sync();
		var_61_object->IsDialogEnd(var_64_bool);
	}
	
Label_83:
	object var_260_object;
	var_55_object = var_260_object;
	func_2351();
	@StopDialog(var_61_object);
	var_61_object->GetReturnValue(-1);
	int var_63_int = var_54_int;
}
EMIT "Stack[-4] = 0";


void func_2574(object var_40_object, int var_41_int)
{
	int var_43_int;
	object var_44_object;
	var_40_object = var_44_object;
	int var_46_int;
	func_2252(var_44_object, "money", var_46_int);
	if(var_46_int > 0) {
		@GetInvItemByName(var_43_int, "Money");
		int var_53_int; int var_54_int;
		var_43_int = var_53_int;
		var_41_int = var_54_int;
		func_2562(var_53_int, var_54_int);
	}
}


// @pe
void func_783(object var_2_object, string var_465_string)
{
	bool var_466_bool;
	func_2652(var_466_bool);
	if(!var_466_bool) //@nz
		return 0;
	if(var_465_string == var_2_object)
		return 0;
	string var_469_string; bool var_470_bool;
	var_465_string = var_469_string;
	if(var_465_string == "")
		var_470_bool = false;
	else
		var_470_bool = true;
	func_2513(var_469_string, var_470_bool);
	var_2_object = var_465_string;
	
}


// @pe
void func_2833(bool var_582_bool)
{
	bool var_584_bool;
	func_3005(var_584_bool);
	var_584_bool = var_582_bool;
}


void func_2839(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 730, 1, 539360);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_2904(var_81_bool, var_82_object, 729);
}
EMIT "Stack[-1] = 0";


void func_2593(bool var_39_bool, string var_40_string, string var_41_string)
{
	object var_43_object;
	@FindActor(var_43_object, var_40_string);
	if(var_43_object == null)
		var_39_bool = false;
	@Trigger(var_43_object, var_41_string);
	var_39_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2852(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 736, 1, 539366);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2904(var_52_bool, var_53_object, 729);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1579(object var_2_object, string var_303_string)
{
	bool var_304_bool;
	func_2652(var_304_bool);
	if(!var_304_bool) //@nz
		return 0;
	if(var_303_string == var_2_object)
		return 0;
	string var_307_string; bool var_308_bool;
	var_303_string = var_307_string;
	if(var_303_string == "")
		var_308_bool = false;
	else
		var_308_bool = true;
	func_2513(var_307_string, var_308_bool);
	var_2_object = var_303_string;
	
}


void func_2605(int var_120_int)
{
	float var_122_float;
	@GetGameTime(var_122_float);
	var_120_int = 1 + (var_122_float / 24);
}


void func_2351(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal();
	bool var_263_bool;
	func_2652(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_2367;
		@UnlookAsync("head");
	}
Label_2367:
	
}


void func_2865(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 743, 2, 539460);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2904(var_46_bool, var_47_object, 740);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2614(bool var_269_bool, int var_270_int)
{
	int var_271_int;
	func_2605(var_271_int);
	var_269_bool = var_271_int == var_270_int;
}


void func_2620(string var_69_string, int var_70_int)
{
	string var_72_string = "idle";
	if(var_70_int != 0)
		var_72_string += var_70_int;
	var_72_string = var_69_string;
}


void func_2878(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 415, 1, 526116);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_2904(var_52_bool, var_53_object, 408);
}
EMIT "Stack[-1] = 0";


void func_2368(bool var_65_bool, object var_66_object)
{
	int var_72_int; int var_73_int;
	@GetVariable("voice_common", var_72_int);
	if(var_72_int != 0) {
		bool var_76_bool; object var_77_object;
		var_66_object = var_77_object;
		func_2426(var_76_bool, var_77_object);
		if(!var_76_bool) { //@nz
			bool var_107_bool; object var_108_object;
			var_66_object = var_108_object;
			func_2463(var_107_bool, var_108_object);
			if(!var_107_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@irand(var_73_int, 2);
		if(var_73_int != 0)
			@SetVariable("voice_common", ((var_72_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_152_bool; object var_153_object;
		var_66_object = var_153_object;
		func_2463(var_152_bool, var_153_object);
		if(!var_152_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_66_object = var_156_object;
			func_2426(var_155_bool, var_156_object);
			if(!var_155_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2424;
	
Label_2424:
	var_65_bool = true;
	
}


void func_2627(int var_63_int)
{
	int var_66_int; bool var_67_bool;
	var_66_int = 0;
	
	for(;;) {
		string var_69_string; int var_70_int;
		var_66_int = var_70_int;
		func_2620(var_69_string, var_70_int);
		@HasAnimation(var_67_bool, "all", var_69_string);
		if(!var_67_bool) //@nz
			break;
		var_66_int += 1;
	}
	var_66_int = var_63_int;
}


// @pe
void func_1860(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_665_object, object var_666_object)
{
	var_0_object = var_666_object;
	var_1_object = var_665_object;
	var_3_string = false;
	if(1 != 0) {
		func_1918(var_666_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1888;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x748";
	}
Label_1888:
	bool var_687_bool;
	func_2652(var_687_bool);
	if(var_687_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2506(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1917;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1917:
		return 0;

	}
	
}


void func_2891(object var_55_object)
{
	object var_57_object;
	@GetDiaryRoot(var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_55_object = false;
	}
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_2644(int var_208_int)
{
	var_208_int = 515573;
}


void func_2646(int var_207_int)
{
	var_207_int = 504032;
}


// @pe
void func_343(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_365_object, object var_366_object)
{
	var_0_object = var_366_object;
	var_1_object = var_365_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_372_bool;
		func_2761(var_1_object);
		if(var_372_bool != 0) {
			object var_378_object; object var_379_object;
			var_378_object = var_1_object;
			var_379_object = var_0_object;
			func_2654();
			func_431(var_366_object, "Neutral");
			var_0_object->SetMessage(526097); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526098, 27386, 27384); //@t
			var_0_object->AddReply(526099, 27386, 27385); //@t
		} else {
					func_431(var_366_object, "Neutral");
					var_0_object->SetMessage(526107); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526108, -1, 27395); //@t
					var_0_object->AddReply(528917, -1, 30347); //@t
		}
	}
	for(;;) {
		bool var_397_bool;
		func_2652(var_397_bool);
		if(var_397_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2506(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_430;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_430:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15b";


void func_2648(string var_209_string)
{
	var_209_string = "ui/NPC_Bakalavr.png";
}


void func_2904(bool var_46_bool, object var_47_object, int var_48_int)
{
	object var_55_object;
	func_2891(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	object var_53_object;
	var_52_object->Find(var_48_int, var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_48_int);
		var_46_bool = false;
	}
	var_53_object->AddChild(var_47_object);
	@SendWorldWndMessage(7);
	int var_54_int;
	var_47_object->GetCategory(var_54_int);
	@SetDiarySection(var_54_int);
	var_46_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2650(string var_210_string)
{
	var_210_string = "ui/NPC_Bakalavr_b.png";
}


void func_2652(bool var_103_bool)
{
	var_103_bool = true;
}


// @pe
void func_2654(void)
{
	@SetVariable("ook6Danko1", 1);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_220_object, object var_221_object)
{
	var_0_object = var_221_object;
	var_1_object = var_220_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_221_object, "Neutral");
		var_0_object->SetMessage(525474); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525475, 27554, 26831); //@t
		var_0_object->AddReply(526277, 27557, 27553); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_246_bool;
	func_2652(var_246_bool);
	if(var_246_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2506(var_2_object);
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


void func_610(object var_0_object, int var_417_int, object var_418_object)
{
	var_0_object = var_418_object;
	bool var_428_bool; object var_429_object;
	object var_430_object;
	func_2541(var_430_object);
	var_430_object = var_429_object;
	func_2368(var_428_bool, var_429_object);
	bool var_431_bool; object var_432_object;
	var_418_object = var_432_object;
	func_2283(var_431_bool, var_432_object, 70.0);
	if(!var_431_bool) { //@nz
		var_417_int = -2;
		return 8;
	}
	object var_424_object;
	@CreateDialog(var_424_object);
	int var_435_int;
	func_2646(var_435_int);
	var_424_object->SetNPCName(var_435_int);
	int var_436_int;
	func_2644(var_436_int);
	var_424_object->SetNPCDescription(var_436_int);
	string var_437_string;
	func_2648(var_437_string);
	var_424_object->SetPhoto(var_437_string);
	string var_438_string;
	func_2650(var_438_string);
	var_424_object->SetPhoto2(var_438_string);
	int var_439_int;
	func_2932(var_439_int);
	var_424_object->SetPlayerName(var_439_int);
	bool var_425_bool;
	@IsOverrideActive(var_425_bool);
	if(var_425_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	@DoDialog(var_424_object);
	object var_441_object; object var_442_object;
	var_418_object = var_441_object;
	var_424_object = var_442_object;
	TaskCall(6);
	func_691(var_443_object, var_444_object, var_445_string, var_446_bool, var_441_object, var_442_object);
	TaskReturn();
	bool var_427_bool;
	var_424_object->IsDialogEnd(var_427_bool);
	
	for(;;) {
		var_493_bool = !var_427_bool; //@nz
		if(var_493_bool == 0) goto Label_680;
		@sync();
		var_424_object->IsDialogEnd(var_427_bool);
	}
	
Label_680:
	object var_494_object;
	var_418_object = var_494_object;
	func_2351();
	@StopDialog(var_424_object);
	var_424_object->GetReturnValue(-1);
	int var_426_int = var_417_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2660(void)
{
	bool var_39_bool;
	func_2593(var_39_bool, "quest_k6_01", "teleport");
}


// @pe
void func_2667(void)
{
	func_2878();
	bool var_70_bool;
	func_2593(var_70_bool, "quest_k6_01", "completed");
}


void func_2932(int var_211_int)
{
	int var_213_int;
	@GetVariable("branch", var_213_int);
	if(var_213_int == 0) {
		var_211_int = 1;
		return 2;
	EMIT "GOTO 0xb83";
	}
	if(var_213_int == 1) {
		var_211_int = 2;
		return 2;
	}
	var_211_int = 3;
}


// @pe
void func_2677(void)
{
	@SetVariable("ook7Danko1", 1);
}


void func_2168(void)
{
	bool var_57_bool; int var_58_int; int var_59_int; bool var_60_bool;
	@WaitForAnimEnd();
	bool var_61_bool;
	func_2278(var_61_bool);
	if(!var_61_bool) //@nz
		return 12;
	int var_63_int;
	func_2627(var_63_int);
	int var_55_int;
	var_63_int = var_55_int;
	int var_56_int = 0;
	
	for(;;) {
		bool var_76_bool = false;
		if(var_56_int < 5) {
			bool var_79_bool;
			func_2278(var_79_bool);
			if(var_79_bool != 0)
				var_76_bool = true;
		}
		if(var_76_bool != 0) {
			if(!var_55_int) { //@nz
				@Sleep(3, var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			@irand(var_58_int, var_55_int);
			@irand(var_59_int, 5);
			if(var_59_int != 0)
				var_58_int = 0;
			string var_90_string; int var_91_int;
			var_58_int = var_91_int;
			func_2620(var_90_string, var_91_int);
			@PlayAnimation("all", var_90_string);
			@WaitForAnimEnd(var_60_bool);
			var_92_bool = !var_60_bool; //@nz
			if(var_92_bool == 0) goto Label_2223;
			goto Label_2234;
			}
				Label_2223:
					bool var_83_bool;
					func_2237(var_83_bool);
					var_84_bool = !var_83_bool; //@nz
					if(var_84_bool == 0) goto Label_2229;
			}
		}
	Label_2234:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2229:
		@ResetAAS();
		var_56_int += 1;
	}
	
}


void func_2426(bool var_76_bool, object var_77_object)
{
	string var_83_string; bool var_85_bool; int var_86_int; string var_87_string;
	var_83_string = "c";
	int var_84_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_77_object->HasProperty((var_83_string + (var_84_int + 1)), var_85_bool);
			if(!var_85_bool) { //@nz
			} else {
				var_84_int += 1;
			}
		}
		if(!var_84_int) { //@nz
			var_76_bool = false;
			return 10;
		}
		var_86_int = 0;
		if(var_84_int > 1)
			@irand(var_86_int, var_84_int);
		var_77_object->GetProperty((var_83_string + (var_86_int + 1)), var_87_string);
		bool var_99_bool; string var_100_string;
		var_87_string = var_100_string;
		func_2519(var_99_bool, var_100_string);
		var_99_bool = var_76_bool;
		return 10;

	}
}


// @pe
void func_2683(object var_37_object)
{
	@Trace("money1000 is given");
	object var_40_object;
	var_37_object = var_40_object;
	func_2574(var_40_object, 1000);
}


// @pe
void func_1918(object var_2_object, string var_672_string)
{
	bool var_673_bool;
	func_2652(var_673_bool);
	if(!var_673_bool) //@nz
		return 0;
	if(var_672_string == var_2_object)
		return 0;
	string var_676_string; bool var_677_bool;
	var_672_string = var_676_string;
	if(var_672_string == "")
		var_677_bool = false;
	else
		var_677_bool = true;
	func_2513(var_676_string, var_677_bool);
	var_2_object = var_672_string;
	
}


// @pe
void func_1154(object var_2_object, string var_546_string)
{
	bool var_547_bool;
	func_2652(var_547_bool);
	if(!var_547_bool) //@nz
		return 0;
	if(var_546_string == var_2_object)
		return 0;
	string var_550_string; bool var_551_bool;
	var_546_string = var_550_string;
	if(var_546_string == "")
		var_551_bool = false;
	else
		var_551_bool = true;
	func_2513(var_550_string, var_551_bool);
	var_2_object = var_546_string;
	
}


// @pe
void func_2693(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2949(object var_593_object, bool var_594_bool, int var_595_int)
{
	var_593_object->add(6);
	var_593_object->add(26);
	var_593_object->add(2);
	var_593_object->add(22);
	if(var_594_bool == false) {
		var_593_object->add(15);
		var_593_object->add(5);
		var_593_object->add(16);
		var_593_object->add(19);
	} else if(var_595_int != 0) {
		var_593_object->add(15);
	}
	
}


// @pe
void func_2699(void)
{
	@SetVariable("k12q01DankoInSobor", 1);
	func_2839();
}


// @pe
void func_2708(void)
{
	int var_39_int;
	func_2557(var_39_int, "k12q01_Danko");
	if(var_39_int == 0) {
		@SetVariable("k12q01_Danko", 1);
		func_2852();
	}
}


void func_1430(object var_0_object, int var_272_int, object var_273_object)
{
	var_0_object = var_273_object;
	bool var_283_bool; object var_284_object;
	object var_285_object;
	func_2541(var_285_object);
	var_285_object = var_284_object;
	func_2368(var_283_bool, var_284_object);
	bool var_286_bool; object var_287_object;
	var_273_object = var_287_object;
	func_2283(var_286_bool, var_287_object, 70.0);
	if(!var_286_bool) { //@nz
		var_272_int = -2;
		return 8;
	}
	object var_279_object;
	@CreateDialog(var_279_object);
	int var_290_int;
	func_2646(var_290_int);
	var_279_object->SetNPCName(var_290_int);
	int var_291_int;
	func_2644(var_291_int);
	var_279_object->SetNPCDescription(var_291_int);
	string var_292_string;
	func_2648(var_292_string);
	var_279_object->SetPhoto(var_292_string);
	string var_293_string;
	func_2650(var_293_string);
	var_279_object->SetPhoto2(var_293_string);
	int var_294_int;
	func_2932(var_294_int);
	var_279_object->SetPlayerName(var_294_int);
	bool var_280_bool;
	@IsOverrideActive(var_280_bool);
	if(var_280_bool != 0) {
		var_272_int = -2;
		return 8;
	}
	@DoDialog(var_279_object);
	object var_296_object; object var_297_object;
	var_273_object = var_296_object;
	var_279_object = var_297_object;
	TaskCall(10);
	func_1511(var_298_object, var_299_object, var_300_string, var_301_bool, var_296_object, var_297_object);
	TaskReturn();
	bool var_282_bool;
	var_279_object->IsDialogEnd(var_282_bool);
	
	for(;;) {
		var_337_bool = !var_282_bool; //@nz
		if(var_337_bool == 0) goto Label_1500;
		@sync();
		var_279_object->IsDialogEnd(var_282_bool);
	}
	
Label_1500:
	object var_338_object;
	var_273_object = var_338_object;
	func_2351();
	@StopDialog(var_279_object);
	var_279_object->GetReturnValue(-1);
	int var_281_int = var_272_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_152(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_2652(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string; bool var_232_bool;
	var_227_string = var_231_string;
	if(var_227_string == "")
		var_232_bool = false;
	else
		var_232_bool = true;
	func_2513(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	
}


void func_2463(bool var_107_bool, object var_108_object)
{
	bool var_116_bool; int var_117_int; string var_118_string;
	int var_120_int;
	func_2605(var_120_int);
	string var_114_string = ("d" + var_120_int) + "m";
	int var_115_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_108_object->HasProperty((var_114_string + (var_115_int + 1)), var_116_bool);
			if(!var_116_bool) { //@nz
			} else {
				var_115_int += 1;
			}
		}
		if(!var_115_int) { //@nz
			var_107_bool = false;
			return 10;
		}
		var_117_int = 0;
		if(var_115_int > 1)
			@irand(var_117_int, var_115_int);
		var_108_object->GetProperty((var_114_string + (var_117_int + 1)), var_118_string);
		bool var_139_bool; string var_140_string;
		var_118_string = var_140_string;
		func_2519(var_139_bool, var_140_string);
		var_139_bool = var_107_bool;
		return 10;

	}
}


// @pe
void func_2724(void)
{
	@SetVariable("ook12Danko1", 1);
}


void func_935(object var_0_object, int var_497_int, object var_498_object)
{
	var_0_object = var_498_object;
	bool var_508_bool; object var_509_object;
	object var_510_object;
	func_2541(var_510_object);
	var_510_object = var_509_object;
	func_2368(var_508_bool, var_509_object);
	bool var_511_bool; object var_512_object;
	var_498_object = var_512_object;
	func_2283(var_511_bool, var_512_object, 70.0);
	if(!var_511_bool) { //@nz
		var_497_int = -2;
		return 8;
	}
	object var_504_object;
	@CreateDialog(var_504_object);
	int var_515_int;
	func_2646(var_515_int);
	var_504_object->SetNPCName(var_515_int);
	int var_516_int;
	func_2644(var_516_int);
	var_504_object->SetNPCDescription(var_516_int);
	string var_517_string;
	func_2648(var_517_string);
	var_504_object->SetPhoto(var_517_string);
	string var_518_string;
	func_2650(var_518_string);
	var_504_object->SetPhoto2(var_518_string);
	int var_519_int;
	func_2932(var_519_int);
	var_504_object->SetPlayerName(var_519_int);
	bool var_505_bool;
	@IsOverrideActive(var_505_bool);
	if(var_505_bool != 0) {
		var_497_int = -2;
		return 8;
	}
	@DoDialog(var_504_object);
	object var_521_object; object var_522_object;
	var_498_object = var_521_object;
	var_504_object = var_522_object;
	TaskCall(8);
	func_1016(var_523_object, var_524_object, var_525_string, var_526_bool, var_521_object, var_522_object);
	TaskReturn();
	bool var_507_bool;
	var_504_object->IsDialogEnd(var_507_bool);
	
	for(;;) {
		var_639_bool = !var_507_bool; //@nz
		if(var_639_bool == 0) goto Label_1005;
		@sync();
		var_504_object->IsDialogEnd(var_507_bool);
	}
	
Label_1005:
	object var_640_object;
	var_498_object = var_640_object;
	func_2351();
	@StopDialog(var_504_object);
	var_504_object->GetReturnValue(-1);
	int var_506_int = var_497_int;
}
EMIT "Stack[-4] = 0";


void func_2985(bool var_620_bool, int var_621_int)
{
	int var_623_int;
	@GetVariable(("vol_" + var_621_int), var_623_int);
	var_620_bool = (var_623_int & 4) != 0;
}


// @pe
void func_2730(void)
{
	@SetVariable("k5q04", 3);
	func_2865();
}


// @pe
void func_431(object var_2_object, string var_382_string)
{
	bool var_383_bool;
	func_2652(var_383_bool);
	if(!var_383_bool) //@nz
		return 0;
	if(var_382_string == var_2_object)
		return 0;
	string var_386_string; bool var_387_bool;
	var_382_string = var_386_string;
	if(var_382_string == "")
		var_387_bool = false;
	else
		var_387_bool = true;
	func_2513(var_386_string, var_387_bool);
	var_2_object = var_382_string;
	
}


// @pe
void func_691(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_441_object, object var_442_object)
{
	var_0_object = var_442_object;
	var_1_object = var_441_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_448_bool = false;
		bool var_449_bool;
		func_2773(var_1_object);
		if(var_449_bool != 0) {
			bool var_455_bool;
			func_2785(var_1_object);
			if(var_455_bool != 0)
				var_448_bool = true;
		}
		if(var_448_bool != 0) {
			object var_461_object; object var_462_object;
			var_461_object = var_1_object;
			var_462_object = var_0_object;
			func_2677();
			func_783(var_442_object, "Neutral");
			var_0_object->SetMessage(526118); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528252, 29614, 29613); //@t
			var_0_object->AddReply(528256, 29614, 29617); //@t
		} else {
					func_783(var_442_object, "Neutral");
					var_0_object->SetMessage(526120); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526121, -1, 27400); //@t
		}
	}
	for(;;) {
		bool var_480_bool;
		func_2652(var_480_bool);
		if(var_480_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2506(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_782;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_782:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2b7";


// @pe
void func_2739(bool var_529_bool)
{
	int var_531_int;
	func_2557(var_531_int, "game_final");
	if(var_531_int != 0) {
		var_529_bool = true;
		return 0;
	}
	var_529_bool = false;
}


void func_2995(bool var_611_bool, int var_612_int)
{
	int var_614_int;
	@GetVariable(("vol_" + var_612_int), var_614_int);
	var_611_bool = (var_614_int & 16) != 0;
}


void func_2237(bool var_83_bool)
{
	var_83_bool = true;
}


void func_3005(bool var_584_bool)
{
	object var_589_object; int var_592_int;
	@CreateIntVector(var_589_object);
	object var_593_object;
	var_589_object = var_593_object;
	func_2949(var_593_object, false, -1);
	int var_590_int;
	var_589_object->size(var_590_int);
	int var_591_int = 0;
	
	while(var_591_int < var_590_int) {
		var_589_object->get(var_592_int, var_591_int);
		bool var_610_bool = true;
		bool var_611_bool; int var_612_int;
		var_592_int = var_612_int;
		func_2995(var_611_bool, var_612_int);
		if(var_611_bool != 1) {
			bool var_620_bool; int var_621_int;
			var_592_int = var_621_int;
			func_2985(var_620_bool, var_621_int);
			if(var_620_bool != 1)
				var_610_bool = false;
		}
		if(var_610_bool != 0)
			var_584_bool = false;
		var_591_int += 1;
	}
	
	var_584_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2751(bool var_580_bool, object var_581_object)
{
	object var_583_object;
	var_581_object = var_583_object;
	func_2833(var_583_object);
	bool var_582_bool;
	if(var_582_bool != 0) {
		var_580_bool = true;
		return 0;
	}
	var_580_bool = false;
}


void func_2239(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1986(object var_0_object)
{
	bool var_31_bool;
	func_2278(var_31_bool);
	if(!var_31_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2114();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2168();
	}
}
EMIT "Return(); Pop(0)";


void func_2244(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


// @pe
void func_2761(bool var_372_bool)
{
	int var_374_int;
	func_2557(var_374_int, "ook6Danko1");
	if(var_374_int == 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


void func_2506(string var_38_string)
{
	float var_41_float; float var_42_float;
	@lshGetAnimTimes(var_38_string, var_41_float, var_42_float);
	@lshPlayAnimation(var_41_float, var_42_float, false);
}


void func_2252(object var_44_object, string var_45_string, int var_46_int)
{
	int var_48_int;
	var_44_object->GetProperty(var_45_string, var_48_int);
	var_44_object->SetProperty(var_45_string, (var_48_int + var_46_int));
}


void func_2513(string var_231_string, bool var_232_bool)
{
	float var_237_float; float var_238_float;
	@lshGetAnimTimes(var_231_string, var_237_float, var_238_float);
	@lshPlayAnimation(var_237_float, var_238_float, var_232_bool);
}


void func_2259(bool var_39_bool, cvector var_40_cvector)
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
void func_2773(bool var_449_bool)
{
	int var_451_int;
	func_2557(var_451_int, "k7q01");
	if(var_451_int == 0) {
		var_449_bool = true;
		return 0;
	}
	var_449_bool = false;
}


void func_2006(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2269(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2519(bool var_99_bool, string var_100_string)
{
	bool var_102_bool;
	bool var_103_bool;
	func_2652(var_103_bool);
	if(var_103_bool != 0) {
		@lshHasSpeech(var_102_bool, var_100_string);
		if(var_102_bool != 0) {
			@lshPlaySpeech(var_100_string);
			var_99_bool = true;
		}
	}
	var_99_bool = false;
}


void func_2269(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2259(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


// @pe
void func_2785(bool var_455_bool)
{
	int var_457_int;
	func_2557(var_457_int, "ook7Danko1");
	if(var_457_int == 0) {
		var_455_bool = true;
		return 0;
	}
	var_455_bool = false;
}


void func_3043(object var_49_object)
{
	int var_51_int;
	@GetVariable("mt_danko", var_51_int);
	if(!var_51_int) { //@nz
		int var_54_int; object var_55_object;
		var_49_object = var_55_object;
		TaskCall(1);
		func_13(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		@SetVariable("mt_danko", 1);
	}
	bool var_269_bool;
	func_2614(var_269_bool, 5);
	if(var_269_bool != 0) {
		int var_272_int; object var_273_object;
		var_49_object = var_273_object;
		TaskCall(9);
		func_1430(var_274_object, var_272_int, var_273_object);
		TaskReturn();
		return 2;
	}
	bool var_339_bool;
	func_2614(var_339_bool, 6);
	if(var_339_bool != 0) {
		int var_341_int; object var_342_object;
		var_49_object = var_342_object;
		TaskCall(3);
		func_262(var_343_object, var_341_int, var_342_object);
		TaskReturn();
		return 2;
	}
	bool var_415_bool;
	func_2614(var_415_bool, 7);
	if(var_415_bool != 0) {
		int var_417_int; object var_418_object;
		var_49_object = var_418_object;
		TaskCall(5);
		func_610(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 2;
	}
	bool var_495_bool;
	func_2614(var_495_bool, 12);
	if(var_495_bool != 0) {
		int var_497_int; object var_498_object;
		var_49_object = var_498_object;
		TaskCall(7);
		func_935(var_499_object, var_497_int, var_498_object);
		TaskReturn();
		return 2;
	}
	int var_641_int; object var_642_object;
	var_49_object = var_642_object;
	TaskCall(11);
	func_1779(var_643_object, var_641_int, var_642_object);
	TaskReturn();
}


void func_2021(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2278(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


void func_2534(void)
{
	bool var_34_bool;
	func_2652(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1511(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_296_object, object var_297_object)
{
	var_0_object = var_297_object;
	var_3_string = false;
	if(1 != 0) {
		func_1579(var_297_object, "Neutral");
		var_0_object->SetMessage(539435); //@t
		var_0_object->ClearReplies(); //@t
		bool var_312_bool;
		func_2821(var_296_object);
		if(var_312_bool != 0)
			var_0_object->AddReply(539436, 42812, 41367); //@t
		var_0_object->AddReply(539439, -1, 41370); //@t
		var_0_object->AddReply(540767, -1, 42811); //@t
		goto Label_1549;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5eb";
	}
Label_1549:
	bool var_329_bool;
	func_2652(var_329_bool);
	if(var_329_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2506(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1578;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1578:
		return 0;

	}
	
}


void func_2026(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2244(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2283(bool var_160_bool, object var_161_object, float var_162_float)
{
	cvector var_173_cvector; bool var_180_bool;
	var_161_object->GetPosition(var_173_cvector);
	float var_172_float;
	var_161_object->GetEyesHeight(var_172_float);
	var_181_float = GetByIndex(var_173_cvector, 1);
	SetByIndex(var_173_cvector, 1) = (var_181_float + var_172_float);
	cvector var_174_cvector;
	@GetPosition(var_174_cvector);
	@GetEyesHeight(var_172_float);
	var_182_float = GetByIndex(var_174_cvector, 1);
	SetByIndex(var_174_cvector, 1) = (var_182_float + var_172_float);
	cvector var_175_cvector = var_173_cvector - var_174_cvector;
	var_183_float = GetByIndex(var_175_cvector, 1);
	SetByIndex(var_175_cvector, 1) = (float)0;
	var_185_float = sqrt(var_175_cvector | var_175_cvector);
	var_175_cvector /= var_185_float;
	cvector var_176_cvector = -var_175_cvector;
	cvector var_187_cvector;
	func_2547(var_187_cvector, (var_176_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_177_cvector = ((var_175_cvector * var_162_float) + (var_187_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_179_bool;
	@IsOverrideActive(var_179_bool);
	if(var_179_bool != 0)
		var_160_bool = false;
	@StopWorld();
	@CameraTransit((var_174_cvector + var_177_cvector), var_176_cvector);
	var_200_float = GetByIndex(var_177_cvector, 0);
	var_201_float = GetByIndex(var_177_cvector, 2);
	@Rotate(var_200_float, var_201_float);
	bool var_202_bool;
	func_2652(var_202_bool);
	if(var_202_bool != 0) {
	} else {
		@HasAnimationTrack(var_180_bool, "head");
		if(var_180_bool == 0) goto Label_2345;
		@LookAsyncCamera("head");
	}
Label_2345:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_160_bool = true;
	
}


// @pe
void func_2797(bool var_573_bool)
{
	int var_575_int;
	func_2557(var_575_int, "k12q01DankoInSobor");
	if(var_575_int != 0) {
		var_573_bool = true;
		return 0;
	}
	var_573_bool = false;
}


void func_2541(object var_67_object)
{
	object var_69_object;
	@self(var_69_object);
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_1779(object var_0_object, int var_641_int, object var_642_object)
{
	var_0_object = var_642_object;
	bool var_652_bool; object var_653_object;
	object var_654_object;
	func_2541(var_654_object);
	var_654_object = var_653_object;
	func_2368(var_652_bool, var_653_object);
	bool var_655_bool; object var_656_object;
	var_642_object = var_656_object;
	func_2283(var_655_bool, var_656_object, 70.0);
	if(!var_655_bool) { //@nz
		var_641_int = -2;
		return 8;
	}
	object var_648_object;
	@CreateDialog(var_648_object);
	int var_659_int;
	func_2646(var_659_int);
	var_648_object->SetNPCName(var_659_int);
	int var_660_int;
	func_2644(var_660_int);
	var_648_object->SetNPCDescription(var_660_int);
	string var_661_string;
	func_2648(var_661_string);
	var_648_object->SetPhoto(var_661_string);
	string var_662_string;
	func_2650(var_662_string);
	var_648_object->SetPhoto2(var_662_string);
	int var_663_int;
	func_2932(var_663_int);
	var_648_object->SetPlayerName(var_663_int);
	bool var_649_bool;
	@IsOverrideActive(var_649_bool);
	if(var_649_bool != 0) {
		var_641_int = -2;
		return 8;
	}
	@DoDialog(var_648_object);
	object var_665_object; object var_666_object;
	var_642_object = var_665_object;
	var_648_object = var_666_object;
	TaskCall(12);
	func_1860(var_667_object, var_668_object, var_669_string, var_670_bool, var_665_object, var_666_object);
	TaskReturn();
	bool var_651_bool;
	var_648_object->IsDialogEnd(var_651_bool);
	
	for(;;) {
		var_695_bool = !var_651_bool; //@nz
		if(var_695_bool == 0) goto Label_1849;
		@sync();
		var_648_object->IsDialogEnd(var_651_bool);
	}
	
Label_1849:
	object var_696_object;
	var_642_object = var_696_object;
	func_2351();
	@StopDialog(var_648_object);
	var_648_object->GetReturnValue(-1);
	int var_650_int = var_641_int;
}
EMIT "Stack[-4] = 0";


void func_2547(cvector var_187_cvector, cvector var_188_cvector)
{
	float var_191_float = sqrt(var_188_cvector | var_188_cvector);
	if(var_191_float < 0.000001)
		var_187_cvector = [0.0, 0.0, 0.0];
	var_187_cvector = var_188_cvector / var_191_float;
}


// @pe
void func_1016(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_521_object, object var_522_object)
{
	var_0_object = var_522_object;
	var_1_object = var_521_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_528_bool = false;
		bool var_529_bool;
		func_2739(var_1_object);
		if(!var_529_bool) { //@nz
			bool var_536_bool;
			func_2809(var_1_object);
			if(var_536_bool != 0)
				var_528_bool = true;
		}
		if(var_528_bool != 0) {
			object var_542_object; object var_543_object;
			var_542_object = var_1_object;
			var_543_object = var_0_object;
			func_2724();
			func_1154(var_522_object, "Neutral");
			var_0_object->SetMessage(539339); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539340, 41285, 41284); //@t
			var_0_object->AddReply(539351, 41287, 41295); //@t
		} else {
					func_1154(var_522_object, "Neutral");
					var_0_object->SetMessage(539352); //@t
					var_0_object->ClearReplies(); //@t
					bool var_571_bool = false;
					bool var_572_bool = false;
					bool var_573_bool;
					func_2797(var_1_object);
					if(!var_573_bool) { //@nz
						bool var_580_bool;
						func_2751(var_580_bool, var_1_object);
						if(var_580_bool != 0)
							var_572_bool = true;
					}
					if(var_572_bool != 0) {
						bool var_630_bool;
						func_2739(var_1_object);
						if(!var_630_bool) //@nz
							var_571_bool = true;
					}
					if(var_571_bool != 0)
						var_0_object->AddReply(539353, 41299, 41298); //@t
					var_0_object->AddReply(539356, -1, 41301); //@t
		}
	}
	for(;;) {
		bool var_561_bool;
		func_2652(var_561_bool);
		if(var_561_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2506(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1153;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1153:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=89";
EMIT "Call2 0x482";
EMIT "Pop(1)";
EMIT "Push((int) 539357)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
EMIT "Pop(0)";
EMIT "Push((int) 539358)";
EMIT "Push((int) -1)";
EMIT "Push((int) 41303)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
EMIT "Pop(3)";
EMIT "GOTO 0x464";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3fc";


// @pe
void func_2809(bool var_536_bool)
{
	int var_538_int;
	func_2557(var_538_int, "ook12Danko1");
	if(var_538_int == 0) {
		var_536_bool = true;
		return 0;
	}
	var_536_bool = false;
}


void func_2557(int var_314_int, string var_315_string)
{
	int var_317_int;
	@GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
}


