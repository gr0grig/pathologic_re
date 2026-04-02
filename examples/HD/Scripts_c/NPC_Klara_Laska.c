// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_37_cvector == 26020) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3534();
			}
			if(var_37_cvector == 26022) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3540();
				object var_91_object = var_1_object;
				func_3512(var_0_object);
			}
			if(var_37_cvector == 43956) {
				object var_119_object = var_1_object;
				func_3512(var_0_object);
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_3540();
			}
			if(var_36_bool == 25983) {
				bool var_125_bool = false;
				bool var_126_bool;
				func_3678(var_1_object);
				if(var_126_bool != 0) {
					bool var_134_bool;
					func_3690(var_1_object);
					if(!var_134_bool) //@nz
						var_125_bool = true;
				}
				if(var_125_bool != 0) {
					object var_141_object; object var_142_object;
					var_141_object = var_1_object;
					var_142_object = var_0_object;
					func_3528();
					func_193(var_37_cvector, "Autizm");
					var_0_object->SetMessage(524644); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526298, 27579, 27578); //@t
					var_0_object->AddReply(526300, 27581, 27580); //@t
					return 0;
				}
				func_193(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524648); //@t
				var_0_object->ClearReplies(); //@t
				bool var_171_bool = false;
				bool var_172_bool;
				func_3690(var_1_object);
				if(var_172_bool != 0) {
					bool var_174_bool;
					func_3702(var_1_object);
					if(var_174_bool != 0)
						var_171_bool = true;
				}
				if(var_171_bool != 0)
					var_0_object->AddReply(524681, 43988, 26020); //@t
				var_0_object->AddReply(524649, -1, 25988); //@t
				return 0;
			}
			if(var_36_bool == 43988) {
				func_193(var_37_cvector, "Welldie");
				var_0_object->SetMessage(541782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541783, 26021, 43989); //@t
				var_0_object->AddReply(541784, 43991, 43990); //@t
				return 0;
			}
			if(var_36_bool == 43991) {
				func_193(var_37_cvector, "Autizm");
				var_0_object->SetMessage(541785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541786, 43995, 43992); //@t
				var_0_object->AddReply(541787, 43994, 43993); //@t
				return 0;
			}
			if(var_36_bool == 43994) {
				func_193(var_37_cvector, "Autizm");
				var_0_object->SetMessage(541788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541791, 26021, 43997); //@t
				return 0;
			}
			if(var_36_bool == 43995) {
				func_193(var_37_cvector, "Pain");
				var_0_object->SetMessage(541789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541790, 26021, 43996); //@t
				return 0;
			}
			if(var_36_bool == 26021) {
				func_193(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(524682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541792, 44001, 44000); //@t
				var_0_object->AddReply(541794, 44001, 44002); //@t
				return 0;
			}
			if(var_36_bool == 44001) {
				func_193(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(541793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526310, 27593, 27592); //@t
				var_0_object->AddReply(541702, 44004, 43885); //@t
				return 0;
			}
			if(var_36_bool == 44004) {
				func_193(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541796, 27593, 44005); //@t
				return 0;
			}
			if(var_36_bool == 27593) {
				func_193(var_37_cvector, "Pain");
				var_0_object->SetMessage(526311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526312, 27595, 27594); //@t
				var_0_object->AddReply(541751, 43953, 43952); //@t
				return 0;
			}
			if(var_36_bool == 43953) {
				func_193(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541752); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541753, 27595, 43954); //@t
				return 0;
			}
			if(var_36_bool == 27595) {
				func_193(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524683, -1, 26022); //@t
				var_0_object->AddReply(541754, -1, 43956); //@t
				return 0;
			}
			if(var_36_bool == 27581) {
				func_193(var_37_cvector, "Pain");
				var_0_object->SetMessage(526301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526302, 27579, 27582); //@t
				return 0;
			}
			if(var_36_bool == 27579) {
				func_193(var_37_cvector, "Autizm");
				var_0_object->SetMessage(526299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526303, 27585, 27584); //@t
				var_0_object->AddReply(541701, 27585, 43883); //@t
				return 0;
			}
			if(var_36_bool == 27585) {
				func_193(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(526304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524645, 25985, 25984); //@t
				var_0_object->AddReply(526305, 25985, 27586); //@t
				return 0;
			}
			if(var_36_bool == 25985) {
				func_193(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(524646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524647, -1, 25986); //@t
				var_0_object->AddReply(526306, 27589, 27588); //@t
				return 0;
			}
			if(var_36_bool == 27589) {
				func_193(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526308, -1, 27590); //@t
				var_0_object->AddReply(526309, -1, 27591); //@t
				return 0;
			}
			var_3_string = true;
			bool var_321_bool;
			func_3510(var_321_bool);
			if(var_321_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd8";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_37_cvector == 26672) {
				object var_42_object = var_1_object;
				func_3563(var_0_object);
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_3666();
			}
			if(var_37_cvector == 30634) {
				object var_83_object = var_1_object;
				func_3563(var_0_object);
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_3666();
			}
			if(var_37_cvector == 26678) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_3584();
			}
			if(var_36_bool == 26665) {
				func_865(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525297); //@t
				var_0_object->ClearReplies(); //@t
				bool var_113_bool = true;
				bool var_114_bool = false;
				bool var_115_bool;
				func_3738(var_115_bool, var_1_object);
				if(var_115_bool != 0) {
					bool var_132_bool;
					func_3714(var_1_object);
					if(var_132_bool != 0)
						var_114_bool = true;
				}
				if(var_114_bool != 1) {
					bool var_140_bool = false;
					bool var_141_bool;
					func_3726(var_1_object);
					if(var_141_bool != 0) {
						bool var_147_bool;
						func_3738(var_147_bool, var_1_object);
						if(var_147_bool != 0)
							var_140_bool = true;
					}
					if(var_140_bool != 1)
						var_113_bool = false;
				}
				if(var_113_bool != 0)
					var_0_object->AddReply(525298, 26667, 26666); //@t
				bool var_152_bool = false;
				bool var_153_bool = false;
				bool var_154_bool;
				func_3714(var_1_object);
				if(var_154_bool != 0) {
					bool var_156_bool;
					func_3738(var_156_bool, var_1_object);
					if(!var_156_bool) //@nz
						var_153_bool = true;
				}
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_3769(var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(525310, 26679, 26678); //@t
				var_0_object->AddReply(525305, -1, 26673); //@t
				return 0;
			}
			if(var_36_bool == 26679) {
				func_865(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(525311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525312, 42889, 26680); //@t
				var_0_object->AddReply(540831, -1, 42888); //@t
				return 0;
			}
			if(var_36_bool == 42889) {
				func_865(var_37_cvector, "Pain");
				var_0_object->SetMessage(540832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540833, -1, 42890); //@t
				var_0_object->AddReply(540834, -1, 42891); //@t
				return 0;
			}
			if(var_36_bool == 26667) {
				func_865(var_37_cvector, "Autizm");
				var_0_object->SetMessage(525299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529180, 30631, 30630); //@t
				var_0_object->AddReply(540812, 30633, 42864); //@t
				return 0;
			}
			if(var_36_bool == 30631) {
				func_865(var_37_cvector, "Autizm");
				var_0_object->SetMessage(529181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529182, 30633, 30632); //@t
				return 0;
			}
			if(var_36_bool == 30633) {
				func_865(var_37_cvector, "Welldie");
				var_0_object->SetMessage(529183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525300, 26669, 26668); //@t
				var_0_object->AddReply(540813, 42867, 42866); //@t
				return 0;
			}
			if(var_36_bool == 42867) {
				func_865(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(540814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540819, 26669, 42872); //@t
				var_0_object->AddReply(540820, 42875, 42874); //@t
				return 0;
			}
			if(var_36_bool == 42875) {
				func_865(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540822, 42868, 42876); //@t
				return 0;
			}
			if(var_36_bool == 26669) {
				func_865(var_37_cvector, "Welldie");
				var_0_object->SetMessage(525301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525302, 42868, 26670); //@t
				var_0_object->AddReply(540826, 42882, 42881); //@t
				return 0;
			}
			if(var_36_bool == 42882) {
				func_865(var_37_cvector, "Welldie");
				var_0_object->SetMessage(540827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540828, 42879, 42883); //@t
				return 0;
			}
			if(var_36_bool == 42868) {
				func_865(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(540815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540816, 42870, 42869); //@t
				var_0_object->AddReply(540823, 42879, 42878); //@t
				return 0;
			}
			if(var_36_bool == 42879) {
				func_865(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540825, 42870, 42880); //@t
				return 0;
			}
			if(var_36_bool == 42870) {
				func_865(var_37_cvector, "Pain");
				var_0_object->SetMessage(540817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540818, 26671, 42871); //@t
				return 0;
			}
			if(var_36_bool == 26671) {
				func_865(var_37_cvector, "Pain");
				var_0_object->SetMessage(525303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525304, -1, 26672); //@t
				var_0_object->AddReply(540829, 42887, 42886); //@t
				return 0;
			}
			if(var_36_bool == 42887) {
				func_865(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529184, -1, 30634); //@t
				return 0;
			}
			var_3_string = true;
			bool var_293_bool;
			func_3510(var_293_bool);
			if(var_293_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x378";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_36_bool == 26854) {
				func_1455(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525499, -1, 26855); //@t
				var_0_object->AddReply(526256, -1, 27530); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3510(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5c6";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_37_cvector == 27231) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3590();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3672();
			}
			if(var_37_cvector == 44834) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_3590();
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3672();
			}
			if(var_36_bool == 27228) {
				bool var_111_bool;
				func_3781(var_1_object);
				if(var_111_bool != 0) {
					object var_119_object; object var_120_object;
					var_119_object = var_1_object;
					var_120_object = var_0_object;
					func_3616();
					object var_123_object; object var_124_object;
					var_123_object = var_1_object;
					var_124_object = var_0_object;
					func_3622();
					func_1693(var_37_cvector, "Autizm");
					var_0_object->SetMessage(525944); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(542433, 44818, 44817); //@t
					var_0_object->AddReply(542438, 44824, 44822); //@t
					return 0;
				}
				func_1693(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525949, -1, 27233); //@t
				var_0_object->AddReply(529092, -1, 30537); //@t
				return 0;
			}
			if(var_36_bool == 44824) {
				func_1693(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(542439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542440, 44818, 44825); //@t
				return 0;
			}
			if(var_36_bool == 44818) {
				func_1693(var_37_cvector, "Pain");
				var_0_object->SetMessage(542434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542435, 44820, 44819); //@t
				var_0_object->AddReply(542437, 44820, 44821); //@t
				return 0;
			}
			if(var_36_bool == 44820) {
				func_1693(var_37_cvector, "Pain");
				var_0_object->SetMessage(542436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529090, 30536, 30535); //@t
				var_0_object->AddReply(542441, 30536, 44826); //@t
				return 0;
			}
			if(var_36_bool == 30536) {
				func_1693(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525945, 27230, 27229); //@t
				var_0_object->AddReply(542442, 44831, 44830); //@t
				return 0;
			}
			if(var_36_bool == 44831) {
				func_1693(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(542443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542444, 27230, 44832); //@t
				return 0;
			}
			if(var_36_bool == 27230) {
				func_1693(var_37_cvector, "Welldie");
				var_0_object->SetMessage(525946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529093, 30539, 30538); //@t
				return 0;
			}
			if(var_36_bool == 30539) {
				func_1693(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(529094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525947, -1, 27231); //@t
				var_0_object->AddReply(542445, -1, 44834); //@t
				return 0;
			}
			var_3_string = true;
			bool var_220_bool;
			func_3510(var_220_bool);
			if(var_220_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6b4";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_37_cvector == 30213) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3640();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3672();
			}
			if(var_37_cvector == 44908) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_3640();
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3672();
			}
			if(var_36_bool == 30215) {
				bool var_111_bool;
				func_3793(var_1_object);
				if(var_111_bool != 0) {
					object var_119_object; object var_120_object;
					var_119_object = var_1_object;
					var_120_object = var_0_object;
					func_3628();
					object var_123_object; object var_124_object;
					var_123_object = var_1_object;
					var_124_object = var_0_object;
					func_3634();
					func_2138(var_37_cvector, "Disturbance");
					var_0_object->SetMessage(528802); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526757, 30208, 28034); //@t
					var_0_object->AddReply(528803, 30208, 30216); //@t
					return 0;
				}
				func_2138(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526759, -1, 28036); //@t
				var_0_object->AddReply(528801, -1, 30214); //@t
				return 0;
			}
			if(var_36_bool == 30208) {
				func_2138(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(528795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528796, 30210, 30209); //@t
				var_0_object->AddReply(542079, 44899, 44372); //@t
				return 0;
			}
			if(var_36_bool == 44899) {
				func_2138(var_37_cvector, "Pain");
				var_0_object->SetMessage(542509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542510, 44902, 44900); //@t
				var_0_object->AddReply(542511, 44902, 44901); //@t
				return 0;
			}
			if(var_36_bool == 44902) {
				func_2138(var_37_cvector, "Autizm");
				var_0_object->SetMessage(542512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542513, 30210, 44904); //@t
				var_0_object->AddReply(542514, -1, 44905); //@t
				return 0;
			}
			if(var_36_bool == 30210) {
				func_2138(var_37_cvector, "Welldie");
				var_0_object->SetMessage(528797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528798, 30212, 30211); //@t
				var_0_object->AddReply(542515, 44907, 44906); //@t
				return 0;
			}
			if(var_36_bool == 44907) {
				func_2138(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542517, -1, 44908); //@t
				return 0;
			}
			if(var_36_bool == 30212) {
				func_2138(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528800, -1, 30213); //@t
				return 0;
			}
			var_3_string = true;
			bool var_213_bool;
			func_3510(var_213_bool);
			if(var_213_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x871";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_36_bool == 36960) {
				func_2535(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_2535(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_2535(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_89_bool;
			func_3510(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9fe";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3412();
			if(var_36_int == 42548) {
				func_2789(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3510(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xafc";
	
	}

}


maintask task_14
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2857(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2922();
			bool var_40_bool = false;
			bool var_41_bool;
			func_3136(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2891(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2871(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3419(var_82_object);
					var_82_object = var_81_object;
					func_3286(var_80_bool, var_81_object);
				}
			} else {
				func_2886(var_36_int);
				func_2913();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3104();
		func_2922();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_2922();
		func_3366("Neutral");
		func_2913();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2913();
		else
			func_3366("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_3104();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_3127(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3991(var_54_object);
			func_3366("Neutral");
			func_2922();
			func_2913();
		}
	}

}


// @pe
void func_3584(void)
{
	@SetVariable("ook2Laska1", 1);
}


void func_0(object var_0_object, int var_289_int, object var_290_object)
{
	var_0_object = var_290_object;
	bool var_300_bool; object var_301_object;
	var_290_object = var_301_object;
	func_3141(var_300_bool, var_301_object, 70.0);
	if(!var_300_bool) { //@nz
		var_289_int = -2;
		return 8;
	}
	object var_296_object;
	@CreateDialog(var_296_object);
	int var_304_int;
	func_3504(var_304_int);
	var_296_object->SetNPCName(var_304_int);
	int var_305_int;
	func_3502(var_305_int);
	var_296_object->SetNPCDescription(var_305_int);
	string var_306_string;
	func_3506(var_306_string);
	var_296_object->SetPhoto(var_306_string);
	string var_307_string;
	func_3508(var_307_string);
	var_296_object->SetPhoto2(var_307_string);
	int var_308_int;
	func_3974(var_308_int);
	var_296_object->SetPlayerName(var_308_int);
	bool var_297_bool;
	@IsOverrideActive(var_297_bool);
	if(var_297_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	@DoDialog(var_296_object);
	bool var_310_bool; object var_311_object;
	object var_312_object;
	func_3419(var_312_object);
	var_312_object = var_311_object;
	func_3228(var_310_bool, var_311_object);
	object var_313_object; object var_314_object;
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(1);
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	bool var_299_bool;
	var_296_object->IsDialogEnd(var_299_bool);
	
	for(;;) {
		var_380_bool = !var_299_bool; //@nz
		if(var_380_bool == 0) goto Label_70;
		@sync();
		var_296_object->IsDialogEnd(var_299_bool);
	}
	
Label_70:
	object var_381_object;
	var_290_object = var_381_object;
	func_3210();
	@StopDialog(var_296_object);
	var_296_object->GetReturnValue(-1);
	int var_298_int = var_289_int;
}
EMIT "Stack[-4] = 0";


void func_3844(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 406, 2, 526024);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3896(var_88_bool, var_89_object, 405);
}
EMIT "Stack[-1] = 0";


void func_3590(void)
{
	object var_46_object;
	func_3924(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3458(var_57_float);
	var_45_object->AddMark("k5q03LaskaGotoAlbinos", "pt_k5q03_albinos_path12", 0, 526026, var_57_float);
	func_3831();
	func_3844();
	object var_91_object;
	func_3440(var_91_object, "quest_k5_03");
}
EMIT "Stack[-1] = 0";


void func_3857(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 748, 2, 539627);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_3896(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3102(bool var_74_bool)
{
	var_74_bool = true;
}


void func_3870(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 749, 2, 539628);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3896(var_88_bool, var_89_object, 748);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3616(void)
{
	@SetVariable("ook5Laska1", 1);
}


void func_3104(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1316(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	var_60_object = var_71_object;
	func_3141(var_70_bool, var_71_object, 70.0);
	if(!var_70_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_118_int;
	func_3504(var_118_int);
	var_66_object->SetNPCName(var_118_int);
	int var_119_int;
	func_3502(var_119_int);
	var_66_object->SetNPCDescription(var_119_int);
	string var_120_string;
	func_3506(var_120_string);
	var_66_object->SetPhoto(var_120_string);
	string var_121_string;
	func_3508(var_121_string);
	var_66_object->SetPhoto2(var_121_string);
	int var_122_int;
	func_3974(var_122_int);
	var_66_object->SetPlayerName(var_122_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	bool var_131_bool; object var_132_object;
	object var_133_object;
	func_3419(var_133_object);
	var_133_object = var_132_object;
	func_3228(var_131_bool, var_132_object);
	object var_226_object; object var_227_object;
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(5);
	func_1397(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_275_bool = !var_69_bool; //@nz
		if(var_275_bool == 0) goto Label_1386;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_1386:
	object var_276_object;
	var_60_object = var_276_object;
	func_3210();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_3109(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


// @pe
void func_3622(void)
{
	@SetVariable("k5LaskaVisit", 1);
}


void func_3366(string var_259_string)
{
	bool var_263_bool; float var_264_float; float var_265_float;
	@lshHasAnimation(var_263_bool, var_259_string);
	if(var_263_bool != 0) {
		@lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		@lshPlayAnimation(var_264_float, var_265_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_259_string);
	}
	
}


void func_2857(object var_0_object)
{
	bool var_36_bool;
	func_3136(var_36_bool);
	if(!var_36_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3033();
	}
}
EMIT "Return(); Pop(0)";


void func_3883(object var_74_object)
{
	object var_76_object;
	@GetDiaryRoot(var_76_object);
	if(!var_76_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_74_object = false;
	}
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3628(void)
{
	@SetVariable("k6LaskaVisit", 1);
}


void func_3117(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


// @pe
void func_3634(void)
{
	@SetVariable("ook6Laska1", 1);
}


void func_3382(string var_237_string, bool var_238_bool)
{
	bool var_244_bool; float var_245_float; float var_246_float;
	@lshHasAnimation(var_244_bool, var_237_string);
	if(var_244_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		@lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


void func_3127(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_3117(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_3640(void)
{
	object var_46_object;
	func_3924(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3458(var_57_float);
	var_45_object->AddMark("k6q03LaskaGotoAlbinos", "pt_k6q03_albinos_path9", 0, 511153, var_57_float);
	func_3857();
	func_3870();
	object var_91_object;
	func_3440(var_91_object, "quest_k6_03");
}
EMIT "Stack[-1] = 0";


void func_2871(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_3127(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_3896(bool var_65_bool, object var_66_object, int var_67_int)
{
	object var_74_object;
	func_3883(var_74_object);
	object var_71_object;
	var_74_object = var_71_object;
	object var_72_object;
	var_71_object->Find(var_67_int, var_72_object);
	if(!var_72_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_67_int);
		var_65_bool = false;
	}
	var_72_object->AddChild(var_66_object);
	@SendWorldWndMessage(7);
	int var_73_int;
	var_66_object->GetCategory(var_73_int);
	@SetDiarySection(var_73_int);
	var_65_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1600(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_516_object, object var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_523_bool;
		func_3781(var_1_object);
		if(var_523_bool != 0) {
			object var_529_object; object var_530_object;
			var_529_object = var_1_object;
			var_530_object = var_0_object;
			func_3616();
			object var_533_object; object var_534_object;
			var_533_object = var_1_object;
			var_534_object = var_0_object;
			func_3622();
			func_1693(var_517_object, "Autizm");
			var_0_object->SetMessage(525944); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(542433, 44818, 44817); //@t
			var_0_object->AddReply(542438, 44824, 44822); //@t
		} else {
					func_1693(var_517_object, "Neutral");
					var_0_object->SetMessage(525948); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525949, -1, 27233); //@t
					var_0_object->AddReply(529092, -1, 30537); //@t
		}
	}
	for(;;) {
		bool var_552_bool;
		func_3510(var_552_bool);
		if(var_552_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3366(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1692;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1692:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x644";


void func_3136(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_3141(bool var_70_bool, object var_71_object, float var_72_float)
{
	cvector var_83_cvector; bool var_90_bool;
	var_71_object->GetPosition(var_83_cvector);
	float var_82_float;
	var_71_object->GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (var_91_float + var_82_float);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	@GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_82_float);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_95_float = sqrt(var_85_cvector | var_85_cvector);
	var_85_cvector /= var_95_float;
	cvector var_86_cvector = -var_85_cvector;
	cvector var_97_cvector;
	func_3425(var_97_cvector, (var_86_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_87_cvector = ((var_85_cvector * var_72_float) + (var_97_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0)
		var_70_bool = false;
	@StopWorld();
	@CameraTransit((var_84_cvector + var_87_cvector), var_86_cvector, true);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	bool var_113_bool;
	func_3510(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		@HasAnimationTrack(var_90_bool, "head");
		if(var_90_bool == 0) goto Label_3204;
		@LookAsyncCamera("head");
	}
Label_3204:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_70_bool = true;
	
}


void func_3397(bool var_165_bool, string var_166_string)
{
	bool var_168_bool;
	bool var_169_bool;
	func_3510(var_169_bool);
	if(var_169_bool != 0) {
		@lshHasSpeech(var_168_bool, var_166_string);
		if(var_168_bool != 0) {
			@lshPlaySpeech(var_166_string);
			var_165_bool = true;
		}
	}
	var_165_bool = false;
}


void func_2886(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_2891(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_3109(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_313_object, object var_314_object)
{
	var_0_object = var_314_object;
	var_1_object = var_313_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_320_bool = false;
		bool var_321_bool;
		func_3678(var_1_object);
		if(var_321_bool != 0) {
			bool var_329_bool;
			func_3690(var_1_object);
			if(!var_329_bool) //@nz
				var_320_bool = true;
		}
		if(var_320_bool != 0) {
			object var_336_object; object var_337_object;
			var_336_object = var_1_object;
			var_337_object = var_0_object;
			func_3528();
			func_193(var_314_object, "Autizm");
			var_0_object->SetMessage(524644); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526298, 27579, 27578); //@t
			var_0_object->AddReply(526300, 27581, 27580); //@t
		} else {
					func_193(var_314_object, "Neutral");
					var_0_object->SetMessage(524648); //@t
					var_0_object->ClearReplies(); //@t
					bool var_365_bool = false;
					bool var_366_bool;
					func_3690(var_1_object);
					if(var_366_bool != 0) {
						bool var_368_bool;
						func_3702(var_1_object);
						if(var_368_bool != 0)
							var_365_bool = true;
					}
					if(var_365_bool != 0)
						var_0_object->AddReply(524681, 43988, 26020); //@t
					var_0_object->AddReply(524649, -1, 25988); //@t
		}
	}
	for(;;) {
		bool var_355_bool;
		func_3510(var_355_bool);
		if(var_355_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3366(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_192;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_192:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_3666(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_3412(void)
{
	bool var_39_bool;
	func_3510(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_3924(object var_46_object)
{
	object var_49_object; object var_50_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		var_50_object = null;
		var_50_object = var_46_object;
	}
	var_49_object->GetMap(var_50_object);
	var_50_object = var_46_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2391(object var_0_object, int var_652_int, object var_653_object)
{
	var_0_object = var_653_object;
	bool var_663_bool; object var_664_object;
	var_653_object = var_664_object;
	func_3141(var_663_bool, var_664_object, 70.0);
	if(!var_663_bool) { //@nz
		var_652_int = -2;
		return 8;
	}
	object var_659_object;
	@CreateDialog(var_659_object);
	int var_667_int;
	func_3504(var_667_int);
	var_659_object->SetNPCName(var_667_int);
	int var_668_int;
	func_3502(var_668_int);
	var_659_object->SetNPCDescription(var_668_int);
	string var_669_string;
	func_3506(var_669_string);
	var_659_object->SetPhoto(var_669_string);
	string var_670_string;
	func_3508(var_670_string);
	var_659_object->SetPhoto2(var_670_string);
	int var_671_int;
	func_3974(var_671_int);
	var_659_object->SetPlayerName(var_671_int);
	bool var_660_bool;
	@IsOverrideActive(var_660_bool);
	if(var_660_bool != 0) {
		var_652_int = -2;
		return 8;
	}
	@DoDialog(var_659_object);
	bool var_673_bool; object var_674_object;
	object var_675_object;
	func_3419(var_675_object);
	var_675_object = var_674_object;
	func_3228(var_673_bool, var_674_object);
	object var_676_object; object var_677_object;
	var_653_object = var_676_object;
	var_659_object = var_677_object;
	TaskCall(11);
	func_2472(var_678_object, var_679_object, var_680_string, var_681_bool, var_676_object, var_677_object);
	TaskReturn();
	bool var_662_bool;
	var_659_object->IsDialogEnd(var_662_bool);
	
	for(;;) {
		var_709_bool = !var_662_bool; //@nz
		if(var_709_bool == 0) goto Label_2461;
		@sync();
		var_659_object->IsDialogEnd(var_662_bool);
	}
	
Label_2461:
	object var_710_object;
	var_653_object = var_710_object;
	func_3210();
	@StopDialog(var_659_object);
	var_659_object->GetReturnValue(-1);
	int var_661_int = var_652_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3672(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_2138(object var_2_object, string var_617_string)
{
	bool var_618_bool;
	func_3510(var_618_bool);
	if(!var_618_bool) //@nz
		return 0;
	if(var_617_string == var_2_object)
		return 0;
	string var_621_string; bool var_622_bool;
	var_617_string = var_621_string;
	if(var_617_string == "")
		var_622_bool = false;
	else
		var_622_bool = true;
	func_3382(var_621_string, var_622_bool);
	var_2_object = var_617_string;
	
}


void func_2650(object var_0_object, int var_711_int, object var_712_object)
{
	var_0_object = var_712_object;
	bool var_722_bool; object var_723_object;
	var_712_object = var_723_object;
	func_3141(var_722_bool, var_723_object, 70.0);
	if(!var_722_bool) { //@nz
		var_711_int = -2;
		return 8;
	}
	object var_718_object;
	@CreateDialog(var_718_object);
	int var_726_int;
	func_3504(var_726_int);
	var_718_object->SetNPCName(var_726_int);
	int var_727_int;
	func_3502(var_727_int);
	var_718_object->SetNPCDescription(var_727_int);
	string var_728_string;
	func_3506(var_728_string);
	var_718_object->SetPhoto(var_728_string);
	string var_729_string;
	func_3508(var_729_string);
	var_718_object->SetPhoto2(var_729_string);
	int var_730_int;
	func_3974(var_730_int);
	var_718_object->SetPlayerName(var_730_int);
	bool var_719_bool;
	@IsOverrideActive(var_719_bool);
	if(var_719_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	@DoDialog(var_718_object);
	bool var_732_bool; object var_733_object;
	object var_734_object;
	func_3419(var_734_object);
	var_734_object = var_733_object;
	func_3228(var_732_bool, var_733_object);
	object var_735_object; object var_736_object;
	var_712_object = var_735_object;
	var_718_object = var_736_object;
	TaskCall(13);
	func_2731(var_737_object, var_738_object, var_739_string, var_740_bool, var_735_object, var_736_object);
	TaskReturn();
	bool var_721_bool;
	var_718_object->IsDialogEnd(var_721_bool);
	
	for(;;) {
		var_765_bool = !var_721_bool; //@nz
		if(var_765_bool == 0) goto Label_2720;
		@sync();
		var_718_object->IsDialogEnd(var_721_bool);
	}
	
Label_2720:
	object var_766_object;
	var_712_object = var_766_object;
	func_3210();
	@StopDialog(var_718_object);
	var_718_object->GetReturnValue(-1);
	int var_720_int = var_711_int;
}
EMIT "Stack[-4] = 0";


void func_3419(object var_133_object)
{
	object var_135_object;
	@self(var_135_object);
	var_135_object = var_133_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3678(bool var_321_bool)
{
	int var_323_int;
	func_3435(var_323_int, "ook1Laska1");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_865(object var_2_object, string var_415_string)
{
	bool var_416_bool;
	func_3510(var_416_bool);
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
	func_3382(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	
}


void func_2913(void)
{
	float var_770_float;
	@rand(var_770_float, 8, 16);
	@SetTimer(10, var_770_float);
}


void func_3425(cvector var_97_cvector, cvector var_98_cvector)
{
	float var_101_float = sqrt(var_98_cvector | var_98_cvector);
	if(var_101_float < 0.000001)
		var_97_cvector = [0.0, 0.0, 0.0];
	var_97_cvector = var_98_cvector / var_101_float;
}


void func_3941(object var_93_object, string var_94_string, float var_95_float)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	if(var_103_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_101_cvector;
	cvector var_102_cvector;
	bool var_104_bool;
	var_103_object->GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	if(!var_104_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_94_string) + " doesnt exist");
	var_103_object->GetMap(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_93_object->SetMapParams(var_114_float, var_115_float, var_95_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3690(bool var_329_bool)
{
	int var_331_int;
	func_3435(var_331_int, "k1q01");
	if(var_331_int == 4)
		var_329_bool = true;
	var_329_bool = false;
}


void func_2922(void)
{
	@KillTimer(10);
}


void func_3435(int var_323_int, string var_324_string)
{
	int var_326_int;
	@GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
}


void func_3440(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1397(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_226_object, object var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if(1 != 0) {
		func_1455(var_227_object, "Neutral");
		var_0_object->SetMessage(525498); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525499, -1, 26855); //@t
		var_0_object->AddReply(526256, -1, 27530); //@t
		goto Label_1425;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x579";
	}
Label_1425:
	bool var_257_bool;
	func_3510(var_257_bool);
	if(var_257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3366(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1454;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1454:
		return 0;

	}
	
}


// @pe
void func_3702(bool var_368_bool)
{
	int var_370_int;
	func_3435(var_370_int, "ook1Laska2");
	if(var_370_int == 0) {
		var_368_bool = true;
		return 0;
	}
	var_368_bool = false;
}


void func_3451(bool var_430_bool, object var_431_object, string var_432_string)
{
	int var_435_int;
	@GetInvItemByName(var_435_int, var_432_string);
	bool var_436_bool;
	var_431_object->HasItem(var_435_int, var_436_bool);
	var_436_bool = var_430_bool;
}


// @pe
void func_3714(bool var_443_bool)
{
	int var_445_int;
	func_3435(var_445_int, "k2q02");
	if(var_445_int == 1)
		var_443_bool = true;
	var_443_bool = false;
}


void func_3458(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


void func_3974(int var_122_int)
{
	int var_124_int;
	@GetVariable("branch", var_124_int);
	if(var_124_int == 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0xf95";
	}
	if(var_124_int == 1) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
}


void func_3463(int var_186_int)
{
	float var_188_float;
	@GetGameTime(var_188_float);
	var_186_int = 1 + (var_188_float / 24);
}


void func_3210(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal(true);
	bool var_280_bool;
	func_3510(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_3227;
		@UnlookAsync("head");
	}
Label_3227:
	
}


// @pe
void func_3726(bool var_450_bool)
{
	int var_452_int;
	func_3435(var_452_int, "k2q02");
	if(var_452_int == 2)
		var_450_bool = true;
	var_450_bool = false;
}


// @pe
void func_3472(bool var_286_bool, int var_287_int)
{
	int var_288_int;
	func_3463(var_288_int);
	var_286_bool = var_288_int == var_287_int;
}


void func_3478(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_3991(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_laska", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(4);
		func_1316(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_laska", 1);
	}
	bool var_286_bool;
	func_3472(var_286_bool, 1);
	if(var_286_bool != 0) {
		int var_289_int; object var_290_object;
		var_54_object = var_290_object;
		TaskCall(0);
		func_0(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 2;
	}
	bool var_382_bool;
	func_3472(var_382_bool, 2);
	if(var_382_bool != 0) {
		int var_384_int; object var_385_object;
		var_54_object = var_385_object;
		TaskCall(2);
		func_665(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 2;
	}
	bool var_490_bool;
	func_3472(var_490_bool, 5);
	if(var_490_bool != 0) {
		int var_492_int; object var_493_object;
		var_54_object = var_493_object;
		TaskCall(6);
		func_1519(var_494_object, var_492_int, var_493_object);
		TaskReturn();
		return 2;
	}
	bool var_570_bool;
	func_3472(var_570_bool, 6);
	if(var_570_bool != 0) {
		int var_572_int; object var_573_object;
		var_54_object = var_573_object;
		TaskCall(8);
		func_1964(var_574_object, var_572_int, var_573_object);
		TaskReturn();
		return 2;
	}
	bool var_650_bool;
	func_3472(var_650_bool, 12);
	if(var_650_bool != 0) {
		int var_652_int; object var_653_object;
		var_54_object = var_653_object;
		TaskCall(10);
		func_2391(var_654_object, var_652_int, var_653_object);
		TaskReturn();
		return 2;
	}
	int var_711_int; object var_712_object;
	var_54_object = var_712_object;
	TaskCall(12);
	func_2650(var_713_object, var_711_int, var_712_object);
	TaskReturn();
}


void func_665(object var_0_object, int var_384_int, object var_385_object)
{
	var_0_object = var_385_object;
	bool var_395_bool; object var_396_object;
	var_385_object = var_396_object;
	func_3141(var_395_bool, var_396_object, 70.0);
	if(!var_395_bool) { //@nz
		var_384_int = -2;
		return 8;
	}
	object var_391_object;
	@CreateDialog(var_391_object);
	int var_399_int;
	func_3504(var_399_int);
	var_391_object->SetNPCName(var_399_int);
	int var_400_int;
	func_3502(var_400_int);
	var_391_object->SetNPCDescription(var_400_int);
	string var_401_string;
	func_3506(var_401_string);
	var_391_object->SetPhoto(var_401_string);
	string var_402_string;
	func_3508(var_402_string);
	var_391_object->SetPhoto2(var_402_string);
	int var_403_int;
	func_3974(var_403_int);
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
	func_3419(var_407_object);
	var_407_object = var_406_object;
	func_3228(var_405_bool, var_406_object);
	object var_408_object; object var_409_object;
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(3);
	func_746(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	bool var_394_bool;
	var_391_object->IsDialogEnd(var_394_bool);
	
	for(;;) {
		var_488_bool = !var_394_bool; //@nz
		if(var_488_bool == 0) goto Label_735;
		@sync();
		var_391_object->IsDialogEnd(var_394_bool);
	}
	
Label_735:
	object var_489_object;
	var_385_object = var_489_object;
	func_3210();
	@StopDialog(var_391_object);
	var_391_object->GetReturnValue(-1);
	int var_393_int = var_384_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3738(bool var_426_bool, object var_427_object)
{
	bool var_428_bool = false;
	bool var_429_bool = false;
	bool var_430_bool; object var_431_object;
	var_427_object = var_431_object;
	func_3451(var_430_bool, var_431_object, "flower");
	if(var_430_bool != 0) {
		bool var_437_bool; object var_438_object;
		var_427_object = var_438_object;
		func_3451(var_437_bool, var_438_object, "milk");
		if(var_437_bool != 0)
			var_429_bool = true;
	}
	if(var_429_bool != 0) {
		bool var_440_bool; object var_441_object;
		var_427_object = var_441_object;
		func_3451(var_440_bool, var_441_object, "bread");
		if(var_440_bool != 0)
			var_428_bool = true;
	}
	if(var_428_bool != 0) {
		var_426_bool = true;
		return 0;
	}
	var_426_bool = false;
}


void func_3228(bool var_131_bool, object var_132_object)
{
	int var_138_int; int var_139_int;
	@GetVariable("voice_common", var_138_int);
	if(var_138_int != 0) {
		bool var_142_bool; object var_143_object;
		var_132_object = var_143_object;
		func_3286(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_132_object = var_174_object;
			func_3323(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@irand(var_139_int, 2);
		if(var_139_int != 0)
			@SetVariable("voice_common", ((var_138_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_218_bool; object var_219_object;
		var_132_object = var_219_object;
		func_3323(var_218_bool, var_219_object);
		if(!var_218_bool) { //@nz
			bool var_221_bool; object var_222_object;
			var_132_object = var_222_object;
			func_3286(var_221_bool, var_222_object);
			if(!var_221_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3284;
	
Label_3284:
	var_131_bool = true;
	
}


// @pe
void func_1693(object var_2_object, string var_537_string)
{
	bool var_538_bool;
	func_3510(var_538_bool);
	if(!var_538_bool) //@nz
		return 0;
	if(var_537_string == var_2_object)
		return 0;
	string var_541_string; bool var_542_bool;
	var_537_string = var_541_string;
	if(var_537_string == "")
		var_542_bool = false;
	else
		var_542_bool = true;
	func_3382(var_541_string, var_542_bool);
	var_2_object = var_537_string;
	
}


void func_3485(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_3478(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


// @pe
void func_2472(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_676_object, object var_677_object)
{
	var_0_object = var_677_object;
	var_1_object = var_676_object;
	var_3_string = false;
	if(1 != 0) {
		func_2535(var_677_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_2505;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9ac";
	}
Label_2505:
	bool var_701_bool;
	func_3510(var_701_bool);
	if(var_701_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3366(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2534;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2534:
		return 0;

	}
	
}


// @pe
void func_2731(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_735_object, object var_736_object)
{
	var_0_object = var_736_object;
	var_1_object = var_735_object;
	var_3_string = false;
	if(1 != 0) {
		func_2789(var_736_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2759;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaaf";
	}
Label_2759:
	bool var_757_bool;
	func_3510(var_757_bool);
	if(var_757_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3366(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2788;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2788:
		return 0;

	}
	
}


void func_1964(object var_0_object, int var_572_int, object var_573_object)
{
	var_0_object = var_573_object;
	bool var_583_bool; object var_584_object;
	var_573_object = var_584_object;
	func_3141(var_583_bool, var_584_object, 70.0);
	if(!var_583_bool) { //@nz
		var_572_int = -2;
		return 8;
	}
	object var_579_object;
	@CreateDialog(var_579_object);
	int var_587_int;
	func_3504(var_587_int);
	var_579_object->SetNPCName(var_587_int);
	int var_588_int;
	func_3502(var_588_int);
	var_579_object->SetNPCDescription(var_588_int);
	string var_589_string;
	func_3506(var_589_string);
	var_579_object->SetPhoto(var_589_string);
	string var_590_string;
	func_3508(var_590_string);
	var_579_object->SetPhoto2(var_590_string);
	int var_591_int;
	func_3974(var_591_int);
	var_579_object->SetPlayerName(var_591_int);
	bool var_580_bool;
	@IsOverrideActive(var_580_bool);
	if(var_580_bool != 0) {
		var_572_int = -2;
		return 8;
	}
	@DoDialog(var_579_object);
	bool var_593_bool; object var_594_object;
	object var_595_object;
	func_3419(var_595_object);
	var_595_object = var_594_object;
	func_3228(var_593_bool, var_594_object);
	object var_596_object; object var_597_object;
	var_573_object = var_596_object;
	var_579_object = var_597_object;
	TaskCall(9);
	func_2045(var_598_object, var_599_object, var_600_string, var_601_bool, var_596_object, var_597_object);
	TaskReturn();
	bool var_582_bool;
	var_579_object->IsDialogEnd(var_582_bool);
	
	for(;;) {
		var_648_bool = !var_582_bool; //@nz
		if(var_648_bool == 0) goto Label_2034;
		@sync();
		var_579_object->IsDialogEnd(var_582_bool);
	}
	
Label_2034:
	object var_649_object;
	var_573_object = var_649_object;
	func_3210();
	@StopDialog(var_579_object);
	var_579_object->GetReturnValue(-1);
	int var_581_int = var_572_int;
}
EMIT "Stack[-4] = 0";


void func_3502(int var_119_int)
{
	var_119_int = 515542;
}


// @pe
void func_1455(object var_2_object, string var_233_string)
{
	bool var_234_bool;
	func_3510(var_234_bool);
	if(!var_234_bool) //@nz
		return 0;
	if(var_233_string == var_2_object)
		return 0;
	string var_237_string; bool var_238_bool;
	var_233_string = var_237_string;
	if(var_233_string == "")
		var_238_bool = false;
	else
		var_238_bool = true;
	func_3382(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	
}


void func_3504(int var_118_int)
{
	var_118_int = 502867;
}


void func_3506(string var_120_string)
{
	var_120_string = "ui/NPC_Laska.png";
}


void func_3508(string var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png";
}


void func_3510(bool var_113_bool)
{
	var_113_bool = true;
}


// @pe
void func_3512(object var_92_object)
{
	object var_96_object;
	func_3924(var_96_object);
	object var_93_object;
	var_96_object = var_93_object;
	func_3941(var_93_object, "pt_map_burah_home", (float)2);
	object var_116_object;
	func_3924(var_116_object);
	var_92_object->ShowMap(var_116_object);
}


// @pe
void func_3769(bool var_468_bool)
{
	int var_470_int;
	func_3435(var_470_int, "ook2Laska1");
	if(var_470_int == 0) {
		var_468_bool = true;
		return 0;
	}
	var_468_bool = false;
}


// @pe
void func_193(object var_2_object, string var_340_string)
{
	bool var_341_bool;
	func_3510(var_341_bool);
	if(!var_341_bool) //@nz
		return 0;
	if(var_340_string == var_2_object)
		return 0;
	string var_344_string; bool var_345_bool;
	var_340_string = var_344_string;
	if(var_340_string == "")
		var_345_bool = false;
	else
		var_345_bool = true;
	func_3382(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	
}


// @pe
void func_3781(bool var_523_bool)
{
	int var_525_int;
	func_3435(var_525_int, "ook5Laska1");
	if(var_525_int == 0) {
		var_523_bool = true;
		return 0;
	}
	var_523_bool = false;
}


// @pe
void func_3528(void)
{
	@SetVariable("ook1Laska1", 1);
}


// @pe
void func_3534(void)
{
	@SetVariable("ook1Laska2", 1);
}


// @pe
void func_3793(bool var_603_bool)
{
	int var_605_int;
	func_3435(var_605_int, "ook6Laska1");
	if(var_605_int == 0) {
		var_603_bool = true;
		return 0;
	}
	var_603_bool = false;
}


void func_3540(void)
{
	@SetVariable("k1q01LaskaGotoBurah", 1);
	object var_54_object;
	func_3924(var_54_object);
	object var_51_object;
	var_54_object = var_51_object;
	float var_65_float;
	func_3458(var_65_float);
	var_51_object->AddMark("k1q01LaskaGotoBurah", "pt_map_burah_home", 1, 524731, var_65_float);
	func_3805();
}
EMIT "Stack[-1] = 0";


void func_3286(bool var_142_bool, object var_143_object)
{
	string var_149_string; bool var_151_bool; int var_152_int; string var_153_string;
	var_149_string = "c";
	int var_150_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_143_object->HasProperty((var_149_string + (var_150_int + 1)), var_151_bool);
			if(!var_151_bool) { //@nz
			} else {
				var_150_int += 1;
			}
		}
		if(!var_150_int) { //@nz
			var_142_bool = false;
			return 10;
		}
		var_152_int = 0;
		if(var_150_int > 1)
			@irand(var_152_int, var_150_int);
		var_143_object->GetProperty((var_149_string + (var_152_int + 1)), var_153_string);
		bool var_165_bool; string var_166_string;
		var_153_string = var_166_string;
		func_3397(var_165_bool, var_166_string);
		var_165_bool = var_142_bool;
		return 10;

	}
}


void func_3033(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_3136(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_3485(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_3136(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_3478(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_3088;
			goto Label_3099;
			}
				Label_3088:
					bool var_74_bool;
					func_3102(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_3094;
			}
		}
	Label_3099:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3094:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_3805(void)
{
	object var_69_object;
	@CreateDiaryEntry(var_69_object, 776, 1, 541530);
	bool var_73_bool; object var_74_object;
	var_69_object = var_74_object;
	func_3896(var_73_bool, var_74_object, 318);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2789(object var_2_object, string var_742_string)
{
	bool var_743_bool;
	func_3510(var_743_bool);
	if(!var_743_bool) //@nz
		return 0;
	if(var_742_string == var_2_object)
		return 0;
	string var_746_string; bool var_747_bool;
	var_742_string = var_746_string;
	if(var_742_string == "")
		var_747_bool = false;
	else
		var_747_bool = true;
	func_3382(var_746_string, var_747_bool);
	var_2_object = var_742_string;
	
}


// @pe
void func_2535(object var_2_object, string var_683_string)
{
	bool var_684_bool;
	func_3510(var_684_bool);
	if(!var_684_bool) //@nz
		return 0;
	if(var_683_string == var_2_object)
		return 0;
	string var_687_string; bool var_688_bool;
	var_683_string = var_687_string;
	if(var_683_string == "")
		var_688_bool = false;
	else
		var_688_bool = true;
	func_3382(var_687_string, var_688_bool);
	var_2_object = var_683_string;
	
}


// @pe
void func_746(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_408_object, object var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if(1 != 0) {
		func_865(var_409_object, "Neutral");
		var_0_object->SetMessage(525297); //@t
		var_0_object->ClearReplies(); //@t
		bool var_424_bool = true;
		bool var_425_bool = false;
		bool var_426_bool;
		func_3738(var_426_bool, var_1_object);
		if(var_426_bool != 0) {
			bool var_443_bool;
			func_3714(var_1_object);
			if(var_443_bool != 0)
				var_425_bool = true;
		}
		if(var_425_bool != 1) {
			bool var_449_bool = false;
			bool var_450_bool;
			func_3726(var_1_object);
			if(var_450_bool != 0) {
				bool var_456_bool;
				func_3738(var_456_bool, var_1_object);
				if(var_456_bool != 0)
					var_449_bool = true;
			}
			if(var_449_bool != 1)
				var_424_bool = false;
		}
		if(var_424_bool != 0)
			var_0_object->AddReply(525298, 26667, 26666); //@t
		bool var_461_bool = false;
		bool var_462_bool = false;
		bool var_463_bool;
		func_3714(var_1_object);
		if(var_463_bool != 0) {
			bool var_465_bool;
			func_3738(var_465_bool, var_1_object);
			if(!var_465_bool) //@nz
				var_462_bool = true;
		}
		if(var_462_bool != 0) {
			bool var_468_bool;
			func_3769(var_1_object);
			if(var_468_bool != 0)
				var_461_bool = true;
		}
		if(var_461_bool != 0)
			var_0_object->AddReply(525310, 26679, 26678); //@t
		var_0_object->AddReply(525305, -1, 26673); //@t
		goto Label_835;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ee";
	}
Label_835:
	bool var_480_bool;
	func_3510(var_480_bool);
	if(var_480_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3366(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_864;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_864:
		return 0;

	}
	
}


void func_3818(void)
{
	object var_49_object;
	@CreateDiaryEntry(var_49_object, 473, 2, 527789);
	bool var_53_bool; object var_54_object;
	var_49_object = var_54_object;
	func_3896(var_53_bool, var_54_object, 470);
}
EMIT "Stack[-1] = 0";


void func_3563(object var_42_object)
{
	@SetVariable("k2q02", 3);
	func_3818();
	int var_45_int;
	var_42_object->RemoveItemByType(var_45_int, "milk", 1);
	var_42_object->RemoveItemByType(var_45_int, "bread", 1);
	var_42_object->RemoveItemByType(var_45_int, "flower", 1);
}


void func_1519(object var_0_object, int var_492_int, object var_493_object)
{
	var_0_object = var_493_object;
	bool var_503_bool; object var_504_object;
	var_493_object = var_504_object;
	func_3141(var_503_bool, var_504_object, 70.0);
	if(!var_503_bool) { //@nz
		var_492_int = -2;
		return 8;
	}
	object var_499_object;
	@CreateDialog(var_499_object);
	int var_507_int;
	func_3504(var_507_int);
	var_499_object->SetNPCName(var_507_int);
	int var_508_int;
	func_3502(var_508_int);
	var_499_object->SetNPCDescription(var_508_int);
	string var_509_string;
	func_3506(var_509_string);
	var_499_object->SetPhoto(var_509_string);
	string var_510_string;
	func_3508(var_510_string);
	var_499_object->SetPhoto2(var_510_string);
	int var_511_int;
	func_3974(var_511_int);
	var_499_object->SetPlayerName(var_511_int);
	bool var_500_bool;
	@IsOverrideActive(var_500_bool);
	if(var_500_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	@DoDialog(var_499_object);
	bool var_513_bool; object var_514_object;
	object var_515_object;
	func_3419(var_515_object);
	var_515_object = var_514_object;
	func_3228(var_513_bool, var_514_object);
	object var_516_object; object var_517_object;
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(7);
	func_1600(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	bool var_502_bool;
	var_499_object->IsDialogEnd(var_502_bool);
	
	for(;;) {
		var_568_bool = !var_502_bool; //@nz
		if(var_568_bool == 0) goto Label_1589;
		@sync();
		var_499_object->IsDialogEnd(var_502_bool);
	}
	
Label_1589:
	object var_569_object;
	var_493_object = var_569_object;
	func_3210();
	@StopDialog(var_499_object);
	var_499_object->GetReturnValue(-1);
	int var_501_int = var_492_int;
}
EMIT "Stack[-4] = 0";


void func_3831(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 405, 2, 526023);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_3896(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3323(bool var_173_bool, object var_174_object)
{
	bool var_182_bool; int var_183_int; string var_184_string;
	int var_186_int;
	func_3463(var_186_int);
	string var_180_string = ("d" + var_186_int) + "m";
	int var_181_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_174_object->HasProperty((var_180_string + (var_181_int + 1)), var_182_bool);
			if(!var_182_bool) { //@nz
			} else {
				var_181_int += 1;
			}
		}
		if(!var_181_int) { //@nz
			var_173_bool = false;
			return 10;
		}
		var_183_int = 0;
		if(var_181_int > 1)
			@irand(var_183_int, var_181_int);
		var_174_object->GetProperty((var_180_string + (var_183_int + 1)), var_184_string);
		bool var_205_bool; string var_206_string;
		var_184_string = var_206_string;
		func_3397(var_205_bool, var_206_string);
		var_205_bool = var_173_bool;
		return 10;

	}
}


// @pe
void func_2045(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_596_object, object var_597_object)
{
	var_0_object = var_597_object;
	var_1_object = var_596_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_603_bool;
		func_3793(var_1_object);
		if(var_603_bool != 0) {
			object var_609_object; object var_610_object;
			var_609_object = var_1_object;
			var_610_object = var_0_object;
			func_3628();
			object var_613_object; object var_614_object;
			var_613_object = var_1_object;
			var_614_object = var_0_object;
			func_3634();
			func_2138(var_597_object, "Disturbance");
			var_0_object->SetMessage(528802); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526757, 30208, 28034); //@t
			var_0_object->AddReply(528803, 30208, 30216); //@t
		} else {
					func_2138(var_597_object, "Neutral");
					var_0_object->SetMessage(526758); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526759, -1, 28036); //@t
					var_0_object->AddReply(528801, -1, 30214); //@t
		}
	}
	for(;;) {
		bool var_632_bool;
		func_3510(var_632_bool);
		if(var_632_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3366(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2137;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2137:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x801";


