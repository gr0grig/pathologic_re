// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_42_cvector == 33796) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5112();
			}
			if(var_42_cvector == 33811) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_5134();
			}
			if(var_42_cvector == 33835) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5122();
			}
			if(var_41_bool == 33781) {
				bool var_101_bool = false;
				bool var_102_bool;
				func_5377(var_1_object);
				if(var_102_bool != 0) {
					bool var_110_bool;
					func_5401(var_1_object);
					if(var_110_bool != 0)
						var_101_bool = true;
				}
				if(var_101_bool != 0) {
					object var_116_object; object var_117_object;
					var_116_object = var_1_object;
					var_117_object = var_0_object;
					func_5128();
					func_205(var_42_cvector, "Neutral");
					var_0_object->SetMessage(532352); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532353, 33783, 33782); //@t
					var_0_object->AddReply(532386, 33825, 33824); //@t
					return 0;
				}
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532393); //@t
				var_0_object->ClearReplies(); //@t
				bool var_141_bool = false;
				bool var_142_bool;
				func_5389(var_1_object);
				if(var_142_bool != 0) {
					bool var_148_bool;
					func_5641(var_1_object);
					if(var_148_bool != 0)
						var_141_bool = true;
				}
				if(var_141_bool != 0)
					var_0_object->AddReply(532394, 33836, 33835); //@t
				var_0_object->AddReply(532453, -1, 33895); //@t
				return 0;
			}
			if(var_41_bool == 33836) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532395); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532396, 33838, 33837); //@t
				var_0_object->AddReply(532404, 33847, 33846); //@t
				var_0_object->AddReply(532408, -1, 33850); //@t
				return 0;
			}
			if(var_41_bool == 33847) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532406, -1, 33848); //@t
				var_0_object->AddReply(532407, -1, 33849); //@t
				return 0;
			}
			if(var_41_bool == 33838) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532398, 33840, 33839); //@t
				var_0_object->AddReply(532402, -1, 33843); //@t
				var_0_object->AddReply(532403, 33840, 33844); //@t
				return 0;
			}
			if(var_41_bool == 33840) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532399); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532400, -1, 33841); //@t
				var_0_object->AddReply(532401, -1, 33842); //@t
				return 0;
			}
			if(var_41_bool == 33825) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532388, 33827, 33826); //@t
				var_0_object->AddReply(532392, 33819, 33832); //@t
				return 0;
			}
			if(var_41_bool == 33827) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532390, 33819, 33828); //@t
				var_0_object->AddReply(532391, 33819, 33830); //@t
				return 0;
			}
			if(var_41_bool == 33783) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532355, 33785, 33784); //@t
				var_0_object->AddReply(532385, 33785, 33822); //@t
				return 0;
			}
			if(var_41_bool == 33785) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532357, 33787, 33786); //@t
				var_0_object->AddReply(532382, 33819, 33818); //@t
				return 0;
			}
			if(var_41_bool == 33819) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532384, 33787, 33820); //@t
				return 0;
			}
			if(var_41_bool == 33787) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532359, 33789, 33788); //@t
				var_0_object->AddReply(532373, 33808, 33807); //@t
				var_0_object->AddReply(532379, 33815, 33814); //@t
				return 0;
			}
			if(var_41_bool == 33815) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532381, 33808, 33816); //@t
				return 0;
			}
			if(var_41_bool == 33808) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532375, 33810, 33809); //@t
				var_0_object->AddReply(532378, 33789, 33812); //@t
				return 0;
			}
			if(var_41_bool == 33810) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532377, -1, 33811); //@t
				return 0;
			}
			if(var_41_bool == 33789) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532361, 33795, 33790); //@t
				var_0_object->AddReply(532362, 33793, 33792); //@t
				var_0_object->AddReply(532372, 33810, 33805); //@t
				return 0;
			}
			if(var_41_bool == 33793) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532364, 33795, 33794); //@t
				var_0_object->AddReply(532368, 33800, 33799); //@t
				return 0;
			}
			if(var_41_bool == 33800) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532370, 33795, 33801); //@t
				var_0_object->AddReply(532371, 33810, 33803); //@t
				return 0;
			}
			if(var_41_bool == 33795) {
				func_205(var_42_cvector, "Neutral");
				var_0_object->SetMessage(532365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532366, -1, 33796); //@t
				var_0_object->AddReply(532367, 33810, 33797); //@t
				return 0;
			}
			var_3_string = true;
			bool var_343_bool;
			func_5110(var_343_bool);
			if(var_343_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_41_bool == 36971) {
				func_886(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_41_bool == 36973) {
				func_886(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_41_bool == 36975) {
				func_886(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_89_bool;
			func_5110(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x38d";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_42_cvector == 3869) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5296();
			}
			if(var_42_cvector == 3872) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_5296();
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_5357();
				object var_59_object = var_1_object;
				func_5343(var_0_object);
			}
			if(var_42_cvector == 3870) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_5296();
				object var_110_object = var_1_object;
				func_5343(var_0_object);
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_5357();
			}
			if(var_42_cvector == 3860) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_5296();
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_5357();
				object var_120_object = var_1_object;
				func_5343(var_0_object);
			}
			if(var_42_cvector == 3856) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_5296();
			}
			if(var_42_cvector == 3857) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_5296();
				object var_130_object = var_1_object;
				func_5343(var_0_object);
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5357();
			}
			if(var_42_cvector == 13923) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_5302();
			}
			if(var_42_cvector == 11939) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_5363();
			}
			if(var_42_cvector == 11940) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_5144();
			}
			if(var_41_bool == 13922) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512729); //@t
				var_0_object->ClearReplies(); //@t
				bool var_187_bool = false;
				bool var_188_bool;
				func_5545(var_1_object);
				if(var_188_bool != 0) {
					bool var_196_bool;
					func_5533(var_1_object);
					if(var_196_bool != 0)
						var_187_bool = true;
				}
				if(var_187_bool != 0)
					var_0_object->AddReply(512731, 3851, 13924); //@t
				bool var_205_bool = false;
				bool var_206_bool = false;
				bool var_207_bool = false;
				bool var_208_bool;
				func_5557(var_1_object);
				if(var_208_bool != 0) {
					bool var_214_bool;
					func_5605(var_1_object);
					if(var_214_bool != 0)
						var_207_bool = true;
				}
				if(var_207_bool != 0) {
					bool var_220_bool;
					func_5617(var_1_object);
					if(!var_220_bool) //@nz
						var_206_bool = true;
				}
				if(var_206_bool != 0) {
					bool var_227_bool;
					func_5629(var_1_object);
					if(!var_227_bool) //@nz
						var_205_bool = true;
				}
				if(var_205_bool != 0)
					var_0_object->AddReply(512730, 11927, 13923); //@t
				var_0_object->AddReply(512732, -1, 13926); //@t
				return 0;
			}
			if(var_41_bool == 11927) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510792, 11929, 11928); //@t
				var_0_object->AddReply(510810, 11929, 11950); //@t
				return 0;
			}
			if(var_41_bool == 11929) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510794, 11931, 11930); //@t
				var_0_object->AddReply(510808, 11931, 11946); //@t
				return 0;
			}
			if(var_41_bool == 11931) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510796, 11933, 11932); //@t
				var_0_object->AddReply(510807, 11933, 11945); //@t
				return 0;
			}
			if(var_41_bool == 11933) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510798, 11935, 11934); //@t
				var_0_object->AddReply(510806, 11937, 11943); //@t
				return 0;
			}
			if(var_41_bool == 11935) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510800, 11937, 11936); //@t
				var_0_object->AddReply(510805, 11937, 11941); //@t
				return 0;
			}
			if(var_41_bool == 11937) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510803, -1, 11939); //@t
				var_0_object->AddReply(510804, -1, 11940); //@t
				return 0;
			}
			if(var_41_bool == 3851) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503563, 3858, 3852); //@t
				var_0_object->AddReply(503564, 3858, 3853); //@t
				var_0_object->AddReply(503565, 3855, 3854); //@t
				return 0;
			}
			if(var_41_bool == 3855) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503567, -1, 3856); //@t
				var_0_object->AddReply(503568, -1, 3857); //@t
				return 0;
			}
			if(var_41_bool == 3858) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503571, 3862, 3861); //@t
				var_0_object->AddReply(503582, 3874, 3873); //@t
				var_0_object->AddReply(503570, -1, 3860); //@t
				return 0;
			}
			if(var_41_bool == 3874) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503584, 3867, 3875); //@t
				return 0;
			}
			if(var_41_bool == 3862) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503573, 3864, 3863); //@t
				var_0_object->AddReply(503576, 3867, 3866); //@t
				return 0;
			}
			if(var_41_bool == 3864) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503575, 3867, 3865); //@t
				var_0_object->AddReply(503579, -1, 3870); //@t
				return 0;
			}
			if(var_41_bool == 3867) {
				func_1193(var_42_cvector, "Neutral");
				var_0_object->SetMessage(503577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503578, -1, 3869); //@t
				var_0_object->AddReply(503581, -1, 3872); //@t
				return 0;
			}
			var_3_string = true;
			bool var_373_bool;
			func_5110(var_373_bool);
			if(var_373_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4c0";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_42_cvector == 9768) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5167();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_5155();
				object var_94_object = var_1_object;
				func_5210(var_0_object);
			}
			if(var_42_cvector == 9769) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_5155();
			}
			if(var_42_cvector == 9760) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5155();
			}
			if(var_42_cvector == 9762) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_5155();
			}
			if(var_42_cvector == 12327) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_5167();
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_5190();
				object var_140_object = var_1_object;
				func_5210(var_0_object);
			}
			if(var_42_cvector == 9736) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_5149();
			}
			if(var_42_cvector == 9737) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_5149();
			}
			if(var_42_cvector == 9738) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_5149();
			}
			if(var_42_cvector == 9745) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_5149();
			}
			if(var_42_cvector == 9746) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_5149();
			}
			if(var_42_cvector == 9788) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_5161();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_5196();
			}
			if(var_42_cvector == 9789) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_5161();
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_5196();
			}
			if(var_41_bool == 9728) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508869); //@t
				var_0_object->ClearReplies(); //@t
				bool var_209_bool = false;
				bool var_210_bool;
				func_5425(var_1_object);
				if(var_210_bool != 0) {
					bool var_218_bool;
					func_5461(var_1_object);
					if(var_218_bool != 0)
						var_209_bool = true;
				}
				if(var_209_bool != 0)
					var_0_object->AddReply(508889, 9751, 9750); //@t
				bool var_227_bool = false;
				bool var_228_bool = false;
				bool var_229_bool;
				func_5449(var_1_object);
				if(var_229_bool != 0) {
					bool var_235_bool;
					func_5425(var_1_object);
					if(!var_235_bool) //@nz
						var_228_bool = true;
				}
				if(var_228_bool != 0) {
					bool var_238_bool;
					func_5461(var_1_object);
					if(var_238_bool != 0)
						var_227_bool = true;
				}
				if(var_227_bool != 0)
					var_0_object->AddReply(511136, 12326, 12325); //@t
				bool var_243_bool;
				func_5413(var_1_object);
				if(var_243_bool != 0)
					var_0_object->AddReply(508888, 9729, 9749); //@t
				bool var_252_bool = false;
				bool var_253_bool;
				func_5437(var_1_object);
				if(var_253_bool != 0) {
					bool var_259_bool;
					func_5473(var_1_object);
					if(var_259_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0)
					var_0_object->AddReply(508908, 9772, 9771); //@t
				var_0_object->AddReply(511134, -1, 12323); //@t
				var_0_object->AddReply(536099, -1, 37851); //@t
				return 0;
			}
			if(var_41_bool == 9772) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508913, 9778, 9777); //@t
				var_0_object->AddReply(508910, 9778, 9773); //@t
				return 0;
			}
			if(var_41_bool == 9778) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508916, 9781, 9780); //@t
				var_0_object->AddReply(508918, 9783, 9782); //@t
				return 0;
			}
			if(var_41_bool == 9783) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508920, 9786, 9784); //@t
				return 0;
			}
			if(var_41_bool == 9781) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508921, 9786, 9785); //@t
				return 0;
			}
			if(var_41_bool == 9786) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508923, -1, 9788); //@t
				var_0_object->AddReply(508924, -1, 9789); //@t
				return 0;
			}
			if(var_41_bool == 9729) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508871, 9731, 9730); //@t
				var_0_object->AddReply(508887, 9731, 9747); //@t
				return 0;
			}
			if(var_41_bool == 9731) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508873, 9733, 9732); //@t
				var_0_object->AddReply(508880, 9740, 9739); //@t
				return 0;
			}
			if(var_41_bool == 9740) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508882, 9733, 9741); //@t
				var_0_object->AddReply(508883, 9744, 9743); //@t
				return 0;
			}
			if(var_41_bool == 9744) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508885, -1, 9745); //@t
				var_0_object->AddReply(508886, -1, 9746); //@t
				return 0;
			}
			if(var_41_bool == 9733) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508875, 9735, 9734); //@t
				var_0_object->AddReply(508879, -1, 9738); //@t
				return 0;
			}
			if(var_41_bool == 9735) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508877, -1, 9736); //@t
				var_0_object->AddReply(508878, -1, 9737); //@t
				return 0;
			}
			if(var_41_bool == 12326) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511137); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536097, 37850, 37849); //@t
				return 0;
			}
			if(var_41_bool == 37850) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511138, -1, 12327); //@t
				return 0;
			}
			if(var_41_bool == 9751) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508891, 9753, 9752); //@t
				var_0_object->AddReply(508893, 9759, 9754); //@t
				return 0;
			}
			if(var_41_bool == 9759) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508899, -1, 9760); //@t
				var_0_object->AddReply(508900, -1, 9762); //@t
				return 0;
			}
			if(var_41_bool == 9753) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508894, 9756, 9755); //@t
				return 0;
			}
			if(var_41_bool == 9756) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508896, 9763, 9757); //@t
				var_0_object->AddReply(508897, 9759, 9758); //@t
				return 0;
			}
			if(var_41_bool == 9763) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508902, 9766, 9764); //@t
				var_0_object->AddReply(508903, 9766, 9765); //@t
				return 0;
			}
			if(var_41_bool == 9766) {
				func_1942(var_42_cvector, "Neutral");
				var_0_object->SetMessage(508904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508905, -1, 9768); //@t
				var_0_object->AddReply(508906, -1, 9769); //@t
				return 0;
			}
			var_3_string = true;
			bool var_449_bool;
			func_5110(var_449_bool);
			if(var_449_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7ad";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_42_cvector == 12266) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5278();
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_5258();
				object var_71_object = var_1_object;
				func_5242(var_0_object);
			}
			if(var_42_cvector == 12267) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_5278();
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_5258();
				object var_103_object = var_1_object;
				func_5242(var_0_object);
			}
			if(var_42_cvector == 12281) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5290();
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_5284();
			}
			if(var_41_bool == 12246) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511065); //@t
				var_0_object->ClearReplies(); //@t
				bool var_130_bool = false;
				bool var_131_bool;
				func_5497(var_1_object);
				if(var_131_bool != 0) {
					bool var_139_bool;
					func_5485(var_1_object);
					if(var_139_bool != 0)
						var_130_bool = true;
				}
				if(var_130_bool != 0)
					var_0_object->AddReply(511066, 12248, 12247); //@t
				bool var_148_bool = false;
				bool var_149_bool;
				func_5521(var_1_object);
				if(var_149_bool != 0) {
					bool var_155_bool;
					func_5509(var_1_object);
					if(var_155_bool != 0)
						var_148_bool = true;
				}
				if(var_148_bool != 0)
					var_0_object->AddReply(511079, 12268, 12263); //@t
				var_0_object->AddReply(511505, -1, 12707); //@t
				var_0_object->AddReply(536130, -1, 37889); //@t
				return 0;
			}
			if(var_41_bool == 12268) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511084, 12271, 12269); //@t
				var_0_object->AddReply(511085, 12272, 12270); //@t
				return 0;
			}
			if(var_41_bool == 12272) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511088, 12275, 12273); //@t
				return 0;
			}
			if(var_41_bool == 12271) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511089, 12275, 12274); //@t
				return 0;
			}
			if(var_41_bool == 12275) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511091, 12279, 12276); //@t
				var_0_object->AddReply(511092, 12279, 12277); //@t
				return 0;
			}
			if(var_41_bool == 12279) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511094, -1, 12281); //@t
				return 0;
			}
			if(var_41_bool == 12248) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511068, 12250, 12249); //@t
				var_0_object->AddReply(511073, 12255, 12254); //@t
				return 0;
			}
			if(var_41_bool == 12250) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511070, 12257, 12251); //@t
				var_0_object->AddReply(511071, 12257, 12252); //@t
				var_0_object->AddReply(511072, 12255, 12253); //@t
				return 0;
			}
			if(var_41_bool == 12255) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511075, 12257, 12256); //@t
				return 0;
			}
			if(var_41_bool == 12257) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511077, 40703, 12261); //@t
				var_0_object->AddReply(511078, 12264, 12262); //@t
				return 0;
			}
			if(var_41_bool == 40703) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538788, 12264, 40704); //@t
				var_0_object->AddReply(538789, 12264, 40705); //@t
				return 0;
			}
			if(var_41_bool == 12264) {
				func_2798(var_42_cvector, "Neutral");
				var_0_object->SetMessage(511080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511081, -1, 12266); //@t
				var_0_object->AddReply(511082, -1, 12267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_271_bool;
			func_5110(var_271_bool);
			if(var_271_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb05";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_42_cvector == 14897) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5337();
			}
			if(var_42_cvector == 14911) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_5308();
				object var_96_object = var_1_object;
				func_5226(var_0_object);
			}
			if(var_42_cvector == 40378) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_5308();
				object var_126_object = var_1_object;
				func_5226(var_0_object);
			}
			if(var_42_cvector == 40377) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_5308();
				object var_132_object = var_1_object;
				func_5226(var_0_object);
			}
			if(var_42_cvector == 13535) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_5331();
			}
			if(var_41_bool == 13534) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512374); //@t
				var_0_object->ClearReplies(); //@t
				bool var_155_bool = false;
				bool var_156_bool;
				func_5569(var_1_object);
				if(!var_156_bool) { //@nz
					bool var_165_bool;
					func_5593(var_1_object);
					if(var_165_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0)
					var_0_object->AddReply(513641, 14898, 14897); //@t
				bool var_174_bool;
				func_5581(var_1_object);
				if(var_174_bool != 0)
					var_0_object->AddReply(512375, 13536, 13535); //@t
				var_0_object->AddReply(513658, -1, 14916); //@t
				return 0;
			}
			if(var_41_bool == 13536) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512378, 13544, 13538); //@t
				var_0_object->AddReply(512377, 13539, 13537); //@t
				return 0;
			}
			if(var_41_bool == 13539) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512380, 13541, 13540); //@t
				return 0;
			}
			if(var_41_bool == 13541) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512382, -1, 13542); //@t
				var_0_object->AddReply(512383, -1, 13543); //@t
				return 0;
			}
			if(var_41_bool == 13544) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512385, 13552, 13545); //@t
				var_0_object->AddReply(512386, 13547, 13546); //@t
				return 0;
			}
			if(var_41_bool == 13547) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512388, 13550, 13548); //@t
				var_0_object->AddReply(512389, 13550, 13549); //@t
				return 0;
			}
			if(var_41_bool == 13550) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512391, -1, 13551); //@t
				return 0;
			}
			if(var_41_bool == 13552) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512393, 13559, 13554); //@t
				var_0_object->AddReply(512394, 13557, 13555); //@t
				var_0_object->AddReply(512395, 13558, 13556); //@t
				return 0;
			}
			if(var_41_bool == 13558) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512403, 13565, 13564); //@t
				return 0;
			}
			if(var_41_bool == 13557) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512402, 13565, 13563); //@t
				return 0;
			}
			if(var_41_bool == 13559) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512399, 13561, 13560); //@t
				return 0;
			}
			if(var_41_bool == 13561) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512401, 13565, 13562); //@t
				return 0;
			}
			if(var_41_bool == 13565) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512405, 13570, 13568); //@t
				var_0_object->AddReply(512406, 13570, 13569); //@t
				return 0;
			}
			if(var_41_bool == 13570) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512408, -1, 13572); //@t
				return 0;
			}
			if(var_41_bool == 14898) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513642); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513643, 14900, 14899); //@t
				return 0;
			}
			if(var_41_bool == 14900) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513645, 14902, 14901); //@t
				return 0;
			}
			if(var_41_bool == 14902) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513647, 14904, 14903); //@t
				var_0_object->AddReply(513649, 14906, 14905); //@t
				return 0;
			}
			if(var_41_bool == 14906) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513652, 40376, 14908); //@t
				return 0;
			}
			if(var_41_bool == 40376) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538491, -1, 40377); //@t
				return 0;
			}
			if(var_41_bool == 14904) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513651, 14909, 14907); //@t
				var_0_object->AddReply(513655, 14913, 14912); //@t
				return 0;
			}
			if(var_41_bool == 14913) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513657, 14909, 14914); //@t
				return 0;
			}
			if(var_41_bool == 14909) {
				func_3351(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513653); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513654, -1, 14911); //@t
				var_0_object->AddReply(538492, -1, 40378); //@t
				return 0;
			}
			var_3_string = true;
			bool var_363_bool;
			func_5110(var_363_bool);
			if(var_363_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2e";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_41_bool == 21998) {
				func_4067(var_42_cvector, "Neutral");
				var_0_object->SetMessage(520784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520785, 22000, 21999); //@t
				var_0_object->AddReply(520792, 22008, 22007); //@t
				var_0_object->AddReply(520796, 22014, 22013); //@t
				return 0;
			}
			if(var_41_bool == 22014) {
				func_4067(var_42_cvector, "Neutral");
				var_0_object->SetMessage(520797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520798, -1, 22015); //@t
				return 0;
			}
			if(var_41_bool == 22008) {
				func_4067(var_42_cvector, "Neutral");
				var_0_object->SetMessage(520793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520794, 22000, 22009); //@t
				var_0_object->AddReply(520795, 22000, 22011); //@t
				return 0;
			}
			if(var_41_bool == 22000) {
				func_4067(var_42_cvector, "Neutral");
				var_0_object->SetMessage(520786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520787, 22002, 22001); //@t
				var_0_object->AddReply(520791, 22002, 22005); //@t
				return 0;
			}
			if(var_41_bool == 22002) {
				func_4067(var_42_cvector, "Neutral");
				var_0_object->SetMessage(520788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520789, -1, 22003); //@t
				var_0_object->AddReply(520790, -1, 22004); //@t
				return 0;
			}
			var_3_string = true;
			bool var_106_bool;
			func_5110(var_106_bool);
			if(var_106_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xffa";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4974();
			if(var_41_int == 42557) {
				func_4362(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_5110(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1121";
	
	}

}


maintask task_17
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		var_41_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4433(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_4504();
			bool var_45_bool = false;
			bool var_46_bool;
			func_4718(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_4473(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_4453(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_4981(var_87_object);
					var_87_object = var_86_object;
					func_4866(var_85_bool, var_86_object);
				}
			} else {
				func_4468(var_41_int);
				func_4495();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_4686();
		func_4504();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
		{
		@StopGroup0();
		func_4504();
		func_4946("Neutral");
		func_4495();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_4495();
		else
			func_4946("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_4686();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_4709(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_5887(var_59_object);
			func_4946("Neutral");
			func_4504();
			func_4495();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_46_bool;
	func_4718(var_46_bool);
	if(!var_46_bool) goto Label_0; //@nz
}


// @pe
void func_5122(void)
{
	@SetVariable("ood1Ospina1", 1);
}


void func_4615(void)
{
	bool var_68_bool; int var_69_int; int var_70_int; bool var_71_bool;
	@WaitForAnimEnd();
	bool var_72_bool;
	func_4718(var_72_bool);
	if(!var_72_bool) //@nz
		return 12;
	int var_74_int;
	func_5085(var_74_int);
	int var_66_int;
	var_74_int = var_66_int;
	int var_67_int = 0;
	
	for(;;) {
		bool var_87_bool = false;
		if(var_67_int < 5) {
			bool var_90_bool;
			func_4718(var_90_bool);
			if(var_90_bool != 0)
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			if(!var_66_int) { //@nz
				@Sleep(3, var_68_bool);
				if(!var_68_bool) { //@nz
				} else {
			} else {
			@irand(var_69_int, var_66_int);
			@irand(var_70_int, 5);
			if(var_70_int != 0)
				var_69_int = 0;
			string var_101_string; int var_102_int;
			var_69_int = var_102_int;
			func_5078(var_101_string, var_102_int);
			@PlayAnimation("all", var_101_string);
			@WaitForAnimEnd(var_71_bool);
			var_103_bool = !var_71_bool; //@nz
			if(var_103_bool == 0) goto Label_4670;
			goto Label_4681;
			}
				Label_4670:
					bool var_94_bool;
					func_4684(var_94_bool);
					var_95_bool = !var_94_bool; //@nz
					if(var_95_bool == 0) goto Label_4676;
			}
		}
	Label_4681:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4676:
		@ResetAAS();
		var_67_int += 1;
	}
	
}


// @pe
void func_5128(void)
{
	@SetVariable("ood1Ospina2", 1);
}


// @pe
void func_5641(bool var_364_bool)
{
	bool var_366_bool = true;
	bool var_367_bool = true;
	int var_368_int;
	func_4997(var_368_int, "d1q01");
	var_371_bool = var_368_int != 0;
	if(var_371_bool != 1) {
		int var_372_int;
		func_4997(var_372_int, "d1q01");
		var_375_bool = var_372_int != 1000;
		if(var_375_bool != 1)
			var_367_bool = false;
	}
	if(var_367_bool != 1) {
		int var_376_int;
		func_4997(var_376_int, "d1q01");
		var_379_bool = var_376_int != -1;
		if(var_379_bool != 1)
			var_366_bool = false;
	}
	if(var_366_bool != 0) {
		var_364_bool = true;
		return 0;
	}
	var_364_bool = false;
}


void func_13(object var_0_object, int var_282_int, object var_283_object)
{
	var_0_object = var_283_object;
	bool var_293_bool; object var_294_object;
	object var_295_object;
	func_4981(var_295_object);
	var_295_object = var_294_object;
	func_4808(var_293_bool, var_294_object);
	bool var_296_bool; object var_297_object;
	var_283_object = var_297_object;
	func_4723(var_296_bool, var_297_object, 70.0);
	if(!var_296_bool) { //@nz
		var_282_int = -2;
		return 8;
	}
	object var_289_object;
	@CreateDialog(var_289_object);
	int var_300_int;
	func_5104(var_300_int);
	var_289_object->SetNPCName(var_300_int);
	int var_301_int;
	func_5102(var_301_int);
	var_289_object->SetNPCDescription(var_301_int);
	string var_302_string;
	func_5106(var_302_string);
	var_289_object->SetPhoto(var_302_string);
	string var_303_string;
	func_5108(var_303_string);
	var_289_object->SetPhoto2(var_303_string);
	int var_304_int;
	func_5870(var_304_int);
	var_289_object->SetPlayerName(var_304_int);
	bool var_290_bool;
	@IsOverrideActive(var_290_bool);
	if(var_290_bool != 0) {
		var_282_int = -2;
		return 8;
	}
	@DoDialog(var_289_object);
	object var_306_object; object var_307_object;
	var_283_object = var_306_object;
	var_289_object = var_307_object;
	TaskCall(2);
	func_94(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object);
	TaskReturn();
	bool var_292_bool;
	var_289_object->IsDialogEnd(var_292_bool);
	
	for(;;) {
		var_386_bool = !var_292_bool; //@nz
		if(var_386_bool == 0) goto Label_83;
		@sync();
		var_289_object->IsDialogEnd(var_292_bool);
	}
	
Label_83:
	object var_387_object;
	var_283_object = var_387_object;
	func_4791();
	@StopDialog(var_289_object);
	var_289_object->GetReturnValue(-1);
	int var_291_int = var_282_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5134(void)
{
	func_5675();
	bool var_90_bool;
	func_5046(var_90_bool, "quest_d1_03", "unlock_butcher");
}


// @pe
void func_5144(void)
{
	func_5753();
}


// @pe
void func_5149(void)
{
	@SetVariable("ood3Ospina1", 1);
}


// @pe
void func_5155(void)
{
	@SetVariable("ood3Ospina2", 1);
}


// @pe
void func_5161(void)
{
	@SetVariable("ood3Ospina3", 1);
}


void func_5675(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 623, 2, 532457);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_5792(var_87_bool, var_88_object, 37);
}
EMIT "Stack[-1] = 0";


void func_5167(void)
{
	@SetVariable("d3q01", 3);
	object var_53_object;
	func_5820(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_5058(var_64_float);
	var_50_object->AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", 1, 511152, var_64_float);
	func_5714();
}
EMIT "Stack[-1] = 0";


void func_5688(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 38, 2, 512120);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_5792(var_54_bool, var_55_object, 37);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1082(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_619_object, object var_620_object)
{
	var_0_object = var_620_object;
	var_1_object = var_619_object;
	var_3_string = false;
	if(1 != 0) {
		func_1193(var_620_object, "Neutral");
		var_0_object->SetMessage(512729); //@t
		var_0_object->ClearReplies(); //@t
		bool var_635_bool = false;
		bool var_636_bool;
		func_5545(var_1_object);
		if(var_636_bool != 0) {
			bool var_642_bool;
			func_5533(var_1_object);
			if(var_642_bool != 0)
				var_635_bool = true;
		}
		if(var_635_bool != 0)
			var_0_object->AddReply(512731, 3851, 13924); //@t
		bool var_651_bool = false;
		bool var_652_bool = false;
		bool var_653_bool = false;
		bool var_654_bool;
		func_5557(var_1_object);
		if(var_654_bool != 0) {
			bool var_660_bool;
			func_5605(var_1_object);
			if(var_660_bool != 0)
				var_653_bool = true;
		}
		if(var_653_bool != 0) {
			bool var_666_bool;
			func_5617(var_1_object);
			if(!var_666_bool) //@nz
				var_652_bool = true;
		}
		if(var_652_bool != 0) {
			bool var_673_bool;
			func_5629(var_1_object);
			if(!var_673_bool) //@nz
				var_651_bool = true;
		}
		if(var_651_bool != 0)
			var_0_object->AddReply(512730, 11927, 13923); //@t
		var_0_object->AddReply(512732, -1, 13926); //@t
		goto Label_1163;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43e";
	}
Label_1163:
	bool var_686_bool;
	func_5110(var_686_bool);
	if(var_686_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1192;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1192:
		return 0;

	}
	
}


void func_2621(object var_0_object, int var_505_int, object var_506_object)
{
	var_0_object = var_506_object;
	bool var_516_bool; object var_517_object;
	object var_518_object;
	func_4981(var_518_object);
	var_518_object = var_517_object;
	func_4808(var_516_bool, var_517_object);
	bool var_519_bool; object var_520_object;
	var_506_object = var_520_object;
	func_4723(var_519_bool, var_520_object, 70.0);
	if(!var_519_bool) { //@nz
		var_505_int = -2;
		return 8;
	}
	object var_512_object;
	@CreateDialog(var_512_object);
	int var_523_int;
	func_5104(var_523_int);
	var_512_object->SetNPCName(var_523_int);
	int var_524_int;
	func_5102(var_524_int);
	var_512_object->SetNPCDescription(var_524_int);
	string var_525_string;
	func_5106(var_525_string);
	var_512_object->SetPhoto(var_525_string);
	string var_526_string;
	func_5108(var_526_string);
	var_512_object->SetPhoto2(var_526_string);
	int var_527_int;
	func_5870(var_527_int);
	var_512_object->SetPlayerName(var_527_int);
	bool var_513_bool;
	@IsOverrideActive(var_513_bool);
	if(var_513_bool != 0) {
		var_505_int = -2;
		return 8;
	}
	@DoDialog(var_512_object);
	object var_529_object; object var_530_object;
	var_506_object = var_529_object;
	var_512_object = var_530_object;
	TaskCall(10);
	func_2702(var_531_object, var_532_object, var_533_string, var_534_bool, var_529_object, var_530_object);
	TaskReturn();
	bool var_515_bool;
	var_512_object->IsDialogEnd(var_515_bool);
	
	for(;;) {
		var_591_bool = !var_515_bool; //@nz
		if(var_591_bool == 0) goto Label_2691;
		@sync();
		var_512_object->IsDialogEnd(var_515_bool);
	}
	
Label_2691:
	object var_592_object;
	var_506_object = var_592_object;
	func_4791();
	@StopDialog(var_512_object);
	var_512_object->GetReturnValue(-1);
	int var_514_int = var_505_int;
}
EMIT "Stack[-4] = 0";


void func_5701(void)
{
	object var_175_object;
	@CreateDiaryEntry(var_175_object, 71, 1, 512153);
	bool var_179_bool; object var_180_object;
	var_175_object = var_180_object;
	func_5792(var_179_bool, var_180_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5190(void)
{
	@SetVariable("ood3Ospina4", 1);
}


// @pe
void func_5196(void)
{
	@SetVariable("d3q01", 7);
	func_5701();
	bool var_182_bool;
	func_5046(var_182_bool, "quest_d3_01", "place_butchers");
}


void func_4684(bool var_94_bool)
{
	var_94_bool = true;
}


void func_4686(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_5714(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 70, 1, 512152);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_5792(var_72_bool, var_73_object, 25);
}
EMIT "Stack[-1] = 0";


void func_4691(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


// @pe
void func_5210(object var_95_object)
{
	object var_99_object;
	func_5820(var_99_object);
	object var_96_object;
	var_99_object = var_96_object;
	func_5837(var_96_object, "pt_map_bigvlad", (float)2);
	object var_119_object;
	func_5820(var_119_object);
	var_95_object->ShowMap(var_119_object);
}


void func_4699(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_306_object, object var_307_object)
{
	var_0_object = var_307_object;
	var_1_object = var_306_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_313_bool = false;
		bool var_314_bool;
		func_5377(var_1_object);
		if(var_314_bool != 0) {
			bool var_322_bool;
			func_5401(var_1_object);
			if(var_322_bool != 0)
				var_313_bool = true;
		}
		if(var_313_bool != 0) {
			object var_328_object; object var_329_object;
			var_328_object = var_1_object;
			var_329_object = var_0_object;
			func_5128();
			func_205(var_307_object, "Neutral");
			var_0_object->SetMessage(532352); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(532353, 33783, 33782); //@t
			var_0_object->AddReply(532386, 33825, 33824); //@t
		} else {
					func_205(var_307_object, "Neutral");
					var_0_object->SetMessage(532393); //@t
					var_0_object->ClearReplies(); //@t
					bool var_357_bool = false;
					bool var_358_bool;
					func_5389(var_1_object);
					if(var_358_bool != 0) {
						bool var_364_bool;
						func_5641(var_1_object);
						if(var_364_bool != 0)
							var_357_bool = true;
					}
					if(var_357_bool != 0)
						var_0_object->AddReply(532394, 33836, 33835); //@t
					var_0_object->AddReply(532453, -1, 33895); //@t
		}
	}
	for(;;) {
		bool var_347_bool;
		func_5110(var_347_bool);
		if(var_347_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4946(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_204;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_204:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_5727(void)
{
	object var_62_object;
	@CreateDiaryEntry(var_62_object, 162, 1, 515395);
	bool var_66_bool; object var_67_object;
	var_62_object = var_67_object;
	func_5792(var_66_bool, var_67_object, 111);
}
EMIT "Stack[-1] = 0";


void func_4709(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_4699(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


// @pe
void func_5226(object var_97_object)
{
	object var_101_object;
	func_5820(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	func_5837(var_98_object, "pt_map_mladvlad", (float)2);
	object var_121_object;
	func_5820(var_121_object);
	var_97_object->ShowMap(var_121_object);
}


void func_5740(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 121, 1, 513744);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_5792(var_151_bool, var_152_object, 111);
}
EMIT "Stack[-1] = 0";


void func_4718(bool var_42_bool)
{
	bool var_44_bool;
	@IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
}


void func_4723(bool var_168_bool, object var_169_object, float var_170_float)
{
	cvector var_181_cvector; bool var_188_bool;
	var_169_object->GetPosition(var_181_cvector);
	float var_180_float;
	var_169_object->GetEyesHeight(var_180_float);
	var_189_float = GetByIndex(var_181_cvector, 1);
	SetByIndex(var_181_cvector, 1) = (var_189_float + var_180_float);
	cvector var_182_cvector;
	@GetPosition(var_182_cvector);
	@GetEyesHeight(var_180_float);
	var_190_float = GetByIndex(var_182_cvector, 1);
	SetByIndex(var_182_cvector, 1) = (var_190_float + var_180_float);
	cvector var_183_cvector = var_181_cvector - var_182_cvector;
	var_191_float = GetByIndex(var_183_cvector, 1);
	SetByIndex(var_183_cvector, 1) = (float)0;
	var_193_float = sqrt(var_183_cvector | var_183_cvector);
	var_183_cvector /= var_193_float;
	cvector var_184_cvector = -var_183_cvector;
	cvector var_195_cvector;
	func_4987(var_195_cvector, (var_184_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_185_cvector = ((var_183_cvector * var_170_float) + (var_195_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_187_bool;
	@IsOverrideActive(var_187_bool);
	if(var_187_bool != 0)
		var_168_bool = false;
	@StopWorld();
	@CameraTransit((var_182_cvector + var_185_cvector), var_184_cvector);
	var_208_float = GetByIndex(var_185_cvector, 0);
	var_209_float = GetByIndex(var_185_cvector, 2);
	@Rotate(var_208_float, var_209_float);
	bool var_210_bool;
	func_5110(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_4785;
		@LookAsyncCamera("head");
	}
Label_4785:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_168_bool = true;
	
}


void func_3187(object var_0_object, int var_698_int, object var_699_object)
{
	var_0_object = var_699_object;
	bool var_709_bool; object var_710_object;
	object var_711_object;
	func_4981(var_711_object);
	var_711_object = var_710_object;
	func_4808(var_709_bool, var_710_object);
	bool var_712_bool; object var_713_object;
	var_699_object = var_713_object;
	func_4723(var_712_bool, var_713_object, 70.0);
	if(!var_712_bool) { //@nz
		var_698_int = -2;
		return 8;
	}
	object var_705_object;
	@CreateDialog(var_705_object);
	int var_716_int;
	func_5104(var_716_int);
	var_705_object->SetNPCName(var_716_int);
	int var_717_int;
	func_5102(var_717_int);
	var_705_object->SetNPCDescription(var_717_int);
	string var_718_string;
	func_5106(var_718_string);
	var_705_object->SetPhoto(var_718_string);
	string var_719_string;
	func_5108(var_719_string);
	var_705_object->SetPhoto2(var_719_string);
	int var_720_int;
	func_5870(var_720_int);
	var_705_object->SetPlayerName(var_720_int);
	bool var_706_bool;
	@IsOverrideActive(var_706_bool);
	if(var_706_bool != 0) {
		var_698_int = -2;
		return 8;
	}
	@DoDialog(var_705_object);
	object var_722_object; object var_723_object;
	var_699_object = var_722_object;
	var_705_object = var_723_object;
	TaskCall(12);
	func_3268(var_724_object, var_725_object, var_726_string, var_727_bool, var_722_object, var_723_object);
	TaskReturn();
	bool var_708_bool;
	var_705_object->IsDialogEnd(var_708_bool);
	
	for(;;) {
		var_775_bool = !var_708_bool; //@nz
		if(var_775_bool == 0) goto Label_3257;
		@sync();
		var_705_object->IsDialogEnd(var_708_bool);
	}
	
Label_3257:
	object var_776_object;
	var_699_object = var_776_object;
	func_4791();
	@StopDialog(var_705_object);
	var_705_object->GetReturnValue(-1);
	int var_707_int = var_698_int;
}
EMIT "Stack[-4] = 0";


void func_5753(void)
{
	object var_165_object;
	@CreateDiaryEntry(var_165_object, 721, 1, 538785);
	bool var_169_bool; object var_170_object;
	var_165_object = var_170_object;
	func_5792(var_169_bool, var_170_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5242(object var_72_object)
{
	object var_76_object;
	func_5820(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	func_5837(var_73_object, "pt_map_lara", (float)2);
	object var_96_object;
	func_5820(var_96_object);
	var_72_object->ShowMap(var_96_object);
}


void func_4223(object var_0_object, int var_838_int, object var_839_object)
{
	var_0_object = var_839_object;
	bool var_849_bool; object var_850_object;
	object var_851_object;
	func_4981(var_851_object);
	var_851_object = var_850_object;
	func_4808(var_849_bool, var_850_object);
	bool var_852_bool; object var_853_object;
	var_839_object = var_853_object;
	func_4723(var_852_bool, var_853_object, 70.0);
	if(!var_852_bool) { //@nz
		var_838_int = -2;
		return 8;
	}
	object var_845_object;
	@CreateDialog(var_845_object);
	int var_856_int;
	func_5104(var_856_int);
	var_845_object->SetNPCName(var_856_int);
	int var_857_int;
	func_5102(var_857_int);
	var_845_object->SetNPCDescription(var_857_int);
	string var_858_string;
	func_5106(var_858_string);
	var_845_object->SetPhoto(var_858_string);
	string var_859_string;
	func_5108(var_859_string);
	var_845_object->SetPhoto2(var_859_string);
	int var_860_int;
	func_5870(var_860_int);
	var_845_object->SetPlayerName(var_860_int);
	bool var_846_bool;
	@IsOverrideActive(var_846_bool);
	if(var_846_bool != 0) {
		var_838_int = -2;
		return 8;
	}
	@DoDialog(var_845_object);
	object var_862_object; object var_863_object;
	var_839_object = var_862_object;
	var_845_object = var_863_object;
	TaskCall(16);
	func_4304(var_864_object, var_865_object, var_866_string, var_867_bool, var_862_object, var_863_object);
	TaskReturn();
	bool var_848_bool;
	var_845_object->IsDialogEnd(var_848_bool);
	
	for(;;) {
		var_892_bool = !var_848_bool; //@nz
		if(var_892_bool == 0) goto Label_4293;
		@sync();
		var_845_object->IsDialogEnd(var_848_bool);
	}
	
Label_4293:
	object var_893_object;
	var_839_object = var_893_object;
	func_4791();
	@StopDialog(var_845_object);
	var_845_object->GetReturnValue(-1);
	int var_847_int = var_838_int;
}
EMIT "Stack[-4] = 0";


void func_5766(void)
{
	object var_74_object;
	@CreateDiaryEntry(var_74_object, 178, 1, 515437);
	bool var_78_bool; object var_79_object;
	var_74_object = var_79_object;
	func_5792(var_78_bool, var_79_object, 175);
}
EMIT "Stack[-1] = 0";


void func_5258(void)
{
	@SetVariable("d4q01_subquest", 2);
	object var_57_object;
	func_5820(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	float var_68_float;
	func_5058(var_68_float);
	var_54_object->AddMark("d4q01OspinaGotoLara", "pt_map_lara", 1, 511504, var_68_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2702(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_529_object, object var_530_object)
{
	var_0_object = var_530_object;
	var_1_object = var_529_object;
	var_3_string = false;
	if(1 != 0) {
		func_2798(var_530_object, "Neutral");
		var_0_object->SetMessage(511065); //@t
		var_0_object->ClearReplies(); //@t
		bool var_545_bool = false;
		bool var_546_bool;
		func_5497(var_1_object);
		if(var_546_bool != 0) {
			bool var_552_bool;
			func_5485(var_1_object);
			if(var_552_bool != 0)
				var_545_bool = true;
		}
		if(var_545_bool != 0)
			var_0_object->AddReply(511066, 12248, 12247); //@t
		bool var_561_bool = false;
		bool var_562_bool;
		func_5521(var_1_object);
		if(var_562_bool != 0) {
			bool var_568_bool;
			func_5509(var_1_object);
			if(var_568_bool != 0)
				var_561_bool = true;
		}
		if(var_561_bool != 0)
			var_0_object->AddReply(511079, 12268, 12263); //@t
		var_0_object->AddReply(511505, -1, 12707); //@t
		var_0_object->AddReply(536130, -1, 37889); //@t
		goto Label_2768;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa92";
	}
Label_2768:
	bool var_583_bool;
	func_5110(var_583_bool);
	if(var_583_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2797;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2797:
		return 0;

	}
	
}


void func_5779(object var_87_object)
{
	object var_89_object;
	@GetDiaryRoot(var_89_object);
	if(!var_89_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_87_object = false;
	}
	var_89_object = var_87_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5278(void)
{
	@SetVariable("ood4Ospina1", 1);
}


void func_5792(bool var_78_bool, object var_79_object, int var_80_int)
{
	object var_87_object;
	func_5779(var_87_object);
	object var_84_object;
	var_87_object = var_84_object;
	object var_85_object;
	var_84_object->Find(var_80_int, var_85_object);
	if(!var_85_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_80_int);
		var_78_bool = false;
	}
	var_85_object->AddChild(var_79_object);
	@SendWorldWndMessage(7);
	int var_86_int;
	var_79_object->GetCategory(var_86_int);
	@SetDiarySection(var_86_int);
	var_78_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5284(void)
{
	@SetVariable("d4q01_subquest", 1000);
}


// @pe
void func_1193(object var_2_object, string var_626_string)
{
	bool var_627_bool;
	func_5110(var_627_bool);
	if(!var_627_bool) //@nz
		return 0;
	if(var_626_string == var_2_object)
		return 0;
	string var_630_string; bool var_631_bool;
	var_626_string = var_630_string;
	if(var_626_string == "")
		var_631_bool = false;
	else
		var_631_bool = true;
	func_4953(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	
}


// @pe
void func_5290(void)
{
	@SetVariable("ood4Ospina2", 1);
}


// @pe
void func_5296(void)
{
	@SetVariable("ood6Ospina1", 1);
}


// @pe
void func_5302(void)
{
	@SetVariable("ood6Ospina2", 1);
}


void func_4791(void)
{
	bool var_273_bool;
	@CameraSwitchToNormal();
	bool var_274_bool;
	func_5110(var_274_bool);
	if(var_274_bool != 0) {
	} else {
		@HasAnimationTrack(var_273_bool, "head");
		if(var_273_bool == 0) goto Label_4807;
		@UnlookAsync("head");
	}
Label_4807:
	
}


void func_5308(void)
{
	@SetVariable("d8q01MladVladIsBad", 1);
	object var_59_object;
	func_5820(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	float var_70_float;
	func_5058(var_70_float);
	var_56_object->AddMark("d8q01OspinaGotoMladVlad", "pt_map_mladvlad", 1, 515307, var_70_float);
	func_5766();
}
EMIT "Stack[-1] = 0";


void func_5820(object var_59_object)
{
	object var_62_object; object var_63_object;
	@GetMainOutdoorScene(var_62_object);
	if(var_62_object == null) {
		@Trace("Can't find main outdoor scene");
		var_63_object = null;
		var_63_object = var_59_object;
	}
	var_62_object->GetMap(var_63_object);
	var_63_object = var_59_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1726(object var_0_object, int var_390_int, object var_391_object)
{
	var_0_object = var_391_object;
	bool var_401_bool; object var_402_object;
	object var_403_object;
	func_4981(var_403_object);
	var_403_object = var_402_object;
	func_4808(var_401_bool, var_402_object);
	bool var_404_bool; object var_405_object;
	var_391_object = var_405_object;
	func_4723(var_404_bool, var_405_object, 70.0);
	if(!var_404_bool) { //@nz
		var_390_int = -2;
		return 8;
	}
	object var_397_object;
	@CreateDialog(var_397_object);
	int var_408_int;
	func_5104(var_408_int);
	var_397_object->SetNPCName(var_408_int);
	int var_409_int;
	func_5102(var_409_int);
	var_397_object->SetNPCDescription(var_409_int);
	string var_410_string;
	func_5106(var_410_string);
	var_397_object->SetPhoto(var_410_string);
	string var_411_string;
	func_5108(var_411_string);
	var_397_object->SetPhoto2(var_411_string);
	int var_412_int;
	func_5870(var_412_int);
	var_397_object->SetPlayerName(var_412_int);
	bool var_398_bool;
	@IsOverrideActive(var_398_bool);
	if(var_398_bool != 0) {
		var_390_int = -2;
		return 8;
	}
	@DoDialog(var_397_object);
	object var_414_object; object var_415_object;
	var_391_object = var_414_object;
	var_397_object = var_415_object;
	TaskCall(8);
	func_1807(var_416_object, var_417_object, var_418_string, var_419_bool, var_414_object, var_415_object);
	TaskReturn();
	bool var_400_bool;
	var_397_object->IsDialogEnd(var_400_bool);
	
	for(;;) {
		var_501_bool = !var_400_bool; //@nz
		if(var_501_bool == 0) goto Label_1796;
		@sync();
		var_397_object->IsDialogEnd(var_400_bool);
	}
	
Label_1796:
	object var_502_object;
	var_391_object = var_502_object;
	func_4791();
	@StopDialog(var_397_object);
	var_397_object->GetReturnValue(-1);
	int var_399_int = var_390_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3268(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_722_object, object var_723_object)
{
	var_0_object = var_723_object;
	var_1_object = var_722_object;
	var_3_string = false;
	if(1 != 0) {
		func_3351(var_723_object, "Neutral");
		var_0_object->SetMessage(512374); //@t
		var_0_object->ClearReplies(); //@t
		bool var_738_bool = false;
		bool var_739_bool;
		func_5569(var_1_object);
		if(!var_739_bool) { //@nz
			bool var_746_bool;
			func_5593(var_1_object);
			if(var_746_bool != 0)
				var_738_bool = true;
		}
		if(var_738_bool != 0)
			var_0_object->AddReply(513641, 14898, 14897); //@t
		bool var_755_bool;
		func_5581(var_1_object);
		if(var_755_bool != 0)
			var_0_object->AddReply(512375, 13536, 13535); //@t
		var_0_object->AddReply(513658, -1, 14916); //@t
		goto Label_3321;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcc8";
	}
Label_3321:
	bool var_767_bool;
	func_5110(var_767_bool);
	if(var_767_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3350;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3350:
		return 0;

	}
	
}


void func_4808(bool var_73_bool, object var_74_object)
{
	int var_80_int; int var_81_int;
	@GetVariable("voice_common", var_80_int);
	if(var_80_int != 0) {
		bool var_84_bool; object var_85_object;
		var_74_object = var_85_object;
		func_4866(var_84_bool, var_85_object);
		if(!var_84_bool) { //@nz
			bool var_115_bool; object var_116_object;
			var_74_object = var_116_object;
			func_4903(var_115_bool, var_116_object);
			if(!var_115_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@irand(var_81_int, 2);
		if(var_81_int != 0)
			@SetVariable("voice_common", ((var_80_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_160_bool; object var_161_object;
		var_74_object = var_161_object;
		func_4903(var_160_bool, var_161_object);
		if(!var_160_bool) { //@nz
			bool var_163_bool; object var_164_object;
			var_74_object = var_164_object;
			func_4866(var_163_bool, var_164_object);
			if(!var_163_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4864;
	
Label_4864:
	var_73_bool = true;
	
}


// @pe
void func_205(object var_2_object, string var_332_string)
{
	bool var_333_bool;
	func_5110(var_333_bool);
	if(!var_333_bool) //@nz
		return 0;
	if(var_332_string == var_2_object)
		return 0;
	string var_336_string; bool var_337_bool;
	var_332_string = var_336_string;
	if(var_332_string == "")
		var_337_bool = false;
	else
		var_337_bool = true;
	func_4953(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	
}


void func_5837(object var_98_object, string var_99_string, float var_100_float)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_106_cvector;
	cvector var_107_cvector;
	bool var_109_bool;
	var_108_object->GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	if(!var_109_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_99_string) + " doesnt exist");
	var_108_object->GetMap(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	var_98_object->SetMapParams(var_119_float, var_120_float, var_100_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4304(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_862_object, object var_863_object)
{
	var_0_object = var_863_object;
	var_1_object = var_862_object;
	var_3_string = false;
	if(1 != 0) {
		func_4362(var_863_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_4332;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10d4";
	}
Label_4332:
	bool var_884_bool;
	func_5110(var_884_bool);
	if(var_884_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4361;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4361:
		return 0;

	}
	
}


// @pe
void func_5331(void)
{
	@SetVariable("ood8Ospina1", 1);
}


// @pe
void func_5337(void)
{
	@SetVariable("ood8Ospina2", 1);
}


// @pe
void func_5343(object var_59_object)
{
	func_5727();
	@Trace("ospina blood is given");
	object var_85_object;
	var_59_object = var_85_object;
	func_5033(var_85_object, "d6q01_ospina_blood", 1);
}


void func_742(object var_0_object, int var_779_int, object var_780_object)
{
	var_0_object = var_780_object;
	bool var_790_bool; object var_791_object;
	object var_792_object;
	func_4981(var_792_object);
	var_792_object = var_791_object;
	func_4808(var_790_bool, var_791_object);
	bool var_793_bool; object var_794_object;
	var_780_object = var_794_object;
	func_4723(var_793_bool, var_794_object, 70.0);
	if(!var_793_bool) { //@nz
		var_779_int = -2;
		return 8;
	}
	object var_786_object;
	@CreateDialog(var_786_object);
	int var_797_int;
	func_5104(var_797_int);
	var_786_object->SetNPCName(var_797_int);
	int var_798_int;
	func_5102(var_798_int);
	var_786_object->SetNPCDescription(var_798_int);
	string var_799_string;
	func_5106(var_799_string);
	var_786_object->SetPhoto(var_799_string);
	string var_800_string;
	func_5108(var_800_string);
	var_786_object->SetPhoto2(var_800_string);
	int var_801_int;
	func_5870(var_801_int);
	var_786_object->SetPlayerName(var_801_int);
	bool var_787_bool;
	@IsOverrideActive(var_787_bool);
	if(var_787_bool != 0) {
		var_779_int = -2;
		return 8;
	}
	@DoDialog(var_786_object);
	object var_803_object; object var_804_object;
	var_780_object = var_803_object;
	var_786_object = var_804_object;
	TaskCall(4);
	func_823(var_805_object, var_806_object, var_807_string, var_808_bool, var_803_object, var_804_object);
	TaskReturn();
	bool var_789_bool;
	var_786_object->IsDialogEnd(var_789_bool);
	
	for(;;) {
		var_836_bool = !var_789_bool; //@nz
		if(var_836_bool == 0) goto Label_812;
		@sync();
		var_786_object->IsDialogEnd(var_789_bool);
	}
	
Label_812:
	object var_837_object;
	var_780_object = var_837_object;
	func_4791();
	@StopDialog(var_786_object);
	var_786_object->GetReturnValue(-1);
	int var_788_int = var_779_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5357(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_5870(int var_219_int)
{
	int var_221_int;
	@GetVariable("branch", var_221_int);
	if(var_221_int == 0) {
		var_219_int = 1;
		return 2;
	EMIT "GOTO 0x16fd";
	}
	if(var_221_int == 1) {
		var_219_int = 2;
		return 2;
	}
	var_219_int = 3;
}


// @pe
void func_2798(object var_2_object, string var_536_string)
{
	bool var_537_bool;
	func_5110(var_537_bool);
	if(!var_537_bool) //@nz
		return 0;
	if(var_536_string == var_2_object)
		return 0;
	string var_540_string; bool var_541_bool;
	var_536_string = var_540_string;
	if(var_536_string == "")
		var_541_bool = false;
	else
		var_541_bool = true;
	func_4953(var_540_string, var_541_bool);
	var_2_object = var_536_string;
	
}


// @pe
void func_5363(void)
{
	@SetVariable("d6q01OspinaVolonteer", 1);
	func_5740();
	bool var_154_bool;
	func_5046(var_154_bool, "quest_d6_01", "completed");
}


// @pe
void func_5887(object var_59_object)
{
	var_60_bool = GlobalVars[1];
	if(!var_60_bool) { //@nz
		int var_62_int; object var_63_object;
		var_59_object = var_63_object;
		TaskCall(13);
		func_3923(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_278_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_279_bool;
	func_5072(var_279_bool, 1);
	if(var_279_bool != 0) {
		int var_282_int; object var_283_object;
		var_59_object = var_283_object;
		TaskCall(1);
		func_13(var_284_object, var_282_int, var_283_object);
		TaskReturn();
		return 0;
	}
	bool var_388_bool;
	func_5072(var_388_bool, 3);
	if(var_388_bool != 0) {
		int var_390_int; object var_391_object;
		var_59_object = var_391_object;
		TaskCall(7);
		func_1726(var_392_object, var_390_int, var_391_object);
		TaskReturn();
		return 0;
	}
	bool var_503_bool;
	func_5072(var_503_bool, 4);
	if(var_503_bool != 0) {
		int var_505_int; object var_506_object;
		var_59_object = var_506_object;
		TaskCall(9);
		func_2621(var_507_object, var_505_int, var_506_object);
		TaskReturn();
		return 0;
	}
	bool var_593_bool;
	func_5072(var_593_bool, 6);
	if(var_593_bool != 0) {
		int var_595_int; object var_596_object;
		var_59_object = var_596_object;
		TaskCall(5);
		func_1001(var_597_object, var_595_int, var_596_object);
		TaskReturn();
		return 0;
	}
	bool var_696_bool;
	func_5072(var_696_bool, 8);
	if(var_696_bool != 0) {
		int var_698_int; object var_699_object;
		var_59_object = var_699_object;
		TaskCall(11);
		func_3187(var_700_object, var_698_int, var_699_object);
		TaskReturn();
		return 0;
	}
	bool var_777_bool;
	func_5072(var_777_bool, 12);
	if(var_777_bool != 0) {
		int var_779_int; object var_780_object;
		var_59_object = var_780_object;
		TaskCall(3);
		func_742(var_781_object, var_779_int, var_780_object);
		TaskReturn();
		return 0;
	}
	int var_838_int; object var_839_object;
	var_59_object = var_839_object;
	TaskCall(15);
	func_4223(var_840_object, var_838_int, var_839_object);
	TaskReturn();
}


// @pe
void func_5377(bool var_314_bool)
{
	int var_316_int;
	func_4997(var_316_int, "d1q03");
	if(var_316_int == 1)
		var_314_bool = true;
	var_314_bool = false;
}


void func_4866(bool var_84_bool, object var_85_object)
{
	string var_91_string; bool var_93_bool; int var_94_int; string var_95_string;
	var_91_string = "c";
	int var_92_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_85_object->HasProperty((var_91_string + (var_92_int + 1)), var_93_bool);
			if(!var_93_bool) { //@nz
			} else {
				var_92_int += 1;
			}
		}
		if(!var_92_int) { //@nz
			var_84_bool = false;
			return 10;
		}
		var_94_int = 0;
		if(var_92_int > 1)
			@irand(var_94_int, var_92_int);
		var_85_object->GetProperty((var_91_string + (var_94_int + 1)), var_95_string);
		bool var_107_bool; string var_108_string;
		var_95_string = var_108_string;
		func_4959(var_107_bool, var_108_string);
		var_107_bool = var_84_bool;
		return 10;

	}
}


// @pe
void func_4362(object var_2_object, string var_869_string)
{
	bool var_870_bool;
	func_5110(var_870_bool);
	if(!var_870_bool) //@nz
		return 0;
	if(var_869_string == var_2_object)
		return 0;
	string var_873_string; bool var_874_bool;
	var_869_string = var_873_string;
	if(var_869_string == "")
		var_874_bool = false;
	else
		var_874_bool = true;
	func_4953(var_873_string, var_874_bool);
	var_2_object = var_869_string;
	
}


// @pe
void func_5389(bool var_358_bool)
{
	int var_360_int;
	func_4997(var_360_int, "ood1Ospina1");
	if(var_360_int == 0) {
		var_358_bool = true;
		return 0;
	}
	var_358_bool = false;
}


// @pe
void func_1807(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_414_object, object var_415_object)
{
	var_0_object = var_415_object;
	var_1_object = var_414_object;
	var_3_string = false;
	if(1 != 0) {
		func_1942(var_415_object, "Neutral");
		var_0_object->SetMessage(508869); //@t
		var_0_object->ClearReplies(); //@t
		bool var_430_bool = false;
		bool var_431_bool;
		func_5425(var_1_object);
		if(var_431_bool != 0) {
			bool var_437_bool;
			func_5461(var_1_object);
			if(var_437_bool != 0)
				var_430_bool = true;
		}
		if(var_430_bool != 0)
			var_0_object->AddReply(508889, 9751, 9750); //@t
		bool var_446_bool = false;
		bool var_447_bool = false;
		bool var_448_bool;
		func_5449(var_1_object);
		if(var_448_bool != 0) {
			bool var_454_bool;
			func_5425(var_1_object);
			if(!var_454_bool) //@nz
				var_447_bool = true;
		}
		if(var_447_bool != 0) {
			bool var_457_bool;
			func_5461(var_1_object);
			if(var_457_bool != 0)
				var_446_bool = true;
		}
		if(var_446_bool != 0)
			var_0_object->AddReply(511136, 12326, 12325); //@t
		bool var_462_bool;
		func_5413(var_1_object);
		if(var_462_bool != 0)
			var_0_object->AddReply(508888, 9729, 9749); //@t
		bool var_471_bool = false;
		bool var_472_bool;
		func_5437(var_1_object);
		if(var_472_bool != 0) {
			bool var_478_bool;
			func_5473(var_1_object);
			if(var_478_bool != 0)
				var_471_bool = true;
		}
		if(var_471_bool != 0)
			var_0_object->AddReply(508908, 9772, 9771); //@t
		var_0_object->AddReply(511134, -1, 12323); //@t
		var_0_object->AddReply(536099, -1, 37851); //@t
		goto Label_1912;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x713";
	}
Label_1912:
	bool var_493_bool;
	func_5110(var_493_bool);
	if(var_493_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1941;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1941:
		return 0;

	}
	
}


// @pe
void func_3351(object var_2_object, string var_729_string)
{
	bool var_730_bool;
	func_5110(var_730_bool);
	if(!var_730_bool) //@nz
		return 0;
	if(var_729_string == var_2_object)
		return 0;
	string var_733_string; bool var_734_bool;
	var_729_string = var_733_string;
	if(var_729_string == "")
		var_734_bool = false;
	else
		var_734_bool = true;
	func_4953(var_733_string, var_734_bool);
	var_2_object = var_729_string;
	
}


// @pe
void func_5401(bool var_322_bool)
{
	int var_324_int;
	func_4997(var_324_int, "ood1Ospina2");
	if(var_324_int == 0) {
		var_322_bool = true;
		return 0;
	}
	var_322_bool = false;
}


// @pe
void func_5413(bool var_462_bool)
{
	int var_464_int;
	func_4997(var_464_int, "ood3Ospina1");
	if(var_464_int == 0) {
		var_462_bool = true;
		return 0;
	}
	var_462_bool = false;
}


void func_4903(bool var_115_bool, object var_116_object)
{
	bool var_124_bool; int var_125_int; string var_126_string;
	int var_128_int;
	func_5063(var_128_int);
	string var_122_string = ("d" + var_128_int) + "m";
	int var_123_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_116_object->HasProperty((var_122_string + (var_123_int + 1)), var_124_bool);
			if(!var_124_bool) { //@nz
			} else {
				var_123_int += 1;
			}
		}
		if(!var_123_int) { //@nz
			var_115_bool = false;
			return 10;
		}
		var_125_int = 0;
		if(var_123_int > 1)
			@irand(var_125_int, var_123_int);
		var_116_object->GetProperty((var_122_string + (var_125_int + 1)), var_126_string);
		bool var_147_bool; string var_148_string;
		var_126_string = var_148_string;
		func_4959(var_147_bool, var_148_string);
		var_147_bool = var_115_bool;
		return 10;

	}
}


// @pe
void func_5425(bool var_431_bool)
{
	int var_433_int;
	func_4997(var_433_int, "ood3Ospina2");
	if(var_433_int == 0) {
		var_431_bool = true;
		return 0;
	}
	var_431_bool = false;
}


// @pe
void func_823(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_803_object, object var_804_object)
{
	var_0_object = var_804_object;
	var_1_object = var_803_object;
	var_3_string = false;
	if(1 != 0) {
		func_886(var_804_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_856;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x33b";
	}
Label_856:
	bool var_828_bool;
	func_5110(var_828_bool);
	if(var_828_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_885;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_885:
		return 0;

	}
	
}


// @pe
void func_5437(bool var_472_bool)
{
	int var_474_int;
	func_4997(var_474_int, "ood3Ospina3");
	if(var_474_int == 0) {
		var_472_bool = true;
		return 0;
	}
	var_472_bool = false;
}


// @pe
void func_5449(bool var_448_bool)
{
	int var_450_int;
	func_4997(var_450_int, "ood3Ospina4");
	if(var_450_int == 0) {
		var_448_bool = true;
		return 0;
	}
	var_448_bool = false;
}


void func_4433(object var_0_object)
{
	bool var_42_bool;
	func_4718(var_42_bool);
	if(!var_42_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4561();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4615();
	}
}
EMIT "Return(); Pop(0)";


void func_4946(string var_49_string)
{
	float var_52_float; float var_53_float;
	@lshGetAnimTimes(var_49_string, var_52_float, var_53_float);
	@lshPlayAnimation(var_52_float, var_53_float, false);
}


void func_3923(object var_0_object, int var_62_int, object var_63_object)
{
	var_0_object = var_63_object;
	bool var_73_bool; object var_74_object;
	object var_75_object;
	func_4981(var_75_object);
	var_75_object = var_74_object;
	func_4808(var_73_bool, var_74_object);
	bool var_168_bool; object var_169_object;
	var_63_object = var_169_object;
	func_4723(var_168_bool, var_169_object, 70.0);
	if(!var_168_bool) { //@nz
		var_62_int = -2;
		return 8;
	}
	object var_69_object;
	@CreateDialog(var_69_object);
	int var_215_int;
	func_5104(var_215_int);
	var_69_object->SetNPCName(var_215_int);
	int var_216_int;
	func_5102(var_216_int);
	var_69_object->SetNPCDescription(var_216_int);
	string var_217_string;
	func_5106(var_217_string);
	var_69_object->SetPhoto(var_217_string);
	string var_218_string;
	func_5108(var_218_string);
	var_69_object->SetPhoto2(var_218_string);
	int var_219_int;
	func_5870(var_219_int);
	var_69_object->SetPlayerName(var_219_int);
	bool var_70_bool;
	@IsOverrideActive(var_70_bool);
	if(var_70_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	@DoDialog(var_69_object);
	object var_228_object; object var_229_object;
	var_63_object = var_228_object;
	var_69_object = var_229_object;
	TaskCall(14);
	func_4004(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	bool var_72_bool;
	var_69_object->IsDialogEnd(var_72_bool);
	
	for(;;) {
		var_270_bool = !var_72_bool; //@nz
		if(var_270_bool == 0) goto Label_3993;
		@sync();
		var_69_object->IsDialogEnd(var_72_bool);
	}
	
Label_3993:
	object var_271_object;
	var_63_object = var_271_object;
	func_4791();
	@StopDialog(var_69_object);
	var_69_object->GetReturnValue(-1);
	int var_71_int = var_62_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5461(bool var_437_bool)
{
	int var_439_int;
	func_4997(var_439_int, "d3q01");
	if(var_439_int == 2)
		var_437_bool = true;
	var_437_bool = false;
}


void func_4953(string var_239_string, bool var_240_bool)
{
	float var_245_float; float var_246_float;
	@lshGetAnimTimes(var_239_string, var_245_float, var_246_float);
	@lshPlayAnimation(var_245_float, var_246_float, var_240_bool);
}


void func_4959(bool var_107_bool, string var_108_string)
{
	bool var_110_bool;
	bool var_111_bool;
	func_5110(var_111_bool);
	if(var_111_bool != 0) {
		@lshHasSpeech(var_110_bool, var_108_string);
		if(var_110_bool != 0) {
			@lshPlaySpeech(var_108_string);
			var_107_bool = true;
		}
	}
	var_107_bool = false;
}


// @pe
void func_5473(bool var_478_bool)
{
	int var_480_int;
	func_4997(var_480_int, "d3q01");
	if(var_480_int == 6)
		var_478_bool = true;
	var_478_bool = false;
}


void func_4453(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_4709(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5485(bool var_552_bool)
{
	int var_554_int;
	func_4997(var_554_int, "d4q01_subquest");
	if(var_554_int == 1)
		var_552_bool = true;
	var_552_bool = false;
}


void func_4974(void)
{
	bool var_44_bool;
	func_5110(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


void func_4468(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


void func_4981(object var_75_object)
{
	object var_77_object;
	@self(var_77_object);
	var_77_object = var_75_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_886(object var_2_object, string var_810_string)
{
	bool var_811_bool;
	func_5110(var_811_bool);
	if(!var_811_bool) //@nz
		return 0;
	if(var_810_string == var_2_object)
		return 0;
	string var_814_string; bool var_815_bool;
	var_810_string = var_814_string;
	if(var_810_string == "")
		var_815_bool = false;
	else
		var_815_bool = true;
	func_4953(var_814_string, var_815_bool);
	var_2_object = var_810_string;
	
}


// @pe
void func_5497(bool var_546_bool)
{
	int var_548_int;
	func_4997(var_548_int, "ood4Ospina1");
	if(var_548_int == 0) {
		var_546_bool = true;
		return 0;
	}
	var_546_bool = false;
}


void func_4473(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_4691(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


void func_4987(cvector var_195_cvector, cvector var_196_cvector)
{
	float var_199_float = sqrt(var_196_cvector | var_196_cvector);
	if(var_199_float < 0.000001)
		var_195_cvector = [0.0, 0.0, 0.0];
	var_195_cvector = var_196_cvector / var_199_float;
}


// @pe
void func_5509(bool var_568_bool)
{
	int var_570_int;
	func_4997(var_570_int, "d4q01_subquest");
	if(var_570_int == 3)
		var_568_bool = true;
	var_568_bool = false;
}


void func_4997(int var_316_int, string var_317_string)
{
	int var_319_int;
	@GetVariable(var_317_string, var_319_int);
	var_319_int = var_316_int;
}


void func_5002(int var_101_int, int var_102_int)
{
	object var_104_object;
	@CreateIntVector(var_104_object);
	var_104_object->add(var_101_int);
	var_104_object->add(var_102_int);
	@SendWorldWndMessage(3, var_104_object);
}
EMIT "Stack[-1] = 0";


void func_4495(void)
{
	float var_56_float;
	@rand(var_56_float, 8, 16);
	@SetTimer(10, var_56_float);
}


// @pe
void func_5521(bool var_562_bool)
{
	int var_564_int;
	func_4997(var_564_int, "ood4Ospina2");
	if(var_564_int == 0) {
		var_562_bool = true;
		return 0;
	}
	var_562_bool = false;
}


// @pe
void func_1942(object var_2_object, string var_421_string)
{
	bool var_422_bool;
	func_5110(var_422_bool);
	if(!var_422_bool) //@nz
		return 0;
	if(var_421_string == var_2_object)
		return 0;
	string var_425_string; bool var_426_bool;
	var_421_string = var_425_string;
	if(var_421_string == "")
		var_426_bool = false;
	else
		var_426_bool = true;
	func_4953(var_425_string, var_426_bool);
	var_2_object = var_421_string;
	
}


void func_5014(object var_90_object, object var_91_object, int var_92_int)
{
	int var_96_int;
	var_91_object->GetItemID(var_96_int);
	int var_97_int;
	@GetInvItemProperty(var_97_int, var_96_int, "Category");
	bool var_98_bool;
	var_90_object->AddItem(var_98_bool, var_91_object, var_97_int, var_92_int);
	if(!var_98_bool) { //@nz
		var_90_object->DropItems(var_91_object, var_92_int);
	} else {
		int var_101_int; int var_102_int;
		var_96_int = var_101_int;
		var_92_int = var_102_int;
		func_5002(var_101_int, var_102_int);
	}
	
}


void func_4504(void)
{
	@KillTimer(10);
}


// @pe
void func_5533(bool var_642_bool)
{
	int var_644_int;
	func_4997(var_644_int, "d6q01");
	if(var_644_int == 1)
		var_642_bool = true;
	var_642_bool = false;
}


// @pe
void func_4004(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_228_object, object var_229_object)
{
	var_0_object = var_229_object;
	var_1_object = var_228_object;
	var_3_string = false;
	if(1 != 0) {
		func_4067(var_229_object, "Neutral");
		var_0_object->SetMessage(520784); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520785, 22000, 21999); //@t
		var_0_object->AddReply(520792, 22008, 22007); //@t
		var_0_object->AddReply(520796, 22014, 22013); //@t
		goto Label_4037;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfa8";
	}
Label_4037:
	bool var_257_bool;
	func_5110(var_257_bool);
	if(var_257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4946(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4066;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4066:
		return 0;

	}
	
}


// @pe
void func_5545(bool var_636_bool)
{
	int var_638_int;
	func_4997(var_638_int, "ood6Ospina1");
	if(var_638_int == 0) {
		var_636_bool = true;
		return 0;
	}
	var_636_bool = false;
}


void func_5033(object var_85_object, string var_86_string, int var_87_int)
{
	object var_89_object;
	@CreateInvItem(var_89_object);
	var_89_object->SetItemName(var_86_string);
	object var_90_object; object var_91_object; int var_92_int;
	var_85_object = var_90_object;
	var_89_object = var_91_object;
	var_87_int = var_92_int;
	func_5014(var_90_object, var_91_object, var_92_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5557(bool var_654_bool)
{
	int var_656_int;
	func_4997(var_656_int, "ood6Ospina2");
	if(var_656_int == 0) {
		var_654_bool = true;
		return 0;
	}
	var_654_bool = false;
}


void func_5046(bool var_182_bool, string var_183_string, string var_184_string)
{
	object var_186_object;
	@FindActor(var_186_object, var_183_string);
	if(var_186_object == null)
		var_182_bool = false;
	@Trigger(var_186_object, var_184_string);
	var_182_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5569(bool var_739_bool)
{
	int var_741_int;
	func_4997(var_741_int, "d8q01");
	if(var_741_int == 0) {
		var_739_bool = true;
		return 0;
	}
	var_739_bool = false;
}


void func_5058(float var_70_float)
{
	float var_72_float;
	@GetGameTime(var_72_float);
	var_72_float = var_70_float;
}


void func_5063(int var_128_int)
{
	float var_130_float;
	@GetGameTime(var_130_float);
	var_128_int = 1 + (var_130_float / 24);
}


// @pe
void func_5581(bool var_755_bool)
{
	int var_757_int;
	func_4997(var_757_int, "ood8Ospina1");
	if(var_757_int == 0) {
		var_755_bool = true;
		return 0;
	}
	var_755_bool = false;
}


// @pe
void func_5072(bool var_279_bool, int var_280_int)
{
	int var_281_int;
	func_5063(var_281_int);
	var_279_bool = var_281_int == var_280_int;
}


void func_5078(string var_80_string, int var_81_int)
{
	string var_83_string = "idle";
	if(var_81_int != 0)
		var_83_string += var_81_int;
	var_83_string = var_80_string;
}


// @pe
void func_5593(bool var_746_bool)
{
	int var_748_int;
	func_4997(var_748_int, "ood8Ospina2");
	if(var_748_int == 0) {
		var_746_bool = true;
		return 0;
	}
	var_746_bool = false;
}


void func_5085(int var_74_int)
{
	int var_77_int; bool var_78_bool;
	var_77_int = 0;
	
	for(;;) {
		string var_80_string; int var_81_int;
		var_77_int = var_81_int;
		func_5078(var_80_string, var_81_int);
		@HasAnimation(var_78_bool, "all", var_80_string);
		if(!var_78_bool) //@nz
			break;
		var_77_int += 1;
	}
	var_77_int = var_74_int;
}


// @pe
void func_4067(object var_2_object, string var_235_string)
{
	bool var_236_bool;
	func_5110(var_236_bool);
	if(!var_236_bool) //@nz
		return 0;
	if(var_235_string == var_2_object)
		return 0;
	string var_239_string; bool var_240_bool;
	var_235_string = var_239_string;
	if(var_235_string == "")
		var_240_bool = false;
	else
		var_240_bool = true;
	func_4953(var_239_string, var_240_bool);
	var_2_object = var_235_string;
	
}


// @pe
void func_5605(bool var_660_bool)
{
	int var_662_int;
	func_4997(var_662_int, "microscope_d6q01_ospina_blood");
	if(var_662_int != 0) {
		var_660_bool = true;
		return 0;
	}
	var_660_bool = false;
}


void func_1001(object var_0_object, int var_595_int, object var_596_object)
{
	var_0_object = var_596_object;
	bool var_606_bool; object var_607_object;
	object var_608_object;
	func_4981(var_608_object);
	var_608_object = var_607_object;
	func_4808(var_606_bool, var_607_object);
	bool var_609_bool; object var_610_object;
	var_596_object = var_610_object;
	func_4723(var_609_bool, var_610_object, 70.0);
	if(!var_609_bool) { //@nz
		var_595_int = -2;
		return 8;
	}
	object var_602_object;
	@CreateDialog(var_602_object);
	int var_613_int;
	func_5104(var_613_int);
	var_602_object->SetNPCName(var_613_int);
	int var_614_int;
	func_5102(var_614_int);
	var_602_object->SetNPCDescription(var_614_int);
	string var_615_string;
	func_5106(var_615_string);
	var_602_object->SetPhoto(var_615_string);
	string var_616_string;
	func_5108(var_616_string);
	var_602_object->SetPhoto2(var_616_string);
	int var_617_int;
	func_5870(var_617_int);
	var_602_object->SetPlayerName(var_617_int);
	bool var_603_bool;
	@IsOverrideActive(var_603_bool);
	if(var_603_bool != 0) {
		var_595_int = -2;
		return 8;
	}
	@DoDialog(var_602_object);
	object var_619_object; object var_620_object;
	var_596_object = var_619_object;
	var_602_object = var_620_object;
	TaskCall(6);
	func_1082(var_621_object, var_622_object, var_623_string, var_624_bool, var_619_object, var_620_object);
	TaskReturn();
	bool var_605_bool;
	var_602_object->IsDialogEnd(var_605_bool);
	
	for(;;) {
		var_694_bool = !var_605_bool; //@nz
		if(var_694_bool == 0) goto Label_1071;
		@sync();
		var_602_object->IsDialogEnd(var_605_bool);
	}
	
Label_1071:
	object var_695_object;
	var_596_object = var_695_object;
	func_4791();
	@StopDialog(var_602_object);
	var_602_object->GetReturnValue(-1);
	int var_604_int = var_595_int;
}
EMIT "Stack[-4] = 0";


void func_5102(int var_216_int)
{
	var_216_int = 515549;
}


void func_5104(int var_215_int)
{
	var_215_int = 502874;
}


// @pe
void func_5617(bool var_666_bool)
{
	int var_668_int;
	func_4997(var_668_int, "d6q01");
	if(var_668_int == 1000)
		var_666_bool = true;
	var_666_bool = false;
}


void func_5106(string var_217_string)
{
	var_217_string = "ui/NPC_Ospina.png";
}


void func_5108(string var_218_string)
{
	var_218_string = "ui/NPC_Ospina_b.png";
}


void func_5110(bool var_111_bool)
{
	var_111_bool = true;
}


// @pe
void func_5112(void)
{
	func_5688();
	bool var_72_bool;
	func_5046(var_72_bool, "quest_d1_03", "eva_finish");
}


// @pe
void func_5629(bool var_673_bool)
{
	int var_675_int;
	func_4997(var_675_int, "d6q01");
	if(var_675_int == -1)
		var_673_bool = true;
	var_673_bool = false;
}


