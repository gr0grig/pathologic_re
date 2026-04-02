// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2830();
			if(var_31_bool == 26830) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525475, 27554, 26831); //@t
				var_0_object->AddReply(526277, 27557, 27553); //@t
				return 0;
			}
			if(var_31_bool == 27554) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526279, 27557, 27555); //@t
				var_0_object->AddReply(526280, 27557, 27556); //@t
				return 0;
			}
			if(var_31_bool == 27557) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526282, -1, 27560); //@t
				var_0_object->AddReply(526283, -1, 27561); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_3004(var_81_bool);
			if(var_81_bool != 0)
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
			func_2830();
			if(var_32_cvector == 27393) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3012();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_3019();
				object var_73_object = var_1_object;
				func_3106(var_0_object);
			}
			if(var_32_cvector == 27390) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_3012();
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_3019();
				object var_119_object = var_1_object;
				func_3106(var_0_object);
			}
			if(var_31_bool == 27383) {
				bool var_123_bool;
				func_3135(var_1_object);
				if(var_123_bool != 0) {
					object var_131_object; object var_132_object;
					var_131_object = var_1_object;
					var_132_object = var_0_object;
					func_3006();
					func_418(var_32_cvector, "Menace");
					var_0_object->SetMessage(526097); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526098, 27386, 27384); //@t
					var_0_object->AddReply(526099, 27386, 27385); //@t
					return 0;
				}
				func_418(var_32_cvector, "Menace");
				var_0_object->SetMessage(526107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526108, -1, 27395); //@t
				var_0_object->AddReply(528917, -1, 30347); //@t
				return 0;
			}
			if(var_31_bool == 27386) {
				func_418(var_32_cvector, "Smile");
				var_0_object->SetMessage(526100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526101, 27388, 27387); //@t
				var_0_object->AddReply(541281, 43414, 43413); //@t
				return 0;
			}
			if(var_31_bool == 43414) {
				func_418(var_32_cvector, "Untrust");
				var_0_object->SetMessage(541282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541283, 27392, 43415); //@t
				return 0;
			}
			if(var_31_bool == 27388) {
				func_418(var_32_cvector, "Sorrow");
				var_0_object->SetMessage(526102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526103, 27392, 27389); //@t
				var_0_object->AddReply(526104, -1, 27390); //@t
				return 0;
			}
			if(var_31_bool == 27392) {
				func_418(var_32_cvector, "Smile");
				var_0_object->SetMessage(526105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526106, -1, 27393); //@t
				return 0;
			}
			var_3_string = true;
			bool var_201_bool;
			func_3004(var_201_bool);
			if(var_201_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b9";
	
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
			func_2830();
			if(var_32_cvector == 27398) {
				object var_37_object = var_1_object;
				func_3035(var_0_object);
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_3045();
			}
			if(var_31_bool == 27397) {
				bool var_64_bool = false;
				bool var_65_bool;
				func_3147(var_1_object);
				if(var_65_bool != 0) {
					bool var_73_bool;
					func_3159(var_1_object);
					if(var_73_bool != 0)
						var_64_bool = true;
				}
				if(var_64_bool != 0) {
					object var_79_object; object var_80_object;
					var_79_object = var_1_object;
					var_80_object = var_0_object;
					func_3029();
					func_803(var_32_cvector, "Neutral");
					var_0_object->SetMessage(526118); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528252, 29614, 29613); //@t
					var_0_object->AddReply(528256, 29614, 29617); //@t
					return 0;
				}
				func_803(var_32_cvector, "Sorrow");
				var_0_object->SetMessage(526120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526121, -1, 27400); //@t
				return 0;
			}
			if(var_31_bool == 29614) {
				func_803(var_32_cvector, "Smile");
				var_0_object->SetMessage(528253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528254, 29616, 29615); //@t
				var_0_object->AddReply(528257, 29616, 29619); //@t
				return 0;
			}
			if(var_31_bool == 29616) {
				func_803(var_32_cvector, "Sorrow");
				var_0_object->SetMessage(528255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526119, -1, 27398); //@t
				return 0;
			}
			var_3_string = true;
			bool var_129_bool;
			func_3004(var_129_bool);
			if(var_129_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x33a";
	
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
			func_2830();
			if(var_32_cvector == 41290) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3060();
			}
			if(var_32_cvector == 41293) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_3051();
			}
			if(var_32_cvector == 41300) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_3051();
			}
			if(var_31_bool == 41283) {
				bool var_90_bool = false;
				bool var_91_bool;
				func_3113(var_1_object);
				if(!var_91_bool) { //@nz
					bool var_98_bool;
					func_3183(var_1_object);
					if(var_98_bool != 0)
						var_90_bool = true;
				}
				if(var_90_bool != 0) {
					object var_104_object; object var_105_object;
					var_104_object = var_1_object;
					var_105_object = var_0_object;
					func_3076();
					object var_108_object; object var_109_object;
					var_108_object = var_1_object;
					var_109_object = var_0_object;
					func_3100();
					func_1169(var_32_cvector, "Neutral");
					var_0_object->SetMessage(539339); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539340, 43548, 41284); //@t
					var_0_object->AddReply(542972, 45416, 45415); //@t
					return 0;
				}
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_3100();
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539352); //@t
				var_0_object->ClearReplies(); //@t
				bool var_140_bool = false;
				bool var_141_bool = false;
				bool var_142_bool;
				func_3171(var_1_object);
				if(!var_142_bool) { //@nz
					bool var_149_bool;
					func_3125(var_149_bool, var_1_object);
					if(var_149_bool != 0)
						var_141_bool = true;
				}
				if(var_141_bool != 0) {
					bool var_198_bool;
					func_3113(var_1_object);
					if(!var_198_bool) //@nz
						var_140_bool = true;
				}
				if(var_140_bool != 0)
					var_0_object->AddReply(539353, 43589, 41298); //@t
				var_0_object->AddReply(539356, -1, 41301); //@t
				return 0;
			}
			if(var_31_bool == 43589) {
				func_1169(var_32_cvector, "Smile");
				var_0_object->SetMessage(541433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539355, -1, 41300); //@t
				return 0;
			}
			if(var_31_bool == 45416) {
				func_1169(var_32_cvector, "Smile");
				var_0_object->SetMessage(542973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542974, 43548, 45417); //@t
				return 0;
			}
			if(var_31_bool == 43548) {
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(541394); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541395, 43550, 43549); //@t
				return 0;
			}
			if(var_31_bool == 43550) {
				func_1169(var_32_cvector, "Untrust");
				var_0_object->SetMessage(541396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541397, 43552, 43551); //@t
				var_0_object->AddReply(542975, 43554, 45419); //@t
				return 0;
			}
			if(var_31_bool == 43552) {
				func_1169(var_32_cvector, "Untrust");
				var_0_object->SetMessage(541398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541399, 45421, 43553); //@t
				return 0;
			}
			if(var_31_bool == 45421) {
				func_1169(var_32_cvector, "Untrust");
				var_0_object->SetMessage(542976); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542977, 45423, 45422); //@t
				var_0_object->AddReply(542984, 45428, 45429); //@t
				return 0;
			}
			if(var_31_bool == 45423) {
				func_1169(var_32_cvector, "Smile");
				var_0_object->SetMessage(542978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542979, 45428, 45424); //@t
				return 0;
			}
			if(var_31_bool == 45428) {
				func_1169(var_32_cvector, "Smile");
				var_0_object->SetMessage(542983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542980, 45426, 45425); //@t
				var_0_object->AddReply(542985, -1, 45431); //@t
				return 0;
			}
			if(var_31_bool == 45426) {
				func_1169(var_32_cvector, "Menace");
				var_0_object->SetMessage(542981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542982, 45435, 45427); //@t
				var_0_object->AddReply(542986, 45433, 45432); //@t
				return 0;
			}
			if(var_31_bool == 45433) {
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542988, 45438, 45434); //@t
				return 0;
			}
			if(var_31_bool == 45438) {
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542993, 43554, 45439); //@t
				var_0_object->AddReply(542994, -1, 45441); //@t
				return 0;
			}
			if(var_31_bool == 43554) {
				func_1169(var_32_cvector, "Untrust");
				var_0_object->SetMessage(541400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541401, 41289, 43555); //@t
				return 0;
			}
			if(var_31_bool == 41289) {
				bool var_308_bool;
				func_3125(var_308_bool, var_1_object);
				if(!var_308_bool) { //@nz
					func_1169(var_32_cvector, "Untrust");
					var_0_object->SetMessage(539345); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541431, 43558, 43587); //@t
					var_0_object->AddReply(541406, -1, 43560); //@t
					return 0;
				}
				bool var_319_bool;
				func_3125(var_319_bool, var_1_object);
				if(var_319_bool != 0) {
					func_1169(var_32_cvector, "Neutral");
					var_0_object->SetMessage(539348); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539349, -1, 41293); //@t
					var_0_object->AddReply(539350, -1, 41294); //@t
					return 0;
				}
			}
			if(var_31_bool == 43558) {
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(541404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539346, -1, 41290); //@t
				return 0;
			}
			if(var_31_bool == 45435) {
				func_1169(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542990, 43554, 45436); //@t
				var_0_object->AddReply(542991, -1, 45437); //@t
				return 0;
			}
			var_3_string = true;
			bool var_346_bool;
			func_3004(var_346_bool);
			if(var_346_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4a8";
	
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
			func_2830();
			if(var_32_cvector == 41369) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3082();
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_3088();
			}
			if(var_32_cvector == 42820) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_3082();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_3088();
			}
			if(var_31_bool == 41366) {
				func_1817(var_32_cvector, "Neutral");
				var_0_object->SetMessage(539435); //@t
				var_0_object->ClearReplies(); //@t
				bool var_98_bool;
				func_3195(var_1_object);
				if(var_98_bool != 0)
					var_0_object->AddReply(539436, 42812, 41367); //@t
				var_0_object->AddReply(539439, -1, 41370); //@t
				var_0_object->AddReply(540767, -1, 42811); //@t
				return 0;
			}
			if(var_31_bool == 42812) {
				func_1817(var_32_cvector, "Untrust");
				var_0_object->SetMessage(540768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540769, 42814, 42813); //@t
				var_0_object->AddReply(540772, 42817, 42816); //@t
				return 0;
			}
			if(var_31_bool == 42817) {
				func_1817(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540774, 41368, 42818); //@t
				return 0;
			}
			if(var_31_bool == 42814) {
				func_1817(var_32_cvector, "Smile");
				var_0_object->SetMessage(540770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540771, 42823, 42815); //@t
				var_0_object->AddReply(540776, 41368, 42821); //@t
				return 0;
			}
			if(var_31_bool == 42823) {
				func_1817(var_32_cvector, "Smile");
				var_0_object->SetMessage(540777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540778, 41368, 42824); //@t
				var_0_object->AddReply(540779, -1, 42825); //@t
				return 0;
			}
			if(var_31_bool == 41368) {
				func_1817(var_32_cvector, "Menace");
				var_0_object->SetMessage(539437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539438, -1, 41369); //@t
				var_0_object->AddReply(540775, -1, 42820); //@t
				return 0;
			}
			var_3_string = true;
			bool var_160_bool;
			func_3004(var_160_bool);
			if(var_160_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x730";
	
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
			func_2830();
			if(var_31_int == 42554) {
				func_2166(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3004(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x88d";
	
	}

}


maintask task_12
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2234(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2299();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2554(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2268(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2248(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2837(var_77_object);
					var_77_object = var_76_object;
					func_2704(var_75_bool, var_76_object);
				}
			} else {
				func_2263(var_31_int);
				func_2290();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2481();
		func_2299();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2299();
		func_2784("Neutral");
		func_2290();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2290();
		else
			func_2784("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2481();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2545(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3414(var_49_object);
			func_2784("Neutral");
			func_2299();
			func_2290();
		}
	}

}


void func_0(object var_0_object, int var_54_int, object var_55_object)
{
	var_0_object = var_55_object;
	bool var_65_bool; object var_66_object;
	var_55_object = var_66_object;
	func_2559(var_65_bool, var_66_object, 70.0);
	if(!var_65_bool) { //@nz
		var_54_int = -2;
		return 8;
	}
	object var_61_object;
	@CreateDialog(var_61_object);
	int var_113_int;
	func_2998(var_113_int);
	var_61_object->SetNPCName(var_113_int);
	int var_114_int;
	func_2996(var_114_int);
	var_61_object->SetNPCDescription(var_114_int);
	string var_115_string;
	func_3000(var_115_string);
	var_61_object->SetPhoto(var_115_string);
	string var_116_string;
	func_3002(var_116_string);
	var_61_object->SetPhoto2(var_116_string);
	int var_117_int;
	func_3306(var_117_int);
	var_61_object->SetPlayerName(var_117_int);
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	@DoDialog(var_61_object);
	bool var_126_bool; object var_127_object;
	object var_128_object;
	func_2837(var_128_object);
	var_128_object = var_127_object;
	func_2646(var_126_bool, var_127_object);
	object var_221_object; object var_222_object;
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(1);
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	bool var_64_bool;
	var_61_object->IsDialogEnd(var_64_bool);
	
	for(;;) {
		var_270_bool = !var_64_bool; //@nz
		if(var_270_bool == 0) goto Label_70;
		@sync();
		var_61_object->IsDialogEnd(var_64_bool);
	}
	
Label_70:
	object var_271_object;
	var_55_object = var_271_object;
	func_2628();
	@StopDialog(var_61_object);
	var_61_object->GetReturnValue(-1);
	int var_63_int = var_54_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3076(void)
{
	@SetVariable("ook12Danko1", 1);
}


// @pe
void func_3082(void)
{
	@SetVariable("k5q04", 3);
}


// @pe
void func_1036(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_533_object, object var_534_object)
{
	var_0_object = var_534_object;
	var_1_object = var_533_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_540_bool = false;
		bool var_541_bool;
		func_3113(var_1_object);
		if(!var_541_bool) { //@nz
			bool var_548_bool;
			func_3183(var_1_object);
			if(var_548_bool != 0)
				var_540_bool = true;
		}
		if(var_540_bool != 0) {
			object var_554_object; object var_555_object;
			var_554_object = var_1_object;
			var_555_object = var_0_object;
			func_3076();
			object var_558_object; object var_559_object;
			var_558_object = var_1_object;
			var_559_object = var_0_object;
			func_3100();
			func_1169(var_534_object, "Neutral");
			var_0_object->SetMessage(539339); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539340, 43548, 41284); //@t
			var_0_object->AddReply(542972, 45416, 45415); //@t
		} else {
					object var_585_object; object var_586_object;
					var_585_object = var_1_object;
					var_586_object = var_0_object;
					func_3100();
					func_1169(var_534_object, "Neutral");
					var_0_object->SetMessage(539352); //@t
					var_0_object->ClearReplies(); //@t
					bool var_589_bool = false;
					bool var_590_bool = false;
					bool var_591_bool;
					func_3171(var_1_object);
					if(!var_591_bool) { //@nz
						bool var_598_bool;
						func_3125(var_598_bool, var_1_object);
						if(var_598_bool != 0)
							var_590_bool = true;
					}
					if(var_590_bool != 0) {
						bool var_647_bool;
						func_3113(var_1_object);
						if(!var_647_bool) //@nz
							var_589_bool = true;
					}
					if(var_589_bool != 0)
						var_0_object->AddReply(539353, 43589, 41298); //@t
					var_0_object->AddReply(539356, -1, 41301); //@t
		}
	}
	for(;;) {
		bool var_577_bool;
		func_3004(var_577_bool);
		if(var_577_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2784(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1168;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1168:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x410";


void func_2830(void)
{
	bool var_34_bool;
	func_3004(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_3088(void)
{
	int var_43_int;
	func_2864(var_43_int, "k5q04_bring_water");
	if(var_43_int == 0)
		func_3239();
}


void func_2837(object var_128_object)
{
	object var_130_object;
	@self(var_130_object);
	var_130_object = var_128_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1817(object var_2_object, string var_315_string)
{
	bool var_316_bool;
	func_3004(var_316_bool);
	if(!var_316_bool) //@nz
		return 0;
	if(var_315_string == var_2_object)
		return 0;
	string var_319_string; bool var_320_bool;
	var_315_string = var_319_string;
	if(var_315_string == "")
		var_320_bool = false;
	else
		var_320_bool = true;
	func_2800(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	
}


void func_2843(cvector var_92_cvector, cvector var_93_cvector)
{
	float var_96_float = sqrt(var_93_cvector | var_93_cvector);
	if(var_96_float < 0.000001)
		var_92_cvector = [0.0, 0.0, 0.0];
	var_92_cvector = var_93_cvector / var_96_float;
}


// @pe
void func_3100(void)
{
	@SetVariable("k12DankoVisit", 1);
}


void func_3356(bool var_637_bool, int var_638_int)
{
	int var_640_int;
	@GetVariable(("vol_" + var_638_int), var_640_int);
	var_637_bool = (var_640_int & 4) != 0;
}


// @pe
void func_3106(object var_73_object)
{
	object var_76_object;
	var_73_object = var_76_object;
	bool var_75_bool;
	func_2900(var_75_bool, var_76_object, 0.3);
}


// @pe
void func_803(object var_2_object, string var_477_string)
{
	bool var_478_bool;
	func_3004(var_478_bool);
	if(!var_478_bool) //@nz
		return 0;
	if(var_477_string == var_2_object)
		return 0;
	string var_481_string; bool var_482_bool;
	var_477_string = var_481_string;
	if(var_477_string == "")
		var_482_bool = false;
	else
		var_482_bool = true;
	func_2800(var_481_string, var_482_bool);
	var_2_object = var_477_string;
	
}


// @pe
void func_2853(float var_104_float, float var_105_float, float var_106_float, float var_107_float)
{
	if(var_105_float < var_106_float) {
		var_106_float = var_104_float;
		return 0;
	}
	if(var_105_float > var_107_float) {
		var_107_float = var_104_float;
		return 0;
	}
	var_105_float = var_104_float;
}


void func_3366(bool var_628_bool, int var_629_int)
{
	int var_631_int;
	@GetVariable(("vol_" + var_629_int), var_631_int);
	var_628_bool = (var_631_int & 16) != 0;
}


// @pe
void func_3113(bool var_541_bool)
{
	int var_543_int;
	func_2864(var_543_int, "game_final");
	if(var_543_int != 0) {
		var_541_bool = true;
		return 0;
	}
	var_541_bool = false;
}


void func_2864(int var_326_int, string var_327_string)
{
	int var_329_int;
	@GetVariable(var_327_string, var_329_int);
	var_329_int = var_326_int;
}


void func_3376(bool var_602_bool)
{
	object var_607_object; int var_610_int;
	@CreateIntVector(var_607_object);
	object var_611_object;
	var_607_object = var_611_object;
	func_3323(var_611_object, false, -1);
	int var_608_int;
	var_607_object->size(var_608_int);
	int var_609_int = 0;
	
	while(var_609_int < var_608_int) {
		var_607_object->get(var_610_int, var_609_int);
		bool var_627_bool = true;
		bool var_628_bool; int var_629_int;
		var_610_int = var_629_int;
		func_3366(var_628_bool, var_629_int);
		if(var_628_bool != 1) {
			bool var_637_bool; int var_638_int;
			var_610_int = var_638_int;
			func_3356(var_637_bool, var_638_int);
			if(var_637_bool != 1)
				var_627_bool = false;
		}
		if(var_627_bool != 0)
			var_602_bool = false;
		var_609_int += 1;
	}
	
	var_602_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3125(bool var_598_bool, object var_599_object)
{
	object var_601_object;
	var_599_object = var_601_object;
	func_3207(var_601_object);
	bool var_600_bool;
	if(var_600_bool != 0) {
		var_598_bool = true;
		return 0;
	}
	var_598_bool = false;
}


void func_2869(int var_53_int, int var_54_int)
{
	object var_56_object;
	@CreateIntVector(var_56_object);
	var_56_object->add(var_53_int);
	var_56_object->add(var_54_int);
	@SendWorldWndMessage(3, var_56_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2108(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_682_object, object var_683_object)
{
	var_0_object = var_683_object;
	var_1_object = var_682_object;
	var_3_string = false;
	if(1 != 0) {
		func_2166(var_683_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_2136;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x840";
	}
Label_2136:
	bool var_704_bool;
	func_3004(var_704_bool);
	if(var_704_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2784(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2165;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2165:
		return 0;

	}
	
}


// @pe
void func_3135(bool var_384_bool)
{
	int var_386_int;
	func_2864(var_386_int, "ook6Danko1");
	if(var_386_int == 0) {
		var_384_bool = true;
		return 0;
	}
	var_384_bool = false;
}


void func_2881(object var_40_object, int var_41_int)
{
	int var_43_int;
	object var_44_object;
	var_40_object = var_44_object;
	int var_46_int;
	func_2528(var_44_object, "money", var_46_int);
	if(var_46_int > 0) {
		@GetInvItemByName(var_43_int, "Money");
		int var_53_int; int var_54_int;
		var_43_int = var_53_int;
		var_41_int = var_54_int;
		func_2869(var_53_int, var_54_int);
	}
}


void func_2628(void)
{
	bool var_273_bool;
	@CameraSwitchToNormal(true);
	bool var_275_bool;
	func_3004(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		@HasAnimationTrack(var_273_bool, "head");
		if(var_273_bool == 0) goto Label_2645;
		@UnlookAsync("head");
	}
Label_2645:
	
}


// @pe
void func_330(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_377_object, object var_378_object)
{
	var_0_object = var_378_object;
	var_1_object = var_377_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_384_bool;
		func_3135(var_1_object);
		if(var_384_bool != 0) {
			object var_390_object; object var_391_object;
			var_390_object = var_1_object;
			var_391_object = var_0_object;
			func_3006();
			func_418(var_378_object, "Menace");
			var_0_object->SetMessage(526097); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526098, 27386, 27384); //@t
			var_0_object->AddReply(526099, 27386, 27385); //@t
		} else {
					func_418(var_378_object, "Menace");
					var_0_object->SetMessage(526107); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526108, -1, 27395); //@t
					var_0_object->AddReply(528917, -1, 30347); //@t
		}
	}
	for(;;) {
		bool var_409_bool;
		func_3004(var_409_bool);
		if(var_409_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2784(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_417;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_417:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x14e";


// @pe
void func_3147(bool var_461_bool)
{
	int var_463_int;
	func_2864(var_463_int, "k7q01");
	if(var_463_int == 0) {
		var_461_bool = true;
		return 0;
	}
	var_461_bool = false;
}


void func_2559(bool var_65_bool, object var_66_object, float var_67_float)
{
	cvector var_78_cvector; bool var_85_bool;
	var_66_object->GetPosition(var_78_cvector);
	float var_77_float;
	var_66_object->GetEyesHeight(var_77_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (var_86_float + var_77_float);
	cvector var_79_cvector;
	@GetPosition(var_79_cvector);
	@GetEyesHeight(var_77_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (var_87_float + var_77_float);
	cvector var_80_cvector = var_78_cvector - var_79_cvector;
	var_88_float = GetByIndex(var_80_cvector, 1);
	SetByIndex(var_80_cvector, 1) = (float)0;
	var_90_float = sqrt(var_80_cvector | var_80_cvector);
	var_80_cvector /= var_90_float;
	cvector var_81_cvector = -var_80_cvector;
	cvector var_92_cvector;
	func_2843(var_92_cvector, (var_81_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_82_cvector = ((var_80_cvector * var_67_float) + (var_92_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_84_bool;
	@IsOverrideActive(var_84_bool);
	if(var_84_bool != 0)
		var_65_bool = false;
	@StopWorld();
	@CameraTransit((var_79_cvector + var_82_cvector), var_81_cvector, true);
	var_106_float = GetByIndex(var_82_cvector, 0);
	var_107_float = GetByIndex(var_82_cvector, 2);
	@Rotate(var_106_float, var_107_float);
	bool var_108_bool;
	func_3004(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		@HasAnimationTrack(var_85_bool, "head");
		if(var_85_bool == 0) goto Label_2622;
		@LookAsyncCamera("head");
	}
Label_2622:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_65_bool = true;
	
}


// @pe
void func_3323(object var_611_object, bool var_612_bool, int var_613_int)
{
	var_611_object->add(6);
	var_611_object->add(26);
	var_611_object->add(2);
	var_611_object->add(22);
	if(var_612_bool == false) {
		var_611_object->add(15);
		var_611_object->add(5);
		var_611_object->add(16);
	} else if(var_613_int != 0) {
		var_611_object->add(15);
	}
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_221_object, object var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_222_object, "Neutral");
		var_0_object->SetMessage(525474); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525475, 27554, 26831); //@t
		var_0_object->AddReply(526277, 27557, 27553); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_252_bool;
	func_3004(var_252_bool);
	if(var_252_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2784(var_2_object);
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


// @pe
void func_2900(bool var_75_bool, object var_76_object, float var_77_float)
{
	if(!var_76_object) { //@nz
		var_75_bool = false;
		return 0;
	}
	if(var_77_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_77_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_82_float;
		var_77_float = var_82_float;
		func_2935(var_82_float);
		bool var_86_bool; object var_87_object; float var_89_float;
		var_76_object = var_87_object;
		var_77_float = var_89_float;
		func_2506(var_86_bool, var_87_object, "reputation", var_89_float, (float)0, (float)1);
		var_75_bool = true;
		return 0;

	}
	
	var_75_bool = false;
}


void func_2646(bool var_126_bool, object var_127_object)
{
	int var_133_int; int var_134_int;
	@GetVariable("voice_common", var_133_int);
	if(var_133_int != 0) {
		bool var_137_bool; object var_138_object;
		var_127_object = var_138_object;
		func_2704(var_137_bool, var_138_object);
		if(!var_137_bool) { //@nz
			bool var_168_bool; object var_169_object;
			var_127_object = var_169_object;
			func_2741(var_168_bool, var_169_object);
			if(!var_168_bool) { //@nz
				var_126_bool = false;
				return 4;
			}
		}
		@irand(var_134_int, 2);
		if(var_134_int != 0)
			@SetVariable("voice_common", ((var_133_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_213_bool; object var_214_object;
		var_127_object = var_214_object;
		func_2741(var_213_bool, var_214_object);
		if(!var_213_bool) { //@nz
			bool var_216_bool; object var_217_object;
			var_127_object = var_217_object;
			func_2704(var_216_bool, var_217_object);
			if(!var_216_bool) { //@nz
				var_126_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2702;
	
Label_2702:
	var_126_bool = true;
	
}


// @pe
void func_3159(bool var_467_bool)
{
	int var_469_int;
	func_2864(var_469_int, "ook7Danko1");
	if(var_469_int == 0) {
		var_467_bool = true;
		return 0;
	}
	var_467_bool = false;
}


void func_3414(object var_49_object)
{
	int var_51_int;
	@GetVariable("mt_danko", var_51_int);
	if(!var_51_int) { //@nz
		int var_54_int; object var_55_object;
		var_49_object = var_55_object;
		TaskCall(0);
		func_0(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		@SetVariable("mt_danko", 1);
	}
	bool var_281_bool;
	func_2966(var_281_bool, 5);
	if(var_281_bool != 0) {
		int var_284_int; object var_285_object;
		var_49_object = var_285_object;
		TaskCall(8);
		func_1668(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 2;
	}
	bool var_351_bool;
	func_2966(var_351_bool, 6);
	if(var_351_bool != 0) {
		int var_353_int; object var_354_object;
		var_49_object = var_354_object;
		TaskCall(2);
		func_249(var_355_object, var_353_int, var_354_object);
		TaskReturn();
		return 2;
	}
	bool var_427_bool;
	func_2966(var_427_bool, 7);
	if(var_427_bool != 0) {
		int var_429_int; object var_430_object;
		var_49_object = var_430_object;
		TaskCall(4);
		func_630(var_431_object, var_429_int, var_430_object);
		TaskReturn();
		return 2;
	}
	bool var_507_bool;
	func_2966(var_507_bool, 12);
	if(var_507_bool != 0) {
		int var_509_int; object var_510_object;
		var_49_object = var_510_object;
		TaskCall(6);
		func_955(var_511_object, var_509_int, var_510_object);
		TaskReturn();
		return 2;
	}
	int var_658_int; object var_659_object;
	var_49_object = var_659_object;
	TaskCall(10);
	func_2027(var_660_object, var_658_int, var_659_object);
	TaskReturn();
}


// @pe
void func_3171(bool var_591_bool)
{
	int var_593_int;
	func_2864(var_593_int, "k12q01DankoInSobor");
	if(var_593_int != 0) {
		var_591_bool = true;
		return 0;
	}
	var_591_bool = false;
}


void func_2410(void)
{
	bool var_43_bool; int var_44_int; int var_45_int; bool var_46_bool;
	@WaitForAnimEnd();
	bool var_47_bool;
	func_2554(var_47_bool);
	if(!var_47_bool) //@nz
		return 12;
	int var_49_int;
	func_2979(var_49_int);
	int var_41_int;
	var_49_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_62_bool = false;
		if(var_42_int < 5) {
			bool var_65_bool;
			func_2554(var_65_bool);
			if(var_65_bool != 0)
				var_62_bool = true;
		}
		if(var_62_bool != 0) {
			if(!var_41_int) { //@nz
				@Sleep(3, var_43_bool);
				if(!var_43_bool) { //@nz
				} else {
			} else {
			@irand(var_44_int, var_41_int);
			@irand(var_45_int, 5);
			if(var_45_int != 0)
				var_44_int = 0;
			string var_76_string; int var_77_int;
			var_44_int = var_77_int;
			func_2972(var_76_string, var_77_int);
			@PlayAnimation("all", var_76_string);
			@WaitForAnimEnd(var_46_bool);
			var_78_bool = !var_46_bool; //@nz
			if(var_78_bool == 0) goto Label_2465;
			goto Label_2476;
			}
				Label_2465:
					bool var_69_bool;
					func_2479(var_69_bool);
					var_70_bool = !var_69_bool; //@nz
					if(var_70_bool == 0) goto Label_2471;
			}
		}
	Label_2476:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2471:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


// @pe
void func_3183(bool var_548_bool)
{
	int var_550_int;
	func_2864(var_550_int, "ook12Danko1");
	if(var_550_int == 0) {
		var_548_bool = true;
		return 0;
	}
	var_548_bool = false;
}


// @pe
void func_2166(object var_2_object, string var_689_string)
{
	bool var_690_bool;
	func_3004(var_690_bool);
	if(!var_690_bool) //@nz
		return 0;
	if(var_689_string == var_2_object)
		return 0;
	string var_693_string; bool var_694_bool;
	var_689_string = var_693_string;
	if(var_689_string == "")
		var_694_bool = false;
	else
		var_694_bool = true;
	func_2800(var_693_string, var_694_bool);
	var_2_object = var_689_string;
	
}


void func_630(object var_0_object, int var_429_int, object var_430_object)
{
	var_0_object = var_430_object;
	bool var_440_bool; object var_441_object;
	var_430_object = var_441_object;
	func_2559(var_440_bool, var_441_object, 70.0);
	if(!var_440_bool) { //@nz
		var_429_int = -2;
		return 8;
	}
	object var_436_object;
	@CreateDialog(var_436_object);
	int var_444_int;
	func_2998(var_444_int);
	var_436_object->SetNPCName(var_444_int);
	int var_445_int;
	func_2996(var_445_int);
	var_436_object->SetNPCDescription(var_445_int);
	string var_446_string;
	func_3000(var_446_string);
	var_436_object->SetPhoto(var_446_string);
	string var_447_string;
	func_3002(var_447_string);
	var_436_object->SetPhoto2(var_447_string);
	int var_448_int;
	func_3306(var_448_int);
	var_436_object->SetPlayerName(var_448_int);
	bool var_437_bool;
	@IsOverrideActive(var_437_bool);
	if(var_437_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	@DoDialog(var_436_object);
	bool var_450_bool; object var_451_object;
	object var_452_object;
	func_2837(var_452_object);
	var_452_object = var_451_object;
	func_2646(var_450_bool, var_451_object);
	object var_453_object; object var_454_object;
	var_430_object = var_453_object;
	var_436_object = var_454_object;
	TaskCall(5);
	func_711(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object);
	TaskReturn();
	bool var_439_bool;
	var_436_object->IsDialogEnd(var_439_bool);
	
	for(;;) {
		var_505_bool = !var_439_bool; //@nz
		if(var_505_bool == 0) goto Label_700;
		@sync();
		var_436_object->IsDialogEnd(var_439_bool);
	}
	
Label_700:
	object var_506_object;
	var_430_object = var_506_object;
	func_2628();
	@StopDialog(var_436_object);
	var_436_object->GetReturnValue(-1);
	int var_438_int = var_429_int;
}
EMIT "Stack[-4] = 0";


void func_2935(float var_82_float)
{
	object var_84_object;
	@CreateFloatVector(var_84_object);
	var_84_object->add(var_82_float);
	@SendWorldWndMessage(16, var_84_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3195(bool var_324_bool)
{
	int var_326_int;
	func_2864(var_326_int, "k5q04");
	if(var_326_int == 2)
		var_324_bool = true;
	var_324_bool = false;
}


void func_2945(bool var_39_bool, string var_40_string, string var_41_string)
{
	object var_43_object;
	@FindActor(var_43_object, var_40_string);
	if(var_43_object == null)
		var_39_bool = false;
	@Trigger(var_43_object, var_41_string);
	var_39_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1668(object var_0_object, int var_284_int, object var_285_object)
{
	var_0_object = var_285_object;
	bool var_295_bool; object var_296_object;
	var_285_object = var_296_object;
	func_2559(var_295_bool, var_296_object, 70.0);
	if(!var_295_bool) { //@nz
		var_284_int = -2;
		return 8;
	}
	object var_291_object;
	@CreateDialog(var_291_object);
	int var_299_int;
	func_2998(var_299_int);
	var_291_object->SetNPCName(var_299_int);
	int var_300_int;
	func_2996(var_300_int);
	var_291_object->SetNPCDescription(var_300_int);
	string var_301_string;
	func_3000(var_301_string);
	var_291_object->SetPhoto(var_301_string);
	string var_302_string;
	func_3002(var_302_string);
	var_291_object->SetPhoto2(var_302_string);
	int var_303_int;
	func_3306(var_303_int);
	var_291_object->SetPlayerName(var_303_int);
	bool var_292_bool;
	@IsOverrideActive(var_292_bool);
	if(var_292_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	@DoDialog(var_291_object);
	bool var_305_bool; object var_306_object;
	object var_307_object;
	func_2837(var_307_object);
	var_307_object = var_306_object;
	func_2646(var_305_bool, var_306_object);
	object var_308_object; object var_309_object;
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(9);
	func_1749(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	bool var_294_bool;
	var_291_object->IsDialogEnd(var_294_bool);
	
	for(;;) {
		var_349_bool = !var_294_bool; //@nz
		if(var_349_bool == 0) goto Label_1738;
		@sync();
		var_291_object->IsDialogEnd(var_294_bool);
	}
	
Label_1738:
	object var_350_object;
	var_285_object = var_350_object;
	func_2628();
	@StopDialog(var_291_object);
	var_291_object->GetReturnValue(-1);
	int var_293_int = var_284_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3207(bool var_600_bool)
{
	bool var_602_bool;
	func_3376(var_602_bool);
	var_602_bool = var_600_bool;
}


// @pe
void func_139(object var_2_object, string var_228_string)
{
	bool var_229_bool;
	func_3004(var_229_bool);
	if(!var_229_bool) //@nz
		return 0;
	if(var_228_string == var_2_object)
		return 0;
	string var_232_string; bool var_233_bool;
	var_228_string = var_232_string;
	if(var_228_string == "")
		var_233_bool = false;
	else
		var_233_bool = true;
	func_2800(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	
}


void func_3213(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 730, 1, 539360);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_3278(var_81_bool, var_82_object, 729);
}
EMIT "Stack[-1] = 0";


void func_2957(int var_181_int)
{
	float var_183_float;
	@GetGameTime(var_183_float);
	var_181_int = 1 + (var_183_float / 24);
}


void func_2704(bool var_137_bool, object var_138_object)
{
	string var_144_string; bool var_146_bool; int var_147_int; string var_148_string;
	var_144_string = "c";
	int var_145_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_138_object->HasProperty((var_144_string + (var_145_int + 1)), var_146_bool);
			if(!var_146_bool) { //@nz
			} else {
				var_145_int += 1;
			}
		}
		if(!var_145_int) { //@nz
			var_137_bool = false;
			return 10;
		}
		var_147_int = 0;
		if(var_145_int > 1)
			@irand(var_147_int, var_145_int);
		var_138_object->GetProperty((var_144_string + (var_147_int + 1)), var_148_string);
		bool var_160_bool; string var_161_string;
		var_148_string = var_161_string;
		func_2815(var_160_bool, var_161_string);
		var_160_bool = var_137_bool;
		return 10;

	}
}


// @pe
void func_1169(object var_2_object, string var_562_string)
{
	bool var_563_bool;
	func_3004(var_563_bool);
	if(!var_563_bool) //@nz
		return 0;
	if(var_562_string == var_2_object)
		return 0;
	string var_566_string; bool var_567_bool;
	var_562_string = var_566_string;
	if(var_562_string == "")
		var_567_bool = false;
	else
		var_567_bool = true;
	func_2800(var_566_string, var_567_bool);
	var_2_object = var_562_string;
	
}


// @pe
void func_2966(bool var_281_bool, int var_282_int)
{
	int var_283_int;
	func_2957(var_283_int);
	var_281_bool = var_283_int == var_282_int;
}


void func_3226(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 736, 1, 539366);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_3278(var_52_bool, var_53_object, 729);
}
EMIT "Stack[-1] = 0";


void func_2972(string var_55_string, int var_56_int)
{
	string var_58_string = "idle";
	if(var_56_int != 0)
		var_58_string += var_56_int;
	var_58_string = var_55_string;
}


// @pe
void func_418(object var_2_object, string var_394_string)
{
	bool var_395_bool;
	func_3004(var_395_bool);
	if(!var_395_bool) //@nz
		return 0;
	if(var_394_string == var_2_object)
		return 0;
	string var_398_string; bool var_399_bool;
	var_394_string = var_398_string;
	if(var_394_string == "")
		var_399_bool = false;
	else
		var_399_bool = true;
	func_2800(var_398_string, var_399_bool);
	var_2_object = var_394_string;
	
}


void func_2979(int var_49_int)
{
	int var_52_int; bool var_53_bool;
	var_52_int = 0;
	
	for(;;) {
		string var_55_string; int var_56_int;
		var_52_int = var_56_int;
		func_2972(var_55_string, var_56_int);
		@HasAnimation(var_53_bool, "all", var_55_string);
		if(!var_53_bool) //@nz
			break;
		var_52_int += 1;
	}
	var_52_int = var_49_int;
}


void func_3239(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 743, 2, 539460);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_3278(var_54_bool, var_55_object, 740);
}
EMIT "Stack[-1] = 0";


void func_2479(bool var_69_bool)
{
	var_69_bool = true;
}


void func_2481(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3252(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 415, 1, 526116);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_3278(var_52_bool, var_53_object, 408);
}
EMIT "Stack[-1] = 0";


void func_2741(bool var_168_bool, object var_169_object)
{
	bool var_177_bool; int var_178_int; string var_179_string;
	int var_181_int;
	func_2957(var_181_int);
	string var_175_string = ("d" + var_181_int) + "m";
	int var_176_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_169_object->HasProperty((var_175_string + (var_176_int + 1)), var_177_bool);
			if(!var_177_bool) { //@nz
			} else {
				var_176_int += 1;
			}
		}
		if(!var_176_int) { //@nz
			var_168_bool = false;
			return 10;
		}
		var_178_int = 0;
		if(var_176_int > 1)
			@irand(var_178_int, var_176_int);
		var_169_object->GetProperty((var_175_string + (var_178_int + 1)), var_179_string);
		bool var_200_bool; string var_201_string;
		var_179_string = var_201_string;
		func_2815(var_200_bool, var_201_string);
		var_200_bool = var_168_bool;
		return 10;

	}
}


void func_2996(int var_114_int)
{
	var_114_int = 515573;
}


void func_2998(int var_113_int)
{
	var_113_int = 504032;
}


void func_2486(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_3000(string var_115_string)
{
	var_115_string = "ui/NPC_Bakalavr.png";
}


void func_2234(object var_0_object)
{
	bool var_31_bool;
	func_2554(var_31_bool);
	if(!var_31_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2410();
	}
}
EMIT "Return(); Pop(0)";


void func_3002(string var_116_string)
{
	var_116_string = "ui/NPC_Bakalavr_b.png";
}


void func_955(object var_0_object, int var_509_int, object var_510_object)
{
	var_0_object = var_510_object;
	bool var_520_bool; object var_521_object;
	var_510_object = var_521_object;
	func_2559(var_520_bool, var_521_object, 70.0);
	if(!var_520_bool) { //@nz
		var_509_int = -2;
		return 8;
	}
	object var_516_object;
	@CreateDialog(var_516_object);
	int var_524_int;
	func_2998(var_524_int);
	var_516_object->SetNPCName(var_524_int);
	int var_525_int;
	func_2996(var_525_int);
	var_516_object->SetNPCDescription(var_525_int);
	string var_526_string;
	func_3000(var_526_string);
	var_516_object->SetPhoto(var_526_string);
	string var_527_string;
	func_3002(var_527_string);
	var_516_object->SetPhoto2(var_527_string);
	int var_528_int;
	func_3306(var_528_int);
	var_516_object->SetPlayerName(var_528_int);
	bool var_517_bool;
	@IsOverrideActive(var_517_bool);
	if(var_517_bool != 0) {
		var_509_int = -2;
		return 8;
	}
	@DoDialog(var_516_object);
	bool var_530_bool; object var_531_object;
	object var_532_object;
	func_2837(var_532_object);
	var_532_object = var_531_object;
	func_2646(var_530_bool, var_531_object);
	object var_533_object; object var_534_object;
	var_510_object = var_533_object;
	var_516_object = var_534_object;
	TaskCall(7);
	func_1036(var_535_object, var_536_object, var_537_string, var_538_bool, var_533_object, var_534_object);
	TaskReturn();
	bool var_519_bool;
	var_516_object->IsDialogEnd(var_519_bool);
	
	for(;;) {
		var_656_bool = !var_519_bool; //@nz
		if(var_656_bool == 0) goto Label_1025;
		@sync();
		var_516_object->IsDialogEnd(var_519_bool);
	}
	
Label_1025:
	object var_657_object;
	var_510_object = var_657_object;
	func_2628();
	@StopDialog(var_516_object);
	var_516_object->GetReturnValue(-1);
	int var_518_int = var_509_int;
}
EMIT "Stack[-4] = 0";


void func_3004(bool var_108_bool)
{
	var_108_bool = true;
}


// @pe
void func_3006(void)
{
	@SetVariable("ook6Danko1", 1);
}


void func_2494(bool var_94_bool, object var_95_object, string var_96_string)
{
	var_101_bool = IsFuncExist(var_95_object, "HasProperty", 2);
	if(!var_101_bool) { //@nz
		var_94_bool = false;
		return 2;
	}
	bool var_98_bool;
	var_95_object->HasProperty(var_96_string, var_98_bool);
	var_98_bool = var_94_bool;
}


void func_3265(object var_63_object)
{
	object var_65_object;
	@GetDiaryRoot(var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_63_object = false;
	}
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3012(void)
{
	bool var_39_bool;
	func_2945(var_39_bool, "quest_k6_01", "teleport");
}


// @pe
void func_711(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_453_object, object var_454_object)
{
	var_0_object = var_454_object;
	var_1_object = var_453_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_460_bool = false;
		bool var_461_bool;
		func_3147(var_1_object);
		if(var_461_bool != 0) {
			bool var_467_bool;
			func_3159(var_1_object);
			if(var_467_bool != 0)
				var_460_bool = true;
		}
		if(var_460_bool != 0) {
			object var_473_object; object var_474_object;
			var_473_object = var_1_object;
			var_474_object = var_0_object;
			func_3029();
			func_803(var_454_object, "Neutral");
			var_0_object->SetMessage(526118); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528252, 29614, 29613); //@t
			var_0_object->AddReply(528256, 29614, 29617); //@t
		} else {
					func_803(var_454_object, "Sorrow");
					var_0_object->SetMessage(526120); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526121, -1, 27400); //@t
		}
	}
	for(;;) {
		bool var_492_bool;
		func_3004(var_492_bool);
		if(var_492_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2784(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_802;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_802:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2cb";


void func_2248(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2545(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2506(bool var_86_bool, object var_87_object, string var_88_string, float var_89_float, float var_90_float, float var_91_float)
{
	object var_95_object;
	var_87_object = var_95_object;
	string var_96_string;
	var_88_string = var_96_string;
	bool var_94_bool;
	func_2494(var_94_bool, var_95_object, var_96_string);
	if(!var_94_bool) //@nz
		var_86_bool = false;
	float var_93_float;
	var_87_object->GetProperty(var_88_string, var_93_float);
	float var_104_float; float var_106_float; float var_107_float;
	var_90_float = var_106_float;
	var_91_float = var_107_float;
	func_2853(var_104_float, (var_93_float + var_89_float), var_106_float, var_107_float);
	var_87_object->SetProperty(var_88_string, var_104_float);
	var_86_bool = true;
}


// @pe
void func_3019(void)
{
	func_3252();
	bool var_70_bool;
	func_2945(var_70_bool, "quest_k6_01", "completed");
}


void func_3278(bool var_54_bool, object var_55_object, int var_56_int)
{
	object var_63_object;
	func_3265(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	object var_61_object;
	var_60_object->Find(var_56_int, var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_56_int);
		var_54_bool = false;
	}
	var_61_object->AddChild(var_55_object);
	@SendWorldWndMessage(7);
	int var_62_int;
	var_55_object->GetCategory(var_62_int);
	@SetDiarySection(var_62_int);
	var_54_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1749(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_308_object, object var_309_object)
{
	var_0_object = var_309_object;
	var_3_string = false;
	if(1 != 0) {
		func_1817(var_309_object, "Neutral");
		var_0_object->SetMessage(539435); //@t
		var_0_object->ClearReplies(); //@t
		bool var_324_bool;
		func_3195(var_308_object);
		if(var_324_bool != 0)
			var_0_object->AddReply(539436, 42812, 41367); //@t
		var_0_object->AddReply(539439, -1, 41370); //@t
		var_0_object->AddReply(540767, -1, 42811); //@t
		goto Label_1787;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6d9";
	}
Label_1787:
	bool var_341_bool;
	func_3004(var_341_bool);
	if(var_341_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2784(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1816;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1816:
		return 0;

	}
	
}


// @pe
void func_3029(void)
{
	@SetVariable("ook7Danko1", 1);
}


void func_2263(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


// @pe
void func_3035(object var_37_object)
{
	@Trace("money1000 is given");
	object var_40_object;
	var_37_object = var_40_object;
	func_2881(var_40_object, 1000);
}


void func_2268(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2486(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2784(string var_254_string)
{
	bool var_258_bool; float var_259_float; float var_260_float;
	@lshHasAnimation(var_258_bool, var_254_string);
	if(var_258_bool != 0) {
		@lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		@lshPlayAnimation(var_259_float, var_260_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_254_string);
	}
	
}


void func_2528(object var_44_object, string var_45_string, int var_46_int)
{
	int var_48_int;
	var_44_object->GetProperty(var_45_string, var_48_int);
	var_44_object->SetProperty(var_45_string, (var_48_int + var_46_int));
}


// @pe
void func_3045(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_2535(bool var_39_bool, cvector var_40_cvector)
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


void func_3306(int var_117_int)
{
	int var_119_int;
	@GetVariable("branch", var_119_int);
	if(var_119_int == 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0xcf9";
	}
	if(var_119_int == 1) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
}


// @pe
void func_3051(void)
{
	@SetVariable("k12q01DankoInSobor", 1);
	func_3213();
}


void func_2027(object var_0_object, int var_658_int, object var_659_object)
{
	var_0_object = var_659_object;
	bool var_669_bool; object var_670_object;
	var_659_object = var_670_object;
	func_2559(var_669_bool, var_670_object, 70.0);
	if(!var_669_bool) { //@nz
		var_658_int = -2;
		return 8;
	}
	object var_665_object;
	@CreateDialog(var_665_object);
	int var_673_int;
	func_2998(var_673_int);
	var_665_object->SetNPCName(var_673_int);
	int var_674_int;
	func_2996(var_674_int);
	var_665_object->SetNPCDescription(var_674_int);
	string var_675_string;
	func_3000(var_675_string);
	var_665_object->SetPhoto(var_675_string);
	string var_676_string;
	func_3002(var_676_string);
	var_665_object->SetPhoto2(var_676_string);
	int var_677_int;
	func_3306(var_677_int);
	var_665_object->SetPlayerName(var_677_int);
	bool var_666_bool;
	@IsOverrideActive(var_666_bool);
	if(var_666_bool != 0) {
		var_658_int = -2;
		return 8;
	}
	@DoDialog(var_665_object);
	bool var_679_bool; object var_680_object;
	object var_681_object;
	func_2837(var_681_object);
	var_681_object = var_680_object;
	func_2646(var_679_bool, var_680_object);
	object var_682_object; object var_683_object;
	var_659_object = var_682_object;
	var_665_object = var_683_object;
	TaskCall(11);
	func_2108(var_684_object, var_685_object, var_686_string, var_687_bool, var_682_object, var_683_object);
	TaskReturn();
	bool var_668_bool;
	var_665_object->IsDialogEnd(var_668_bool);
	
	for(;;) {
		var_712_bool = !var_668_bool; //@nz
		if(var_712_bool == 0) goto Label_2097;
		@sync();
		var_665_object->IsDialogEnd(var_668_bool);
	}
	
Label_2097:
	object var_713_object;
	var_659_object = var_713_object;
	func_2628();
	@StopDialog(var_665_object);
	var_665_object->GetReturnValue(-1);
	int var_667_int = var_658_int;
}
EMIT "Stack[-4] = 0";


void func_2800(string var_232_string, bool var_233_bool)
{
	bool var_239_bool; float var_240_float; float var_241_float;
	@lshHasAnimation(var_239_bool, var_232_string);
	if(var_239_bool != 0) {
		@lshGetAnimTimes(var_232_string, var_240_float, var_241_float);
		@lshPlayAnimation(var_240_float, var_241_float, var_233_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_232_string);
	}
	
}


void func_2545(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2535(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_2290(void)
{
	float var_717_float;
	@rand(var_717_float, 8, 16);
	@SetTimer(10, var_717_float);
}


// @pe
void func_3060(void)
{
	int var_39_int;
	func_2864(var_39_int, "k12q01_Danko");
	if(var_39_int == 0) {
		@SetVariable("k12q01_Danko", 1);
		func_3226();
	}
}


void func_249(object var_0_object, int var_353_int, object var_354_object)
{
	var_0_object = var_354_object;
	bool var_364_bool; object var_365_object;
	var_354_object = var_365_object;
	func_2559(var_364_bool, var_365_object, 70.0);
	if(!var_364_bool) { //@nz
		var_353_int = -2;
		return 8;
	}
	object var_360_object;
	@CreateDialog(var_360_object);
	int var_368_int;
	func_2998(var_368_int);
	var_360_object->SetNPCName(var_368_int);
	int var_369_int;
	func_2996(var_369_int);
	var_360_object->SetNPCDescription(var_369_int);
	string var_370_string;
	func_3000(var_370_string);
	var_360_object->SetPhoto(var_370_string);
	string var_371_string;
	func_3002(var_371_string);
	var_360_object->SetPhoto2(var_371_string);
	int var_372_int;
	func_3306(var_372_int);
	var_360_object->SetPlayerName(var_372_int);
	bool var_361_bool;
	@IsOverrideActive(var_361_bool);
	if(var_361_bool != 0) {
		var_353_int = -2;
		return 8;
	}
	@DoDialog(var_360_object);
	bool var_374_bool; object var_375_object;
	object var_376_object;
	func_2837(var_376_object);
	var_376_object = var_375_object;
	func_2646(var_374_bool, var_375_object);
	object var_377_object; object var_378_object;
	var_354_object = var_377_object;
	var_360_object = var_378_object;
	TaskCall(3);
	func_330(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	bool var_363_bool;
	var_360_object->IsDialogEnd(var_363_bool);
	
	for(;;) {
		var_425_bool = !var_363_bool; //@nz
		if(var_425_bool == 0) goto Label_319;
		@sync();
		var_360_object->IsDialogEnd(var_363_bool);
	}
	
Label_319:
	object var_426_object;
	var_354_object = var_426_object;
	func_2628();
	@StopDialog(var_360_object);
	var_360_object->GetReturnValue(-1);
	int var_362_int = var_353_int;
}
EMIT "Stack[-4] = 0";


void func_2554(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


void func_2299(void)
{
	@KillTimer(10);
}


void func_2815(bool var_160_bool, string var_161_string)
{
	bool var_163_bool;
	bool var_164_bool;
	func_3004(var_164_bool);
	if(var_164_bool != 0) {
		@lshHasSpeech(var_163_bool, var_161_string);
		if(var_163_bool != 0) {
			@lshPlaySpeech(var_161_string);
			var_160_bool = true;
		}
	}
	var_160_bool = false;
}


