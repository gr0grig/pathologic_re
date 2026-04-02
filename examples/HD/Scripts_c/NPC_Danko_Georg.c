// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 13228) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7304();
			}
			if(var_47_cvector == 13232) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_7292();
			}
			if(var_47_cvector == 13236) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_7298();
			}
			if(var_46_bool == 13227) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512009); //@t
				var_0_object->ClearReplies(); //@t
				bool var_88_bool = false;
				bool var_89_bool;
				func_7707(var_1_object);
				if(var_89_bool != 0) {
					bool var_97_bool;
					func_7719(var_1_object);
					if(var_97_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_object->AddReply(512010, 13230, 13228); //@t
				bool var_106_bool = false;
				bool var_107_bool = false;
				bool var_108_bool = false;
				bool var_109_bool;
				func_7647(var_1_object);
				if(!var_109_bool) { //@nz
					bool var_116_bool;
					func_7659(var_1_object);
					if(!var_116_bool) //@nz
						var_108_bool = true;
				}
				if(var_108_bool != 0) {
					bool var_123_bool;
					func_7671(var_1_object);
					if(!var_123_bool) //@nz
						var_107_bool = true;
				}
				if(var_107_bool != 0) {
					bool var_130_bool;
					func_7683(var_1_object);
					if(var_130_bool != 0)
						var_106_bool = true;
				}
				if(var_106_bool != 0)
					var_0_object->AddReply(512014, 13233, 13232); //@t
				bool var_139_bool;
				func_7695(var_1_object);
				if(var_139_bool != 0)
					var_0_object->AddReply(512018, 3560, 13236); //@t
				var_0_object->AddReply(512011, -1, 13229); //@t
				return 0;
			}
			if(var_46_bool == 3560) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503290, 3562, 3561); //@t
				var_0_object->AddReply(503298, 3572, 3571); //@t
				return 0;
			}
			if(var_46_bool == 3572) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503300, 3562, 3573); //@t
				var_0_object->AddReply(503301, 3564, 3575); //@t
				return 0;
			}
			if(var_46_bool == 3562) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503292, 3564, 3563); //@t
				var_0_object->AddReply(503295, 3564, 3566); //@t
				return 0;
			}
			if(var_46_bool == 3564) {
				func_203(var_47_cvector, "Distrust");
				var_0_object->SetMessage(503293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503294, 3568, 3565); //@t
				var_0_object->AddReply(503297, 3568, 3569); //@t
				return 0;
			}
			if(var_46_bool == 3568) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503302, 3578, 3577); //@t
				var_0_object->AddReply(503305, 3578, 3580); //@t
				return 0;
			}
			if(var_46_bool == 3578) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503304, -1, 3579); //@t
				return 0;
			}
			if(var_46_bool == 13233) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512016, 13235, 13234); //@t
				return 0;
			}
			if(var_46_bool == 13235) {
				func_203(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536134, -1, 37893); //@t
				var_0_object->AddReply(536135, -1, 37894); //@t
				return 0;
			}
			if(var_46_bool == 13230) {
				func_203(var_47_cvector, "Anger");
				var_0_object->SetMessage(512012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512013, -1, 13231); //@t
				return 0;
			}
			var_3_string = true;
			bool var_232_bool;
			func_6948(var_232_bool);
			if(var_232_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 32944) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_6976();
				object var_108_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_47_cvector == 32945) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_6976();
				object var_138_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_47_cvector == 34603) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_6976();
				object var_144_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_47_cvector == 23067) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_7011();
			}
			if(var_47_cvector == 23065) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_7011();
			}
			if(var_47_cvector == 5360) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_7021();
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_7011();
			}
			if(var_47_cvector == 5359) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_7021();
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_7011();
			}
			if(var_47_cvector == 32991) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6976();
				object var_186_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_47_cvector == 8418) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_7238();
			}
			if(var_47_cvector == 5341) {
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_7244();
			}
			if(var_47_cvector == 5342) {
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_7244();
			}
			if(var_47_cvector == 5347) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_7244();
			}
			if(var_47_cvector == 8440) {
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_7244();
			}
			if(var_47_cvector == 32992) {
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_7122();
			}
			if(var_47_cvector == 32994) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_7072();
			}
			if(var_46_bool == 32925) {
				bool var_226_bool;
				func_7515(var_1_object);
				if(var_226_bool != 0) {
					object var_234_object; object var_235_object;
					var_234_object = var_1_object;
					var_235_object = var_0_object;
					func_7232();
					object var_238_object; object var_239_object;
					var_238_object = var_1_object;
					var_239_object = var_0_object;
					func_7027();
					func_865(var_47_cvector, "Anger");
					var_0_object->SetMessage(531566); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531567, 32927, 32926); //@t
					var_0_object->AddReply(531608, 32978, 32977); //@t
					var_0_object->AddReply(531614, 32986, 32985); //@t
					return 0;
				}
				bool var_275_bool;
				func_7346(var_1_object);
				if(var_275_bool != 0) {
					func_865(var_47_cvector, "Neutral");
					var_0_object->SetMessage(504850); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504879, 5370, 5353); //@t
					var_0_object->AddReply(504890, 5354, 5367); //@t
					return 0;
				}
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507627); //@t
				var_0_object->ClearReplies(); //@t
				bool var_291_bool;
				func_7334(var_1_object);
				if(var_291_bool != 0)
					var_0_object->AddReply(531617, 32990, 32989); //@t
				bool var_300_bool = false;
				bool var_301_bool = false;
				bool var_302_bool;
				func_7527(var_1_object);
				if(var_302_bool != 0) {
					bool var_308_bool;
					func_7322(var_1_object);
					if(!var_308_bool) //@nz
						var_301_bool = true;
				}
				if(var_301_bool != 0) {
					bool var_315_bool;
					func_7334(var_1_object);
					if(!var_315_bool) //@nz
						var_300_bool = true;
				}
				if(var_300_bool != 0)
					var_0_object->AddReply(507629, 5329, 8418); //@t
				bool var_321_bool = false;
				bool var_322_bool = false;
				bool var_323_bool;
				func_7539(var_1_object);
				if(var_323_bool != 0) {
					bool var_329_bool;
					func_7322(var_1_object);
					if(!var_329_bool) //@nz
						var_322_bool = true;
				}
				if(var_322_bool != 0) {
					bool var_332_bool;
					func_7334(var_1_object);
					if(!var_332_bool) //@nz
						var_321_bool = true;
				}
				if(var_321_bool != 0)
					var_0_object->AddReply(507632, 5334, 8421); //@t
				bool var_338_bool = false;
				bool var_339_bool = false;
				bool var_340_bool;
				func_7491(var_1_object);
				if(var_340_bool != 0) {
					bool var_346_bool;
					func_7334(var_1_object);
					if(!var_346_bool) //@nz
						var_339_bool = true;
				}
				if(var_339_bool != 0) {
					bool var_349_bool;
					func_7322(var_1_object);
					if(!var_349_bool) //@nz
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(531620, 32993, 32992); //@t
				bool var_355_bool = false;
				bool var_356_bool;
				func_7358(var_1_object);
				if(var_356_bool != 0) {
					bool var_362_bool;
					func_7503(var_1_object);
					if(var_362_bool != 0)
						var_355_bool = true;
				}
				if(var_355_bool != 0)
					var_0_object->AddReply(531622, 32995, 32994); //@t
				var_0_object->AddReply(507658, -1, 8451); //@t
				return 0;
			}
			if(var_46_bool == 32995) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531623); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531624, 34337, 32996); //@t
				return 0;
			}
			if(var_46_bool == 34337) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532852); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532853, -1, 34338); //@t
				return 0;
			}
			if(var_46_bool == 32993) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(531621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507630, 8420, 8419); //@t
				var_0_object->AddReply(532849, 34334, 34333); //@t
				return 0;
			}
			if(var_46_bool == 8420) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(507631); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507633, 34334, 8422); //@t
				return 0;
			}
			if(var_46_bool == 34334) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532851, -1, 34336); //@t
				return 0;
			}
			if(var_46_bool == 5334) {
				object var_414_object; object var_415_object;
				var_414_object = var_1_object;
				var_415_object = var_0_object;
				func_7250();
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504863, 5336, 5335); //@t
				var_0_object->AddReply(504875, 5414, 5348); //@t
				bool var_426_bool;
				func_7479(var_1_object);
				if(!var_426_bool) //@nz
					var_0_object->AddReply(507643, 8435, 8434); //@t
				return 0;
			}
			if(var_46_bool == 8435) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507645, 8437, 8436); //@t
				return 0;
			}
			if(var_46_bool == 8437) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(507646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507647, 5336, 8438); //@t
				return 0;
			}
			if(var_46_bool == 5414) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504927, 8441, 5415); //@t
				var_0_object->AddReply(507648, -1, 8440); //@t
				return 0;
			}
			if(var_46_bool == 8441) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507650, 5338, 8442); //@t
				return 0;
			}
			if(var_46_bool == 5336) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(504864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504865, 5338, 5337); //@t
				var_0_object->AddReply(504871, 5344, 5343); //@t
				return 0;
			}
			if(var_46_bool == 5344) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(504872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504873, 5338, 5345); //@t
				var_0_object->AddReply(504874, -1, 5347); //@t
				return 0;
			}
			if(var_46_bool == 5338) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(504866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504867, 5340, 5339); //@t
				return 0;
			}
			if(var_46_bool == 5340) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504868); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504869, -1, 5341); //@t
				var_0_object->AddReply(504870, -1, 5342); //@t
				return 0;
			}
			if(var_46_bool == 5329) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(504857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504858, 5374, 5330); //@t
				return 0;
			}
			if(var_46_bool == 5374) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(504895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504896, 5377, 5375); //@t
				var_0_object->AddReply(504897, 5377, 5376); //@t
				return 0;
			}
			if(var_46_bool == 5377) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(504898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504899, 5380, 5378); //@t
				var_0_object->AddReply(504913, 5396, 5395); //@t
				return 0;
			}
			if(var_46_bool == 5396) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504915, 5380, 5397); //@t
				var_0_object->AddReply(532846, -1, 34330); //@t
				return 0;
			}
			if(var_46_bool == 5380) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504901, 5382, 5381); //@t
				var_0_object->AddReply(504916, 5382, 5399); //@t
				var_0_object->AddReply(504917, 5402, 5401); //@t
				return 0;
			}
			if(var_46_bool == 5402) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504919, 5382, 5403); //@t
				var_0_object->AddReply(532847, -1, 34331); //@t
				return 0;
			}
			if(var_46_bool == 5382) {
				object var_566_object; object var_567_object;
				var_566_object = var_1_object;
				var_567_object = var_0_object;
				func_7268();
				object var_570_object; object var_571_object;
				var_570_object = var_1_object;
				var_571_object = var_0_object;
				func_7262();
				object var_574_object; object var_575_object;
				var_574_object = var_1_object;
				var_575_object = var_0_object;
				func_7256();
				object var_578_object; object var_579_object;
				var_578_object = var_1_object;
				var_579_object = var_0_object;
				func_7280();
				object var_582_object; object var_583_object;
				var_582_object = var_1_object;
				var_583_object = var_0_object;
				func_7286();
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(504902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504903, 5385, 5383); //@t
				var_0_object->AddReply(504925, 5409, 5412); //@t
				var_0_object->AddReply(504920, 5385, 5405); //@t
				return 0;
			}
			if(var_46_bool == 5385) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(504905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504906, 5388, 5386); //@t
				var_0_object->AddReply(504907, 5388, 5387); //@t
				var_0_object->AddReply(504922, 5409, 5408); //@t
				return 0;
			}
			if(var_46_bool == 5409) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504924, 5388, 5410); //@t
				return 0;
			}
			if(var_46_bool == 5388) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504909, 5392, 5390); //@t
				var_0_object->AddReply(504910, 5392, 5391); //@t
				return 0;
			}
			if(var_46_bool == 5392) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504912, -1, 5394); //@t
				var_0_object->AddReply(504921, -1, 5407); //@t
				return 0;
			}
			if(var_46_bool == 32990) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(531618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532837, 34319, 34318); //@t
				var_0_object->AddReply(532833, 34315, 34314); //@t
				return 0;
			}
			if(var_46_bool == 34315) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532843, 34327, 34326); //@t
				var_0_object->AddReply(532839, 34321, 34320); //@t
				return 0;
			}
			if(var_46_bool == 34327) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532844); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532845, 34319, 34328); //@t
				return 0;
			}
			if(var_46_bool == 34319) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(532838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532835, 34321, 34316); //@t
				return 0;
			}
			if(var_46_bool == 34321) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(532840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531619, -1, 32991); //@t
				var_0_object->AddReply(532842, -1, 34325); //@t
				return 0;
			}
			if(var_46_bool == 5354) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(504880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504881, 5356, 5355); //@t
				var_0_object->AddReply(504889, 5356, 5365); //@t
				return 0;
			}
			if(var_46_bool == 5356) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(504882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504883, 5358, 5357); //@t
				var_0_object->AddReply(504887, 5358, 5361); //@t
				return 0;
			}
			if(var_46_bool == 5358) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(504884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521895, 23069, 23068); //@t
				return 0;
			}
			if(var_46_bool == 23069) {
				func_865(var_47_cvector, "Distrust");
				var_0_object->SetMessage(521896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504886, -1, 5360); //@t
				var_0_object->AddReply(504885, -1, 5359); //@t
				return 0;
			}
			if(var_46_bool == 5370) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504928, 5421, 5416); //@t
				var_0_object->AddReply(504929, 5418, 5417); //@t
				return 0;
			}
			if(var_46_bool == 5418) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504931, 5358, 5419); //@t
				return 0;
			}
			if(var_46_bool == 5421) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521889, 23062, 23061); //@t
				var_0_object->AddReply(521891, 23062, 23063); //@t
				return 0;
			}
			if(var_46_bool == 23062) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504893, 5354, 5371); //@t
				var_0_object->AddReply(504933, 5423, 5422); //@t
				return 0;
			}
			if(var_46_bool == 5423) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(504934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(504935, 23066, 5424); //@t
				var_0_object->AddReply(521892, -1, 23065); //@t
				return 0;
			}
			if(var_46_bool == 23066) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(521893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521894, -1, 23067); //@t
				var_0_object->AddReply(542997, -1, 45445); //@t
				return 0;
			}
			if(var_46_bool == 32986) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531616, 32927, 32987); //@t
				return 0;
			}
			if(var_46_bool == 32978) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531610, 32980, 32979); //@t
				return 0;
			}
			if(var_46_bool == 32980) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531612, 32927, 32981); //@t
				var_0_object->AddReply(531613, 32931, 32983); //@t
				return 0;
			}
			if(var_46_bool == 32927) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531569, 32929, 32928); //@t
				var_0_object->AddReply(531595, 32960, 32959); //@t
				return 0;
			}
			if(var_46_bool == 32960) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531597, 32962, 32961); //@t
				var_0_object->AddReply(531607, 32962, 32975); //@t
				return 0;
			}
			if(var_46_bool == 32962) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531598); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531599, 32964, 32963); //@t
				var_0_object->AddReply(531606, 32933, 32973); //@t
				return 0;
			}
			if(var_46_bool == 32964) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531600); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531601, 32966, 32965); //@t
				var_0_object->AddReply(531605, 32966, 32971); //@t
				return 0;
			}
			if(var_46_bool == 32966) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531603, 32931, 32967); //@t
				var_0_object->AddReply(531604, 32931, 32969); //@t
				return 0;
			}
			if(var_46_bool == 32929) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531570); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531571, 32931, 32930); //@t
				var_0_object->AddReply(531594, 32931, 32957); //@t
				return 0;
			}
			if(var_46_bool == 32931) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531573, 32933, 32932); //@t
				var_0_object->AddReply(531593, 32933, 32955); //@t
				return 0;
			}
			if(var_46_bool == 32933) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531575, 32935, 32934); //@t
				var_0_object->AddReply(531590, 32952, 32951); //@t
				return 0;
			}
			if(var_46_bool == 32952) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531592, 32935, 32953); //@t
				return 0;
			}
			if(var_46_bool == 32935) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531577, 32937, 32936); //@t
				var_0_object->AddReply(531589, 32941, 32949); //@t
				return 0;
			}
			if(var_46_bool == 32937) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531579, 32939, 32938); //@t
				var_0_object->AddReply(531588, 32941, 32947); //@t
				return 0;
			}
			if(var_46_bool == 32939) {
				func_865(var_47_cvector, "Neutral");
				var_0_object->SetMessage(531580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531581, 32941, 32940); //@t
				return 0;
			}
			if(var_46_bool == 32941) {
				func_865(var_47_cvector, "Anger");
				var_0_object->SetMessage(531582); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531583, 34601, 32942); //@t
				var_0_object->AddReply(531587, -1, 32946); //@t
				return 0;
			}
			if(var_46_bool == 34601) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(533090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533091, 32943, 34602); //@t
				var_0_object->AddReply(533092, -1, 34603); //@t
				return 0;
			}
			if(var_46_bool == 32943) {
				func_865(var_47_cvector, "Jeer");
				var_0_object->SetMessage(531584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531585, -1, 32944); //@t
				var_0_object->AddReply(531586, -1, 32945); //@t
				return 0;
			}
			var_3_string = true;
			bool var_943_bool;
			func_6948(var_943_bool);
			if(var_943_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 7538) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7101();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_7113();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_7043();
			}
			if(var_47_cvector == 7539) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_7101();
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_7113();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_7043();
			}
			if(var_47_cvector == 7542) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_7101();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_7113();
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_7043();
			}
			if(var_47_cvector == 7543) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_7101();
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_7113();
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_7043();
			}
			if(var_47_cvector == 7557) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_7107();
			}
			if(var_47_cvector == 7839) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_7107();
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_7113();
			}
			if(var_47_cvector == 7843) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_7107();
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_7113();
			}
			if(var_46_bool == 7529) {
				bool var_148_bool = false;
				bool var_149_bool;
				func_7431(var_1_object);
				if(var_149_bool != 0) {
					bool var_155_bool;
					func_7467(var_1_object);
					if(var_155_bool != 0)
						var_148_bool = true;
				}
				if(var_148_bool != 0) {
					func_2760(var_47_cvector, "Neutral");
					var_0_object->SetMessage(506829); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506830, 7531, 7530); //@t
					var_0_object->AddReply(506844, 7547, 7546); //@t
					var_0_object->AddReply(506849, 7535, 7554); //@t
					var_0_object->AddReply(506848, 7547, 7552); //@t
					return 0;
				}
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506850); //@t
				var_0_object->ClearReplies(); //@t
				bool var_193_bool = false;
				bool var_194_bool;
				func_7443(var_1_object);
				if(var_194_bool != 0) {
					bool var_200_bool;
					func_7455(var_1_object);
					if(var_200_bool != 0)
						var_193_bool = true;
				}
				if(var_193_bool != 0)
					var_0_object->AddReply(506851, 7835, 7557); //@t
				var_0_object->AddReply(507536, -1, 8318); //@t
				var_0_object->AddReply(533836, -1, 35386); //@t
				return 0;
			}
			if(var_46_bool == 7835) {
				func_2760(var_47_cvector, "Anger");
				var_0_object->SetMessage(507116); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507117, 7840, 7836); //@t
				var_0_object->AddReply(507118, 7838, 7837); //@t
				return 0;
			}
			if(var_46_bool == 7838) {
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507120, -1, 7839); //@t
				var_0_object->AddReply(507124, -1, 7843); //@t
				return 0;
			}
			if(var_46_bool == 7840) {
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507125, 7845, 7844); //@t
				var_0_object->AddReply(507127, 7847, 7846); //@t
				return 0;
			}
			if(var_46_bool == 7847) {
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507128); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507129, 7845, 7848); //@t
				return 0;
			}
			if(var_46_bool == 7845) {
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507122, -1, 7841); //@t
				var_0_object->AddReply(507123, -1, 7842); //@t
				return 0;
			}
			if(var_46_bool == 7547) {
				func_2760(var_47_cvector, "Anger");
				var_0_object->SetMessage(506845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506846, 7533, 7548); //@t
				var_0_object->AddReply(506847, 7533, 7550); //@t
				return 0;
			}
			if(var_46_bool == 7531) {
				func_2760(var_47_cvector, "Anger");
				var_0_object->SetMessage(506831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506832, 7533, 7532); //@t
				return 0;
			}
			if(var_46_bool == 7533) {
				func_2760(var_47_cvector, "Anger");
				var_0_object->SetMessage(506833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506834, 7535, 7534); //@t
				var_0_object->AddReply(506843, 7535, 7544); //@t
				var_0_object->AddReply(506842, -1, 7543); //@t
				return 0;
			}
			if(var_46_bool == 7535) {
				func_2760(var_47_cvector, "Distrust");
				var_0_object->SetMessage(506835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506836, 7537, 7536); //@t
				var_0_object->AddReply(506840, 7537, 7540); //@t
				var_0_object->AddReply(506841, -1, 7542); //@t
				return 0;
			}
			if(var_46_bool == 7537) {
				func_2760(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506838, -1, 7538); //@t
				var_0_object->AddReply(506839, -1, 7539); //@t
				return 0;
			}
			var_3_string = true;
			bool var_315_bool;
			func_6948(var_315_bool);
			if(var_315_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xadf";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 11255) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7170();
			}
			if(var_47_cvector == 9939) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_7170();
			}
			if(var_47_cvector == 35971) {
				object var_117_object = var_1_object;
				func_7128(var_0_object);
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_7066();
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_7138();
			}
			if(var_47_cvector == 35972) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_7138();
			}
			if(var_47_cvector == 11275) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_7138();
			}
			if(var_47_cvector == 9905) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_7170();
			}
			if(var_47_cvector == 12577) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_7170();
			}
			if(var_47_cvector == 9918) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_7158();
			}
			if(var_47_cvector == 11511) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_7226();
			}
			if(var_47_cvector == 11515) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_7066();
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_7200();
				object var_209_object = var_1_object;
				func_6950(var_0_object);
			}
			if(var_47_cvector == 35973) {
				object var_216_object = var_1_object;
				func_6950(var_0_object);
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_7066();
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_7200();
			}
			if(var_47_cvector == 9915) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_7066();
				object var_226_object = var_1_object;
				func_7128(var_0_object);
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_7138();
			}
			if(var_47_cvector == 9916) {
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_7138();
			}
			if(var_46_bool == 9919) {
				bool var_236_bool;
				func_7563(var_1_object);
				if(var_236_bool != 0) {
					object var_244_object; object var_245_object;
					var_244_object = var_1_object;
					var_245_object = var_0_object;
					func_7316();
					object var_248_object; object var_249_object;
					var_248_object = var_1_object;
					var_249_object = var_0_object;
					func_7164();
					func_3468(var_47_cvector, "Neutral");
					var_0_object->SetMessage(509043); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509044, 9921, 9920); //@t
					return 0;
				}
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_7316();
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509024); //@t
				var_0_object->ClearReplies(); //@t
				bool var_277_bool;
				func_7587(var_1_object);
				if(var_277_bool != 0)
					var_0_object->AddReply(511376, 9899, 12575); //@t
				bool var_286_bool = false;
				bool var_287_bool;
				func_7551(var_1_object);
				if(var_287_bool != 0) {
					bool var_293_bool;
					func_7382(var_1_object);
					if(var_293_bool != 0)
						var_286_bool = true;
				}
				if(var_286_bool != 0)
					var_0_object->AddReply(509042, 9941, 9918); //@t
				bool var_302_bool = false;
				bool var_303_bool = false;
				bool var_304_bool;
				func_7599(var_1_object);
				if(var_304_bool != 0) {
					bool var_310_bool;
					func_7611(var_1_object);
					if(var_310_bool != 0)
						var_303_bool = true;
				}
				if(var_303_bool != 0) {
					bool var_316_bool;
					func_7394(var_1_object);
					if(var_316_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0)
					var_0_object->AddReply(510442, 11512, 11511); //@t
				bool var_338_bool = false;
				bool var_339_bool;
				func_7575(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_7394(var_1_object);
					if(var_345_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(509034, 9910, 9909); //@t
				var_0_object->AddReply(511147, -1, 12337); //@t
				return 0;
			}
			if(var_46_bool == 9910) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509036, 9914, 9911); //@t
				var_0_object->AddReply(509037, 9914, 9913); //@t
				return 0;
			}
			if(var_46_bool == 9914) {
				func_3468(var_47_cvector, "Anger");
				var_0_object->SetMessage(509038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509039, -1, 9915); //@t
				var_0_object->AddReply(509040, -1, 9916); //@t
				return 0;
			}
			if(var_46_bool == 11512) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510444, 11514, 11513); //@t
				return 0;
			}
			if(var_46_bool == 11514) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510446, -1, 11515); //@t
				var_0_object->AddReply(534367, -1, 35973); //@t
				return 0;
			}
			if(var_46_bool == 9941) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509065, 9943, 9942); //@t
				return 0;
			}
			if(var_46_bool == 9943) {
				func_3468(var_47_cvector, "Anger");
				var_0_object->SetMessage(509066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509067, 9946, 9944); //@t
				var_0_object->AddReply(509068, 9949, 9945); //@t
				return 0;
			}
			if(var_46_bool == 9949) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509073, 9948, 9950); //@t
				return 0;
			}
			if(var_46_bool == 9946) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509074, 9953, 9952); //@t
				var_0_object->AddReply(509070, 9948, 9947); //@t
				return 0;
			}
			if(var_46_bool == 9948) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511149, -1, 12338); //@t
				return 0;
			}
			if(var_46_bool == 9953) {
				func_3468(var_47_cvector, "Anger");
				var_0_object->SetMessage(509075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509076, -1, 9954); //@t
				var_0_object->AddReply(509077, -1, 9955); //@t
				return 0;
			}
			if(var_46_bool == 9899) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509026, 9901, 9900); //@t
				var_0_object->AddReply(509033, 9901, 9908); //@t
				return 0;
			}
			if(var_46_bool == 9901) {
				func_3468(var_47_cvector, "Distrust");
				var_0_object->SetMessage(509027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509028, 9903, 9902); //@t
				var_0_object->AddReply(509032, 9903, 9906); //@t
				return 0;
			}
			if(var_46_bool == 9903) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509031, -1, 9905); //@t
				var_0_object->AddReply(511378, -1, 12577); //@t
				return 0;
			}
			if(var_46_bool == 9921) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510222, 11270, 11269); //@t
				return 0;
			}
			if(var_46_bool == 11270) {
				func_3468(var_47_cvector, "Distrust");
				var_0_object->SetMessage(510223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509046, 11280, 9922); //@t
				var_0_object->AddReply(510224, 9929, 11271); //@t
				bool var_488_bool;
				func_7575(var_1_object);
				if(var_488_bool != 0)
					var_0_object->AddReply(509047, 9924, 9923); //@t
				return 0;
			}
			if(var_46_bool == 9924) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509048); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509049, 9929, 9925); //@t
				var_0_object->AddReply(510225, 11273, 11272); //@t
				return 0;
			}
			if(var_46_bool == 11273) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510227, 35970, 11274); //@t
				var_0_object->AddReply(510228, -1, 11275); //@t
				return 0;
			}
			if(var_46_bool == 35970) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(534364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534365, -1, 35971); //@t
				var_0_object->AddReply(534366, -1, 35972); //@t
				return 0;
			}
			if(var_46_bool == 9929) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509060, 9938, 9937); //@t
				return 0;
			}
			if(var_46_bool == 9938) {
				func_3468(var_47_cvector, "Anger");
				var_0_object->SetMessage(509061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509063, 11254, 9940); //@t
				var_0_object->AddReply(509062, -1, 9939); //@t
				return 0;
			}
			if(var_46_bool == 11254) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510209, -1, 11255); //@t
				var_0_object->AddReply(510231, -1, 11278); //@t
				return 0;
			}
			if(var_46_bool == 11280) {
				func_3468(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510233, 9938, 11281); //@t
				var_0_object->AddReply(510234, 9938, 11282); //@t
				return 0;
			}
			var_3_string = true;
			bool var_560_bool;
			func_6948(var_560_bool);
			if(var_560_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xda3";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 13011) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7274();
			}
			if(var_47_cvector == 16781) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_7274();
			}
			if(var_47_cvector == 16782) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_7274();
			}
			if(var_47_cvector == 16772) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_7274();
			}
			if(var_46_bool == 13001) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511791); //@t
				var_0_object->ClearReplies(); //@t
				bool var_88_bool = false;
				bool var_89_bool;
				func_7635(var_1_object);
				if(var_89_bool != 0) {
					bool var_97_bool;
					func_7623(var_1_object);
					if(var_97_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_object->AddReply(511792, 13003, 13002); //@t
				bool var_106_bool;
				func_7755(var_1_object);
				if(var_106_bool != 0)
					var_0_object->AddReply(515713, 16770, 16769); //@t
				var_0_object->AddReply(511794, -1, 13004); //@t
				return 0;
			}
			if(var_46_bool == 16770) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515714); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515717, 16774, 16773); //@t
				var_0_object->AddReply(515719, 16774, 16775); //@t
				return 0;
			}
			if(var_46_bool == 16774) {
				func_4431(var_47_cvector, "Jeer");
				var_0_object->SetMessage(515718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515726, 16784, 16783); //@t
				return 0;
			}
			if(var_46_bool == 16784) {
				func_4431(var_47_cvector, "Jeer");
				var_0_object->SetMessage(515727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515728, 16787, 16786); //@t
				return 0;
			}
			if(var_46_bool == 16787) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515729); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515730, -1, 16788); //@t
				var_0_object->AddReply(515731, -1, 16789); //@t
				return 0;
			}
			if(var_46_bool == 13003) {
				func_4431(var_47_cvector, "Jeer");
				var_0_object->SetMessage(511793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511795, 13006, 13005); //@t
				var_0_object->AddReply(515711, 16768, 16767); //@t
				return 0;
			}
			if(var_46_bool == 16768) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515715, 13006, 16771); //@t
				var_0_object->AddReply(515716, -1, 16772); //@t
				return 0;
			}
			if(var_46_bool == 13006) {
				func_4431(var_47_cvector, "Distrust");
				var_0_object->SetMessage(511796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511797, 13008, 13007); //@t
				return 0;
			}
			if(var_46_bool == 13008) {
				func_4431(var_47_cvector, "Distrust");
				var_0_object->SetMessage(511798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511799, 13010, 13009); //@t
				var_0_object->AddReply(515720, 16778, 16777); //@t
				return 0;
			}
			if(var_46_bool == 16778) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515721); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515722, 16780, 16779); //@t
				return 0;
			}
			if(var_46_bool == 16780) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(515723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515724, -1, 16781); //@t
				var_0_object->AddReply(515725, -1, 16782); //@t
				return 0;
			}
			if(var_46_bool == 13010) {
				func_4431(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511801, -1, 13011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_213_bool;
			func_6948(var_213_bool);
			if(var_213_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1166";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_46_bool == 13415) {
				bool var_52_bool = false;
				bool var_53_bool;
				func_7731(var_1_object);
				if(var_53_bool != 0) {
					bool var_61_bool;
					func_7743(var_1_object);
					if(var_61_bool != 0)
						var_52_bool = true;
				}
				if(var_52_bool != 0) {
					object var_67_object; object var_68_object;
					var_67_object = var_1_object;
					var_68_object = var_0_object;
					func_7310();
					func_4957(var_47_cvector, "Neutral");
					var_0_object->SetMessage(512258); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512259, 13417, 13416); //@t
					var_0_object->AddReply(541804, -1, 44016); //@t
					return 0;
				}
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513776, -1, 15012); //@t
				var_0_object->AddReply(541596, -1, 43760); //@t
				return 0;
			}
			if(var_46_bool == 13417) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512261, 13419, 13418); //@t
				var_0_object->AddReply(541805, 44029, 44017); //@t
				return 0;
			}
			if(var_46_bool == 44029) {
				func_4957(var_47_cvector, "Anger");
				var_0_object->SetMessage(541817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541818, 13421, 44030); //@t
				return 0;
			}
			if(var_46_bool == 13419) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512263, 13421, 13420); //@t
				return 0;
			}
			if(var_46_bool == 13421) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512265, 13423, 13422); //@t
				return 0;
			}
			if(var_46_bool == 13423) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512267, 13425, 13424); //@t
				var_0_object->AddReply(541819, 44033, 44032); //@t
				return 0;
			}
			if(var_46_bool == 44033) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(541820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541821, 44035, 44034); //@t
				return 0;
			}
			if(var_46_bool == 44035) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(541822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541823, 44037, 44036); //@t
				var_0_object->AddReply(541826, 13425, 44039); //@t
				return 0;
			}
			if(var_46_bool == 44037) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(541824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541825, 13425, 44038); //@t
				return 0;
			}
			if(var_46_bool == 13425) {
				func_4957(var_47_cvector, "Anger");
				var_0_object->SetMessage(512268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512269, 13427, 13426); //@t
				return 0;
			}
			if(var_46_bool == 13427) {
				func_4957(var_47_cvector, "Anger");
				var_0_object->SetMessage(512270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512271, 13429, 13428); //@t
				return 0;
			}
			if(var_46_bool == 13429) {
				func_4957(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512273, -1, 13430); //@t
				var_0_object->AddReply(541827, -1, 44042); //@t
				return 0;
			}
			var_3_string = true;
			bool var_192_bool;
			func_6948(var_192_bool);
			if(var_192_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1374";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_47_cvector == 35708) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7078();
				object var_95_object = var_1_object;
				func_6960(var_0_object);
			}
			if(var_47_cvector == 35709) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_7078();
				object var_125_object = var_1_object;
				func_6960(var_0_object);
			}
			if(var_46_bool == 35702) {
				func_5422(var_47_cvector, "Neutral");
				var_0_object->SetMessage(534109); //@t
				var_0_object->ClearReplies(); //@t
				bool var_147_bool;
				func_7370(var_1_object);
				if(var_147_bool != 0)
					var_0_object->AddReply(534110, 38263, 35703); //@t
				var_0_object->AddReply(534111, -1, 35704); //@t
				return 0;
			}
			if(var_46_bool == 38263) {
				func_5422(var_47_cvector, "Grin");
				var_0_object->SetMessage(536470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536471, 38265, 38264); //@t
				var_0_object->AddReply(536477, 38271, 38270); //@t
				return 0;
			}
			if(var_46_bool == 38271) {
				func_5422(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536481, 38267, 38274); //@t
				var_0_object->AddReply(536480, 35705, 38273); //@t
				return 0;
			}
			if(var_46_bool == 38265) {
				func_5422(var_47_cvector, "Jeer");
				var_0_object->SetMessage(536472); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536473, 38267, 38266); //@t
				var_0_object->AddReply(536479, 35705, 38272); //@t
				return 0;
			}
			if(var_46_bool == 38267) {
				func_5422(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536475, 35705, 38268); //@t
				var_0_object->AddReply(536482, 38279, 38278); //@t
				return 0;
			}
			if(var_46_bool == 38279) {
				func_5422(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536484, 35705, 38280); //@t
				var_0_object->AddReply(536485, 35705, 38281); //@t
				return 0;
			}
			if(var_46_bool == 35705) {
				func_5422(var_47_cvector, "Grin");
				var_0_object->SetMessage(534112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534445, 38305, 36078); //@t
				var_0_object->AddReply(536486, 36079, 38284); //@t
				return 0;
			}
			if(var_46_bool == 38305) {
				func_5422(var_47_cvector, "Neutral");
				var_0_object->SetMessage(536505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536506, 36079, 38306); //@t
				var_0_object->AddReply(536507, 36079, 38307); //@t
				return 0;
			}
			if(var_46_bool == 36079) {
				func_5422(var_47_cvector, "Grin");
				var_0_object->SetMessage(534446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534113, 35707, 35706); //@t
				return 0;
			}
			if(var_46_bool == 35707) {
				func_5422(var_47_cvector, "Grin");
				var_0_object->SetMessage(534114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534115, -1, 35708); //@t
				var_0_object->AddReply(534116, -1, 35709); //@t
				return 0;
			}
			var_3_string = true;
			bool var_248_bool;
			func_6948(var_248_bool);
			if(var_248_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1545";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_46_bool == 37348) {
				func_5863(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535663, 42111, 37349); //@t
				var_0_object->AddReply(540003, -1, 41974); //@t
				var_0_object->AddReply(540138, -1, 42110); //@t
				return 0;
			}
			if(var_46_bool == 42111) {
				func_5863(var_47_cvector, "Grin");
				var_0_object->SetMessage(540139); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540219, 42200, 42199); //@t
				var_0_object->AddReply(540221, 42202, 42201); //@t
				return 0;
			}
			if(var_46_bool == 42202) {
				func_5863(var_47_cvector, "Grin");
				var_0_object->SetMessage(540222); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540223, 42200, 42203); //@t
				return 0;
			}
			if(var_46_bool == 42200) {
				func_5863(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540224, 42209, 42205); //@t
				var_0_object->AddReply(540225, 42207, 42206); //@t
				return 0;
			}
			if(var_46_bool == 42207) {
				func_5863(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540227, -1, 42208); //@t
				var_0_object->AddReply(540231, -1, 42212); //@t
				return 0;
			}
			if(var_46_bool == 42209) {
				func_5863(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540229, -1, 42210); //@t
				var_0_object->AddReply(540230, -1, 42211); //@t
				return 0;
			}
			var_3_string = true;
			bool var_126_bool;
			func_6948(var_126_bool);
			if(var_126_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x16fe";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_6814();
			if(var_46_int == 42551) {
				func_6181(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_6948(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x183c";
	
	}

}


maintask task_18
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		var_46_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_6252(var_45_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, int var_46_int)
	{
		if(var_46_int == 10) {
			func_6317();
			bool var_50_bool = false;
			bool var_51_bool;
			func_6538(var_51_bool);
			if(var_51_bool != 0) {
				bool var_54_bool;
				func_6286(var_54_bool);
				if(var_54_bool != 0)
					var_50_bool = true;
			}
			if(var_50_bool != 0) {
				bool var_71_bool;
				func_6266(var_71_bool);
				if(var_71_bool != 0) {
					bool var_90_bool; object var_91_object;
					object var_92_object;
					func_6821(var_92_object);
					var_92_object = var_91_object;
					func_6688(var_90_bool, var_91_object);
				}
			} else {
				func_6281(var_46_int);
				func_6308();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		func_6499();
		func_6317();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		@StopGroup0();
		func_6317();
		func_6768("Neutral");
		func_6308();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, bool var_46_bool)
	{
		if(var_46_bool != 0)
			func_6308();
		else
			func_6768("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, object var_46_object)
	{
		bool var_48_bool;
		@IsOverrideActive(var_48_bool);
		if(!var_48_bool) { //@nz
			disable OnUse;
			func_6499();
			bool var_50_bool; object var_51_object;
			var_46_object = var_51_object;
			func_6529(var_50_bool, var_51_object);
			enable OnUse;
			object var_64_object;
			var_46_object = var_64_object;
			func_8005(var_64_object);
			func_6768("Neutral");
			func_6317();
			func_6308();
		}
	}

}


void func_0(object var_0_object, int var_752_int, object var_753_object)
{
	var_0_object = var_753_object;
	bool var_763_bool; object var_764_object;
	var_753_object = var_764_object;
	func_6543(var_763_bool, var_764_object, 70.0);
	if(!var_763_bool) { //@nz
		var_752_int = -2;
		return 8;
	}
	object var_759_object;
	@CreateDialog(var_759_object);
	int var_767_int;
	func_6942(var_767_int);
	var_759_object->SetNPCName(var_767_int);
	int var_768_int;
	func_6940(var_768_int);
	var_759_object->SetNPCDescription(var_768_int);
	string var_769_string;
	func_6944(var_769_string);
	var_759_object->SetPhoto(var_769_string);
	string var_770_string;
	func_6946(var_770_string);
	var_759_object->SetPhoto2(var_770_string);
	int var_771_int;
	func_7988(var_771_int);
	var_759_object->SetPlayerName(var_771_int);
	bool var_760_bool;
	@IsOverrideActive(var_760_bool);
	if(var_760_bool != 0) {
		var_752_int = -2;
		return 8;
	}
	@DoDialog(var_759_object);
	bool var_773_bool; object var_774_object;
	object var_775_object;
	func_6821(var_775_object);
	var_775_object = var_774_object;
	func_6630(var_773_bool, var_774_object);
	object var_776_object; object var_777_object;
	var_753_object = var_776_object;
	var_759_object = var_777_object;
	TaskCall(1);
	func_81(var_778_object, var_779_object, var_780_string, var_781_bool, var_776_object, var_777_object);
	TaskReturn();
	bool var_762_bool;
	var_759_object->IsDialogEnd(var_762_bool);
	
	for(;;) {
		var_861_bool = !var_762_bool; //@nz
		if(var_861_bool == 0) goto Label_70;
		@sync();
		var_759_object->IsDialogEnd(var_762_bool);
	}
	
Label_70:
	object var_862_object;
	var_753_object = var_862_object;
	func_6612();
	@StopDialog(var_759_object);
	var_759_object->GetReturnValue(-1);
	int var_761_int = var_752_int;
}
EMIT "Stack[-4] = 0";


void func_7170(void)
{
	@SetVariable("d3q02", 1);
	object var_58_object;
	func_7938(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_6896(var_69_float);
	var_55_object->AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", 0, 511379, var_69_float);
	func_7845();
	func_7871();
	object var_103_object;
	func_6842(var_103_object, "quest_d3_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7683(bool var_832_bool)
{
	int var_834_int;
	func_6837(var_834_int, "ood6Georg1");
	if(var_834_int == 0) {
		var_832_bool = true;
		return 0;
	}
	var_832_bool = false;
}


// @pe
void func_7695(bool var_841_bool)
{
	int var_843_int;
	func_6837(var_843_int, "ood6Georg2");
	if(var_843_int == 0) {
		var_841_bool = true;
		return 0;
	}
	var_841_bool = false;
}


// @pe
void func_7707(bool var_793_bool)
{
	int var_795_int;
	func_6837(var_795_int, "d6RubinGoesToGeorg");
	if(var_795_int != 0) {
		var_793_bool = true;
		return 0;
	}
	var_793_bool = false;
}


// @pe
void func_7200(void)
{
	func_7884();
	bool var_206_bool;
	func_6884(var_206_bool, "quest_d3_02", "completed");
}


void func_6688(bool var_156_bool, object var_157_object)
{
	string var_163_string; bool var_165_bool; int var_166_int; string var_167_string;
	var_163_string = "c";
	int var_164_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_157_object->HasProperty((var_163_string + (var_164_int + 1)), var_165_bool);
			if(!var_165_bool) { //@nz
			} else {
				var_164_int += 1;
			}
		}
		if(!var_164_int) { //@nz
			var_156_bool = false;
			return 10;
		}
		var_166_int = 0;
		if(var_164_int > 1)
			@irand(var_166_int, var_164_int);
		var_157_object->GetProperty((var_163_string + (var_166_int + 1)), var_167_string);
		bool var_179_bool; string var_180_string;
		var_167_string = var_180_string;
		func_6799(var_179_bool, var_180_string);
		var_179_bool = var_156_bool;
		return 10;

	}
}


void func_547(object var_0_object, int var_73_int, object var_74_object)
{
	var_0_object = var_74_object;
	bool var_84_bool; object var_85_object;
	var_74_object = var_85_object;
	func_6543(var_84_bool, var_85_object, 70.0);
	if(!var_84_bool) { //@nz
		var_73_int = -2;
		return 8;
	}
	object var_80_object;
	@CreateDialog(var_80_object);
	int var_132_int;
	func_6942(var_132_int);
	var_80_object->SetNPCName(var_132_int);
	int var_133_int;
	func_6940(var_133_int);
	var_80_object->SetNPCDescription(var_133_int);
	string var_134_string;
	func_6944(var_134_string);
	var_80_object->SetPhoto(var_134_string);
	string var_135_string;
	func_6946(var_135_string);
	var_80_object->SetPhoto2(var_135_string);
	int var_136_int;
	func_7988(var_136_int);
	var_80_object->SetPlayerName(var_136_int);
	bool var_81_bool;
	@IsOverrideActive(var_81_bool);
	if(var_81_bool != 0) {
		var_73_int = -2;
		return 8;
	}
	@DoDialog(var_80_object);
	bool var_145_bool; object var_146_object;
	object var_147_object;
	func_6821(var_147_object);
	var_147_object = var_146_object;
	func_6630(var_145_bool, var_146_object);
	object var_235_object; object var_236_object;
	var_74_object = var_235_object;
	var_80_object = var_236_object;
	TaskCall(3);
	func_628(var_237_object, var_238_object, var_239_string, var_240_bool, var_235_object, var_236_object);
	TaskReturn();
	bool var_83_bool;
	var_80_object->IsDialogEnd(var_83_bool);
	
	for(;;) {
		var_411_bool = !var_83_bool; //@nz
		if(var_411_bool == 0) goto Label_617;
		@sync();
		var_80_object->IsDialogEnd(var_83_bool);
	}
	
Label_617:
	object var_412_object;
	var_74_object = var_412_object;
	func_6612();
	@StopDialog(var_80_object);
	var_80_object->GetReturnValue(-1);
	int var_82_int = var_73_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6181(object var_2_object, string var_1102_string)
{
	bool var_1103_bool;
	func_6948(var_1103_bool);
	if(!var_1103_bool) //@nz
		return 0;
	if(var_1102_string == var_2_object)
		return 0;
	string var_1106_string; bool var_1107_bool;
	var_1102_string = var_1106_string;
	if(var_1102_string == "")
		var_1107_bool = false;
	else
		var_1107_bool = true;
	func_6784(var_1106_string, var_1107_bool);
	var_2_object = var_1102_string;
	
}


// @pe
void func_7719(bool var_799_bool)
{
	int var_801_int;
	func_6837(var_801_int, "ood6Georg3");
	if(var_801_int == 0) {
		var_799_bool = true;
		return 0;
	}
	var_799_bool = false;
}


// @pe
void func_7210(object var_109_object)
{
	object var_113_object;
	func_7938(var_113_object);
	object var_110_object;
	var_113_object = var_110_object;
	func_7955(var_110_object, "pt_map_viktor", (float)2);
	object var_133_object;
	func_7938(var_133_object);
	var_109_object->ShowMap(var_133_object);
}


// @pe
void func_7731(bool var_897_bool)
{
	int var_899_int;
	func_6837(var_899_int, "d8KainIsReason");
	if(var_899_int == 1)
		var_897_bool = true;
	var_897_bool = false;
}


// @pe
void func_7226(void)
{
	@SetVariable("ood3Georg3", 1);
}


// @pe
void func_7743(bool var_903_bool)
{
	int var_905_int;
	func_6837(var_905_int, "ood8Georg1");
	if(var_905_int == 0) {
		var_903_bool = true;
		return 0;
	}
	var_903_bool = false;
}


// @pe
void func_7232(void)
{
	@SetVariable("ood1Georg1", 1);
}


void func_6725(bool var_187_bool, object var_188_object)
{
	bool var_196_bool; int var_197_int; string var_198_string;
	int var_200_int;
	func_6901(var_200_int);
	string var_194_string = ("d" + var_200_int) + "m";
	int var_195_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_188_object->HasProperty((var_194_string + (var_195_int + 1)), var_196_bool);
			if(!var_196_bool) { //@nz
			} else {
				var_195_int += 1;
			}
		}
		if(!var_195_int) { //@nz
			var_187_bool = false;
			return 10;
		}
		var_197_int = 0;
		if(var_195_int > 1)
			@irand(var_197_int, var_195_int);
		var_188_object->GetProperty((var_194_string + (var_197_int + 1)), var_198_string);
		bool var_214_bool; string var_215_string;
		var_198_string = var_215_string;
		func_6799(var_214_bool, var_215_string);
		var_214_bool = var_187_bool;
		return 10;

	}
}


// @pe
void func_7238(void)
{
	@SetVariable("ood1Georg2", 1);
}


// @pe
void func_7755(bool var_728_bool)
{
	int var_730_int;
	func_6837(var_730_int, "ood5Georg2");
	if(var_730_int == 0) {
		var_728_bool = true;
		return 0;
	}
	var_728_bool = false;
}


// @pe
void func_7244(void)
{
	@SetVariable("ood1Georg3", 1);
}


// @pe
void func_2639(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_446_object, object var_447_object)
{
	var_0_object = var_447_object;
	var_1_object = var_446_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_453_bool = false;
		bool var_454_bool;
		func_7431(var_1_object);
		if(var_454_bool != 0) {
			bool var_460_bool;
			func_7467(var_1_object);
			if(var_460_bool != 0)
				var_453_bool = true;
		}
		if(var_453_bool != 0) {
			func_2760(var_447_object, "Neutral");
			var_0_object->SetMessage(506829); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506830, 7531, 7530); //@t
			var_0_object->AddReply(506844, 7547, 7546); //@t
			var_0_object->AddReply(506849, 7535, 7554); //@t
			var_0_object->AddReply(506848, 7547, 7552); //@t
		} else {
					func_2760(var_447_object, "Neutral");
					var_0_object->SetMessage(506850); //@t
					var_0_object->ClearReplies(); //@t
					bool var_497_bool = false;
					bool var_498_bool;
					func_7443(var_1_object);
					if(var_498_bool != 0) {
						bool var_504_bool;
						func_7455(var_1_object);
						if(var_504_bool != 0)
							var_497_bool = true;
					}
					if(var_497_bool != 0)
						var_0_object->AddReply(506851, 7835, 7557); //@t
					var_0_object->AddReply(507536, -1, 8318); //@t
					var_0_object->AddReply(533836, -1, 35386); //@t
		}
	}
	for(;;) {
		bool var_487_bool;
		func_6948(var_487_bool);
		if(var_487_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6768(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2759;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2759:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa53";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_776_object, object var_777_object)
{
	var_0_object = var_777_object;
	var_1_object = var_776_object;
	var_3_string = false;
	if(1 != 0) {
		func_203(var_777_object, "Neutral");
		var_0_object->SetMessage(512009); //@t
		var_0_object->ClearReplies(); //@t
		bool var_792_bool = false;
		bool var_793_bool;
		func_7707(var_1_object);
		if(var_793_bool != 0) {
			bool var_799_bool;
			func_7719(var_1_object);
			if(var_799_bool != 0)
				var_792_bool = true;
		}
		if(var_792_bool != 0)
			var_0_object->AddReply(512010, 13230, 13228); //@t
		bool var_808_bool = false;
		bool var_809_bool = false;
		bool var_810_bool = false;
		bool var_811_bool;
		func_7647(var_1_object);
		if(!var_811_bool) { //@nz
			bool var_818_bool;
			func_7659(var_1_object);
			if(!var_818_bool) //@nz
				var_810_bool = true;
		}
		if(var_810_bool != 0) {
			bool var_825_bool;
			func_7671(var_1_object);
			if(!var_825_bool) //@nz
				var_809_bool = true;
		}
		if(var_809_bool != 0) {
			bool var_832_bool;
			func_7683(var_1_object);
			if(var_832_bool != 0)
				var_808_bool = true;
		}
		if(var_808_bool != 0)
			var_0_object->AddReply(512014, 13233, 13232); //@t
		bool var_841_bool;
		func_7695(var_1_object);
		if(var_841_bool != 0)
			var_0_object->AddReply(512018, 3560, 13236); //@t
		var_0_object->AddReply(512011, -1, 13229); //@t
		goto Label_173;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_173:
	bool var_853_bool;
	func_6948(var_853_bool);
	if(var_853_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6768(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_202;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_202:
		return 0;

	}
	
}


// @pe
void func_7250(void)
{
	@SetVariable("KnowRubin", 1);
}


void func_7767(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 670, 2, 534124);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_7910(var_77_bool, var_78_object, 666);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7256(void)
{
	@SetVariable("KnowSaburivClan", 1);
}


void func_5719(object var_0_object, int var_1012_int, object var_1013_object)
{
	var_0_object = var_1013_object;
	bool var_1023_bool; object var_1024_object;
	var_1013_object = var_1024_object;
	func_6543(var_1023_bool, var_1024_object, 70.0);
	if(!var_1023_bool) { //@nz
		var_1012_int = -2;
		return 8;
	}
	object var_1019_object;
	@CreateDialog(var_1019_object);
	int var_1027_int;
	func_6942(var_1027_int);
	var_1019_object->SetNPCName(var_1027_int);
	int var_1028_int;
	func_6940(var_1028_int);
	var_1019_object->SetNPCDescription(var_1028_int);
	string var_1029_string;
	func_6944(var_1029_string);
	var_1019_object->SetPhoto(var_1029_string);
	string var_1030_string;
	func_6946(var_1030_string);
	var_1019_object->SetPhoto2(var_1030_string);
	int var_1031_int;
	func_7988(var_1031_int);
	var_1019_object->SetPlayerName(var_1031_int);
	bool var_1020_bool;
	@IsOverrideActive(var_1020_bool);
	if(var_1020_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	@DoDialog(var_1019_object);
	bool var_1033_bool; object var_1034_object;
	object var_1035_object;
	func_6821(var_1035_object);
	var_1035_object = var_1034_object;
	func_6630(var_1033_bool, var_1034_object);
	object var_1036_object; object var_1037_object;
	var_1013_object = var_1036_object;
	var_1019_object = var_1037_object;
	TaskCall(15);
	func_5800(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object);
	TaskReturn();
	bool var_1022_bool;
	var_1019_object->IsDialogEnd(var_1022_bool);
	
	for(;;) {
		var_1069_bool = !var_1022_bool; //@nz
		if(var_1069_bool == 0) goto Label_5789;
		@sync();
		var_1019_object->IsDialogEnd(var_1022_bool);
	}
	
Label_5789:
	object var_1070_object;
	var_1013_object = var_1070_object;
	func_6612();
	@StopDialog(var_1019_object);
	var_1019_object->GetReturnValue(-1);
	int var_1021_int = var_1012_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7262(void)
{
	@SetVariable("KnowOlgimskiClan", 1);
}


// @pe
void func_7268(void)
{
	@SetVariable("KnowKainClan", 1);
}


void func_7780(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 2, 1, 503073);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7910(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7274(void)
{
	@SetVariable("ood5Georg1", 1);
}


void func_6252(object var_0_object)
{
	bool var_47_bool;
	func_6538(var_47_bool);
	if(!var_47_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_6428();
	}
}
EMIT "Return(); Pop(0)";


void func_6768(string var_296_string)
{
	bool var_300_bool; float var_301_float; float var_302_float;
	@lshHasAnimation(var_300_bool, var_296_string);
	if(var_300_bool != 0) {
		@lshGetAnimTimes(var_296_string, var_301_float, var_302_float);
		@lshPlayAnimation(var_301_float, var_302_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_296_string);
	}
	
}


// @pe
void func_7280(void)
{
	@SetVariable("KnowAlexandr", 1);
}


void func_7793(void)
{
	object var_151_object;
	@CreateDiaryEntry(var_151_object, 622, 1, 532196);
	bool var_155_bool; object var_156_object;
	var_151_object = var_156_object;
	func_7910(var_155_bool, var_156_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_628(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_235_object, object var_236_object)
{
	var_0_object = var_236_object;
	var_1_object = var_235_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_242_bool;
		func_7515(var_1_object);
		if(var_242_bool != 0) {
			object var_250_object; object var_251_object;
			var_250_object = var_1_object;
			var_251_object = var_0_object;
			func_7232();
			object var_254_object; object var_255_object;
			var_254_object = var_1_object;
			var_255_object = var_0_object;
			func_7027();
			func_865(var_236_object, "Anger");
			var_0_object->SetMessage(531566); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531567, 32927, 32926); //@t
			var_0_object->AddReply(531608, 32978, 32977); //@t
			var_0_object->AddReply(531614, 32986, 32985); //@t
		} else {
					bool var_312_bool;
					func_7346(var_1_object);
					if(var_312_bool == 0) goto Label_699;
					func_865(var_236_object, "Neutral");
					var_0_object->SetMessage(504850); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(504879, 5370, 5353); //@t
					var_0_object->AddReply(504890, 5354, 5367); //@t
		}
	}
Label_835:
	for(;;) {
		bool var_294_bool;
		func_6948(var_294_bool);
		if(var_294_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6768(var_2_object);
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
	
Label_699:
	func_865(var_236_object, "Neutral");
	var_0_object->SetMessage(507627); //@t
	var_0_object->ClearReplies(); //@t
	bool var_328_bool;
	func_7334(var_1_object);
	if(var_328_bool != 0)
		var_0_object->AddReply(531617, 32990, 32989); //@t
	bool var_337_bool = false;
	bool var_338_bool = false;
	bool var_339_bool;
	func_7527(var_1_object);
	if(var_339_bool != 0) {
		bool var_345_bool;
		func_7322(var_1_object);
		if(!var_345_bool) //@nz
			var_338_bool = true;
	}
	if(var_338_bool != 0) {
		bool var_352_bool;
		func_7334(var_1_object);
		if(!var_352_bool) //@nz
			var_337_bool = true;
	}
	if(var_337_bool != 0)
		var_0_object->AddReply(507629, 5329, 8418); //@t
	bool var_358_bool = false;
	bool var_359_bool = false;
	bool var_360_bool;
	func_7539(var_1_object);
	if(var_360_bool != 0) {
		bool var_366_bool;
		func_7322(var_1_object);
		if(!var_366_bool) //@nz
			var_359_bool = true;
	}
	if(var_359_bool != 0) {
		bool var_369_bool;
		func_7334(var_1_object);
		if(!var_369_bool) //@nz
			var_358_bool = true;
	}
	if(var_358_bool != 0)
		var_0_object->AddReply(507632, 5334, 8421); //@t
	bool var_375_bool = false;
	bool var_376_bool = false;
	bool var_377_bool;
	func_7491(var_1_object);
	if(var_377_bool != 0) {
		bool var_383_bool;
		func_7334(var_1_object);
		if(!var_383_bool) //@nz
			var_376_bool = true;
	}
	if(var_376_bool != 0) {
		bool var_386_bool;
		func_7322(var_1_object);
		if(!var_386_bool) //@nz
			var_375_bool = true;
	}
	if(var_375_bool != 0)
		var_0_object->AddReply(531620, 32993, 32992); //@t
	bool var_392_bool = false;
	bool var_393_bool;
	func_7358(var_1_object);
	if(var_393_bool != 0) {
		bool var_399_bool;
		func_7503(var_1_object);
		if(var_399_bool != 0)
			var_392_bool = true;
	}
	if(var_392_bool != 0)
		var_0_object->AddReply(531622, 32995, 32994); //@t
	var_0_object->AddReply(507658, -1, 8451); //@t
	goto Label_835;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x278";


// @pe
void func_7286(void)
{
	@SetVariable("KnowBigVlad", 1);
}


void func_6266(bool var_71_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) //@nz
		var_71_bool = false;
	bool var_76_bool; object var_77_object;
	var_73_object = var_77_object;
	func_6529(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7292(void)
{
	@SetVariable("ood6Georg1", 1);
}


void func_7806(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 31, 1, 512113);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7910(var_105_bool, var_106_object, 2);
}
EMIT "Stack[-1] = 0";


void func_6784(string var_271_string, bool var_272_bool)
{
	bool var_278_bool; float var_279_float; float var_280_float;
	@lshHasAnimation(var_278_bool, var_271_string);
	if(var_278_bool != 0) {
		@lshGetAnimTimes(var_271_string, var_279_float, var_280_float);
		@lshPlayAnimation(var_279_float, var_280_float, var_272_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_271_string);
	}
	
}


// @pe
void func_7298(void)
{
	@SetVariable("ood6Georg2", 1);
}


// @pe
void func_7304(void)
{
	@SetVariable("ood6Georg3", 1);
}


void func_6281(object var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_123_float, var_124_float);
}


void func_7819(void)
{
	object var_97_object;
	@CreateDiaryEntry(var_97_object, 628, 1, 532757);
	bool var_101_bool; object var_102_object;
	var_97_object = var_102_object;
	func_7910(var_101_bool, var_102_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7310(void)
{
	@SetVariable("ood8Georg1", 1);
}


void func_6286(bool var_54_bool)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	if(!var_57_object) { //@nz
		var_54_bool = false;
		return 4;
	}
	float var_61_float; object var_62_object;
	func_6504(var_61_float, var_62_object);
	if(var_61_float > 90000.0) {
		var_54_bool = false;
		return 4;
	}
	bool var_58_bool;
	@CanSee(var_58_bool, var_62_object);
	var_58_bool = var_54_bool;
}
EMIT "Stack[-2] = 0";


void func_6799(bool var_179_bool, string var_180_string)
{
	bool var_182_bool;
	bool var_183_bool;
	func_6948(var_183_bool);
	if(var_183_bool != 0) {
		@lshHasSpeech(var_182_bool, var_180_string);
		if(var_182_bool != 0) {
			@lshPlaySpeech(var_180_string);
			var_179_bool = true;
		}
	}
	var_179_bool = false;
}


// @pe
void func_7316(void)
{
	@SetVariable("d3GeorgVisit", 1);
}


void func_3223(object var_0_object, int var_523_int, object var_524_object)
{
	var_0_object = var_524_object;
	bool var_534_bool; object var_535_object;
	var_524_object = var_535_object;
	func_6543(var_534_bool, var_535_object, 70.0);
	if(!var_534_bool) { //@nz
		var_523_int = -2;
		return 8;
	}
	object var_530_object;
	@CreateDialog(var_530_object);
	int var_538_int;
	func_6942(var_538_int);
	var_530_object->SetNPCName(var_538_int);
	int var_539_int;
	func_6940(var_539_int);
	var_530_object->SetNPCDescription(var_539_int);
	string var_540_string;
	func_6944(var_540_string);
	var_530_object->SetPhoto(var_540_string);
	string var_541_string;
	func_6946(var_541_string);
	var_530_object->SetPhoto2(var_541_string);
	int var_542_int;
	func_7988(var_542_int);
	var_530_object->SetPlayerName(var_542_int);
	bool var_531_bool;
	@IsOverrideActive(var_531_bool);
	if(var_531_bool != 0) {
		var_523_int = -2;
		return 8;
	}
	@DoDialog(var_530_object);
	bool var_544_bool; object var_545_object;
	object var_546_object;
	func_6821(var_546_object);
	var_546_object = var_545_object;
	func_6630(var_544_bool, var_545_object);
	object var_547_object; object var_548_object;
	var_524_object = var_547_object;
	var_530_object = var_548_object;
	TaskCall(7);
	func_3304(var_549_object, var_550_object, var_551_string, var_552_bool, var_547_object, var_548_object);
	TaskReturn();
	bool var_533_bool;
	var_530_object->IsDialogEnd(var_533_bool);
	
	for(;;) {
		var_668_bool = !var_533_bool; //@nz
		if(var_668_bool == 0) goto Label_3293;
		@sync();
		var_530_object->IsDialogEnd(var_533_bool);
	}
	
Label_3293:
	object var_669_object;
	var_524_object = var_669_object;
	func_6612();
	@StopDialog(var_530_object);
	var_530_object->GetReturnValue(-1);
	int var_532_int = var_523_int;
}
EMIT "Stack[-4] = 0";


void func_7832(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 626, 1, 532755);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_7910(var_65_bool, var_66_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7322(bool var_345_bool)
{
	int var_347_int;
	func_6837(var_347_int, "d1q01");
	if(var_347_int == 1000)
		var_345_bool = true;
	var_345_bool = false;
}


void func_6814(void)
{
	bool var_49_bool;
	func_6948(var_49_bool);
	if(var_49_bool != 0)
		@lshStopSpeech();
}


void func_5278(object var_0_object, int var_948_int, object var_949_object)
{
	var_0_object = var_949_object;
	bool var_959_bool; object var_960_object;
	var_949_object = var_960_object;
	func_6543(var_959_bool, var_960_object, 70.0);
	if(!var_959_bool) { //@nz
		var_948_int = -2;
		return 8;
	}
	object var_955_object;
	@CreateDialog(var_955_object);
	int var_963_int;
	func_6942(var_963_int);
	var_955_object->SetNPCName(var_963_int);
	int var_964_int;
	func_6940(var_964_int);
	var_955_object->SetNPCDescription(var_964_int);
	string var_965_string;
	func_6944(var_965_string);
	var_955_object->SetPhoto(var_965_string);
	string var_966_string;
	func_6946(var_966_string);
	var_955_object->SetPhoto2(var_966_string);
	int var_967_int;
	func_7988(var_967_int);
	var_955_object->SetPlayerName(var_967_int);
	bool var_956_bool;
	@IsOverrideActive(var_956_bool);
	if(var_956_bool != 0) {
		var_948_int = -2;
		return 8;
	}
	@DoDialog(var_955_object);
	bool var_969_bool; object var_970_object;
	object var_971_object;
	func_6821(var_971_object);
	var_971_object = var_970_object;
	func_6630(var_969_bool, var_970_object);
	object var_972_object; object var_973_object;
	var_949_object = var_972_object;
	var_955_object = var_973_object;
	TaskCall(13);
	func_5359(var_974_object, var_975_object, var_976_string, var_977_bool, var_972_object, var_973_object);
	TaskReturn();
	bool var_958_bool;
	var_955_object->IsDialogEnd(var_958_bool);
	
	for(;;) {
		var_1008_bool = !var_958_bool; //@nz
		if(var_1008_bool == 0) goto Label_5348;
		@sync();
		var_955_object->IsDialogEnd(var_958_bool);
	}
	
Label_5348:
	object var_1009_object;
	var_949_object = var_1009_object;
	func_6612();
	@StopDialog(var_955_object);
	var_955_object->GetReturnValue(-1);
	int var_957_int = var_948_int;
}
EMIT "Stack[-4] = 0";


void func_6308(void)
{
	float var_1130_float;
	@rand(var_1130_float, 8, 16);
	@SetTimer(10, var_1130_float);
}


void func_6821(object var_147_object)
{
	object var_149_object;
	@self(var_149_object);
	var_149_object = var_147_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7334(bool var_328_bool)
{
	int var_330_int;
	func_6837(var_330_int, "d1q01");
	if(var_330_int == 0) {
		var_328_bool = true;
		return 0;
	}
	var_328_bool = false;
}


void func_7845(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 26, 2, 503366);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_7910(var_77_bool, var_78_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5800(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1036_object, object var_1037_object)
{
	var_0_object = var_1037_object;
	var_1_object = var_1036_object;
	var_3_string = false;
	if(1 != 0) {
		func_5863(var_1037_object, "Neutral");
		var_0_object->SetMessage(535662); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535663, 42111, 37349); //@t
		var_0_object->AddReply(540003, -1, 41974); //@t
		var_0_object->AddReply(540138, -1, 42110); //@t
		goto Label_5833;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16ac";
	}
Label_5833:
	bool var_1061_bool;
	func_6948(var_1061_bool);
	if(var_1061_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6768(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5862;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5862:
		return 0;

	}
	
}


void func_6827(cvector var_111_cvector, cvector var_112_cvector)
{
	float var_115_float = sqrt(var_112_cvector | var_112_cvector);
	if(var_115_float < 0.000001)
		var_111_cvector = [0.0, 0.0, 0.0];
	var_111_cvector = var_112_cvector / var_115_float;
}


void func_4268(object var_0_object, int var_672_int, object var_673_object)
{
	var_0_object = var_673_object;
	bool var_683_bool; object var_684_object;
	var_673_object = var_684_object;
	func_6543(var_683_bool, var_684_object, 70.0);
	if(!var_683_bool) { //@nz
		var_672_int = -2;
		return 8;
	}
	object var_679_object;
	@CreateDialog(var_679_object);
	int var_687_int;
	func_6942(var_687_int);
	var_679_object->SetNPCName(var_687_int);
	int var_688_int;
	func_6940(var_688_int);
	var_679_object->SetNPCDescription(var_688_int);
	string var_689_string;
	func_6944(var_689_string);
	var_679_object->SetPhoto(var_689_string);
	string var_690_string;
	func_6946(var_690_string);
	var_679_object->SetPhoto2(var_690_string);
	int var_691_int;
	func_7988(var_691_int);
	var_679_object->SetPlayerName(var_691_int);
	bool var_680_bool;
	@IsOverrideActive(var_680_bool);
	if(var_680_bool != 0) {
		var_672_int = -2;
		return 8;
	}
	@DoDialog(var_679_object);
	bool var_693_bool; object var_694_object;
	object var_695_object;
	func_6821(var_695_object);
	var_695_object = var_694_object;
	func_6630(var_693_bool, var_694_object);
	object var_696_object; object var_697_object;
	var_673_object = var_696_object;
	var_679_object = var_697_object;
	TaskCall(9);
	func_4349(var_698_object, var_699_object, var_700_string, var_701_bool, var_696_object, var_697_object);
	TaskReturn();
	bool var_682_bool;
	var_679_object->IsDialogEnd(var_682_bool);
	
	for(;;) {
		var_748_bool = !var_682_bool; //@nz
		if(var_748_bool == 0) goto Label_4338;
		@sync();
		var_679_object->IsDialogEnd(var_682_bool);
	}
	
Label_4338:
	object var_749_object;
	var_673_object = var_749_object;
	func_6612();
	@StopDialog(var_679_object);
	var_679_object->GetReturnValue(-1);
	int var_681_int = var_672_int;
}
EMIT "Stack[-4] = 0";


void func_6317(void)
{
	@KillTimer(10);
}


void func_4779(object var_0_object, int var_865_int, object var_866_object)
{
	var_0_object = var_866_object;
	bool var_876_bool; object var_877_object;
	var_866_object = var_877_object;
	func_6543(var_876_bool, var_877_object, 70.0);
	if(!var_876_bool) { //@nz
		var_865_int = -2;
		return 8;
	}
	object var_872_object;
	@CreateDialog(var_872_object);
	int var_880_int;
	func_6942(var_880_int);
	var_872_object->SetNPCName(var_880_int);
	int var_881_int;
	func_6940(var_881_int);
	var_872_object->SetNPCDescription(var_881_int);
	string var_882_string;
	func_6944(var_882_string);
	var_872_object->SetPhoto(var_882_string);
	string var_883_string;
	func_6946(var_883_string);
	var_872_object->SetPhoto2(var_883_string);
	int var_884_int;
	func_7988(var_884_int);
	var_872_object->SetPlayerName(var_884_int);
	bool var_873_bool;
	@IsOverrideActive(var_873_bool);
	if(var_873_bool != 0) {
		var_865_int = -2;
		return 8;
	}
	@DoDialog(var_872_object);
	bool var_886_bool; object var_887_object;
	object var_888_object;
	func_6821(var_888_object);
	var_888_object = var_887_object;
	func_6630(var_886_bool, var_887_object);
	object var_889_object; object var_890_object;
	var_866_object = var_889_object;
	var_872_object = var_890_object;
	TaskCall(11);
	func_4860(var_891_object, var_892_object, var_893_string, var_894_bool, var_889_object, var_890_object);
	TaskReturn();
	bool var_875_bool;
	var_872_object->IsDialogEnd(var_875_bool);
	
	for(;;) {
		var_944_bool = !var_875_bool; //@nz
		if(var_944_bool == 0) goto Label_4849;
		@sync();
		var_872_object->IsDialogEnd(var_875_bool);
	}
	
Label_4849:
	object var_945_object;
	var_866_object = var_945_object;
	func_6612();
	@StopDialog(var_872_object);
	var_872_object->GetReturnValue(-1);
	int var_874_int = var_865_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7346(bool var_312_bool)
{
	int var_314_int;
	func_6837(var_314_int, "d1q01");
	if(var_314_int == 8)
		var_312_bool = true;
	var_312_bool = false;
}


void func_7858(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 678, 2, 534417);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_7910(var_151_bool, var_152_object, 26);
}
EMIT "Stack[-1] = 0";


void func_6837(int var_244_int, string var_245_string)
{
	int var_247_int;
	@GetVariable(var_245_string, var_247_int);
	var_247_int = var_244_int;
}


void func_6842(object var_103_object, string var_104_string)
{
	object var_107_object;
	@GetMainOutdoorScene(var_107_object);
	object var_108_object;
	@AddBlankActor(var_108_object, var_107_object, var_104_string, (var_104_string + ".bin"));
	var_108_object = var_103_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7358(bool var_393_bool)
{
	int var_395_int;
	func_6837(var_395_int, "ood1Georg5");
	if(var_395_int == 0) {
		var_393_bool = true;
		return 0;
	}
	var_393_bool = false;
}


void func_7871(void)
{
	object var_96_object;
	@CreateDiaryEntry(var_96_object, 76, 2, 512158);
	bool var_100_bool; object var_101_object;
	var_96_object = var_101_object;
	func_7910(var_100_bool, var_101_object, 26);
}
EMIT "Stack[-1] = 0";


void func_6853(int var_133_int, int var_134_int)
{
	object var_136_object;
	@CreateIntVector(var_136_object);
	var_136_object->add(var_133_int);
	var_136_object->add(var_134_int);
	@SendWorldWndMessage(3, var_136_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2760(object var_2_object, string var_466_string)
{
	bool var_467_bool;
	func_6948(var_467_bool);
	if(!var_467_bool) //@nz
		return 0;
	if(var_466_string == var_2_object)
		return 0;
	string var_470_string; bool var_471_bool;
	var_466_string = var_470_string;
	if(var_466_string == "")
		var_471_bool = false;
	else
		var_471_bool = true;
	func_6784(var_470_string, var_471_bool);
	var_2_object = var_466_string;
	
}


// @pe
void func_7370(bool var_988_bool)
{
	int var_990_int;
	func_6837(var_990_int, "d10q02");
	if(var_990_int == 3)
		var_988_bool = true;
	var_988_bool = false;
}


// @pe
void func_203(object var_2_object, string var_783_string)
{
	bool var_784_bool;
	func_6948(var_784_bool);
	if(!var_784_bool) //@nz
		return 0;
	if(var_783_string == var_2_object)
		return 0;
	string var_787_string; bool var_788_bool;
	var_783_string = var_787_string;
	if(var_783_string == "")
		var_788_bool = false;
	else
		var_788_bool = true;
	func_6784(var_787_string, var_788_bool);
	var_2_object = var_783_string;
	
}


void func_7884(void)
{
	object var_199_object;
	@CreateDiaryEntry(var_199_object, 81, 2, 512163);
	bool var_203_bool; object var_204_object;
	var_199_object = var_204_object;
	func_7910(var_203_bool, var_204_object, 26);
}
EMIT "Stack[-1] = 0";


void func_6865(object var_120_object, int var_121_int)
{
	int var_123_int;
	object var_124_object;
	var_120_object = var_124_object;
	int var_126_int;
	func_6512(var_124_object, "money", var_126_int);
	if(var_126_int > 0) {
		@GetInvItemByName(var_123_int, "Money");
		int var_133_int; int var_134_int;
		var_123_int = var_133_int;
		var_121_int = var_134_int;
		func_6853(var_133_int, var_134_int);
	}
}


// @pe
void func_7382(bool var_608_bool)
{
	int var_610_int;
	func_6837(var_610_int, "d3q01HelpBurah");
	if(var_610_int != 0) {
		var_608_bool = true;
		return 0;
	}
	var_608_bool = false;
}


void func_7897(object var_86_object)
{
	object var_88_object;
	@GetDiaryRoot(var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_86_object = false;
	}
	var_88_object = var_86_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7394(bool var_631_bool)
{
	bool var_633_bool = false;
	bool var_634_bool = false;
	int var_635_int;
	func_6837(var_635_int, "d3q02");
	var_638_bool = var_635_int == 1000;
	if(!var_638_bool) { //@nz
		int var_640_int;
		func_6837(var_640_int, "d3q02");
		var_643_bool = var_640_int == 0;
		if(!var_643_bool) //@nz
			var_634_bool = true;
	}
	if(var_634_bool != 0) {
		int var_645_int;
		func_6837(var_645_int, "d3q02");
		var_648_bool = var_645_int == -1;
		if(!var_648_bool) //@nz
			var_633_bool = true;
	}
	if(var_633_bool != 0) {
		var_631_bool = true;
		return 0;
	}
	var_631_bool = false;
}


void func_6884(bool var_258_bool, string var_259_string, string var_260_string)
{
	object var_262_object;
	@FindActor(var_262_object, var_259_string);
	if(var_262_object == null)
		var_258_bool = false;
	@Trigger(var_262_object, var_260_string);
	var_258_bool = true;
}
EMIT "Stack[-1] = 0";


void func_7910(bool var_77_bool, object var_78_object, int var_79_int)
{
	object var_86_object;
	func_7897(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	object var_84_object;
	var_83_object->Find(var_79_int, var_84_object);
	if(!var_84_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_79_int);
		var_77_bool = false;
	}
	var_84_object->AddChild(var_78_object);
	@SendWorldWndMessage(7);
	int var_85_int;
	var_78_object->GetCategory(var_85_int);
	@SetDiarySection(var_85_int);
	var_77_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5863(object var_2_object, string var_1043_string)
{
	bool var_1044_bool;
	func_6948(var_1044_bool);
	if(!var_1044_bool) //@nz
		return 0;
	if(var_1043_string == var_2_object)
		return 0;
	string var_1047_string; bool var_1048_bool;
	var_1043_string = var_1047_string;
	if(var_1043_string == "")
		var_1048_bool = false;
	else
		var_1048_bool = true;
	func_6784(var_1047_string, var_1048_bool);
	var_2_object = var_1043_string;
	
}


// @pe
void func_3304(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_547_object, object var_548_object)
{
	var_0_object = var_548_object;
	var_1_object = var_547_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_554_bool;
		func_7563(var_1_object);
		if(var_554_bool != 0) {
			object var_560_object; object var_561_object;
			var_560_object = var_1_object;
			var_561_object = var_0_object;
			func_7316();
			object var_564_object; object var_565_object;
			var_564_object = var_1_object;
			var_565_object = var_0_object;
			func_7164();
			func_3468(var_548_object, "Neutral");
			var_0_object->SetMessage(509043); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(509044, 9921, 9920); //@t
		} else {
					object var_588_object; object var_589_object;
					var_588_object = var_1_object;
					var_589_object = var_0_object;
					func_7316();
					func_3468(var_548_object, "Neutral");
					var_0_object->SetMessage(509024); //@t
					var_0_object->ClearReplies(); //@t
					bool var_592_bool;
					func_7587(var_1_object);
					if(var_592_bool != 0)
						var_0_object->AddReply(511376, 9899, 12575); //@t
					bool var_601_bool = false;
					bool var_602_bool;
					func_7551(var_1_object);
					if(var_602_bool != 0) {
						bool var_608_bool;
						func_7382(var_1_object);
						if(var_608_bool != 0)
							var_601_bool = true;
					}
					if(var_601_bool != 0)
						var_0_object->AddReply(509042, 9941, 9918); //@t
					bool var_617_bool = false;
					bool var_618_bool = false;
					bool var_619_bool;
					func_7599(var_1_object);
					if(var_619_bool != 0) {
						bool var_625_bool;
						func_7611(var_1_object);
						if(var_625_bool != 0)
							var_618_bool = true;
					}
					if(var_618_bool != 0) {
						bool var_631_bool;
						func_7394(var_1_object);
						if(var_631_bool != 0)
							var_617_bool = true;
					}
					if(var_617_bool != 0)
						var_0_object->AddReply(510442, 11512, 11511); //@t
					bool var_653_bool = false;
					bool var_654_bool;
					func_7575(var_1_object);
					if(var_654_bool != 0) {
						bool var_660_bool;
						func_7394(var_1_object);
						if(var_660_bool != 0)
							var_653_bool = true;
					}
					if(var_653_bool != 0)
						var_0_object->AddReply(509034, 9910, 9909); //@t
					var_0_object->AddReply(511147, -1, 12337); //@t
		}
	}
	for(;;) {
		bool var_580_bool;
		func_6948(var_580_bool);
		if(var_580_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6768(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3467;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3467:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcec";


// @pe
void func_5359(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_972_object, object var_973_object)
{
	var_0_object = var_973_object;
	var_3_string = false;
	if(1 != 0) {
		func_5422(var_973_object, "Neutral");
		var_0_object->SetMessage(534109); //@t
		var_0_object->ClearReplies(); //@t
		bool var_988_bool;
		func_7370(var_972_object);
		if(var_988_bool != 0)
			var_0_object->AddReply(534110, 38263, 35703); //@t
		var_0_object->AddReply(534111, -1, 35704); //@t
		goto Label_5392;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14f3";
	}
Label_5392:
	bool var_1000_bool;
	func_6948(var_1000_bool);
	if(var_1000_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6768(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5421;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5421:
		return 0;

	}
	
}


void func_6896(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


void func_6901(int var_67_int)
{
	float var_69_float;
	@GetGameTime(var_69_float);
	var_67_int = 1 + (var_69_float / 24);
}


// @pe
void func_4860(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_889_object, object var_890_object)
{
	var_0_object = var_890_object;
	var_1_object = var_889_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_896_bool = false;
		bool var_897_bool;
		func_7731(var_1_object);
		if(var_897_bool != 0) {
			bool var_903_bool;
			func_7743(var_1_object);
			if(var_903_bool != 0)
				var_896_bool = true;
		}
		if(var_896_bool != 0) {
			object var_909_object; object var_910_object;
			var_909_object = var_1_object;
			var_910_object = var_0_object;
			func_7310();
			func_4957(var_890_object, "Neutral");
			var_0_object->SetMessage(512258); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512259, 13417, 13416); //@t
			var_0_object->AddReply(541804, -1, 44016); //@t
		} else {
					func_4957(var_890_object, "Neutral");
					var_0_object->SetMessage(513775); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513776, -1, 15012); //@t
					var_0_object->AddReply(541596, -1, 43760); //@t
		}
	}
	for(;;) {
		bool var_928_bool;
		func_6948(var_928_bool);
		if(var_928_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6768(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4956;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4956:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1300";


// @pe
void func_4349(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_696_object, object var_697_object)
{
	var_0_object = var_697_object;
	var_1_object = var_696_object;
	var_3_string = false;
	if(1 != 0) {
		func_4431(var_697_object, "Neutral");
		var_0_object->SetMessage(511791); //@t
		var_0_object->ClearReplies(); //@t
		bool var_712_bool = false;
		bool var_713_bool;
		func_7635(var_1_object);
		if(var_713_bool != 0) {
			bool var_719_bool;
			func_7623(var_1_object);
			if(var_719_bool != 0)
				var_712_bool = true;
		}
		if(var_712_bool != 0)
			var_0_object->AddReply(511792, 13003, 13002); //@t
		bool var_728_bool;
		func_7755(var_1_object);
		if(var_728_bool != 0)
			var_0_object->AddReply(515713, 16770, 16769); //@t
		var_0_object->AddReply(511794, -1, 13004); //@t
		goto Label_4401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1101";
	}
Label_4401:
	bool var_740_bool;
	func_6948(var_740_bool);
	if(var_740_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6768(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4430;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4430:
		return 0;

	}
	
}


// @pe
void func_6910(bool var_65_bool, int var_66_int)
{
	int var_67_int;
	func_6901(var_67_int);
	var_65_bool = var_67_int == var_66_int;
}


void func_7938(object var_58_object)
{
	object var_61_object; object var_62_object;
	@GetMainOutdoorScene(var_61_object);
	if(var_61_object == null) {
		@Trace("Can't find main outdoor scene");
		var_62_object = null;
		var_62_object = var_58_object;
	}
	var_61_object->GetMap(var_62_object);
	var_62_object = var_58_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6916(string var_71_string, int var_72_int)
{
	string var_74_string = "idle";
	if(var_72_int != 0)
		var_74_string += var_72_int;
	var_74_string = var_71_string;
}


// @pe
void func_7431(bool var_454_bool)
{
	int var_456_int;
	func_6837(var_456_int, "ood2Georg1");
	if(var_456_int == 0) {
		var_454_bool = true;
		return 0;
	}
	var_454_bool = false;
}


void func_6923(int var_65_int)
{
	int var_68_int; bool var_69_bool;
	var_68_int = 0;
	
	for(;;) {
		string var_71_string; int var_72_int;
		var_68_int = var_72_int;
		func_6916(var_71_string, var_72_int);
		@HasAnimation(var_69_bool, "all", var_71_string);
		if(!var_69_bool) //@nz
			break;
		var_68_int += 1;
	}
	var_68_int = var_65_int;
}


// @pe
void func_7443(bool var_498_bool)
{
	int var_500_int;
	func_6837(var_500_int, "ood2Georg2");
	if(var_500_int == 0) {
		var_498_bool = true;
		return 0;
	}
	var_498_bool = false;
}


void func_7955(object var_97_object, string var_98_string, float var_99_float)
{
	object var_107_object;
	@GetMainOutdoorScene(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_105_cvector;
	cvector var_106_cvector;
	bool var_108_bool;
	var_107_object->GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector);
	if(!var_108_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_98_string) + " doesnt exist");
	var_107_object->GetMap(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_118_float = GetByIndex(var_105_cvector, 0);
	var_119_float = GetByIndex(var_105_cvector, 2);
	var_97_object->SetMapParams(var_118_float, var_119_float, var_99_float);
}
EMIT "Stack[-2] = 0";


void func_6940(int var_133_int)
{
	var_133_int = 515534;
}


void func_6428(void)
{
	bool var_59_bool; int var_60_int; int var_61_int; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	func_6538(var_63_bool);
	if(!var_63_bool) //@nz
		return 12;
	int var_65_int;
	func_6923(var_65_int);
	int var_57_int;
	var_65_int = var_57_int;
	int var_58_int = 0;
	
	for(;;) {
		bool var_78_bool = false;
		if(var_58_int < 5) {
			bool var_81_bool;
			func_6538(var_81_bool);
			if(var_81_bool != 0)
				var_78_bool = true;
		}
		if(var_78_bool != 0) {
			if(!var_57_int) { //@nz
				@Sleep(3, var_59_bool);
				if(!var_59_bool) { //@nz
				} else {
			} else {
			@irand(var_60_int, var_57_int);
			@irand(var_61_int, 5);
			if(var_61_int != 0)
				var_60_int = 0;
			string var_92_string; int var_93_int;
			var_60_int = var_93_int;
			func_6916(var_92_string, var_93_int);
			@PlayAnimation("all", var_92_string);
			@WaitForAnimEnd(var_62_bool);
			var_94_bool = !var_62_bool; //@nz
			if(var_94_bool == 0) goto Label_6483;
			goto Label_6494;
			}
				Label_6483:
					bool var_85_bool;
					func_6497(var_85_bool);
					var_86_bool = !var_85_bool; //@nz
					if(var_86_bool == 0) goto Label_6489;
			}
		}
	Label_6494:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_6489:
		@ResetAAS();
		var_58_int += 1;
	}
	
}


void func_6942(int var_132_int)
{
	var_132_int = 502859;
}


// @pe
void func_7455(bool var_504_bool)
{
	int var_506_int;
	func_6837(var_506_int, "d2q01");
	if(var_506_int == 0) {
		var_504_bool = true;
		return 0;
	}
	var_504_bool = false;
}


void func_6944(string var_134_string)
{
	var_134_string = "ui/NPC_Georg.png";
}


void func_6946(string var_135_string)
{
	var_135_string = "ui/NPC_Georg_b.png";
}


void func_6948(bool var_127_bool)
{
	var_127_bool = true;
}


// @pe
void func_6950(object var_209_object)
{
	@Trace("money 4000 is given");
	object var_212_object;
	var_209_object = var_212_object;
	func_6865(var_212_object, 4000);
}


// @pe
void func_7467(bool var_460_bool)
{
	int var_462_int;
	func_6837(var_462_int, "d2q01");
	if(var_462_int == 6)
		var_460_bool = true;
	var_460_bool = false;
}


// @pe
void func_5422(object var_2_object, string var_979_string)
{
	bool var_980_bool;
	func_6948(var_980_bool);
	if(!var_980_bool) //@nz
		return 0;
	if(var_979_string == var_2_object)
		return 0;
	string var_983_string; bool var_984_bool;
	var_979_string = var_983_string;
	if(var_979_string == "")
		var_984_bool = false;
	else
		var_984_bool = true;
	func_6784(var_983_string, var_984_bool);
	var_2_object = var_979_string;
	
}


// @pe
void func_6960(object var_96_object)
{
	object var_100_object;
	func_7938(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	func_7955(var_97_object, "pt_map_aglaja", (float)2);
	object var_120_object;
	func_7938(var_120_object);
	var_96_object->ShowMap(var_120_object);
}


void func_7988(int var_136_int)
{
	int var_138_int;
	@GetVariable("branch", var_138_int);
	if(var_138_int == 0) {
		var_136_int = 1;
		return 2;
	EMIT "GOTO 0x1f43";
	}
	if(var_138_int == 1) {
		var_136_int = 2;
		return 2;
	}
	var_136_int = 3;
}


// @pe
void func_7479(bool var_426_bool)
{
	int var_428_int;
	func_6837(var_428_int, "KnowBurahDead");
	if(var_428_int == 1)
		var_426_bool = true;
	var_426_bool = false;
}


void func_6976(void)
{
	@SetVariable("d1q01", 1);
	object var_58_object;
	func_7938(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_6896(var_69_float);
	var_55_object->AddMark("d1GeorgInfo", "pt_map_georg", 3, 508631, var_69_float);
	float var_76_float;
	func_6896(var_76_float);
	var_55_object->AddMark("d1q01GeorgGotoViktor", "pt_map_viktor", 1, 508629, var_76_float);
	func_7780();
	func_7806();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7491(bool var_377_bool)
{
	int var_379_int;
	func_6837(var_379_int, "ood1Georg4");
	if(var_379_int == 0) {
		var_377_bool = true;
		return 0;
	}
	var_377_bool = false;
}


// @pe
void func_8005(object var_64_object)
{
	bool var_65_bool;
	func_6910(var_65_bool, 1);
	if(var_65_bool != 0) {
		int var_73_int; object var_74_object;
		var_64_object = var_74_object;
		TaskCall(2);
		func_547(var_75_object, var_73_int, var_74_object);
		TaskReturn();
		return 0;
	}
	bool var_420_bool;
	func_6910(var_420_bool, 2);
	if(var_420_bool != 0) {
		int var_422_int; object var_423_object;
		var_64_object = var_423_object;
		TaskCall(4);
		func_2558(var_424_object, var_422_int, var_423_object);
		TaskReturn();
		return 0;
	}
	bool var_521_bool;
	func_6910(var_521_bool, 3);
	if(var_521_bool != 0) {
		int var_523_int; object var_524_object;
		var_64_object = var_524_object;
		TaskCall(6);
		func_3223(var_525_object, var_523_int, var_524_object);
		TaskReturn();
		return 0;
	}
	bool var_670_bool;
	func_6910(var_670_bool, 5);
	if(var_670_bool != 0) {
		int var_672_int; object var_673_object;
		var_64_object = var_673_object;
		TaskCall(8);
		func_4268(var_674_object, var_672_int, var_673_object);
		TaskReturn();
		return 0;
	}
	bool var_750_bool;
	func_6910(var_750_bool, 6);
	if(var_750_bool != 0) {
		int var_752_int; object var_753_object;
		var_64_object = var_753_object;
		TaskCall(0);
		func_0(var_754_object, var_752_int, var_753_object);
		TaskReturn();
		return 0;
	}
	bool var_863_bool;
	func_6910(var_863_bool, 8);
	if(var_863_bool != 0) {
		int var_865_int; object var_866_object;
		var_64_object = var_866_object;
		TaskCall(10);
		func_4779(var_867_object, var_865_int, var_866_object);
		TaskReturn();
		return 0;
	}
	bool var_946_bool;
	func_6910(var_946_bool, 10);
	if(var_946_bool != 0) {
		int var_948_int; object var_949_object;
		var_64_object = var_949_object;
		TaskCall(12);
		func_5278(var_950_object, var_948_int, var_949_object);
		TaskReturn();
		return 0;
	}
	bool var_1010_bool;
	func_6910(var_1010_bool, 12);
	if(var_1010_bool != 0) {
		int var_1012_int; object var_1013_object;
		var_64_object = var_1013_object;
		TaskCall(14);
		func_5719(var_1014_object, var_1012_int, var_1013_object);
		TaskReturn();
		return 0;
	}
	int var_1071_int; object var_1072_object;
	var_64_object = var_1072_object;
	TaskCall(16);
	func_6042(var_1073_object, var_1071_int, var_1072_object);
	TaskReturn();
}


// @pe
void func_7503(bool var_399_bool)
{
	int var_401_int;
	func_6837(var_401_int, "d1q01");
	if(var_401_int == 1)
		var_399_bool = true;
	var_399_bool = false;
}


// @pe
void func_4431(object var_2_object, string var_703_string)
{
	bool var_704_bool;
	func_6948(var_704_bool);
	if(!var_704_bool) //@nz
		return 0;
	if(var_703_string == var_2_object)
		return 0;
	string var_707_string; bool var_708_bool;
	var_703_string = var_707_string;
	if(var_703_string == "")
		var_708_bool = false;
	else
		var_708_bool = true;
	func_6784(var_707_string, var_708_bool);
	var_2_object = var_703_string;
	
}


// @pe
void func_7515(bool var_242_bool)
{
	int var_244_int;
	func_6837(var_244_int, "ood1Georg1");
	if(var_244_int == 0) {
		var_242_bool = true;
		return 0;
	}
	var_242_bool = false;
}


// @pe
void func_4957(object var_2_object, string var_913_string)
{
	bool var_914_bool;
	func_6948(var_914_bool);
	if(!var_914_bool) //@nz
		return 0;
	if(var_913_string == var_2_object)
		return 0;
	string var_917_string; bool var_918_bool;
	var_913_string = var_917_string;
	if(var_913_string == "")
		var_918_bool = false;
	else
		var_918_bool = true;
	func_6784(var_917_string, var_918_bool);
	var_2_object = var_913_string;
	
}


// @pe
void func_865(object var_2_object, string var_267_string)
{
	bool var_268_bool;
	func_6948(var_268_bool);
	if(!var_268_bool) //@nz
		return 0;
	if(var_267_string == var_2_object)
		return 0;
	string var_271_string; bool var_272_bool;
	var_267_string = var_271_string;
	if(var_267_string == "")
		var_272_bool = false;
	else
		var_272_bool = true;
	func_6784(var_271_string, var_272_bool);
	var_2_object = var_267_string;
	
}


void func_6497(bool var_85_bool)
{
	var_85_bool = true;
}


// @pe
void func_7011(void)
{
	func_7793();
	bool var_158_bool;
	func_6884(var_158_bool, "quest_d1_01", "completed");
}


void func_6499(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_7527(bool var_339_bool)
{
	int var_341_int;
	func_6837(var_341_int, "ood1Georg2");
	if(var_341_int == 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_6504(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


// @pe
void func_7021(void)
{
	@SetVariable("d1q01TeloNedostupno", 1);
}


void func_6512(object var_124_object, string var_125_string, int var_126_int)
{
	int var_128_int;
	var_124_object->GetProperty(var_125_string, var_128_int);
	var_124_object->SetProperty(var_125_string, (var_128_int + var_126_int));
}


// @pe
void func_7027(void)
{
	@SetVariable("d1q01FirstGeorgVisit", 1);
	bool var_258_bool;
	func_6884(var_258_bool, "quest_d1_01", "remove_cutscene");
	bool var_264_bool;
	func_6884(var_264_bool, "quest_d1_01", "unlock_doors");
}


// @pe
void func_7539(bool var_360_bool)
{
	int var_362_int;
	func_6837(var_362_int, "ood1Georg3");
	if(var_362_int == 0) {
		var_360_bool = true;
		return 0;
	}
	var_360_bool = false;
}


void func_6519(bool var_54_bool, cvector var_55_cvector)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	bool var_61_bool;
	@Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
}


// @pe
void func_7551(bool var_602_bool)
{
	int var_604_int;
	func_6837(var_604_int, "ood3Georg1");
	if(var_604_int == 0) {
		var_602_bool = true;
		return 0;
	}
	var_602_bool = false;
}


void func_6529(bool var_50_bool, object var_51_object)
{
	cvector var_53_cvector;
	var_51_object->GetPosition(var_53_cvector);
	bool var_54_bool; cvector var_55_cvector;
	var_53_cvector = var_55_cvector;
	func_6519(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
}


// @pe
void func_7043(void)
{
	bool var_85_bool = false;
	int var_86_int;
	func_6837(var_86_int, "d2q01BigVladVisit");
	if(var_86_int != 0) {
		int var_92_int;
		func_6837(var_92_int, "d2q01GeorgVisit");
		if(var_92_int != 0)
			var_85_bool = true;
	}
	if(var_85_bool != 0)
		func_7819();
}


void func_6538(bool var_47_bool)
{
	bool var_49_bool;
	@IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
}


// @pe
void func_7563(bool var_554_bool)
{
	int var_556_int;
	func_6837(var_556_int, "ood3Georg2");
	if(var_556_int == 0) {
		var_554_bool = true;
		return 0;
	}
	var_554_bool = false;
}


// @pe
void func_3468(object var_2_object, string var_568_string)
{
	bool var_569_bool;
	func_6948(var_569_bool);
	if(!var_569_bool) //@nz
		return 0;
	if(var_568_string == var_2_object)
		return 0;
	string var_572_string; bool var_573_bool;
	var_568_string = var_572_string;
	if(var_568_string == "")
		var_573_bool = false;
	else
		var_573_bool = true;
	func_6784(var_572_string, var_573_bool);
	var_2_object = var_568_string;
	
}


void func_6543(bool var_84_bool, object var_85_object, float var_86_float)
{
	cvector var_97_cvector; bool var_104_bool;
	var_85_object->GetPosition(var_97_cvector);
	float var_96_float;
	var_85_object->GetEyesHeight(var_96_float);
	var_105_float = GetByIndex(var_97_cvector, 1);
	SetByIndex(var_97_cvector, 1) = (var_105_float + var_96_float);
	cvector var_98_cvector;
	@GetPosition(var_98_cvector);
	@GetEyesHeight(var_96_float);
	var_106_float = GetByIndex(var_98_cvector, 1);
	SetByIndex(var_98_cvector, 1) = (var_106_float + var_96_float);
	cvector var_99_cvector = var_97_cvector - var_98_cvector;
	var_107_float = GetByIndex(var_99_cvector, 1);
	SetByIndex(var_99_cvector, 1) = (float)0;
	var_109_float = sqrt(var_99_cvector | var_99_cvector);
	var_99_cvector /= var_109_float;
	cvector var_100_cvector = -var_99_cvector;
	cvector var_111_cvector;
	func_6827(var_111_cvector, (var_100_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_101_cvector = ((var_99_cvector * var_86_float) + (var_111_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_103_bool;
	@IsOverrideActive(var_103_bool);
	if(var_103_bool != 0)
		var_84_bool = false;
	@StopWorld();
	@CameraTransit((var_98_cvector + var_101_cvector), var_100_cvector, true);
	var_125_float = GetByIndex(var_101_cvector, 0);
	var_126_float = GetByIndex(var_101_cvector, 2);
	@Rotate(var_125_float, var_126_float);
	bool var_127_bool;
	func_6948(var_127_bool);
	if(var_127_bool != 0) {
	} else {
		@HasAnimationTrack(var_104_bool, "head");
		if(var_104_bool == 0) goto Label_6606;
		@LookAsyncCamera("head");
	}
Label_6606:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_84_bool = true;
	
}


// @pe
void func_7575(bool var_654_bool)
{
	int var_656_int;
	func_6837(var_656_int, "d3RubinToldWhereIsSimon");
	if(var_656_int == 1)
		var_654_bool = true;
	var_654_bool = false;
}


// @pe
void func_7066(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_6042(object var_0_object, int var_1071_int, object var_1072_object)
{
	var_0_object = var_1072_object;
	bool var_1082_bool; object var_1083_object;
	var_1072_object = var_1083_object;
	func_6543(var_1082_bool, var_1083_object, 70.0);
	if(!var_1082_bool) { //@nz
		var_1071_int = -2;
		return 8;
	}
	object var_1078_object;
	@CreateDialog(var_1078_object);
	int var_1086_int;
	func_6942(var_1086_int);
	var_1078_object->SetNPCName(var_1086_int);
	int var_1087_int;
	func_6940(var_1087_int);
	var_1078_object->SetNPCDescription(var_1087_int);
	string var_1088_string;
	func_6944(var_1088_string);
	var_1078_object->SetPhoto(var_1088_string);
	string var_1089_string;
	func_6946(var_1089_string);
	var_1078_object->SetPhoto2(var_1089_string);
	int var_1090_int;
	func_7988(var_1090_int);
	var_1078_object->SetPlayerName(var_1090_int);
	bool var_1079_bool;
	@IsOverrideActive(var_1079_bool);
	if(var_1079_bool != 0) {
		var_1071_int = -2;
		return 8;
	}
	@DoDialog(var_1078_object);
	bool var_1092_bool; object var_1093_object;
	object var_1094_object;
	func_6821(var_1094_object);
	var_1094_object = var_1093_object;
	func_6630(var_1092_bool, var_1093_object);
	object var_1095_object; object var_1096_object;
	var_1072_object = var_1095_object;
	var_1078_object = var_1096_object;
	TaskCall(17);
	func_6123(var_1097_object, var_1098_object, var_1099_string, var_1100_bool, var_1095_object, var_1096_object);
	TaskReturn();
	bool var_1081_bool;
	var_1078_object->IsDialogEnd(var_1081_bool);
	
	for(;;) {
		var_1125_bool = !var_1081_bool; //@nz
		if(var_1125_bool == 0) goto Label_6112;
		@sync();
		var_1078_object->IsDialogEnd(var_1081_bool);
	}
	
Label_6112:
	object var_1126_object;
	var_1072_object = var_1126_object;
	func_6612();
	@StopDialog(var_1078_object);
	var_1078_object->GetReturnValue(-1);
	int var_1080_int = var_1071_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7072(void)
{
	@SetVariable("ood1Georg5", 1);
}


// @pe
void func_7587(bool var_592_bool)
{
	int var_594_int;
	func_6837(var_594_int, "d3q02");
	if(var_594_int == 0) {
		var_592_bool = true;
		return 0;
	}
	var_592_bool = false;
}


void func_7078(void)
{
	@SetVariable("d10q02", 4);
	object var_58_object;
	func_7938(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	float var_69_float;
	func_6896(var_69_float);
	var_55_object->AddMark("d10q02GeorgGotoAglaja", "pt_map_aglaja", 0, 515299, var_69_float);
	func_7767();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7599(bool var_619_bool)
{
	int var_621_int;
	func_6837(var_621_int, "ood3Georg3");
	if(var_621_int == 0) {
		var_619_bool = true;
		return 0;
	}
	var_619_bool = false;
}


// @pe
void func_7611(bool var_625_bool)
{
	int var_627_int;
	func_6837(var_627_int, "d3q02SeeCorpse");
	if(var_627_int == 1)
		var_625_bool = true;
	var_625_bool = false;
}


// @pe
void func_7101(void)
{
	@SetVariable("ood2Georg1", 1);
}


// @pe
void func_7107(void)
{
	@SetVariable("ood2Georg2", 1);
}


// @pe
void func_7623(bool var_719_bool)
{
	int var_721_int;
	func_6837(var_721_int, "d5q03");
	if(var_721_int == 1000)
		var_719_bool = true;
	var_719_bool = false;
}


// @pe
void func_7113(void)
{
	@SetVariable("d2q01GeorgVisit", 1);
	func_7832();
}


// @pe
void func_7122(void)
{
	@SetVariable("ood1Georg4", 1);
}


// @pe
void func_7635(bool var_713_bool)
{
	int var_715_int;
	func_6837(var_715_int, "ood5Georg1");
	if(var_715_int == 0) {
		var_713_bool = true;
		return 0;
	}
	var_713_bool = false;
}


void func_6612(void)
{
	bool var_414_bool;
	@CameraSwitchToNormal(true);
	bool var_416_bool;
	func_6948(var_416_bool);
	if(var_416_bool != 0) {
	} else {
		@HasAnimationTrack(var_414_bool, "head");
		if(var_414_bool == 0) goto Label_6629;
		@UnlookAsync("head");
	}
Label_6629:
	
}


// @pe
void func_7128(object var_117_object)
{
	@Trace("money 5000 is given");
	object var_120_object;
	var_117_object = var_120_object;
	func_6865(var_120_object, 5000);
}


// @pe
void func_7647(bool var_811_bool)
{
	int var_813_int;
	func_6837(var_813_int, "d6q01");
	if(var_813_int == 0) {
		var_811_bool = true;
		return 0;
	}
	var_811_bool = false;
}


void func_7138(void)
{
	func_7858();
	int var_145_int;
	@GetVariable("d3q02", var_145_int);
	if(var_145_int != 0) {
		bool var_156_bool;
		func_6884(var_156_bool, "quest_d3_02", "completed");
	} else {
		@SetVariable("d3q02", 1000);
	}
	
}


void func_6630(bool var_145_bool, object var_146_object)
{
	int var_152_int; int var_153_int;
	@GetVariable("voice_common", var_152_int);
	if(var_152_int != 0) {
		bool var_156_bool; object var_157_object;
		var_146_object = var_157_object;
		func_6688(var_156_bool, var_157_object);
		if(!var_156_bool) { //@nz
			bool var_187_bool; object var_188_object;
			var_146_object = var_188_object;
			func_6725(var_187_bool, var_188_object);
			if(!var_187_bool) { //@nz
				var_145_bool = false;
				return 4;
			}
		}
		@irand(var_153_int, 2);
		if(var_153_int != 0)
			@SetVariable("voice_common", ((var_152_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_227_bool; object var_228_object;
		var_146_object = var_228_object;
		func_6725(var_227_bool, var_228_object);
		if(!var_227_bool) { //@nz
			bool var_230_bool; object var_231_object;
			var_146_object = var_231_object;
			func_6688(var_230_bool, var_231_object);
			if(!var_230_bool) { //@nz
				var_145_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_6686;
	
Label_6686:
	var_145_bool = true;
	
}


// @pe
void func_7659(bool var_818_bool)
{
	int var_820_int;
	func_6837(var_820_int, "d6q01");
	if(var_820_int == 1000)
		var_818_bool = true;
	var_818_bool = false;
}


// @pe
void func_6123(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1095_object, object var_1096_object)
{
	var_0_object = var_1096_object;
	var_1_object = var_1095_object;
	var_3_string = false;
	if(1 != 0) {
		func_6181(var_1096_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_6151;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17ef";
	}
Label_6151:
	bool var_1117_bool;
	func_6948(var_1117_bool);
	if(var_1117_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6768(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6180;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6180:
		return 0;

	}
	
}


// @pe
void func_7158(void)
{
	@SetVariable("ood3Georg1", 1);
}


// @pe
void func_7671(bool var_825_bool)
{
	int var_827_int;
	func_6837(var_827_int, "d6q01");
	if(var_827_int == -1)
		var_825_bool = true;
	var_825_bool = false;
}


// @pe
void func_7164(void)
{
	@SetVariable("ood3Georg2", 1);
}


void func_2558(object var_0_object, int var_422_int, object var_423_object)
{
	var_0_object = var_423_object;
	bool var_433_bool; object var_434_object;
	var_423_object = var_434_object;
	func_6543(var_433_bool, var_434_object, 70.0);
	if(!var_433_bool) { //@nz
		var_422_int = -2;
		return 8;
	}
	object var_429_object;
	@CreateDialog(var_429_object);
	int var_437_int;
	func_6942(var_437_int);
	var_429_object->SetNPCName(var_437_int);
	int var_438_int;
	func_6940(var_438_int);
	var_429_object->SetNPCDescription(var_438_int);
	string var_439_string;
	func_6944(var_439_string);
	var_429_object->SetPhoto(var_439_string);
	string var_440_string;
	func_6946(var_440_string);
	var_429_object->SetPhoto2(var_440_string);
	int var_441_int;
	func_7988(var_441_int);
	var_429_object->SetPlayerName(var_441_int);
	bool var_430_bool;
	@IsOverrideActive(var_430_bool);
	if(var_430_bool != 0) {
		var_422_int = -2;
		return 8;
	}
	@DoDialog(var_429_object);
	bool var_443_bool; object var_444_object;
	object var_445_object;
	func_6821(var_445_object);
	var_445_object = var_444_object;
	func_6630(var_443_bool, var_444_object);
	object var_446_object; object var_447_object;
	var_423_object = var_446_object;
	var_429_object = var_447_object;
	TaskCall(5);
	func_2639(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object);
	TaskReturn();
	bool var_432_bool;
	var_429_object->IsDialogEnd(var_432_bool);
	
	for(;;) {
		var_519_bool = !var_432_bool; //@nz
		if(var_519_bool == 0) goto Label_2628;
		@sync();
		var_429_object->IsDialogEnd(var_432_bool);
	}
	
Label_2628:
	object var_520_object;
	var_423_object = var_520_object;
	func_6612();
	@StopDialog(var_429_object);
	var_429_object->GetReturnValue(-1);
	int var_431_int = var_422_int;
}
EMIT "Stack[-4] = 0";


