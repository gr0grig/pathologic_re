// @IMPORTS: SetVariable/2,SetSaveProperty/2,Hold/0,FindActor/2,GetMainOutdoorScene/1,Trace/1,Teleport/4,CreateObjectVector/1,GetVariable/2,AddBlankActor/4,AddBlankActorFromXml/4,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,Trigger/3,GetGameTime/1,SetSepia/2,GetSceneByName/2,ReplaceScene/2,irand/2,AddActor/6,AddActor/4,RemoveActor/1,PlaySound/1,_strtoi/2,AddActorByType/6,CreateStringVector/1,UnlockAchievement/1,GameOver/1,AddScriptedActor/5,RandOneOf/13,RandOneOf/5,SetTimeEvent/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,AddMessage/4,QueuePlayMovie/1,CreateIntVector/1
// @STRINGS: W:branch|W:player|W:Starting scene not found|W:pt_birth_Klara|A:GetLocator|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:.bin|W:.xml|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W:locked|W:reputation|A:add|A:size|A:get|A:Remove|A:clear|W:Region|W:State|W:s_|W:n_|W:.isc|W:City manager: can't replace indoor scene "|W:" because it doesn't exist|W:Diseased Region: |W:City manager: main outdoor scene not found|A:RemoveAllRegionActors|W:City manager: Can't find main outdoor scene|A:SetRegionActorCount|A:SetRegionActorCountByType|A:GetGroupActors|A:Next|W:Actor "|W:" can't be locked|W:fog_stat.xml|W:fog|A:AddStationaryActorByType|W:pt_blockpost|W:_1_|W:pers_patrool|W:patrol_stat.xml|W:pt_fog|W:pers_soldat|W:soldier.xml|W:_2_|W:pers_sanitar|W:sanitar_stat.xml|A:EnableSubsets|W:street_rags|W:do_invis.xml|A:RemoveOnUnload|W:dr_mark|W:disease_object.xml|W:restore|W:cleanup|W:br_|W:pers_grabitel|W:grabitel.xml|W:pers_unosha|W:unosha_attacker.xml|W:unosha2_attacker.xml|W:pers_worker|W:worker_attacker.xml|W:worker2_attacker.xml|W:pers_wasted_girl|W:wasted_girl.xml|W:pers_wasted_male|W:wasted_male.xml|W:pers_woman|W:woman.xml|W:pers_boy|W:boy.xml|W:pers_girl|W:girl2.xml|W:unosha.xml|W:unosha2.xml|W:wasted_girl_killme.xml|W:soldier_marauder.xml|W:pers_alkash|W:alkash.xml|W:pers_littleboy|W:littleboy.xml|W:pers_littlegirl|W:littlegirl.xml|W:pers_dohodyaga|W:dohodyaga.xml|W:worker.xml|W:worker2.xml|W:pers_butcher|W:butcher.xml|W:woman_killme.xml|W:pers_nudegirl|W:nudegirl.xml|W:pers_dog|W:dog.xml|W:pers_vaxxabit|W:vaxxabit_d.xml|W:pers_vaxxabitka|W:vaxxabitka_d.xml|W:pers_rat_big|W:rat_big.xml|W:fog.xml|W:fog_hunter.xml|W:pers_bomber|W:bomber.xml|W:agony1_man.xml|W:agony1_woman.xml|W:sanitar.xml|W:pers_rat|W:rat.xml|W:patrol.xml|W:pers_soldat_hand|W:soldier_patrol.xml|W:dt_house3_05_i2|W:dt_house3_05|W:dt_house3_06_i2|W:dt_house_1_10|W:house5_10|W:house5_07|W:dt_house_1_03|W:dt_house1_union2_04l|W:dt_house1_union2_04r|W:house5_22|W:house5_08|W:dt_house1_union2_02l|W:dt_house1_union2_02r|W:dt_house1_union2_05l|W:dt_house1_union2_05r|W:dt_house2_01|W:dt_house2_02|W:dt_house2_03|W:dt_house2_04|W:dt_house2_05|W:dt_house3_10_i2|W:dt_house3_10|W:dt_house3_11_i2|W:dt_house3_11|W:dt_house3_12_i2|W:dt_house3_12|W:dt_house_1_06|W:dt_house3_07_i2|W:dt_house3_07|W:house5_02|W:dt_house1_union2_03l|W:dt_house1_union2_03r|W:dt_house1_union2_01l|W:dt_house1_union2_01r|W:house5_unoinl|W:house5_unoinr|W:dt_house_1_01|W:house5_05|W:house5_06|W:dt_house_1_02|W:house5_unoin_solid01l|W:house5_unoin_solid01r|W:house5_03|W:house5_04|W:house1_se_02l|W:house1_se_02r|W:dt_house3_01_i2|W:dt_house3_02_i2|W:dt_house3_02|W:dt_house3_03_i2|W:dt_house3_03|W:dt_house3_04_i2|W:house5_21|W:dt_house3_08_i2|W:dt_house3_09|W:dt_house3_09_i2|W:house1_se_03l|W:house1_se_03r|W:house1_se_01l|W:house1_se_01r|W:house1_se_04l|W:house1_se_04r|W:house5_11|W:house5_09|W:house5_13|W:house5_12|W:house5_14|W:house5_unoin03l|W:house5_unoin03r|W:house5_unoin02l|W:house5_unoin02r|W:house5_unoin01l|W:house5_unoin01r|W:dt_house3_14_i2|W:dt_house3_14|W:house1_arc_01l|W:house1_arc_01r|W:dt_House6_01|W:dt_house_1_09|W:house5_24|W:dt_House6_03|W:dt_House6_04|W:dt_house_1_08|W:house5_unoin_solidl|W:house5_unoin_solidr|W:dt_house2_12|W:dt_house2_11|W:dt_house2_13|W:dt_house2_09|W:dt_house2_08|W:dt_house2_07|W:dt_house2_06|W:house5_01|W:house5_15|W:house5_16|W:house5_17|W:house5_unoin04l|W:house5_unoin04r|W:house5_23|W:house1_se_05r|W:house1_se_05l|W:dt_house2_10|W:House6_02|W:house_2_01|W:house7_03|W:house7_02|W:house3_01|W:house_2_03|W:house_2_02|W:house4_01_i2|W:house4_01|W:House6_05|W:r2_house_2_01|W:r2_house_2_02|W:r2_house_2_03|W:r2_house7_02|W:r2_house01_01|W:r2_house7_01|W:r2_house3_01_i2|W:r2_house3_01|W:r2_house3_02_i2|W:r2_house3_02|W:r2_house3_03_i2|W:r2_house3_03|W:r3_house7_01|W:r3_house7_02|W:r3_house_2_02|W:r3_house3_02_i2|W:r3_house3_02|W:r3_house4_05_i2|W:r3_house4_05|W:r3_house4_03_i2|W:r3_house4_04_i2|W:r3_house4_04|W:r3_house4_01_i2|W:r3_house4_01|W:r3_house_2_01|W:r3_house4_02_i2|W:r3_house4_02|W:r3_house3_01_i2|W:r3_house3_01|W:r4_house_2_02|W:r4_house3_03_i2|W:r4_house3_03|W:r4_house4_02_i2|W:r4_house4_02|W:r4_house4_01_i2|W:r4_house4_01|W:r4_house3_02_i2|W:r4_house3_02|W:r4_house_2_01|W:r4_house3_01_i2|W:r4_house3_01|W:r4_house7_01|W:r4_House6_01|W:r4_house_2_03|W:r4_House6_03|W:r4_house_2_04|W:r5_house2_01|W:r5_house2_02|W:r5_house2_03|W:r5_house3_01_i2|W:r5_house3_01|W:r5_house3_02_i2|W:r5_house3_02|W:r5_house3_03_i2|W:r5_house3_03|W:r5_house3_04_i2|W:r5_house3_04|W:r5_house3_05_i2|W:r5_house3_05|W:r5_house3_06_i2|W:r5_house3_06|W:r5_house3_07_i2|W:r5_house3_07|W:r5_House6_01|W:r6_house2_03|W:r6_house4_01_i2|W:r6_house4_02_i2|W:r6_house4_02|W:r6_house3_02_i2|W:r6_house3_02|W:r6_house3_01_i2|W:r6_house3_01|W:r6_house2_01|W:r6_house7_01|W:r6_house7_02|W:r6_House6_01|W:r6_house2_02|W:r7_house2_01|W:r7_house2_02|W:r7_house2_03|W:r7_house2_04|W:r7_house3_03_i2|W:r7_house3_03|W:r7_house3_04_i2|W:r7_house3_04|W:r7_house3_05_i2|W:r7_house3_05|W:r7_house3_06_i2|W:r7_house3_01_i2|W:r7_house3_01|W:r7_house3_02_i2|W:r7_house3_02|W:lc_house7_02|W:lc_house7_03|W:lc_house7_04|W:lc_house7_05|W:lc_house7_06|W:lc_house7_07|W:lc_House6_02|W:lc_house7_01|W:lc_house_2_02|W:lc_House6_01|W:lc_house3_03_i2|W:lc_house3_03|W:lc_House6_03|W:lc_House6_04|W:lc_house3_05_i2|W:lc_house3_05|W:lc_house3_06_i2|W:lc_house3_06|W:lc_House6_06|W:lc_house3_04_i2|W:lc_house3_04|W:house3_plus_03_i2|W:playsound|W:enable_bonfire|W:disable_bonfire|W:horror|W:Replaced|W:Invalid region index|W:nail|W:fogme|A:GetScene|A:GetPosition|W:sepia|W:nosepia|W:Wrong bonfire index |W:bonfire_light|W:Bofire  light |A:Switch|W:pt_bonfire|W:Locator for bonfire doesn't exist|W:scripted|W:bonfire_big.xml|A:set|W:Setting bonfire |W:... ok|W:Cleanup bonfire |W:pt_guard_|W:Locator doesn't exist for guard |W:term|W:guard_term.xml|W:arena_light|W:Setting arena...|W:pt_arena_manager|W:Locator doesn't exist for arena manager|W:pt_arena_torch|W:Locator doesn't exist for arena torch |W:torch.xml|W:Cleaning arena...|W:remove|W:pt_bull|W:pers_bull|W:bull.xml|W:pt_plant|A:resize|W:Total plants: |W:pt_grave_supply|W:Total grave supplies: |W:Total bonfires: |W:d1q01|W:ACHIEVEMENT_UP|W:gameover_fail.xml|W:b1q01|W:ACHIEVEMENT_BACH_1|W:ACHIEVEMENT_BACH_2|W:ACHIEVEMENT_BACH_3|W:ACHIEVEMENT_BACH_4|W:ACHIEVEMENT_BACH_5|W:ACHIEVEMENT_BACH_6|W:ACHIEVEMENT_BACH_7|W:ACHIEVEMENT_BACH_8|W:ACHIEVEMENT_BACH_9|W:ACHIEVEMENT_BACH_10|W:ACHIEVEMENT_BACH_11|W:ACHIEVEMENT_BURAH_1|W:ACHIEVEMENT_BURAH_2|W:ACHIEVEMENT_BURAH_3|W:ACHIEVEMENT_BURAH_4|W:ACHIEVEMENT_BURAH_5|W:ACHIEVEMENT_BURAH_6|W:ACHIEVEMENT_BURAH_7|W:ACHIEVEMENT_BURAH_8|W:ACHIEVEMENT_BURAH_9|W:ACHIEVEMENT_BURAH_10|W:ACHIEVEMENT_BURAH_11|W:ACHIEVEMENT_CLARA_1|W:ACHIEVEMENT_CLARA_2|W:ACHIEVEMENT_CLARA_3|W:ACHIEVEMENT_CLARA_4|W:ACHIEVEMENT_CLARA_5|W:ACHIEVEMENT_CLARA_6|W:ACHIEVEMENT_CLARA_7|W:ACHIEVEMENT_CLARA_8|W:ACHIEVEMENT_CLARA_9|W:ACHIEVEMENT_CLARA_10|W:ACHIEVEMENT_CLARA_11|W:c_iWM_RealDayChange|W:shed_corpse|W:splash_object_wo_pf.bin|W:b|W:volonteers_burah|W:volonteers_danko|W:volonteers_klara|W:rescue_locked|W:update|W:Plant point not found|W:grass_black_tvir|W:grass_blood_tvir|W:grass_brown_tvir|W:grass_savyur|W:grass_white_plet|W:item_|W:New plant: "|W:" at location #|W:Grave supply point not found|W:bread|W:milk|W:big_gun|W:big_gun.bin|W:vagon_martira|W:d9q01_trigger_wagon|W:quest_d9_01_wagon.bin|W:dt_house_1_07|A:EnableSubset|A:SwitchLights|W:City update|W:kolokol|W:day time|W:night time|W:termitnik2@door1|W:house_vlad@door2|W:cot_maria@door1|W:warehouse_rubin@door1|W:k1q01AlexandrGotoKaterina|A:FindMark|W:k1q01AlexandrGotoStation|W:k1q01BurahGotoAnna|W:k1q01CompletedGotoAlexandt|W:k1q01KaterinaGotoAlexandr|W:k1q01LaskaGotoBurah|W:k1q01StationGotoLaska|W:k1q02GeorgGotoMaria|W:k1q02KaterinaGotoGeorg|W:k1q03AnnaGotoNotkin|W:k2q03Arfist|W:k2q01AlexandrGotoMladVlad|W:k2q01BigVladGotoOspina|W:k2q01MladVladGotoOspina|W:k2q04AnnaGotoGatherer1|W:k2q04AnnaGotoGatherer2|W:k2q04AnnaGotoGatherer3|W:k2q04MorlokGotoAndrei|W:k2q03LaraLetter|W:k2q04MladVladGotoAnna|W:k2q02KaterinaGotoLara|W:k3q01AlexandrGotoAnna|W:k3q01AnnaGotoKapella|W:k3q01AnnaGotoMladVlad|W:k3q01KapellaGotoAnna|W:k3q02JuliaGotoEva|W:k3q02KaterinaGotoJulia|W:k3q03AnnaGotoEva|W:k3q04KapellaGotoDanko|W:k3q03EvaGotoSklad|W:k4q03AlexandrGotoBurah|W:k4q01GrifGotoBraga|W:k4q01AlexandrGotoGrif|W:k4q01GrifGotoNotkin|W:k4q02KaterinaGotoTheater|W:k4q02MarkGotoTheater|W:k4q03LaraGotoAlexandr|W:k5q03LaskaGotoAlbinos|W:k5q01AlexandrGotoMladVlad|W:k5q01RubinGotoGeorg|W:k5q04KapellaGotoMaria|W:k5q04MariaGotoDanko|W:k5q02KabatchikGotoAlexandr|W:k5q02KaterinaGotoPetr|W:k5q02PetrGotoAndrei|W:k6q03LaskaGotoAlbinos|W:k6q01IfAnna|W:k6q01IfEva|W:k6q01IfLara|W:k6q01IfOspina|W:k6q02GotoKapella|W:k7q01BirdmaskGotoCorpse|W:k7q02DankoGotoGatherer|W:k7q03BurahGotoFather|W:k10q01NotkinGotoRubin|W:k10q01WastedGotoBurah|W:house1_kabak@door1|W:mnogogrannik_han@door1|W:pt_map_lara|A:AddMark|W:map_chertez_state|W:map_chertez_force|W:K_Mission5|W:cot_georg@door1|W:cot_georg@door2|W:termitnik@door1|W:resque_list|W:mnogogrannik@door1|W:k12DankoVisit|W:k3q04SendBurahMail|W:k10q01KnowAboutRubin|W:k2AlexandrVisit|W:k2LaraVisit|W:k5LaskaVisit|W:k2KaterinaVisit|W:k3AlexandrVisit|W:k3KaterinaVisit|W:k4AlexandrVisit|W:k4KaterinaVisit|W:k5AlexandrVisit|W:k5KaterinaVisit|W:k6KaterinaVisit|W:k6AlexandrVisit|W:k5Kapellavisit|W:k6LaskaVisit|W:k4LaraVisit|W:k7AglajaVisit|W:k8AglajaVisit|W:k9AglajaVisit|W:k11AglajaVisit|W:k12BurahVisit|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:GetMap|W:army.wmv|W:aglaja.wmv|W:quest_k5_04|W:quest_k10_01|W:quest_k11_01|W:quest_k6_01|W:quest_k7_01|W:quest_k4_01|W:quest_k12_01|W:quest_k8_01|W:quest_k9_01|W:quest_k1_01|W:quest_k3_01|W:klara2_positioner|W:klara2_svita_positioner|W:klara2_npc_positioner|W:vol_|W:K2System|W:K2SystemSvitaRemoved|W:RMap|W:Updating game |W:sobor|W:aglaja|W:Disease update|W:Diseased regions : |W:Special diseased region: 5|W:Special diseased region: 1|W:Special diseased house: r4_house_2_02|W:s_r4_house_2_02.isc|W:theater|W:dtheater_klara.isc|W:Special replaced house: uprava_admin|W:uprava_admin_army_klara.isc|W:k2s_|W:pers_morlok|W:Burah_arena_manager.xml
// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_9: op=0x0 vars=int,float
// @STANDALONE_EVENT_26: op=0x1d2c vars=string,string
// @STANDALONE_EVENT_1000: op=0x1d49 vars=string,string
// @PE: 0x0,0x73,0xc2,0x12b,0x26e,0x281,0x2d0,0x3d7,0x3fc,0x41a,0x43f,0x475,0x48d,0x4e7,0x541,0x54b,0x55c,0x1121,0x1123,0x1157,0x118b,0x11bf,0x11e8,0x121c,0x1250,0x1284,0x12b6,0x12ea,0x131e,0x1352,0x139c,0x13d0,0x1404,0x1438,0x1476,0x14aa,0x14de,0x1512,0x156b,0x159f,0x15d3,0x1607,0x1609,0x1610,0x1617,0x161e,0x164a,0x167e,0x16b2,0x16e6,0x1712,0x1746,0x177a,0x17ae,0x17dd,0x1811,0x1845,0x1879,0x18ae,0x18e2,0x1916,0x194a,0x1982,0x19b6,0x19ea,0x1a1e,0x1a47,0x1a7b,0x1aaf,0x1ae3,0x1b12,0x1b46,0x1b7a,0x1bae,0x1bda,0x1c0e,0x1c42,0x1c76,0x1c90,0x1cc4,0x1cf8,0x1e52,0x2662,0x266b,0x2674,0x267d,0x2686,0x268f,0x2698,0x26a1,0x26aa,0x26b3,0x26bc,0x26c5,0x26ce,0x26d7,0x26e0,0x26e9,0x26f2,0x26fb,0x2704,0x270d,0x2716,0x271f,0x2728,0x2731,0x273a,0x2743,0x274c,0x2755,0x275e,0x2767,0x2770,0x2779,0x2782,0x278b,0x2794,0x279d,0x27a4,0x27ab,0x27b2,0x27b9,0x29e1,0x29f3,0x2a2b,0x2a3d,0x2a44,0x2a5b,0x2a6c,0x2a7d,0x2a8e,0x2a9f,0x2ab0,0x2ac1,0x2ac6,0x2ae6,0x2af2,0x2af9,0x2b00,0x2b09,0x2b10,0x2b1c,0x2b28,0x2b34,0x2b40,0x2b4c,0x2b58,0x2b64,0x2b70,0x2b7c,0x2b88,0x2b94,0x2ba0,0x2bac,0x2bb8,0x2bc4,0x2bd0,0x2bdc,0x2be8,0x2bf4,0x2c00,0x2c0c,0x2c18,0x2c24,0x2c30,0x2c3a,0x2d10,0x30c0,0x321e,0x3263,0x326f,0x329d,0x32c3,0x32dd,0x32f7,0x3311

task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0;
	var_0_int = var_3_int;
	var_1_float = var_4_float;
	func_8893(var_3_int, var_4_float);
	if(var_2_bool != 0) {
		return 0;
	}
	var_4307_bool = 0; var_4308_int = 0; var_4309_float = 0;
	var_0_int = var_4308_int;
	var_1_float = var_4309_float;
	func_11440(var_4308_int, var_4309_float);
	if(var_4307_bool != 0) {
		return 0;
	}
	var_4816_int = 0; var_4817_float = 0;
	var_0_int = var_4816_int;
	var_1_float = var_4817_float;
	func_11536(var_4816_int, var_4817_float);
	return 0;
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0;
	var_7_bool = var_0_string == "playsound";
	if(var_7_bool != 0) {
		PlaySound(var_1_string);
	} else {
		var_9_bool = var_0_string == "enable_bonfire";
		if(var_9_bool != 0) {
			_strtoi(var_4_int, var_1_string);
			var_10_int = 0;
			var_10_int = var_4_int - (int)1;
			func_7608(var_10_int);
			goto Label_7496;
		}
		var_65_bool = var_0_string == "disable_bonfire";
		if(var_65_bool == 0) goto Label_7496;
		_strtoi(var_5_int, var_1_string);
		var_66_int = 0;
		var_66_int = var_5_int - (int)1;
		func_7685(var_66_int);
	}
Label_7496:
	return 4;
	
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	var_23_bool = var_0_string == "horror";
	if(var_23_bool != 0) {
		_strtoi(var_12_int, var_1_string);
		var_24_int = 0;
		var_12_int = var_24_int;
		func_442(var_24_int);
		var_39_object = GlobalVars[13];
		@@var_39_object:size(var_13_int);
		var_40_bool = 0;
		var_40_bool = 0;
		var_42_bool = var_12_int >= (int)0;
		if(var_42_bool != 0) {
			var_43_bool = var_12_int < var_13_int;
			if(var_43_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			@@var_44_object:get(var_14_object, var_12_int);
			var_45_object = Obj(); var_46_int = 0;
			var_14_object = var_45_object;
			func_305(var_45_object, (int)1);
			Trace("Replaced");
			var_14_object = 0;
		} else {
			Trace("Invalid region index");
	}
		var_75_bool = var_0_string == "nail";
		if(var_75_bool != 0) {
			_strtoi(var_15_int, var_1_string);
			var_76_int = 0;
			var_15_int = var_76_int;
			func_472(var_76_int);
			var_88_object = GlobalVars[13];
			@@var_88_object:size(var_16_int);
			var_89_bool = 0;
			var_89_bool = 0;
			var_91_bool = var_15_int >= (int)0;
			if(var_91_bool != 0) {
				var_92_bool = var_15_int < var_16_int;
				if(var_92_bool != 0) {
					var_89_bool = 1;
				}
			}
			if(var_89_bool != 0) {
				var_93_object = GlobalVars[13];
				@@var_93_object:get(var_17_object, var_15_int);
				var_94_object = Obj(); var_95_int = 0;
				var_17_object = var_94_object;
				func_305(var_94_object, (int)2);
				Trace("Replaced");
				var_17_object = 0;
			} else {
				Trace("Invalid region index");
		}
			var_99_bool = var_0_string == "fogme";
			if(var_99_bool != 0) {
				func_74(Obj());
				var_100_object = var_18_object;
				@@var_18_object:GetScene(var_19_object);
				@@var_18_object:GetPosition(var_20_cvector);
				AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, CVector(0.0, 0.0, 1.0), "fog_stat.xml");
				var_21_object = 0;
				var_19_object = 0;
				var_18_object = 0;
				goto Label_7607;
			}
			var_108_bool = var_0_string == "sepia";
			if(var_108_bool != 0) {
				func_289();
				goto Label_7607;
			}
			var_112_bool = var_0_string == "nosepia";
			if(var_112_bool == 0) goto Label_7607;
			func_294();
		}
		goto Label_7607;
	}
	goto Label_7607;
	
Label_7607:
	return 20;
	
}


main()
{
	SetVariable("branch", (int)2);
	SetSaveProperty((int)0, (int)2);
	func_52();
	func_7908();
	func_8948();
	func_11501();
	func_284((float)0);
	var_4580_float = (float)0;
	func_12480();
	
Label_48:
	Hold();
	goto Label_48;
}
EMIT "Return(); Pop(0)";


func_11264(var_4944_bool)
{
	var_4947_int = 0; var_4948_string = "";
	func_132(var_4947_int, "k8AglajaVisit");
	var_4950_bool = var_4947_int != (int)0;
	if(var_4950_bool != 0) {
		var_4944_bool = 1;
		return 0;
	}
	var_4944_bool = 0;
	return 0;
}


func_5124(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object)
{
	var_3686_bool = var_3680_int == (int)0;
	if(var_3686_bool != 0) {
		var_3687_int = 0; var_3688_bool = 0;
		func_796((int)3, (bool)0);
		var_3689_int = 0; var_3690_bool = 0; var_3691_int = 0;
		func_813((int)3, (bool)0, (int)1);
		var_3692_int = 0; var_3693_int = 0; var_3694_object = Obj(); var_3695_object = Obj(); var_3696_object = Obj();
		var_3679_int = var_3693_int;
		var_3681_object = var_3694_object;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		func_720((int)3, var_3693_int, var_3694_object, var_3695_object, var_3696_object);
		var_3697_object = Obj(); var_3698_int = 0;
		var_3684_object = var_3697_object;
		func_305(var_3697_object, (int)2);
		var_3699_int = 0; var_3700_bool = 0; var_3701_int = 0;
		func_870((int)3, (bool)0, (int)7);
		var_3702_int = 0; var_3703_bool = 0; var_3704_int = 0;
		func_932((int)3, (bool)1, (int)7);
	}
	var_3705_int = 0; var_3706_bool = 0;
	func_779((int)3, (bool)0);
	var_3707_int = 0; var_3708_int = 0; var_3709_int = 0;
	var_3679_int = var_3708_int;
	var_3680_int = var_3709_int;
	func_3847((int)3, var_3708_int, var_3709_int);
	return 0;
}


func_8200()
{
	var_4426_object = Obj(); var_4427_object = Obj();
	GetMainOutdoorScene(var_4427_object);
	var_4428_object = GlobalVars[0];
	var_4429_object = Obj(); var_4430_object = Obj(); var_4431_int = 0;
	var_4427_object = var_4430_object;
	func_7762(var_4429_object, var_4430_object, (int)1);
	var_4429_object = var_4428_object;
	GlobalVars[0] = var_4428_object;
	var_4451_object = GlobalVars[1];
	var_4452_object = Obj(); var_4453_object = Obj(); var_4454_int = 0;
	var_4427_object = var_4453_object;
	func_7762(var_4452_object, var_4453_object, (int)2);
	var_4452_object = var_4451_object;
	GlobalVars[1] = var_4451_object;
	var_4455_object = GlobalVars[2];
	var_4456_object = Obj(); var_4457_object = Obj(); var_4458_int = 0;
	var_4427_object = var_4457_object;
	func_7762(var_4456_object, var_4457_object, (int)3);
	var_4456_object = var_4455_object;
	GlobalVars[2] = var_4455_object;
	var_4459_object = GlobalVars[3];
	var_4460_object = Obj(); var_4461_object = Obj(); var_4462_int = 0;
	var_4427_object = var_4461_object;
	func_7762(var_4460_object, var_4461_object, (int)4);
	var_4460_object = var_4459_object;
	GlobalVars[3] = var_4459_object;
	var_4463_object = GlobalVars[4];
	var_4464_object = Obj(); var_4465_object = Obj(); var_4466_int = 0;
	var_4427_object = var_4465_object;
	func_7762(var_4464_object, var_4465_object, (int)5);
	var_4464_object = var_4463_object;
	GlobalVars[4] = var_4463_object;
	var_4467_object = GlobalVars[5];
	var_4468_object = Obj(); var_4469_object = Obj(); var_4470_int = 0;
	var_4427_object = var_4469_object;
	func_7762(var_4468_object, var_4469_object, (int)6);
	var_4468_object = var_4467_object;
	GlobalVars[5] = var_4467_object;
	var_4471_object = GlobalVars[12];
	func_126(Obj());
	var_4472_object = var_4471_object;
	GlobalVars[12] = var_4471_object;
	var_4473_bool = 0;
	func_7773((bool)0);
	func_8748();
	func_8823();
	SendWorldWndMessage((int)100);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11276(var_4820_bool)
{
	var_4823_int = 0; var_4824_string = "";
	func_132(var_4823_int, "k9AglajaVisit");
	var_4828_bool = var_4823_int != (int)0;
	if(var_4828_bool != 0) {
		var_4820_bool = 1;
		return 0;
	}
	var_4820_bool = 0;
	return 0;
}


func_7182(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object)
{
	var_3006_bool = var_3000_int == (int)0;
	if(var_3006_bool != 0) {
		var_3007_int = 0; var_3008_bool = 0;
		func_796((int)14, (bool)1);
		var_3009_int = 0; var_3010_bool = 0; var_3011_int = 0;
		func_813((int)14, (bool)1, (int)1);
		var_3012_int = 0; var_3013_int = 0; var_3014_object = Obj(); var_3015_object = Obj(); var_3016_object = Obj();
		var_2999_int = var_3013_int;
		var_3001_object = var_3014_object;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		func_641((int)14, var_3013_int, var_3014_object, var_3015_object, var_3016_object);
		var_3017_object = Obj(); var_3018_int = 0;
		var_3004_object = var_3017_object;
		func_305(var_3017_object, (int)1);
		var_3019_int = 0; var_3020_bool = 0; var_3021_int = 0;
		func_870((int)14, (bool)1, (int)5);
		var_3022_int = 0; var_3023_bool = 0; var_3024_int = 0;
		func_932((int)14, (bool)0, (int)5);
	}
	var_3025_int = 0; var_3026_bool = 0;
	func_779((int)14, (bool)0);
	var_3027_int = 0; var_3028_int = 0; var_3029_int = 0;
	var_2999_int = var_3028_int;
	var_3000_int = var_3029_int;
	func_2584((int)14, var_3028_int, var_3029_int);
	return 0;
}


func_6161(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object)
{
	var_2841_bool = var_2835_int == (int)0;
	if(var_2841_bool != 0) {
		var_2842_int = 0; var_2843_bool = 0;
		func_796((int)9, (bool)1);
		var_2844_int = 0; var_2845_bool = 0; var_2846_int = 0;
		func_813((int)9, (bool)1, (int)1);
		var_2847_int = 0; var_2848_int = 0; var_2849_object = Obj(); var_2850_object = Obj(); var_2851_object = Obj();
		var_2834_int = var_2848_int;
		var_2836_object = var_2849_object;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		func_641((int)9, var_2848_int, var_2849_object, var_2850_object, var_2851_object);
		var_2852_object = Obj(); var_2853_int = 0;
		var_2839_object = var_2852_object;
		func_305(var_2852_object, (int)1);
		var_2854_int = 0; var_2855_bool = 0; var_2856_int = 0;
		func_870((int)9, (bool)1, (int)7);
		var_2857_int = 0; var_2858_bool = 0; var_2859_int = 0;
		func_932((int)9, (bool)0, (int)7);
	}
	var_2860_int = 0; var_2861_bool = 0;
	func_779((int)9, (bool)0);
	var_2862_int = 0; var_2863_int = 0; var_2864_int = 0;
	var_2834_int = var_2863_int;
	var_2835_int = var_2864_int;
	func_2764((int)9, var_2863_int, var_2864_int);
	return 0;
}


func_11288(var_4857_bool)
{
	var_4860_int = 0; var_4861_string = "";
	func_132(var_4860_int, "k11AglajaVisit");
	var_4863_bool = var_4860_int != (int)0;
	if(var_4863_bool != 0) {
		var_4857_bool = 1;
		return 0;
	}
	var_4857_bool = 0;
	return 0;
}


func_10266()
{
	var_5796_object = Obj(); var_5797_object = Obj(); var_5798_object = Obj(); var_5799_object = Obj();
	func_11417(Obj());
	var_5800_object = var_5798_object;
	@@var_5798_object:FindMark(var_5799_object, "k2q03Arfist");
	var_5802_object = var_5799_object;
	if(var_5802_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q01AlexandrGotoMladVlad");
	var_5804_object = var_5799_object;
	if(var_5804_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q01BigVladGotoOspina");
	var_5806_object = var_5799_object;
	if(var_5806_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q01MladVladGotoOspina");
	var_5808_object = var_5799_object;
	if(var_5808_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q03Arfist");
	var_5810_object = var_5799_object;
	if(var_5810_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q04AnnaGotoGatherer1");
	var_5812_object = var_5799_object;
	if(var_5812_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q04AnnaGotoGatherer2");
	var_5814_object = var_5799_object;
	if(var_5814_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q04AnnaGotoGatherer3");
	var_5816_object = var_5799_object;
	if(var_5816_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q04MorlokGotoAndrei");
	var_5818_object = var_5799_object;
	if(var_5818_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q03LaraLetter");
	var_5820_object = var_5799_object;
	if(var_5820_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q04MladVladGotoAnna");
	var_5822_object = var_5799_object;
	if(var_5822_object != 0) {
		@@var_5799_object:Remove();
	}
	@@var_5798_object:FindMark(var_5799_object, "k2q02KaterinaGotoLara");
	var_5824_object = var_5799_object;
	if(var_5824_object != 0) {
		@@var_5799_object:Remove();
	}
	var_5825_bool = 0; var_5826_int = 0;
	func_11392(var_5825_bool, (int)461);
	var_5827_bool = 0; var_5828_int = 0;
	func_11392(var_5827_bool, (int)470);
	var_5829_bool = 0; var_5830_int = 0;
	func_11392(var_5829_bool, (int)476);
	var_5831_bool = 0; var_5832_int = 0;
	func_11392(var_5831_bool, (int)507);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1050(var_724_int, var_725_int)
{
	var_726_bool = 0;
	var_726_bool = 1;
	var_727_bool = 0;
	var_727_bool = 1;
	var_729_bool = var_725_int >= (int)22;
	if(var_729_bool != 1) {
		var_731_bool = var_725_int < (int)4;
		if(var_731_bool != 1) {
			var_727_bool = 0;
		}
	}
	if(var_727_bool != 1) {
		var_732_bool = 0;
		var_732_bool = 0;
		var_734_bool = var_725_int >= (int)6;
		if(var_734_bool != 0) {
			var_736_bool = var_725_int < (int)8;
			if(var_736_bool != 0) {
				var_732_bool = 1;
			}
		}
		if(var_732_bool != 1) {
			var_726_bool = 0;
		}
	}
	if(var_726_bool != 0) {
		var_737_int = 0; var_738_bool = 0;
		var_724_int = var_737_int;
		func_779(var_737_int, (bool)1);
	} else {
		var_748_int = 0; var_749_bool = 0;
		var_724_int = var_748_int;
		func_779(var_748_int, (bool)0);
	}
	return 0;
	
}


func_11300(var_4841_bool)
{
	var_4844_int = 0; var_4845_string = "";
	func_132(var_4844_int, "k12BurahVisit");
	var_4847_bool = var_4844_int != (int)0;
	if(var_4847_bool != 0) {
		var_4841_bool = 1;
		return 0;
	}
	var_4841_bool = 0;
	return 0;
}


func_11312(var_5193_bool, var_5194_object)
{
	var_5196_bool = 0; var_5197_object = Obj();
	var_5194_object = var_5197_object;
	func_11322(var_5197_object);
	if(var_5196_bool != 0) {
		var_5193_bool = 1;
		return 0;
	}
	var_5193_bool = 0;
	return 0;
}


func_52()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	FindActor(var_9_object, "player");
	GetMainOutdoorScene(var_10_object);
	var_15_bool = var_10_object == 0; //@nz
	if(var_15_bool != 0) {
		Trace("Starting scene not found");
		return 10;
	}
	@@var_10_object:GetLocator("pt_birth_Klara", var_11_bool, var_12_cvector, var_13_cvector);
	var_18_bool = var_11_bool;
	if(var_18_bool != 0) {
		Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
	}
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_5176(var_122_object)
{
	@@var_122_object:add("dt_house3_08_i2");
	@@var_122_object:add("dt_house3_09");
	@@var_122_object:add("dt_house3_09_i2");
	@@var_122_object:add("house1_se_03l");
	@@var_122_object:add("house1_se_03r");
	@@var_122_object:add("house1_se_01l");
	@@var_122_object:add("house1_se_01r");
	@@var_122_object:add("house1_se_04l");
	@@var_122_object:add("house1_se_04r");
	@@var_122_object:add("house5_11");
	@@var_122_object:add("house5_09");
	@@var_122_object:add("house5_13");
	@@var_122_object:add("house5_12");
	@@var_122_object:add("house5_14");
	@@var_122_object:add("house5_unoin03l");
	@@var_122_object:add("house5_unoin03r");
	@@var_122_object:add("house5_unoin02l");
	@@var_122_object:add("house5_unoin02r");
	@@var_122_object:add("house5_unoin01l");
	@@var_122_object:add("house5_unoin01r");
	return 0;
}


func_11322(var_5196_bool)
{
	var_5196_bool = 0;
	return 0;
}


func_11325()
{
	var_4758_object = Obj(); var_4759_object = Obj();
	CreateDiaryEntry(var_4759_object, (int)567, (int)0, (int)530581);
	var_4763_bool = 0; var_4764_object = Obj(); var_4765_int = 0;
	var_4759_object = var_4764_object;
	func_11364(var_4763_bool, var_4764_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1087(var_1795_int, var_1796_int)
{
	var_1797_bool = 0;
	var_1797_bool = 1;
	var_1799_bool = var_1796_int >= (int)22;
	if(var_1799_bool != 1) {
		var_1801_bool = var_1796_int < (int)6;
		if(var_1801_bool != 1) {
			var_1797_bool = 0;
		}
	}
	if(var_1797_bool != 0) {
		var_1802_int = 0; var_1803_bool = 0;
		var_1795_int = var_1802_int;
		func_779(var_1802_int, (bool)1);
	} else {
		var_1804_int = 0; var_1805_bool = 0;
		var_1795_int = var_1804_int;
		func_779(var_1804_int, (bool)0);
	}
	return 0;
	
}


func_3137(var_2118_int, var_2119_int, var_2120_int)
{
	var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; var_2124_int = 0;
	var_2125_bool = 0;
	var_2125_bool = 0;
	var_2127_bool = var_2120_int > (int)8;
	if(var_2127_bool != 0) {
		var_2129_bool = var_2120_int < (int)21;
		if(var_2129_bool != 0) {
			var_2125_bool = 1;
		}
	}
	if(var_2125_bool != 0) {
		var_2130_int = 0; var_2131_string = ""; var_2132_string = ""; var_2133_int = 0;
		var_2118_int = var_2130_int;
		func_503(var_2130_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2134_int = 0; var_2135_string = ""; var_2136_string = ""; var_2137_int = 0;
		var_2118_int = var_2134_int;
		func_503(var_2134_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2138_int = 0; var_2139_string = ""; var_2140_string = ""; var_2141_int = 0;
		var_2118_int = var_2138_int;
		func_503(var_2138_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2142_int = 0; var_2143_string = ""; var_2144_string = ""; var_2145_int = 0;
		var_2118_int = var_2142_int;
		func_529(var_2142_int, "fog", "fog.xml", (int)6);
		var_2151_bool = var_2119_int >= (int)5;
		if(var_2151_bool != 0) {
			var_2152_int = 0; var_2153_string = ""; var_2154_string = ""; var_2155_int = 0;
			var_2118_int = var_2152_int;
			func_529(var_2152_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2157_float = 0; var_2158_int = 0;
		var_2119_int = var_2158_int;
		func_1255(var_2157_float, var_2158_int);
		var_2123_int = (int)1 * var_2157_float;
		var_2203_int = var_2123_int;
		if(var_2203_int != 0) {
			var_2204_int = 0; var_2205_string = ""; var_2206_string = ""; var_2207_int = 0;
			var_2118_int = var_2204_int;
			var_2123_int = var_2207_int;
			func_503(var_2204_int, "pers_bomber", "bomber.xml", var_2207_int);
		}
	} else {
		var_2243_int = 0; var_2244_string = ""; var_2245_string = ""; var_2246_int = 0;
		var_2118_int = var_2243_int;
		func_503(var_2243_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0;
		var_2118_int = var_2247_int;
		func_503(var_2247_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2251_int = 0; var_2252_string = ""; var_2253_string = ""; var_2254_int = 0;
		var_2118_int = var_2251_int;
		func_503(var_2251_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2255_int = 0; var_2256_string = ""; var_2257_string = ""; var_2258_int = 0;
		var_2118_int = var_2255_int;
		func_529(var_2255_int, "fog", "fog.xml", (int)6);
		var_2260_bool = var_2119_int >= (int)5;
		if(var_2260_bool != 0) {
			var_2261_int = 0; var_2262_string = ""; var_2263_string = ""; var_2264_int = 0;
			var_2118_int = var_2261_int;
			func_529(var_2261_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2266_float = 0; var_2267_int = 0;
		var_2119_int = var_2267_int;
		func_1255(var_2266_float, var_2267_int);
		var_2124_int = (int)2 * var_2266_float;
		var_2268_int = var_2124_int;
		if(var_2268_int == 0) goto Label_3255;
		var_2269_int = 0; var_2270_string = ""; var_2271_string = ""; var_2272_int = 0;
		var_2118_int = var_2269_int;
		var_2124_int = var_2272_int;
		func_503(var_2269_int, "pers_bomber", "bomber.xml", var_2272_int);
	}
Label_3255:
	var_2208_bool = 0; var_2209_int = 0;
	var_2119_int = var_2209_int;
	func_1372(var_2208_bool, var_2209_int);
	if(var_2208_bool != 0) {
		var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0;
		var_2118_int = var_2211_int;
		func_503(var_2211_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2215_int = 0; var_2216_string = ""; var_2217_string = ""; var_2218_int = 0; var_2219_int = 0; var_2220_int = 0;
	var_2118_int = var_2215_int;
	func_516(var_2215_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2225_int = 0; var_2226_string = ""; var_2227_string = ""; var_2228_int = 0; var_2229_int = 0; var_2230_int = 0;
	var_2118_int = var_2225_int;
	func_516(var_2225_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2231_int = 0; var_2232_string = ""; var_2233_string = ""; var_2234_int = 0; var_2235_int = 0; var_2236_int = 0;
	var_2118_int = var_2231_int;
	func_516(var_2231_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2237_int = 0; var_2238_string = ""; var_2239_string = ""; var_2240_int = 0; var_2241_int = 0; var_2242_int = 0;
	var_2118_int = var_2237_int;
	func_516(var_2237_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_7234(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object)
{
	var_4136_bool = var_4130_int == (int)0;
	if(var_4136_bool != 0) {
		var_4137_int = 0; var_4138_bool = 0;
		func_796((int)14, (bool)0);
		var_4139_int = 0; var_4140_bool = 0; var_4141_int = 0;
		func_813((int)14, (bool)0, (int)1);
		var_4142_int = 0; var_4143_int = 0; var_4144_object = Obj(); var_4145_object = Obj(); var_4146_object = Obj();
		var_4129_int = var_4143_int;
		var_4131_object = var_4144_object;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		func_720((int)14, var_4143_int, var_4144_object, var_4145_object, var_4146_object);
		var_4147_object = Obj(); var_4148_int = 0;
		var_4134_object = var_4147_object;
		func_305(var_4147_object, (int)2);
		var_4149_int = 0; var_4150_bool = 0; var_4151_int = 0;
		func_870((int)14, (bool)0, (int)5);
		var_4152_int = 0; var_4153_bool = 0; var_4154_int = 0;
		func_932((int)14, (bool)1, (int)5);
	}
	var_4155_int = 0; var_4156_bool = 0;
	func_779((int)14, (bool)0);
	var_4157_int = 0; var_4158_int = 0; var_4159_int = 0;
	var_4129_int = var_4158_int;
	var_4130_int = var_4159_int;
	func_3471((int)14, var_4158_int, var_4159_int);
	return 0;
}


func_6213(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object)
{
	var_3971_bool = var_3965_int == (int)0;
	if(var_3971_bool != 0) {
		var_3972_int = 0; var_3973_bool = 0;
		func_796((int)9, (bool)0);
		var_3974_int = 0; var_3975_bool = 0; var_3976_int = 0;
		func_813((int)9, (bool)0, (int)1);
		var_3977_int = 0; var_3978_int = 0; var_3979_object = Obj(); var_3980_object = Obj(); var_3981_object = Obj();
		var_3964_int = var_3978_int;
		var_3966_object = var_3979_object;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		func_720((int)9, var_3978_int, var_3979_object, var_3980_object, var_3981_object);
		var_3982_object = Obj(); var_3983_int = 0;
		var_3969_object = var_3982_object;
		func_305(var_3982_object, (int)2);
		var_3984_int = 0; var_3985_bool = 0; var_3986_int = 0;
		func_870((int)9, (bool)0, (int)7);
		var_3987_int = 0; var_3988_bool = 0; var_3989_int = 0;
		func_932((int)9, (bool)1, (int)7);
	}
	var_3990_int = 0; var_3991_bool = 0;
	func_779((int)9, (bool)0);
	var_3992_int = 0; var_3993_int = 0; var_3994_int = 0;
	var_3964_int = var_3993_int;
	var_3965_int = var_3994_int;
	func_3659((int)9, var_3993_int, var_3994_int);
	return 0;
}


func_74(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	FindActor(var_102_object, "player");
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_11338()
{
	var_5033_object = Obj(); var_5034_object = Obj();
	CreateDiaryEntry(var_5034_object, (int)571, (int)0, (int)530585);
	var_5038_bool = 0; var_5039_object = Obj(); var_5040_int = 0;
	var_5034_object = var_5039_object;
	func_11364(var_5038_bool, var_5039_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8272(var_4329_int, var_4330_int)
{
	var_4332_bool = 0; var_4333_int = 0; var_4334_int = 0; var_4335_bool = 0; var_4336_int = 0; var_4337_int = 0;
	var_4339_bool = var_4330_int == (int)0;
	if(var_4339_bool != 0) {
		var_4335_bool = 0;
		var_4341_bool = var_4329_int == (int)2;
		if(var_4341_bool != 0) {
			var_4342_int = 0;
			func_11434(var_4342_int);
			var_4344_bool = var_4342_int == (int)0;
			if(var_4344_bool != 0) {
				GetVariable("d1q01", var_4336_int);
				var_4347_bool = var_4336_int != (int)1000;
				if(var_4347_bool != 0) {
					var_4335_bool = 1;
					UnlockAchievement("ACHIEVEMENT_UP");
					GameOver("gameover_fail.xml");
				}
			} else {
							var_4458_int = 0;
							func_11434(var_4458_int);
							var_4460_bool = var_4458_int == (int)1;
							if(var_4460_bool == 0) goto Label_8319;
							GetVariable("b1q01", var_4337_int);
							var_4463_bool = var_4337_int != (int)1000;
							if(var_4463_bool == 0) goto Label_8319;
							var_4335_bool = 1;
							UnlockAchievement("ACHIEVEMENT_UP");
							GameOver("gameover_fail.xml");
			}
		}
	Label_8319:
		var_4350_bool = var_4335_bool == 0; //@nz
		if(var_4350_bool != 0) {
			var_4351_int = 0;
			func_11434(var_4351_int);
			var_4353_bool = var_4351_int == (int)0;
			if(var_4353_bool != 0) {
				var_4355_bool = var_4329_int == (int)2;
				if(var_4355_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
					var_4360_bool = var_4329_int == (int)3;
					if(var_4360_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_2");
						goto Label_8403;
					}
					var_4363_bool = var_4329_int == (int)4;
					if(var_4363_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_3");
						goto Label_8403;
					}
					var_4366_bool = var_4329_int == (int)5;
					if(var_4366_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_4");
						goto Label_8403;
					}
					var_4369_bool = var_4329_int == (int)6;
					if(var_4369_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_5");
						goto Label_8403;
					}
					var_4372_bool = var_4329_int == (int)7;
					if(var_4372_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_6");
						goto Label_8403;
					}
					var_4375_bool = var_4329_int == (int)8;
					if(var_4375_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_7");
						goto Label_8403;
					}
					var_4378_bool = var_4329_int == (int)9;
					if(var_4378_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_8");
						goto Label_8403;
					}
					var_4381_bool = var_4329_int == (int)10;
					if(var_4381_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_9");
						goto Label_8403;
					}
					var_4384_bool = var_4329_int == (int)11;
					if(var_4384_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_10");
						goto Label_8403;
					}
					var_4387_bool = var_4329_int == (int)12;
					if(var_4387_bool == 0) goto Label_8403;
					UnlockAchievement("ACHIEVEMENT_BACH_11");
			}
				var_4389_int = 0;
				func_11434(var_4389_int);
				var_4391_bool = var_4389_int == (int)1;
				if(var_4391_bool != 0) {
					var_4393_bool = var_4329_int == (int)2;
					if(var_4393_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else {
						var_4396_bool = var_4329_int == (int)3;
						if(var_4396_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_2");
							goto Label_8486;
						}
						var_4399_bool = var_4329_int == (int)4;
						if(var_4399_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_3");
							goto Label_8486;
						}
						var_4402_bool = var_4329_int == (int)5;
						if(var_4402_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_4");
							goto Label_8486;
						}
						var_4405_bool = var_4329_int == (int)6;
						if(var_4405_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_5");
							goto Label_8486;
						}
						var_4408_bool = var_4329_int == (int)7;
						if(var_4408_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_6");
							goto Label_8486;
						}
						var_4411_bool = var_4329_int == (int)8;
						if(var_4411_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_7");
							goto Label_8486;
						}
						var_4414_bool = var_4329_int == (int)9;
						if(var_4414_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_8");
							goto Label_8486;
						}
						var_4417_bool = var_4329_int == (int)10;
						if(var_4417_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_9");
							goto Label_8486;
						}
						var_4420_bool = var_4329_int == (int)11;
						if(var_4420_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_10");
							goto Label_8486;
						}
						var_4423_bool = var_4329_int == (int)12;
						if(var_4423_bool == 0) goto Label_8486;
						UnlockAchievement("ACHIEVEMENT_BURAH_11");
				}
					var_4426_bool = var_4329_int == (int)2;
					if(var_4426_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_1");
						goto Label_8563;
					}
					var_4429_bool = var_4329_int == (int)3;
					if(var_4429_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_2");
						goto Label_8563;
					}
					var_4432_bool = var_4329_int == (int)4;
					if(var_4432_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_3");
						goto Label_8563;
					}
					var_4435_bool = var_4329_int == (int)5;
					if(var_4435_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_4");
						goto Label_8563;
					}
					var_4438_bool = var_4329_int == (int)6;
					if(var_4438_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_5");
						goto Label_8563;
					}
					var_4441_bool = var_4329_int == (int)7;
					if(var_4441_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_6");
						goto Label_8563;
					}
					var_4444_bool = var_4329_int == (int)8;
					if(var_4444_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_7");
						goto Label_8563;
					}
					var_4447_bool = var_4329_int == (int)9;
					if(var_4447_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_8");
						goto Label_8563;
					}
					var_4450_bool = var_4329_int == (int)10;
					if(var_4450_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_9");
						goto Label_8563;
					}
					var_4453_bool = var_4329_int == (int)11;
					if(var_4453_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_10");
						goto Label_8563;
					}
					var_4456_bool = var_4329_int == (int)12;
					if(var_4456_bool == 0) goto Label_8563;
					UnlockAchievement("ACHIEVEMENT_CLARA_11");

				}
			Label_8486:
				goto Label_8563;
			}
		Label_8403:
			goto Label_8563;
		}
	Label_8563:
		SendWorldWndMessage((int)101);
		SetVariable("c_iWM_RealDayChange", var_4329_int);
	}
	return 6;
	
}


func_81(var_585_bool, var_586_object, var_587_string)
{
	var_588_bool = 0; var_589_bool = 0;
	var_592_bool = IsFuncExist(var_586_object, "HasProperty", (int)2);
	var_593_bool = var_592_bool == 0; //@nz
	if(var_593_bool != 0) {
		var_585_bool = 0;
		return 2;
	}
	@@var_586_object:HasProperty(var_587_string, var_589_bool);
	var_589_bool = var_585_bool;
	return 2;
}


func_1110(var_791_bool, var_792_int, var_793_int)
{
	var_794_int = 0; var_795_int = 0;
	func_11434((int)0);
	var_796_int = var_795_int;
	var_801_bool = var_795_int == (int)1;
	if(var_801_bool != 0) {
		var_802_bool = 0;
		var_802_bool = 0;
		var_804_bool = var_792_int == (int)0;
		if(var_804_bool != 0) {
			var_806_bool = var_793_int < (int)21;
			if(var_806_bool != 0) {
				var_802_bool = 1;
			}
		}
		if(var_802_bool != 0) {
			var_791_bool = 1;
			return 2;
		}
	} else {
		var_808_bool = var_795_int == (int)2;
		if(var_808_bool == 0) goto Label_1139;
		var_810_bool = var_792_int == (int)5;
		if(var_810_bool == 0) goto Label_1139;
		var_791_bool = 1;
		return 2;
	}
Label_1139:
	var_791_bool = 0;
	return 2;
	
}


func_11351(var_4772_object)
{
	var_4773_object = Obj(); var_4774_object = Obj();
	GetDiaryRoot(var_4774_object);
	var_4775_bool = var_4774_object == 0; //@nz
	if(var_4775_bool != 0) {
		Trace("Can't retrieve diary root");
		var_4772_object = 0;
		return 2;
	}
	var_4774_object = var_4772_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_93(var_5874_bool, var_5875_object, var_5876_string, var_5877_float, var_5878_float, var_5879_float)
{
	var_5880_float = 0; var_5881_float = 0;
	var_5882_bool = 0; var_5883_object = Obj(); var_5884_string = "";
	var_5875_object = var_5883_object;
	var_5876_string = var_5884_string;
	func_81(var_5882_bool, var_5883_object, var_5884_string);
	var_5885_bool = var_5882_bool == 0; //@nz
	if(var_5885_bool != 0) {
		var_5874_bool = 0;
		return 2;
	}
	@@var_5875_object:GetProperty(var_5876_string, var_5881_float);
	var_5886_float = 0; var_5887_float = 0; var_5888_float = 0; var_5889_float = 0;
	var_5887_float = var_5881_float + var_5877_float;
	var_5878_float = var_5888_float;
	var_5879_float = var_5889_float;
	func_115(var_5886_float, var_5887_float, var_5888_float, var_5889_float);
	@@var_5875_object:SetProperty(var_5876_string, var_5886_float);
	var_5874_bool = 1;
	return 2;
}


func_11364(var_4763_bool, var_4764_object, var_4765_int)
{
	var_4766_object = Obj(); var_4767_object = Obj(); var_4768_int = 0; var_4769_object = Obj(); var_4770_object = Obj(); var_4771_int = 0;
	func_11351(Obj());
	var_4772_object = var_4769_object;
	@@var_4769_object:Find(var_4765_int, var_4770_object);
	var_4777_bool = var_4770_object == 0; //@nz
	if(var_4777_bool != 0) {
		var_4779_int = "Can't find diary parent with id: " + var_4765_int;
		Trace(var_4779_int);
		var_4763_bool = 0;
		return 6;
	}
	@@var_4770_object:AddChild(var_4764_object);
	SendWorldWndMessage((int)7);
	@@var_4764_object:GetCategory(var_4771_int);
	SetDiarySection(var_4771_int);
	var_4763_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4210(var_3428_int, var_3429_int, var_3430_int)
{
	var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0;
	var_3439_bool = 0;
	var_3439_bool = 0;
	var_3441_bool = var_3430_int > (int)8;
	if(var_3441_bool != 0) {
		var_3443_bool = var_3430_int < (int)21;
		if(var_3443_bool != 0) {
			var_3439_bool = 1;
		}
	}
	if(var_3439_bool != 0) {
		var_3444_int = 0; var_3445_string = ""; var_3446_string = ""; var_3447_int = 0;
		var_3428_int = var_3444_int;
		func_503(var_3444_int, "pers_rat", "rat.xml", (int)4);
		var_3448_int = 0; var_3449_string = ""; var_3450_string = ""; var_3451_int = 0;
		var_3428_int = var_3448_int;
		func_503(var_3448_int, "pers_alkash", "alkash.xml", (int)2);
		var_3452_int = 0; var_3453_string = ""; var_3454_string = ""; var_3455_int = 0;
		var_3428_int = var_3452_int;
		func_503(var_3452_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3457_float = 0; var_3458_int = 0;
		var_3429_int = var_3458_int;
		func_1165(var_3457_float, var_3458_int);
		var_3435_int = (int)2 * var_3457_float;
		var_3459_int = var_3435_int;
		if(var_3459_int != 0) {
			var_3460_int = 0; var_3461_string = ""; var_3462_string = ""; var_3463_int = 0;
			var_3428_int = var_3460_int;
			var_3435_int = var_3463_int;
			func_503(var_3460_int, "pers_grabitel", "grabitel.xml", var_3463_int);
		}
		var_3465_int = var_3429_int + (int)1;
		var_3467_bool = var_3465_int >= (int)2;
		if(var_3467_bool != 0) {
			var_3468_int = 0; var_3469_string = ""; var_3470_string = ""; var_3471_int = 0;
			var_3428_int = var_3468_int;
			func_503(var_3468_int, "pers_patrool", "patrol.xml", (int)2);
			var_3472_bool = 0; var_3473_int = 0;
			var_3429_int = var_3473_int;
			func_1372(var_3472_bool, var_3473_int);
			if(var_3472_bool != 0) {
				var_3474_int = 0; var_3475_string = ""; var_3476_string = ""; var_3477_int = 0;
				var_3428_int = var_3474_int;
				func_503(var_3474_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3479_float = 0; var_3480_int = 0;
		var_3429_int = var_3480_int;
		func_1255(var_3479_float, var_3480_int);
		var_3436_int = (int)1 * var_3479_float;
		var_3481_int = var_3436_int;
		if(var_3481_int != 0) {
			var_3482_int = 0; var_3483_string = ""; var_3484_string = ""; var_3485_int = 0;
			var_3428_int = var_3482_int;
			var_3436_int = var_3485_int;
			func_503(var_3482_int, "pers_bomber", "bomber.xml", var_3485_int);
		}
	} else {
		var_3492_int = 0; var_3493_string = ""; var_3494_string = ""; var_3495_int = 0;
		var_3428_int = var_3492_int;
		func_503(var_3492_int, "pers_rat", "rat.xml", (int)8);
		var_3496_int = 0; var_3497_string = ""; var_3498_string = ""; var_3499_int = 0;
		var_3428_int = var_3496_int;
		func_503(var_3496_int, "pers_alkash", "alkash.xml", (int)1);
		var_3500_int = 0; var_3501_string = ""; var_3502_string = ""; var_3503_int = 0;
		var_3428_int = var_3500_int;
		func_503(var_3500_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3505_float = 0; var_3506_int = 0;
		var_3429_int = var_3506_int;
		func_1165(var_3505_float, var_3506_int);
		var_3437_int = (int)3 * var_3505_float;
		var_3507_int = var_3437_int;
		if(var_3507_int != 0) {
			var_3508_int = 0; var_3509_string = ""; var_3510_string = ""; var_3511_int = 0;
			var_3428_int = var_3508_int;
			var_3437_int = var_3511_int;
			func_503(var_3508_int, "pers_grabitel", "grabitel.xml", var_3511_int);
		}
		var_3513_int = var_3429_int + (int)1;
		var_3515_bool = var_3513_int >= (int)2;
		if(var_3515_bool != 0) {
			var_3516_int = 0; var_3517_string = ""; var_3518_string = ""; var_3519_int = 0;
			var_3428_int = var_3516_int;
			func_503(var_3516_int, "pers_patrool", "patrol.xml", (int)1);
			var_3520_bool = 0; var_3521_int = 0;
			var_3429_int = var_3521_int;
			func_1372(var_3520_bool, var_3521_int);
			if(var_3520_bool != 0) {
				var_3522_int = 0; var_3523_string = ""; var_3524_string = ""; var_3525_int = 0;
				var_3428_int = var_3522_int;
				func_503(var_3522_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3527_float = 0; var_3528_int = 0;
		var_3429_int = var_3528_int;
		func_1255(var_3527_float, var_3528_int);
		var_3438_int = (int)1 * var_3527_float;
		var_3529_int = var_3438_int;
		if(var_3529_int == 0) goto Label_4372;
		var_3530_int = 0; var_3531_string = ""; var_3532_string = ""; var_3533_int = 0;
		var_3428_int = var_3530_int;
		var_3438_int = var_3533_int;
		func_503(var_3530_int, "pers_bomber", "bomber.xml", var_3533_int);
	}
Label_4372:
	var_3486_bool = 0; var_3487_int = 0;
	var_3429_int = var_3487_int;
	func_1372(var_3486_bool, var_3487_int);
	if(var_3486_bool != 0) {
		var_3488_int = 0; var_3489_string = ""; var_3490_string = ""; var_3491_int = 0;
		var_3428_int = var_3488_int;
		func_503(var_3488_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 8;
	
}


func_115(var_5886_float, var_5887_float, var_5888_float, var_5889_float)
{
	var_5890_bool = var_5887_float < var_5888_float;
	if(var_5890_bool != 0) {
		var_5888_float = var_5886_float;
		return 0;
	}
	var_5891_bool = var_5887_float > var_5889_float;
	if(var_5891_bool != 0) {
		var_5889_float = var_5886_float;
		return 0;
	}
	var_5887_float = var_5886_float;
	return 0;
}


func_1141(var_768_float, var_769_int)
{
	var_771_int = var_769_int + (int)1;
	var_773_bool = var_771_int == (int)7;
	if(var_773_bool != 0) {
		var_768_float = 2;
		return 0;
	}
	var_775_int = var_769_int + (int)1;
	var_777_bool = var_775_int == (int)8;
	if(var_777_bool != 0) {
		var_768_float = 0;
		return 0;
	}
	var_779_int = var_769_int + (int)1;
	var_781_bool = var_779_int == (int)1;
	if(var_781_bool != 0) {
		var_768_float = 0;
		return 0;
	}
	var_768_float = 1;
	return 0;
}


func_7286(var_313_object)
{
	@@var_313_object:add("lc_house3_05_i2");
	@@var_313_object:add("lc_house3_05");
	@@var_313_object:add("lc_house3_06_i2");
	@@var_313_object:add("lc_house3_06");
	@@var_313_object:add("lc_House6_06");
	@@var_313_object:add("lc_house3_04_i2");
	@@var_313_object:add("lc_house3_04");
	@@var_313_object:add("house3_plus_03_i2");
	return 0;
}


func_5238(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object)
{
	var_1303_bool = var_1297_int == (int)0;
	if(var_1303_bool != 0) {
		var_1304_int = 0; var_1305_bool = 0;
		func_796((int)4, (bool)0);
		var_1306_int = 0; var_1307_bool = 0; var_1308_int = 0;
		func_813((int)4, (bool)0, (int)1);
		var_1309_int = 0; var_1310_int = 0; var_1311_object = Obj(); var_1312_object = Obj(); var_1313_object = Obj();
		var_1309_int = 4;
		var_1296_int = var_1310_int;
		var_1298_object = var_1311_object;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		func_622(var_1310_int, var_1311_object, var_1312_object, var_1313_object);
		var_1314_object = Obj(); var_1315_int = 0;
		var_1301_object = var_1314_object;
		func_305(var_1314_object, (int)0);
		var_1316_int = 0; var_1317_bool = 0; var_1318_int = 0;
		func_870((int)4, (bool)0, (int)4);
		var_1319_int = 0; var_1320_bool = 0; var_1321_int = 0;
		func_932((int)4, (bool)0, (int)4);
	}
	var_1322_int = 0; var_1323_int = 0;
	var_1297_int = var_1323_int;
	func_1020((int)4, var_1323_int);
	var_1336_int = 0; var_1337_int = 0; var_1338_int = 0;
	var_1296_int = var_1337_int;
	var_1297_int = var_1338_int;
	func_1897((int)4, var_1337_int, var_1338_int);
	return 0;
}


func_6265(var_226_object)
{
	@@var_226_object:add("r4_house_2_02");
	@@var_226_object:add("r4_house3_03_i2");
	@@var_226_object:add("r4_house3_03");
	@@var_226_object:add("r4_house4_02_i2");
	@@var_226_object:add("r4_house4_02");
	@@var_226_object:add("r4_house4_01_i2");
	@@var_226_object:add("r4_house4_01");
	@@var_226_object:add("r4_house3_02_i2");
	@@var_226_object:add("r4_house3_02");
	@@var_226_object:add("r4_house_2_01");
	@@var_226_object:add("r4_house3_01_i2");
	@@var_226_object:add("r4_house3_01");
	@@var_226_object:add("r4_house7_01");
	@@var_226_object:add("r4_House6_01");
	@@var_226_object:add("r4_house_2_03");
	@@var_226_object:add("r4_House6_03");
	@@var_226_object:add("r4_house_2_04");
	return 0;
}


func_126(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_11392(var_5056_bool, var_5057_int)
{
	var_5058_object = Obj(); var_5059_object = Obj(); var_5060_object = Obj(); var_5061_object = Obj();
	func_11351(Obj());
	var_5062_object = var_5060_object;
	@@var_5060_object:Find(var_5057_int, var_5061_object);
	var_5063_bool = var_5061_object == 0; //@nz
	if(var_5063_bool != 0) {
		var_5056_bool = 0;
		return 4;
	}
	@@var_5061_object:Remove();
	var_5056_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_132(var_4823_int, var_4824_string)
{
	var_4825_int = 0; var_4826_int = 0;
	GetVariable(var_4824_string, var_4826_int);
	var_4826_int = var_4823_int;
	return 2;
}


func_10374()
{
	var_5937_object = Obj(); var_5938_object = Obj(); var_5939_object = Obj(); var_5940_object = Obj();
	func_11417(Obj());
	var_5941_object = var_5939_object;
	@@var_5939_object:FindMark(var_5940_object, "k3q01AlexandrGotoAnna");
	var_5943_object = var_5940_object;
	if(var_5943_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q01AnnaGotoKapella");
	var_5945_object = var_5940_object;
	if(var_5945_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q01AnnaGotoMladVlad");
	var_5947_object = var_5940_object;
	if(var_5947_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q01KapellaGotoAnna");
	var_5949_object = var_5940_object;
	if(var_5949_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q02JuliaGotoEva");
	var_5951_object = var_5940_object;
	if(var_5951_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q02KaterinaGotoJulia");
	var_5953_object = var_5940_object;
	if(var_5953_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q03AnnaGotoEva");
	var_5955_object = var_5940_object;
	if(var_5955_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q04KapellaGotoDanko");
	var_5957_object = var_5940_object;
	if(var_5957_object != 0) {
		@@var_5940_object:Remove();
	}
	@@var_5939_object:FindMark(var_5940_object, "k3q03EvaGotoSklad");
	var_5959_object = var_5940_object;
	if(var_5959_object != 0) {
		@@var_5940_object:Remove();
	}
	var_5960_bool = 0; var_5961_int = 0;
	func_11392(var_5960_bool, (int)337);
	var_5962_bool = 0; var_5963_int = 0;
	func_11392(var_5962_bool, (int)344);
	var_5964_bool = 0; var_5965_int = 0;
	func_11392(var_5964_bool, (int)350);
	var_5966_bool = 0; var_5967_int = 0;
	func_11392(var_5966_bool, (int)354);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_137(var_4781_object, var_4782_string)
{
	var_4783_object = Obj(); var_4784_object = Obj(); var_4785_object = Obj(); var_4786_object = Obj();
	GetMainOutdoorScene(var_4785_object);
	var_4788_int = var_4782_string + ".bin";
	AddBlankActor(var_4786_object, var_4785_object, var_4782_string, var_4788_int);
	var_4786_object = var_4781_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1165(var_3277_float, var_3278_int)
{
	var_3280_int = var_3278_int + (int)1;
	var_3282_bool = var_3280_int == (int)1;
	if(var_3282_bool != 0) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3284_int = var_3278_int + (int)1;
	var_3286_bool = var_3284_int == (int)2;
	if(var_3286_bool != 0) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3288_int = var_3278_int + (int)1;
	var_3290_bool = var_3288_int == (int)3;
	if(var_3290_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3292_int = var_3278_int + (int)1;
	var_3294_bool = var_3292_int == (int)4;
	if(var_3294_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3296_int = var_3278_int + (int)1;
	var_3298_bool = var_3296_int == (int)5;
	if(var_3298_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3300_int = var_3278_int + (int)1;
	var_3302_bool = var_3300_int == (int)6;
	if(var_3302_bool != 0) {
		var_3277_float = 2;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3304_int = var_3278_int + (int)1;
	var_3306_bool = var_3304_int == (int)7;
	if(var_3306_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3308_int = var_3278_int + (int)1;
	var_3310_bool = var_3308_int == (int)8;
	if(var_3310_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3312_int = var_3278_int + (int)1;
	var_3314_bool = var_3312_int == (int)9;
	if(var_3314_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3316_int = var_3278_int + (int)1;
	var_3318_bool = var_3316_int == (int)10;
	if(var_3318_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	var_3320_int = var_3278_int + (int)1;
	var_3322_bool = var_3320_int == (int)11;
	if(var_3322_bool != 0) {
		var_3277_float = 1;
		return 0;
	}
	var_3277_float = 0;
	return 0;
}


func_7312(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object)
{
	var_1954_bool = var_1948_int == (int)0;
	if(var_1954_bool != 0) {
		var_1955_int = 0; var_1956_bool = 0;
		func_796((int)15, (bool)0);
		var_1957_int = 0; var_1958_bool = 0; var_1959_int = 0;
		func_813((int)15, (bool)0, (int)1);
		var_1960_int = 0; var_1961_int = 0; var_1962_object = Obj(); var_1963_object = Obj(); var_1964_object = Obj();
		var_1960_int = 15;
		var_1947_int = var_1961_int;
		var_1949_object = var_1962_object;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		func_622(var_1961_int, var_1962_object, var_1963_object, var_1964_object);
		var_1965_object = Obj(); var_1966_int = 0;
		var_1952_object = var_1965_object;
		func_305(var_1965_object, (int)0);
		var_1967_int = 0; var_1968_bool = 0; var_1969_int = 0;
		func_870((int)15, (bool)0, (int)5);
		var_1970_int = 0; var_1971_bool = 0; var_1972_int = 0;
		func_932((int)15, (bool)0, (int)5);
	}
	var_1973_int = 0; var_1974_int = 0;
	var_1948_int = var_1974_int;
	func_1087((int)15, var_1974_int);
	var_1975_int = 0; var_1976_int = 0; var_1977_int = 0;
	var_1947_int = var_1976_int;
	var_1948_int = var_1977_int;
	func_1376((int)15, var_1976_int, var_1977_int);
	return 0;
}


func_11409(var_4832_int, var_4833_int, var_4834_int, var_4835_float)
{
	var_4836_int = 0; var_4837_int = 0;
	AddMessage(var_4833_int, var_4834_int, var_4835_float, var_4837_int);
	SendWorldWndMessage((int)6);
	var_4837_int = var_4832_int;
	return 2;
}


func_148(var_5552_object, var_5553_string)
{
	var_5554_object = Obj(); var_5555_object = Obj(); var_5556_object = Obj(); var_5557_object = Obj();
	GetMainOutdoorScene(var_5556_object);
	var_5559_int = var_5553_string + ".xml";
	AddBlankActorFromXml(var_5557_object, var_5556_object, var_5553_string, var_5559_int);
	var_5557_object = var_5552_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_11417(var_5171_object)
{
	var_5172_object = Obj(); var_5173_object = Obj(); var_5174_object = Obj(); var_5175_object = Obj();
	GetMainOutdoorScene(var_5174_object);
	var_5176_bool = var_5174_object == 0; //@ne
	if(var_5176_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_5175_object = 0;
		var_5175_object = var_5171_object;
		return 4;
	}
	@@var_5174_object:GetMap(var_5175_object);
	var_5175_object = var_5171_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2206(var_750_int, var_751_int, var_752_int)
{
	var_753_int = 0; var_754_int = 0;
	var_756_int = var_751_int + (int)1;
	var_758_bool = var_756_int == (int)12;
	if(var_758_bool != 0) {
		return 2;
	}
	var_759_bool = 0;
	var_759_bool = 0;
	var_760_bool = 0;
	var_760_bool = 1;
	var_762_bool = var_752_int < (int)7;
	if(var_762_bool != 1) {
		var_764_bool = var_752_int > (int)21;
		if(var_764_bool != 1) {
			var_760_bool = 0;
		}
	}
	if(var_760_bool != 0) {
		var_766_bool = var_751_int != (int)0;
		if(var_766_bool != 0) {
			var_759_bool = 1;
		}
	}
	if(var_759_bool != 0) {
		var_768_float = 0; var_769_int = 0;
		var_751_int = var_769_int;
		func_1141(var_768_float, var_769_int);
		var_754_int = (int)1 * var_768_float;
		var_782_int = var_754_int;
		if(var_782_int != 0) {
			var_783_int = 0; var_784_string = ""; var_785_string = ""; var_786_int = 0;
			var_750_int = var_783_int;
			var_754_int = var_786_int;
			func_503(var_783_int, "pers_grabitel", "grabitel.xml", var_786_int);
		}
	}
	var_791_bool = 0; var_792_int = 0; var_793_int = 0;
	var_751_int = var_792_int;
	var_752_int = var_793_int;
	func_1110(var_791_bool, var_792_int, var_793_int);
	if(var_791_bool != 0) {
		var_811_int = 0; var_812_string = ""; var_813_string = ""; var_814_int = 0;
		var_750_int = var_811_int;
		func_503(var_811_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_815_int = 0; var_816_string = ""; var_817_string = ""; var_818_int = 0;
		var_750_int = var_815_int;
		func_503(var_815_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_819_int = 0; var_820_string = ""; var_821_string = ""; var_822_int = 0;
		var_750_int = var_819_int;
		func_503(var_819_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_823_int = 0; var_824_string = ""; var_825_string = ""; var_826_int = 0;
		var_750_int = var_823_int;
		func_503(var_823_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_827_int = 0; var_828_string = ""; var_829_string = ""; var_830_int = 0;
		var_750_int = var_827_int;
		func_503(var_827_int, "pers_boy", "boy.xml", (int)1);
		var_831_int = 0; var_832_string = ""; var_833_string = ""; var_834_int = 0;
		var_750_int = var_831_int;
		func_503(var_831_int, "pers_alkash", "alkash.xml", (int)1);
		var_835_int = 0; var_836_string = ""; var_837_string = ""; var_838_int = 0;
		var_750_int = var_835_int;
		func_503(var_835_int, "pers_girl", "girl.xml", (int)1);
		var_839_int = 0; var_840_string = ""; var_841_string = ""; var_842_int = 0;
		var_750_int = var_839_int;
		func_503(var_839_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_843_bool = 0;
		var_843_bool = 0;
		var_845_bool = var_752_int > (int)8;
		if(var_845_bool != 0) {
			var_847_bool = var_752_int < (int)21;
			if(var_847_bool != 0) {
				var_843_bool = 1;
			}
		}
		if(var_843_bool != 0) {
			var_848_int = 0; var_849_string = ""; var_850_string = ""; var_851_int = 0;
			var_750_int = var_848_int;
			func_503(var_848_int, "pers_boy", "boy.xml", (int)1);
			var_852_int = 0; var_853_string = ""; var_854_string = ""; var_855_int = 0;
			var_750_int = var_852_int;
			func_503(var_852_int, "pers_alkash", "alkash.xml", (int)1);
			var_856_int = 0; var_857_string = ""; var_858_string = ""; var_859_int = 0;
			var_750_int = var_856_int;
			func_503(var_856_int, "pers_girl", "girl.xml", (int)1);
			var_860_int = 0; var_861_string = ""; var_862_string = ""; var_863_int = 0;
			var_750_int = var_860_int;
			func_503(var_860_int, "pers_girl", "girl2.xml", (int)1);
			var_864_int = 0; var_865_string = ""; var_866_string = ""; var_867_int = 0;
			var_750_int = var_864_int;
			func_503(var_864_int, "pers_worker", "worker.xml", (int)2);
			var_868_int = 0; var_869_string = ""; var_870_string = ""; var_871_int = 0;
			var_750_int = var_868_int;
			func_503(var_868_int, "pers_worker", "worker2.xml", (int)2);
			goto Label_2382;
		}
		var_872_int = 0; var_873_string = ""; var_874_string = ""; var_875_int = 0;
		var_750_int = var_872_int;
		func_503(var_872_int, "pers_alkash", "alkash.xml", (int)1);
		var_876_int = 0; var_877_string = ""; var_878_string = ""; var_879_int = 0;
		var_750_int = var_876_int;
		func_503(var_876_int, "pers_worker", "worker.xml", (int)1);
		var_880_int = 0; var_881_string = ""; var_882_string = ""; var_883_int = 0;
		var_750_int = var_880_int;
		func_503(var_880_int, "pers_worker", "worker2.xml", (int)1);
	}
Label_2382:
	return 2;
	
}


func_159(var_329_object, var_330_object, var_331_string, var_332_string, var_333_string)
{
	var_335_bool = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_object = Obj();
	@@var_330_object:GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector);
	var_343_bool = var_339_bool == 0; //@nz
	if(var_343_bool != 0) {
		var_345_int = "Locator " + var_331_string;
		var_347_int = var_345_int + " doesn't exist";
		Trace(var_347_int);
	} else {
		@@var_330_object:AddStationaryActor(Obj(), var_340_cvector, var_341_cvector, var_332_string, var_333_string);
	}
	var_342_object = var_329_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_9376(var_1988_int, var_1989_int, var_1990_int)
{
	var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj();
	var_1999_object = GlobalVars[8];
	@@var_1999_object:get(var_1995_object, var_1988_int);
	var_2000_object = GlobalVars[9];
	@@var_2000_object:get(var_1996_object, var_1988_int);
	var_2001_object = GlobalVars[10];
	@@var_2001_object:get(var_1997_object, var_1988_int);
	var_2002_object = GlobalVars[13];
	@@var_2002_object:get(var_1998_object, var_1988_int);
	var_2004_bool = var_1988_int == (int)0;
	if(var_2004_bool != 0) {
		var_2005_int = 0; var_2006_int = 0; var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj();
		var_1989_int = var_2005_int;
		var_1990_int = var_2006_int;
		var_1995_object = var_2007_object;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		func_4439(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object);
	} else {
		var_2274_bool = var_1988_int == (int)1;
		if(var_2274_bool != 0) {
			var_2275_int = 0; var_2276_int = 0; var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj();
			var_1989_int = var_2275_int;
			var_1990_int = var_2276_int;
			var_1995_object = var_2277_object;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			func_4636(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object);
			goto Label_9596;
		}
		var_2406_bool = var_1988_int == (int)2;
		if(var_2406_bool != 0) {
			var_2407_int = 0; var_2408_int = 0; var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj();
			var_1989_int = var_2407_int;
			var_1990_int = var_2408_int;
			var_1995_object = var_2409_object;
			var_1996_object = var_2410_object;
			var_1997_object = var_2411_object;
			var_1998_object = var_2412_object;
			func_4842(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object);
			goto Label_9596;
		}
		var_2552_bool = var_1988_int == (int)3;
		if(var_2552_bool != 0) {
			var_2553_int = 0; var_2554_int = 0; var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj();
			var_1989_int = var_2553_int;
			var_1990_int = var_2554_int;
			var_1995_object = var_2555_object;
			var_1996_object = var_2556_object;
			var_1997_object = var_2557_object;
			var_1998_object = var_2558_object;
			func_5072(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object);
			goto Label_9596;
		}
		var_2585_bool = var_1988_int == (int)4;
		if(var_2585_bool != 0) {
			var_2586_int = 0; var_2587_int = 0; var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj();
			var_1989_int = var_2586_int;
			var_1990_int = var_2587_int;
			var_1995_object = var_2588_object;
			var_1996_object = var_2589_object;
			var_1997_object = var_2590_object;
			var_1998_object = var_2591_object;
			func_5290(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object);
			goto Label_9596;
		}
		var_2618_bool = var_1988_int == (int)5;
		if(var_2618_bool != 0) {
			var_2619_int = 0; var_2620_int = 0; var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj();
			var_1989_int = var_2619_int;
			var_1990_int = var_2620_int;
			var_1995_object = var_2621_object;
			var_1996_object = var_2622_object;
			var_1997_object = var_2623_object;
			var_1998_object = var_2624_object;
			func_5535(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object);
			goto Label_9596;
		}
		var_2651_bool = var_1988_int == (int)6;
		if(var_2651_bool != 0) {
			var_2652_int = 0; var_2653_int = 0; var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj();
			var_1989_int = var_2652_int;
			var_1990_int = var_2653_int;
			var_1995_object = var_2654_object;
			var_1996_object = var_2655_object;
			var_1997_object = var_2656_object;
			var_1998_object = var_2657_object;
			func_5648();
			goto Label_9596;
		}
		var_2661_bool = var_1988_int == (int)7;
		if(var_2661_bool != 0) {
			var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj();
			var_1989_int = var_2662_int;
			var_1990_int = var_2663_int;
			var_1995_object = var_2664_object;
			var_1996_object = var_2665_object;
			var_1997_object = var_2666_object;
			var_1998_object = var_2667_object;
			func_5758(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object);
			goto Label_9596;
		}
		var_2800_bool = var_1988_int == (int)8;
		if(var_2800_bool != 0) {
			var_2801_int = 0; var_2802_int = 0; var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj();
			var_1989_int = var_2801_int;
			var_1990_int = var_2802_int;
			var_1995_object = var_2803_object;
			var_1996_object = var_2804_object;
			var_1997_object = var_2805_object;
			var_1998_object = var_2806_object;
			func_5958(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object);
			goto Label_9596;
		}
		var_2833_bool = var_1988_int == (int)9;
		if(var_2833_bool != 0) {
			var_2834_int = 0; var_2835_int = 0; var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj();
			var_1989_int = var_2834_int;
			var_1990_int = var_2835_int;
			var_1995_object = var_2836_object;
			var_1996_object = var_2837_object;
			var_1997_object = var_2838_object;
			var_1998_object = var_2839_object;
			func_6161(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object);
			goto Label_9596;
		}
		var_2866_bool = var_1988_int == (int)10;
		if(var_2866_bool != 0) {
			var_2867_int = 0; var_2868_int = 0; var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj();
			var_1989_int = var_2867_int;
			var_1990_int = var_2868_int;
			var_1995_object = var_2869_object;
			var_1996_object = var_2870_object;
			var_1997_object = var_2871_object;
			var_1998_object = var_2872_object;
			func_6370(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object);
			goto Label_9596;
		}
		var_2899_bool = var_1988_int == (int)11;
		if(var_2899_bool != 0) {
			var_2900_int = 0; var_2901_int = 0; var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj();
			var_1989_int = var_2900_int;
			var_1990_int = var_2901_int;
			var_1995_object = var_2902_object;
			var_1996_object = var_2903_object;
			var_1997_object = var_2904_object;
			var_1998_object = var_2905_object;
			func_6582(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object);
			goto Label_9596;
		}
		var_2932_bool = var_1988_int == (int)12;
		if(var_2932_bool != 0) {
			var_2933_int = 0; var_2934_int = 0; var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj();
			var_1989_int = var_2933_int;
			var_1990_int = var_2934_int;
			var_1995_object = var_2935_object;
			var_1996_object = var_2936_object;
			var_1997_object = var_2937_object;
			var_1998_object = var_2938_object;
			func_6779(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object);
			goto Label_9596;
		}
		var_2965_bool = var_1988_int == (int)13;
		if(var_2965_bool != 0) {
			var_2966_int = 0; var_2967_int = 0; var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj();
			var_1989_int = var_2966_int;
			var_1990_int = var_2967_int;
			var_1995_object = var_2968_object;
			var_1996_object = var_2969_object;
			var_1997_object = var_2970_object;
			var_1998_object = var_2971_object;
			func_6982(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object);
			goto Label_9596;
		}
		var_2998_bool = var_1988_int == (int)14;
		if(var_2998_bool != 0) {
			var_2999_int = 0; var_3000_int = 0; var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj();
			var_1989_int = var_2999_int;
			var_1990_int = var_3000_int;
			var_1995_object = var_3001_object;
			var_1996_object = var_3002_object;
			var_1997_object = var_3003_object;
			var_1998_object = var_3004_object;
			func_7182(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object);
			goto Label_9596;
		}
		var_3137_bool = var_1988_int == (int)15;
		if(var_3137_bool == 0) goto Label_9596;
		var_3138_int = 0; var_3139_int = 0; var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj();
		var_1989_int = var_3138_int;
		var_1990_int = var_3139_int;
		var_1995_object = var_3140_object;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		func_7364(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object);
	}
Label_9596:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_11434(var_796_int)
{
	var_797_int = 0; var_798_int = 0;
	GetVariable("branch", var_798_int);
	var_798_int = var_796_int;
	return 2;
}


func_5290(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object)
{
	var_2593_bool = var_2587_int == (int)0;
	if(var_2593_bool != 0) {
		var_2594_int = 0; var_2595_bool = 0;
		func_796((int)4, (bool)1);
		var_2596_int = 0; var_2597_bool = 0; var_2598_int = 0;
		func_813((int)4, (bool)1, (int)1);
		var_2599_int = 0; var_2600_int = 0; var_2601_object = Obj(); var_2602_object = Obj(); var_2603_object = Obj();
		var_2586_int = var_2600_int;
		var_2588_object = var_2601_object;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		func_641((int)4, var_2600_int, var_2601_object, var_2602_object, var_2603_object);
		var_2604_object = Obj(); var_2605_int = 0;
		var_2591_object = var_2604_object;
		func_305(var_2604_object, (int)1);
		var_2606_int = 0; var_2607_bool = 0; var_2608_int = 0;
		func_870((int)4, (bool)1, (int)4);
		var_2609_int = 0; var_2610_bool = 0; var_2611_int = 0;
		func_932((int)4, (bool)0, (int)4);
	}
	var_2612_int = 0; var_2613_bool = 0;
	func_779((int)4, (bool)0);
	var_2614_int = 0; var_2615_int = 0; var_2616_int = 0;
	var_2586_int = var_2615_int;
	var_2587_int = var_2616_int;
	func_2944((int)4, var_2615_int, var_2616_int);
	return 0;
}


func_6318(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object)
{
	var_1644_bool = var_1638_int == (int)0;
	if(var_1644_bool != 0) {
		var_1645_int = 0; var_1646_bool = 0;
		func_796((int)10, (bool)0);
		var_1647_int = 0; var_1648_bool = 0; var_1649_int = 0;
		func_813((int)10, (bool)0, (int)1);
		var_1650_int = 0; var_1651_int = 0; var_1652_object = Obj(); var_1653_object = Obj(); var_1654_object = Obj();
		var_1650_int = 10;
		var_1637_int = var_1651_int;
		var_1639_object = var_1652_object;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		func_622(var_1651_int, var_1652_object, var_1653_object, var_1654_object);
		var_1655_object = Obj(); var_1656_int = 0;
		var_1642_object = var_1655_object;
		func_305(var_1655_object, (int)0);
		var_1657_int = 0; var_1658_bool = 0; var_1659_int = 0;
		func_870((int)10, (bool)0, (int)7);
		var_1660_int = 0; var_1661_bool = 0; var_1662_int = 0;
		func_932((int)10, (bool)0, (int)7);
	}
	var_1663_int = 0; var_1664_int = 0;
	var_1638_int = var_1664_int;
	func_983((int)10, var_1664_int);
	var_1665_int = 0; var_1666_int = 0; var_1667_int = 0;
	var_1637_int = var_1666_int;
	var_1638_int = var_1667_int;
	func_1624((int)10, var_1666_int, var_1667_int);
	return 0;
}


func_11440(var_4307_bool, var_4308_int)
{
	var_4310_int = 0; var_4311_int = 0; var_4312_int = 0; var_4313_int = 0; var_4314_int = 0; var_4315_int = 0; var_4316_int = 0; var_4317_int = 0;
	var_4318_bool = 0;
	var_4318_bool = 0;
	var_4320_bool = var_4308_int > (int)42000;
	if(var_4320_bool != 0) {
		var_4322_bool = var_4308_int < (int)42288;
		if(var_4322_bool != 0) {
			var_4318_bool = 1;
		}
	}
	if(var_4318_bool != 0) {
		var_4324_int = var_4308_int - (int)42000;
		var_4314_int = var_4324_int / (int)24;
		var_4327_int = var_4308_int - (int)42000;
		var_4315_int = var_4327_int % (int)24;
		var_4329_int = 0; var_4330_int = 0;
		var_4329_int = var_4314_int + (int)1;
		var_4315_int = var_4330_int;
		func_8272(var_4329_int, var_4330_int);
		var_4307_bool = 1;
		return 8;
	}
	var_4466_bool = 0;
	var_4466_bool = 0;
	var_4468_bool = var_4308_int > (int)40000;
	if(var_4468_bool != 0) {
		var_4470_bool = var_4308_int < (int)40288;
		if(var_4470_bool != 0) {
			var_4466_bool = 1;
		}
	}
	if(var_4466_bool != 0) {
		var_4472_int = var_4308_int - (int)40000;
		var_4316_int = var_4472_int / (int)24;
		var_4475_int = var_4308_int - (int)40000;
		var_4317_int = var_4475_int % (int)24;
		var_4477_int = 0; var_4478_int = 0;
		var_4477_int = var_4316_int + (int)1;
		var_4317_int = var_4478_int;
		func_8570(var_4477_int, var_4478_int);
		var_4799_int = 0; var_4800_int = 0;
		var_4799_int = var_4316_int + (int)1;
		var_4317_int = var_4800_int;
		func_13190(var_4799_int, var_4800_int);
		var_4307_bool = 1;
		return 8;
	}
	var_4307_bool = 0;
	return 8;
}


func_177(var_4700_string, var_4701_bool)
{
	var_4702_object = Obj(); var_4703_object = Obj();
	FindActor(var_4703_object, var_4700_string);
	var_4704_bool = var_4703_object == 0; //@nz
	if(var_4704_bool != 0) {
		var_4706_int = "Door " + var_4700_string;
		var_4708_int = var_4706_int + " not found";
		Trace(var_4708_int);
	} else {
		@@var_4703_object:SetProperty("locked", var_4701_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_12480()
{
	var_4583_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	SetTimeEvent((int)45286, (float)203.22000122070312);
	SetTimeEvent((int)45288, (float)271.25);
	SetTimeEvent((int)45287, (float)249.0);
	SetTimeEvent((int)45289, (float)272.0);
	SetTimeEvent((int)45272, (float)144.0);
	SetTimeEvent((int)45277, (float)264.0);
	SetTimeEvent((int)45280, (float)192.0);
	SetTimeEvent((int)45284, (float)156.0);
	SetTimeEvent((int)45258, (float)64.26000213623047);
	SetTimeEvent((int)45285, (float)181.0);
	SetTimeEvent((int)45279, (float)144.0);
	SetTimeEvent((int)45256, (float)132.1699981689453);
	SetTimeEvent((int)45274, (float)192.0);
	SetTimeEvent((int)45276, (float)240.0);
	SetTimeEvent((int)45281, (float)81.5);
	SetTimeEvent((int)45283, (float)264.0);
	SetTimeEvent((int)45275, (float)216.0);
	SetTimeEvent((int)45278, (float)24.0);
	SetTimeEvent((int)45273, (float)168.0);
	SetTimeEvent((int)45257, (float)64.0);
	SetTimeEvent((int)45243, (float)42.25);
	SetTimeEvent((int)45172, (float)247.02000427246094);
	SetTimeEvent((int)45249, (float)96.0);
	SetTimeEvent((int)45241, (float)23.079999923706055);
	SetTimeEvent((int)45245, (float)71.0);
	SetTimeEvent((int)45252, (float)106.5);
	SetTimeEvent((int)45247, (float)119.0);
	SetTimeEvent((int)45170, (float)199.02000427246094);
	SetTimeEvent((int)45253, (float)130.42999267578125);
	SetTimeEvent((int)45173, (float)271.0199890136719);
	SetTimeEvent((int)45254, (float)95.5);
	SetTimeEvent((int)45255, (float)113.5);
	SetTimeEvent((int)45167, (float)127.0199966430664);
	SetTimeEvent((int)45240, (float)16.25);
	SetTimeEvent((int)45250, (float)58.25);
	SetTimeEvent((int)45168, (float)151.02000427246094);
	SetTimeEvent((int)45171, (float)223.02000427246094);
	SetTimeEvent((int)45244, (float)47.0);
	SetTimeEvent((int)45246, (float)95.0);
	SetTimeEvent((int)45236, (float)90.0);
	SetTimeEvent((int)45248, (float)111.0);
	SetTimeEvent((int)45251, (float)83.25);
	SetTimeEvent((int)45242, (float)34.08000183105469);
	SetTimeEvent((int)45169, (float)175.02000427246094);
	SetTimeEvent((int)45108, (float)240.0);
	SetTimeEvent((int)45102, (float)120.0);
	SetTimeEvent((int)45103, (float)144.0);
	SetTimeEvent((int)45107, (float)224.25999450683594);
	SetTimeEvent((int)45101, (float)96.0);
	SetTimeEvent((int)45109, (float)264.0);
	SetTimeEvent((int)45105, (float)192.0);
	SetTimeEvent((int)45106, (float)216.0);
	SetTimeEvent((int)45095, (float)24.0);
	SetTimeEvent((int)45163, (float)31.020000457763672);
	SetTimeEvent((int)45164, (float)55.02000045776367);
	SetTimeEvent((int)45165, (float)79.0199966430664);
	var_4696_object = Obj(); var_4697_object = Obj();
	var_4698_object = GlobalVars[16];
	var_4698_object = var_4696_object;
	var_4699_object = GlobalVars[16];
	var_4699_object = var_4697_object;
	func_10982();
	var_4712_object = Obj(); var_4713_object = Obj();
	var_4714_object = GlobalVars[16];
	var_4714_object = var_4712_object;
	var_4715_object = GlobalVars[16];
	var_4715_object = var_4713_object;
	func_10155();
	var_4718_object = Obj(); var_4719_object = Obj();
	var_4720_object = GlobalVars[16];
	var_4720_object = var_4718_object;
	var_4721_object = GlobalVars[16];
	var_4721_object = var_4719_object;
	func_11001();
	var_4724_object = Obj(); var_4725_object = Obj();
	var_4726_object = GlobalVars[16];
	var_4726_object = var_4724_object;
	var_4727_object = GlobalVars[16];
	var_4727_object = var_4725_object;
	func_10141();
	var_4730_object = Obj(); var_4731_object = Obj();
	var_4732_object = GlobalVars[16];
	var_4732_object = var_4730_object;
	var_4733_object = GlobalVars[16];
	var_4733_object = var_4731_object;
	func_10148();
	var_4736_object = Obj(); var_4737_object = Obj();
	var_4738_object = GlobalVars[16];
	var_4738_object = var_4736_object;
	var_4739_object = GlobalVars[16];
	var_4739_object = var_4737_object;
	func_10813();
	var_4742_object = Obj(); var_4743_object = Obj();
	var_4744_object = GlobalVars[16];
	var_4744_object = var_4742_object;
	var_4745_object = GlobalVars[16];
	var_4745_object = var_4743_object;
	func_11017();
	var_4748_object = Obj(); var_4749_object = Obj();
	var_4750_object = GlobalVars[16];
	var_4750_object = var_4748_object;
	var_4751_object = GlobalVars[16];
	var_4751_object = var_4749_object;
	func_10820();
	var_4754_object = Obj(); var_4755_object = Obj();
	var_4756_object = GlobalVars[16];
	var_4756_object = var_4754_object;
	var_4757_object = GlobalVars[16];
	var_4757_object = var_4755_object;
	func_10945();
	var_4781_object = Obj(); var_4782_string = "";
	func_137(var_4781_object, "volonteers_klara");
	var_4789_object = Obj(); var_4790_string = "";
	func_137(var_4789_object, "quest_k1_01");
	var_4791_object = Obj(); var_4792_string = "";
	func_137(var_4791_object, "klara2_positioner");
	var_4793_object = Obj(); var_4794_string = "";
	func_137(var_4793_object, "klara2_svita_positioner");
	var_4795_object = Obj(); var_4796_string = "";
	func_137(var_4795_object, "klara2_npc_positioner");
	SetTimeEvent((int)45110, (float)48.0);
	SetTimeEvent((int)45166, (float)103.0199966430664);
	SetTimeEvent((int)45096, (float)80.0);
	SetTimeEvent((int)45104, (float)168.0);
	SetTimeEvent((int)45100, (float)72.0);
	return 0;
}


func_194(var_5863_bool, var_5864_object, var_5865_float)
{
	var_5866_bool = var_5864_object == 0; //@nz
	if(var_5866_bool != 0) {
		var_5863_bool = 0;
		return 0;
	}
	var_5868_bool = var_5865_float > (int)0;
	if(var_5868_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_5893_bool = var_5865_float < (int)0;
		if(var_5893_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_215;
		}
		var_5863_bool = 0;
		return 0;
	}
Label_215:
	var_5870_float = 0;
	var_5865_float = var_5870_float;
	func_229(var_5870_float);
	var_5874_bool = 0; var_5875_object = Obj(); var_5876_string = ""; var_5877_float = 0; var_5878_float = 0; var_5879_float = 0;
	var_5864_object = var_5875_object;
	var_5865_float = var_5877_float;
	func_93(var_5874_bool, var_5875_object, "reputation", var_5877_float, (float)0, (float)1);
	var_5863_bool = 1;
	return 0;
	
}


func_7364(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object)
{
	var_3145_bool = var_3139_int == (int)0;
	if(var_3145_bool != 0) {
		var_3146_int = 0; var_3147_bool = 0;
		func_796((int)15, (bool)1);
		var_3148_int = 0; var_3149_bool = 0; var_3150_int = 0;
		func_813((int)15, (bool)1, (int)1);
		var_3151_int = 0; var_3152_int = 0; var_3153_object = Obj(); var_3154_object = Obj(); var_3155_object = Obj();
		var_3138_int = var_3152_int;
		var_3140_object = var_3153_object;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		func_641((int)15, var_3152_int, var_3153_object, var_3154_object, var_3155_object);
		var_3156_object = Obj(); var_3157_int = 0;
		var_3143_object = var_3156_object;
		func_305(var_3156_object, (int)1);
		var_3158_int = 0; var_3159_bool = 0; var_3160_int = 0;
		func_870((int)15, (bool)1, (int)5);
		var_3161_int = 0; var_3162_bool = 0; var_3163_int = 0;
		func_932((int)15, (bool)0, (int)5);
	}
	var_3164_int = 0; var_3165_bool = 0;
	func_779((int)15, (bool)0);
	var_3166_int = 0; var_3167_int = 0; var_3168_int = 0;
	var_3138_int = var_3167_int;
	var_3139_int = var_3168_int;
	func_2584((int)15, var_3167_int, var_3168_int);
	return 0;
}


func_10461()
{
	var_5618_object = Obj(); var_5619_object = Obj(); var_5620_object = Obj(); var_5621_object = Obj();
	func_11417(Obj());
	var_5622_object = var_5620_object;
	@@var_5620_object:FindMark(var_5621_object, "k4q03AlexandrGotoBurah");
	var_5624_object = var_5621_object;
	if(var_5624_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q01GrifGotoBraga");
	var_5626_object = var_5621_object;
	if(var_5626_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q01AlexandrGotoGrif");
	var_5628_object = var_5621_object;
	if(var_5628_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q01GrifGotoNotkin");
	var_5630_object = var_5621_object;
	if(var_5630_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q02KaterinaGotoTheater");
	var_5632_object = var_5621_object;
	if(var_5632_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q02MarkGotoTheater");
	var_5634_object = var_5621_object;
	if(var_5634_object != 0) {
		@@var_5621_object:Remove();
	}
	@@var_5620_object:FindMark(var_5621_object, "k4q03LaraGotoAlexandr");
	var_5636_object = var_5621_object;
	if(var_5636_object != 0) {
		@@var_5621_object:Remove();
	}
	var_5637_bool = 0; var_5638_int = 0;
	func_11392(var_5637_bool, (int)368);
	var_5639_bool = 0; var_5640_int = 0;
	func_11392(var_5639_bool, (int)378);
	var_5641_bool = 0; var_5642_int = 0;
	func_11392(var_5641_bool, (int)384);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5342(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object)
{
	var_3719_bool = var_3713_int == (int)0;
	if(var_3719_bool != 0) {
		var_3720_int = 0; var_3721_bool = 0;
		func_796((int)4, (bool)0);
		var_3722_int = 0; var_3723_bool = 0; var_3724_int = 0;
		func_813((int)4, (bool)0, (int)1);
		var_3725_int = 0; var_3726_int = 0; var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj();
		var_3712_int = var_3726_int;
		var_3714_object = var_3727_object;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		func_720((int)4, var_3726_int, var_3727_object, var_3728_object, var_3729_object);
		var_3730_object = Obj(); var_3731_int = 0;
		var_3717_object = var_3730_object;
		func_305(var_3730_object, (int)2);
		var_3732_int = 0; var_3733_bool = 0; var_3734_int = 0;
		func_870((int)4, (bool)0, (int)4);
		var_3735_int = 0; var_3736_bool = 0; var_3737_int = 0;
		func_932((int)4, (bool)1, (int)4);
	}
	var_3738_int = 0; var_3739_bool = 0;
	func_779((int)4, (bool)0);
	var_3740_int = 0; var_3741_int = 0; var_3742_int = 0;
	var_3712_int = var_3741_int;
	var_3713_int = var_3742_int;
	func_3847((int)4, var_3741_int, var_3742_int);
	return 0;
}


func_6370(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object)
{
	var_2874_bool = var_2868_int == (int)0;
	if(var_2874_bool != 0) {
		var_2875_int = 0; var_2876_bool = 0;
		func_796((int)10, (bool)1);
		var_2877_int = 0; var_2878_bool = 0; var_2879_int = 0;
		func_813((int)10, (bool)1, (int)1);
		var_2880_int = 0; var_2881_int = 0; var_2882_object = Obj(); var_2883_object = Obj(); var_2884_object = Obj();
		var_2867_int = var_2881_int;
		var_2869_object = var_2882_object;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		func_641((int)10, var_2881_int, var_2882_object, var_2883_object, var_2884_object);
		var_2885_object = Obj(); var_2886_int = 0;
		var_2872_object = var_2885_object;
		func_305(var_2885_object, (int)1);
		var_2887_int = 0; var_2888_bool = 0; var_2889_int = 0;
		func_870((int)10, (bool)1, (int)7);
		var_2890_int = 0; var_2891_bool = 0; var_2892_int = 0;
		func_932((int)10, (bool)0, (int)7);
	}
	var_2893_int = 0; var_2894_bool = 0;
	func_779((int)10, (bool)0);
	var_2895_int = 0; var_2896_int = 0; var_2897_int = 0;
	var_2867_int = var_2896_int;
	var_2868_int = var_2897_int;
	func_2764((int)10, var_2896_int, var_2897_int);
	return 0;
}


func_229(var_5870_float)
{
	var_5871_object = Obj(); var_5872_object = Obj();
	CreateFloatVector(var_5872_object);
	@@var_5872_object:add(var_5870_float);
	SendWorldWndMessage((int)16, var_5872_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1255(var_2157_float, var_2158_int)
{
	var_2160_int = var_2158_int + (int)1;
	var_2162_bool = var_2160_int == (int)1;
	if(var_2162_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2164_int = var_2158_int + (int)1;
	var_2166_bool = var_2164_int == (int)2;
	if(var_2166_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2168_int = var_2158_int + (int)1;
	var_2170_bool = var_2168_int == (int)3;
	if(var_2170_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2172_int = var_2158_int + (int)1;
	var_2174_bool = var_2172_int == (int)4;
	if(var_2174_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2176_int = var_2158_int + (int)1;
	var_2178_bool = var_2176_int == (int)5;
	if(var_2178_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2180_int = var_2158_int + (int)1;
	var_2182_bool = var_2180_int == (int)6;
	if(var_2182_bool != 0) {
		var_2157_float = 2;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2184_int = var_2158_int + (int)1;
	var_2186_bool = var_2184_int == (int)7;
	if(var_2186_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2188_int = var_2158_int + (int)1;
	var_2190_bool = var_2188_int == (int)8;
	if(var_2190_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2192_int = var_2158_int + (int)1;
	var_2194_bool = var_2192_int == (int)9;
	if(var_2194_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2196_int = var_2158_int + (int)1;
	var_2198_bool = var_2196_int == (int)10;
	if(var_2198_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	var_2200_int = var_2158_int + (int)1;
	var_2202_bool = var_2200_int == (int)11;
	if(var_2202_bool != 0) {
		var_2157_float = 1;
		return 0;
	}
	var_2157_float = 0;
	return 0;
}


func_3304(var_2303_int, var_2304_int, var_2305_int)
{
	var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; var_2309_int = 0;
	var_2310_bool = 0;
	var_2310_bool = 0;
	var_2312_bool = var_2305_int > (int)8;
	if(var_2312_bool != 0) {
		var_2314_bool = var_2305_int < (int)21;
		if(var_2314_bool != 0) {
			var_2310_bool = 1;
		}
	}
	if(var_2310_bool != 0) {
		var_2315_int = 0; var_2316_string = ""; var_2317_string = ""; var_2318_int = 0;
		var_2303_int = var_2315_int;
		func_503(var_2315_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)7);
		var_2319_int = 0; var_2320_string = ""; var_2321_string = ""; var_2322_int = 0;
		var_2303_int = var_2319_int;
		func_503(var_2319_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)7);
		var_2323_int = 0; var_2324_string = ""; var_2325_string = ""; var_2326_int = 0;
		var_2303_int = var_2323_int;
		func_503(var_2323_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2327_int = 0; var_2328_string = ""; var_2329_string = ""; var_2330_int = 0;
		var_2303_int = var_2327_int;
		func_529(var_2327_int, "fog", "fog.xml", (int)7);
		var_2332_bool = var_2304_int >= (int)5;
		if(var_2332_bool != 0) {
			var_2333_int = 0; var_2334_string = ""; var_2335_string = ""; var_2336_int = 0;
			var_2303_int = var_2333_int;
			func_529(var_2333_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2338_float = 0; var_2339_int = 0;
		var_2304_int = var_2339_int;
		func_1255(var_2338_float, var_2339_int);
		var_2308_int = (int)2 * var_2338_float;
		var_2340_int = var_2308_int;
		if(var_2340_int != 0) {
			var_2341_int = 0; var_2342_string = ""; var_2343_string = ""; var_2344_int = 0;
			var_2303_int = var_2341_int;
			var_2308_int = var_2344_int;
			func_503(var_2341_int, "pers_bomber", "bomber.xml", var_2344_int);
		}
	} else {
		var_2375_int = 0; var_2376_string = ""; var_2377_string = ""; var_2378_int = 0;
		var_2303_int = var_2375_int;
		func_503(var_2375_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2379_int = 0; var_2380_string = ""; var_2381_string = ""; var_2382_int = 0;
		var_2303_int = var_2379_int;
		func_503(var_2379_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2383_int = 0; var_2384_string = ""; var_2385_string = ""; var_2386_int = 0;
		var_2303_int = var_2383_int;
		func_503(var_2383_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_2387_int = 0; var_2388_string = ""; var_2389_string = ""; var_2390_int = 0;
		var_2303_int = var_2387_int;
		func_529(var_2387_int, "fog", "fog.xml", (int)7);
		var_2392_bool = var_2304_int >= (int)5;
		if(var_2392_bool != 0) {
			var_2393_int = 0; var_2394_string = ""; var_2395_string = ""; var_2396_int = 0;
			var_2303_int = var_2393_int;
			func_529(var_2393_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2398_float = 0; var_2399_int = 0;
		var_2304_int = var_2399_int;
		func_1255(var_2398_float, var_2399_int);
		var_2309_int = (int)2 * var_2398_float;
		var_2400_int = var_2309_int;
		if(var_2400_int == 0) goto Label_3422;
		var_2401_int = 0; var_2402_string = ""; var_2403_string = ""; var_2404_int = 0;
		var_2303_int = var_2401_int;
		var_2309_int = var_2404_int;
		func_503(var_2401_int, "pers_bomber", "bomber.xml", var_2404_int);
	}
Label_3422:
	var_2345_bool = 0; var_2346_int = 0;
	var_2304_int = var_2346_int;
	func_1372(var_2345_bool, var_2346_int);
	if(var_2345_bool != 0) {
		var_2347_int = 0; var_2348_string = ""; var_2349_string = ""; var_2350_int = 0;
		var_2303_int = var_2347_int;
		func_503(var_2347_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2351_int = 0; var_2352_string = ""; var_2353_string = ""; var_2354_int = 0; var_2355_int = 0; var_2356_int = 0;
	var_2303_int = var_2351_int;
	func_516(var_2351_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2357_int = 0; var_2358_string = ""; var_2359_string = ""; var_2360_int = 0; var_2361_int = 0; var_2362_int = 0;
	var_2303_int = var_2357_int;
	func_516(var_2357_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2363_int = 0; var_2364_string = ""; var_2365_string = ""; var_2366_int = 0; var_2367_int = 0; var_2368_int = 0;
	var_2303_int = var_2363_int;
	func_516(var_2363_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2369_int = 0; var_2370_string = ""; var_2371_string = ""; var_2372_int = 0; var_2373_int = 0; var_2374_int = 0;
	var_2303_int = var_2369_int;
	func_516(var_2369_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_11501()
{
	var_4409_float = 0; var_4410_int = 0; var_4411_float = 0; var_4412_float = 0; var_4413_int = 0; var_4414_float = 0;
	GetGameTime(var_4412_float);
	var_4413_int = 1;
	
Label_11505:
	var_4416_bool = var_4413_int < (int)288;
	if(var_4416_bool != 0) {
		var_4414_float = (float)1.0 * var_4413_int;
		var_4418_bool = var_4414_float < var_4412_float;
		if(var_4418_bool != 0) {
		} else {
			var_4421_int = (int)40000 + var_4413_int;
			SetTimeEvent(var_4421_int, var_4414_float);
			var_4414_float = var_4414_float - (float)0.0033333334140479565;
			var_4423_bool = var_4414_float < var_4412_float;
			if(var_4423_bool != 0) {
				goto Label_11526;
			}
			var_4425_int = (int)42000 + var_4413_int;
			SetTimeEvent(var_4425_int, var_4414_float);
	}
		func_8200();
		func_13099();
		var_4413_int = var_4413_int + (int)1;
		goto Label_11505;
	}
	return 6;
	
}


func_239(var_672_bool, var_673_string, var_674_string)
{
	var_675_object = Obj(); var_676_object = Obj();
	FindActor(var_676_object, var_673_string);
	var_677_bool = var_676_object == 0; //@ne
	if(var_677_bool != 0) {
		var_672_bool = 0;
		return 2;
	}
	Trigger(var_676_object, var_674_string);
	var_672_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7416(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object)
{
	var_4279_bool = var_4273_int == (int)0;
	if(var_4279_bool != 0) {
		var_4280_int = 0; var_4281_bool = 0;
		func_796((int)15, (bool)0);
		var_4282_int = 0; var_4283_bool = 0; var_4284_int = 0;
		func_813((int)15, (bool)0, (int)1);
		var_4285_int = 0; var_4286_int = 0; var_4287_object = Obj(); var_4288_object = Obj(); var_4289_object = Obj();
		var_4272_int = var_4286_int;
		var_4274_object = var_4287_object;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		func_720((int)15, var_4286_int, var_4287_object, var_4288_object, var_4289_object);
		var_4290_object = Obj(); var_4291_int = 0;
		var_4277_object = var_4290_object;
		func_305(var_4290_object, (int)2);
		var_4292_int = 0; var_4293_bool = 0; var_4294_int = 0;
		func_870((int)15, (bool)0, (int)5);
		var_4295_int = 0; var_4296_bool = 0; var_4297_int = 0;
		func_932((int)15, (bool)1, (int)5);
	}
	var_4298_int = 0; var_4299_bool = 0;
	func_779((int)15, (bool)0);
	var_4300_int = 0; var_4301_int = 0; var_4302_int = 0;
	var_4272_int = var_4301_int;
	var_4273_int = var_4302_int;
	func_3471((int)15, var_4301_int, var_4302_int);
	return 0;
}


func_251(var_4680_bool, var_4681_string, var_4682_string, var_4683_string)
{
	var_4684_object = Obj(); var_4685_object = Obj();
	FindActor(var_4685_object, var_4681_string);
	var_4686_bool = var_4685_object == 0; //@ne
	if(var_4686_bool != 0) {
		var_4680_bool = 0;
		return 2;
	}
	Trigger(var_4685_object, var_4682_string, var_4683_string);
	var_4680_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_13574(var_4305_int)
{
	var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_string = ""; var_4312_string = ""; var_4313_object = Obj(); var_4314_object = Obj(); var_4315_object = Obj(); var_4316_object = Obj(); var_4317_object = Obj(); var_4318_string = ""; var_4319_string = "";
	var_4321_bool = var_4305_int == (int)1;
	if(var_4321_bool != 0) {
		Trace("Special diseased house: r4_house_2_02");
		GetSceneByName(var_4313_object, "r4_house_2_02");
		ReplaceScene(var_4313_object, "s_r4_house_2_02.isc");
		var_4313_object = 0;
	}
	var_4326_bool = var_4305_int == (int)3;
	if(var_4326_bool != 0) {
	} else {
		var_4367_bool = var_4305_int == (int)4;
		if(var_4367_bool != 0) {
			GetSceneByName(var_4314_object, "theater");
			ReplaceScene(var_4314_object, "dtheater_klara.isc");
			var_4314_object = 0;
			goto Label_13627;
		}
		var_4371_bool = var_4305_int == (int)8;
		if(var_4371_bool != 0) {
			Trace("Special replaced house: uprava_admin");
			GetSceneByName(var_4315_object, "uprava_admin");
			ReplaceScene(var_4315_object, "uprava_admin_army_klara.isc");
			var_4315_object = 0;
			goto Label_13627;
		}
		var_4376_bool = var_4305_int == (int)11;
		if(var_4376_bool == 0) goto Label_13627;
		GetSceneByName(var_4316_object, "theater");
		ReplaceScene(var_4316_object, "theater_klara.isc");
		var_4316_object = 0;
	}
Label_13627:
	var_4327_bool = 0;
	var_4327_bool = 0;
	var_4329_int = var_4305_int + (int)1;
	var_4331_bool = var_4329_int >= (int)8;
	if(var_4331_bool != 0) {
		var_4333_int = var_4305_int + (int)1;
		var_4335_bool = var_4333_int <= (int)11;
		if(var_4335_bool != 0) {
			var_4327_bool = 1;
		}
	}
	if(var_4327_bool != 0) {
		var_4336_string = ""; var_4337_int = 0;
		var_4337_int = var_4305_int + (int)1;
		func_13047(var_4336_string, var_4337_int);
		var_4336_string = var_4318_string;
		GetSceneByName(var_4317_object, var_4318_string);
		var_4348_int = "k2s_" + var_4318_string;
		var_4350_int = var_4348_int + ".isc";
		ReplaceScene(var_4317_object, var_4350_int);
		var_4351_string = ""; var_4352_int = 0;
		var_4352_int = var_4305_int + (int)1;
		func_13073(var_4351_string, var_4352_int);
		var_4351_string = var_4319_string;
		GetSceneByName(var_4317_object, var_4319_string);
		var_4363_int = "k2s_" + var_4319_string;
		var_4365_int = var_4363_int + ".isc";
		ReplaceScene(var_4317_object, var_4365_int);
		var_4317_object = 0;
	}
	return 14;
	
}


func_263(var_599_object)
{
	var_600_int = 0; var_601_int = 0; var_602_object = Obj(); var_603_int = 0; var_604_int = 0; var_605_object = Obj();
	var_606_object = var_599_object;
	if(var_606_object != 0) {
		@@var_599_object:size(var_603_int);
		var_604_int = 0;

	Label_269:
		var_607_bool = var_604_int < var_603_int;
		if(var_607_bool != 0) {
			@@var_599_object:get(var_605_object, var_604_int);
			var_608_object = var_605_object;
			if(var_608_object != 0) {
				@@var_605_object:Remove();
			}
			var_605_object = 0;
			var_604_int = var_604_int + (int)1;
			goto Label_269;
		}
		@@var_599_object:clear();
	}
	return 6;
}


func_11536(var_4816_int, var_4817_float)
{
	var_4819_bool = var_4816_int == (int)45286;
	if(var_4819_bool != 0) {
		var_4820_bool = 0; var_4821_object = Obj();
		var_4822_object = GlobalVars[16];
		var_4822_object = var_4821_object;
		func_11276(var_4821_object);
		var_4829_bool = var_4820_bool == 0; //@nz
		if(var_4829_bool != 0) {
			var_4830_int = 0; var_4831_float = 0;
			var_4817_float = var_4831_float;
			func_10132(var_4830_int, var_4831_float);
		}
	}
	var_4840_bool = var_4816_int == (int)45288;
	if(var_4840_bool != 0) {
		var_4841_bool = 0; var_4842_object = Obj();
		var_4843_object = GlobalVars[16];
		var_4843_object = var_4842_object;
		func_11300(var_4842_object);
		var_4848_bool = var_4841_bool == 0; //@nz
		if(var_4848_bool != 0) {
			var_4849_int = 0; var_4850_float = 0;
			var_4817_float = var_4850_float;
			func_9943(var_4849_int, var_4850_float);
		}
	}
	var_4856_bool = var_4816_int == (int)45287;
	if(var_4856_bool != 0) {
		var_4857_bool = 0; var_4858_object = Obj();
		var_4859_object = GlobalVars[16];
		var_4859_object = var_4858_object;
		func_11288(var_4858_object);
		var_4864_bool = var_4857_bool == 0; //@nz
		if(var_4864_bool != 0) {
			var_4865_int = 0; var_4866_float = 0;
			var_4817_float = var_4866_float;
			func_9925(var_4865_int, var_4866_float);
		}
	}
	var_4872_bool = var_4816_int == (int)45289;
	if(var_4872_bool != 0) {
		var_4873_bool = 0; var_4874_object = Obj();
		var_4875_object = GlobalVars[16];
		var_4875_object = var_4874_object;
		func_11024(var_4874_object);
		var_4880_bool = var_4873_bool == 0; //@nz
		if(var_4880_bool != 0) {
			var_4881_int = 0; var_4882_float = 0;
			var_4817_float = var_4882_float;
			func_9952(var_4881_int, var_4882_float);
		}
	}
	var_4888_bool = var_4816_int == (int)45272;
	if(var_4888_bool != 0) {
		var_4889_object = Obj(); var_4890_object = Obj();
		var_4891_object = GlobalVars[16];
		var_4891_object = var_4889_object;
		var_4892_object = GlobalVars[16];
		var_4892_object = var_4890_object;
		func_10843();
	}
	var_4902_bool = var_4816_int == (int)45277;
	if(var_4902_bool != 0) {
		var_4903_object = Obj(); var_4904_object = Obj();
		var_4905_object = GlobalVars[16];
		var_4905_object = var_4903_object;
		var_4906_object = GlobalVars[16];
		var_4906_object = var_4904_object;
		func_10928();
	}
	var_4916_bool = var_4816_int == (int)45280;
	if(var_4916_bool != 0) {
		QueuePlayMovie("army.wmv");
	}
	var_4919_bool = var_4816_int == (int)45284;
	if(var_4919_bool != 0) {
		var_4920_bool = 0; var_4921_object = Obj();
		var_4922_object = GlobalVars[16];
		var_4922_object = var_4921_object;
		func_11252(var_4921_object);
		var_4927_bool = var_4920_bool == 0; //@nz
		if(var_4927_bool != 0) {
			var_4928_int = 0; var_4929_float = 0;
			var_4817_float = var_4929_float;
			func_10114(var_4928_int, var_4929_float);
		}
	}
	var_4935_bool = var_4816_int == (int)45258;
	if(var_4935_bool != 0) {
		var_4936_int = 0; var_4937_float = 0;
		var_4817_float = var_4937_float;
		func_10015(var_4936_int, var_4937_float);
	}
	var_4943_bool = var_4816_int == (int)45285;
	if(var_4943_bool != 0) {
		var_4944_bool = 0; var_4945_object = Obj();
		var_4946_object = GlobalVars[16];
		var_4946_object = var_4945_object;
		func_11264(var_4945_object);
		var_4951_bool = var_4944_bool == 0; //@nz
		if(var_4951_bool != 0) {
			var_4952_int = 0; var_4953_float = 0;
			var_4817_float = var_4953_float;
			func_10123(var_4952_int, var_4953_float);
		}
	}
	var_4959_bool = var_4816_int == (int)45279;
	if(var_4959_bool != 0) {
		QueuePlayMovie("aglaja.wmv");
	}
	var_4962_bool = var_4816_int == (int)45256;
	if(var_4962_bool != 0) {
		var_4963_bool = 0; var_4964_object = Obj();
		var_4965_object = GlobalVars[16];
		var_4965_object = var_4964_object;
		func_11228(var_4964_object);
		var_4970_bool = var_4963_bool == 0; //@nz
		if(var_4970_bool != 0) {
			var_4971_int = 0; var_4972_float = 0;
			var_4817_float = var_4972_float;
			func_10105(var_4971_int, var_4972_float);
		}
	}
	var_4978_bool = var_4816_int == (int)45274;
	if(var_4978_bool != 0) {
		var_4979_object = Obj(); var_4980_object = Obj();
		var_4981_object = GlobalVars[16];
		var_4981_object = var_4979_object;
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4980_object;
		func_10877();
	}
	var_4992_bool = var_4816_int == (int)45276;
	if(var_4992_bool != 0) {
		var_4993_object = Obj(); var_4994_object = Obj();
		var_4995_object = GlobalVars[16];
		var_4995_object = var_4993_object;
		var_4996_object = GlobalVars[16];
		var_4996_object = var_4994_object;
		func_10911();
	}
	var_5006_bool = var_4816_int == (int)45281;
	if(var_5006_bool != 0) {
		var_5007_bool = 0; var_5008_object = Obj();
		var_5009_object = GlobalVars[16];
		var_5009_object = var_5008_object;
		func_11240(var_5008_object);
		var_5014_bool = var_5007_bool == 0; //@nz
		if(var_5014_bool != 0) {
			var_5015_int = 0; var_5016_float = 0;
			var_4817_float = var_5016_float;
			func_10069(var_5015_int, var_5016_float);
		}
	}
	var_5022_bool = var_4816_int == (int)45283;
	if(var_5022_bool != 0) {
		var_5023_object = Obj(); var_5024_object = Obj();
		var_5025_object = GlobalVars[16];
		var_5025_object = var_5023_object;
		var_5026_object = GlobalVars[16];
		var_5026_object = var_5024_object;
		func_10950();
	}
	var_5071_bool = var_4816_int == (int)45275;
	if(var_5071_bool != 0) {
		var_5072_object = Obj(); var_5073_object = Obj();
		var_5074_object = GlobalVars[16];
		var_5074_object = var_5072_object;
		var_5075_object = GlobalVars[16];
		var_5075_object = var_5073_object;
		func_10894();
	}
	var_5085_bool = var_4816_int == (int)45278;
	if(var_5085_bool != 0) {
		var_5086_bool = 0; var_5087_object = Obj();
		var_5088_object = GlobalVars[16];
		var_5088_object = var_5087_object;
		func_11060(var_5087_object);
		var_5093_bool = var_5086_bool == 0; //@nz
		if(var_5093_bool != 0) {
			var_5094_object = Obj(); var_5095_object = Obj();
			var_5096_object = GlobalVars[16];
			var_5096_object = var_5094_object;
			var_5097_object = GlobalVars[16];
			var_5097_object = var_5095_object;
			func_11008();
		}
	}
	var_5134_bool = var_4816_int == (int)45273;
	if(var_5134_bool != 0) {
		var_5135_object = Obj(); var_5136_object = Obj();
		var_5137_object = GlobalVars[16];
		var_5137_object = var_5135_object;
		var_5138_object = GlobalVars[16];
		var_5138_object = var_5136_object;
		func_10860();
	}
	var_5148_bool = var_4816_int == (int)45257;
	if(var_5148_bool != 0) {
		var_5149_int = 0; var_5150_float = 0;
		var_4817_float = var_5150_float;
		func_10006(var_5149_int, var_5150_float);
	}
	var_5156_bool = var_4816_int == (int)45243;
	if(var_5156_bool != 0) {
		var_5157_bool = 0; var_5158_object = Obj();
		var_5159_object = GlobalVars[16];
		var_5159_object = var_5158_object;
		func_11084(var_5158_object);
		var_5164_bool = var_5157_bool == 0; //@nz
		if(var_5164_bool != 0) {
			var_5165_object = Obj(); var_5166_object = Obj();
			var_5167_object = GlobalVars[16];
			var_5167_object = var_5165_object;
			var_5168_object = GlobalVars[16];
			var_5168_object = var_5166_object;
			func_10827();
			var_5185_int = 0; var_5186_float = 0;
			var_4817_float = var_5186_float;
			func_9997(var_5185_int, var_5186_float);
		}
	}
	var_5192_bool = var_4816_int == (int)45172;
	if(var_5192_bool != 0) {
		var_5193_bool = 0; var_5194_object = Obj();
		var_5195_object = GlobalVars[16];
		var_5195_object = var_5194_object;
		func_11312(var_5193_bool, var_5194_object);
		if(var_5193_bool != 0) {
			var_5198_int = 0; var_5199_float = 0;
			var_4817_float = var_5199_float;
			func_9916(var_5198_int, var_5199_float);
		}
	}
	var_5205_bool = var_4816_int == (int)45249;
	if(var_5205_bool != 0) {
		var_5206_object = Obj(); var_5207_string = "";
		func_137(var_5206_object, "quest_k5_04");
	}
	var_5215_bool = var_4816_int == (int)45241;
	if(var_5215_bool != 0) {
		var_5216_int = 0; var_5217_float = 0;
		var_4817_float = var_5217_float;
		func_9970(var_5216_int, var_5217_float);
	}
	var_5223_bool = var_4816_int == (int)45245;
	if(var_5223_bool != 0) {
		var_5224_int = 0; var_5225_float = 0;
		var_4817_float = var_5225_float;
		func_10024(var_5224_int, var_5225_float);
	}
	var_5231_bool = var_4816_int == (int)45252;
	if(var_5231_bool != 0) {
		var_5232_bool = 0;
		var_5232_bool = 1;
		var_5233_bool = 0; var_5234_object = Obj();
		var_5235_object = GlobalVars[16];
		var_5235_object = var_5234_object;
		func_11168(var_5234_object);
		var_5240_bool = var_5233_bool == 0; //@nz
		if(var_5240_bool != 1) {
			var_5241_bool = 0; var_5242_object = Obj();
			var_5243_object = GlobalVars[16];
			var_5243_object = var_5242_object;
			func_11180(var_5242_object);
			var_5248_bool = var_5241_bool == 0; //@nz
			if(var_5248_bool != 1) {
				var_5232_bool = 0;
			}
		}
		if(var_5232_bool != 0) {
			var_5249_int = 0; var_5250_float = 0;
			var_4817_float = var_5250_float;
			func_9979(var_5249_int, var_5250_float);
		}
	}
	var_5256_bool = var_4816_int == (int)45247;
	if(var_5256_bool != 0) {
		var_5257_int = 0; var_5258_float = 0;
		var_4817_float = var_5258_float;
		func_10087(var_5257_int, var_5258_float);
	}
	var_5264_bool = var_4816_int == (int)45170;
	if(var_5264_bool != 0) {
		var_5265_bool = 0; var_5266_object = Obj();
		var_5267_object = GlobalVars[16];
		var_5267_object = var_5266_object;
		func_11312(var_5265_bool, var_5266_object);
		if(var_5265_bool != 0) {
			var_5268_int = 0; var_5269_float = 0;
			var_4817_float = var_5269_float;
			func_9889(var_5268_int, var_5269_float);
		}
	}
	var_5275_bool = var_4816_int == (int)45253;
	if(var_5275_bool != 0) {
		var_5276_bool = 0;
		var_5276_bool = 1;
		var_5277_bool = 0; var_5278_object = Obj();
		var_5279_object = GlobalVars[16];
		var_5279_object = var_5278_object;
		func_11204(var_5278_object);
		var_5284_bool = var_5277_bool == 0; //@nz
		if(var_5284_bool != 1) {
			var_5285_bool = 0; var_5286_object = Obj();
			var_5287_object = GlobalVars[16];
			var_5287_object = var_5286_object;
			func_11192(var_5286_object);
			var_5292_bool = var_5285_bool == 0; //@nz
			if(var_5292_bool != 1) {
				var_5276_bool = 0;
			}
		}
		if(var_5276_bool != 0) {
			var_5293_int = 0; var_5294_float = 0;
			var_4817_float = var_5294_float;
			func_9979(var_5293_int, var_5294_float);
		}
	}
	var_5296_bool = var_4816_int == (int)45173;
	if(var_5296_bool != 0) {
		var_5297_bool = 0; var_5298_object = Obj();
		var_5299_object = GlobalVars[16];
		var_5299_object = var_5298_object;
		func_11312(var_5297_bool, var_5298_object);
		if(var_5297_bool != 0) {
			var_5300_int = 0; var_5301_float = 0;
			var_4817_float = var_5301_float;
			func_9934(var_5300_int, var_5301_float);
		}
	}
	var_5307_bool = var_4816_int == (int)45254;
	if(var_5307_bool != 0) {
		var_5308_int = 0; var_5309_float = 0;
		var_4817_float = var_5309_float;
		func_10042(var_5308_int, var_5309_float);
	}
	var_5315_bool = var_4816_int == (int)45255;
	if(var_5315_bool != 0) {
		var_5316_bool = 0; var_5317_object = Obj();
		var_5318_object = GlobalVars[16];
		var_5318_object = var_5317_object;
		func_11216(var_5317_object);
		var_5323_bool = var_5316_bool == 0; //@nz
		if(var_5323_bool != 0) {
			var_5324_int = 0; var_5325_float = 0;
			var_4817_float = var_5325_float;
			func_10078(var_5324_int, var_5325_float);
		}
	}
	var_5331_bool = var_4816_int == (int)45167;
	if(var_5331_bool != 0) {
		var_5332_bool = 0; var_5333_object = Obj();
		var_5334_object = GlobalVars[16];
		var_5334_object = var_5333_object;
		func_11312(var_5332_bool, var_5333_object);
		if(var_5332_bool != 0) {
			var_5335_int = 0; var_5336_float = 0;
			var_4817_float = var_5336_float;
			func_9862(var_5335_int, var_5336_float);
		}
	}
	var_5342_bool = var_4816_int == (int)45240;
	if(var_5342_bool != 0) {
		var_5343_bool = 0; var_5344_object = Obj();
		var_5345_object = GlobalVars[16];
		var_5345_object = var_5344_object;
		func_11060(var_5344_object);
		var_5346_bool = var_5343_bool == 0; //@nz
		if(var_5346_bool != 0) {
			var_5347_int = 0; var_5348_float = 0;
			var_4817_float = var_5348_float;
			func_9961(var_5347_int, var_5348_float);
		}
	}
	var_5354_bool = var_4816_int == (int)45250;
	if(var_5354_bool != 0) {
		var_5355_bool = 0;
		var_5355_bool = 1;
		var_5356_bool = 0; var_5357_object = Obj();
		var_5358_object = GlobalVars[16];
		var_5358_object = var_5357_object;
		func_11120(var_5357_object);
		var_5363_bool = var_5356_bool == 0; //@nz
		if(var_5363_bool != 1) {
			var_5364_bool = 0; var_5365_object = Obj();
			var_5366_object = GlobalVars[16];
			var_5366_object = var_5365_object;
			func_11132(var_5365_object);
			var_5371_bool = var_5364_bool == 0; //@nz
			if(var_5371_bool != 1) {
				var_5355_bool = 0;
			}
		}
		if(var_5355_bool != 0) {
			var_5372_int = 0; var_5373_float = 0;
			var_4817_float = var_5373_float;
			func_9979(var_5372_int, var_5373_float);
		}
	}
	var_5375_bool = var_4816_int == (int)45168;
	if(var_5375_bool != 0) {
		var_5376_bool = 0; var_5377_object = Obj();
		var_5378_object = GlobalVars[16];
		var_5378_object = var_5377_object;
		func_11312(var_5376_bool, var_5377_object);
		if(var_5376_bool != 0) {
			var_5379_int = 0; var_5380_float = 0;
			var_4817_float = var_5380_float;
			func_9871(var_5379_int, var_5380_float);
		}
	}
	var_5386_bool = var_4816_int == (int)45171;
	if(var_5386_bool != 0) {
		var_5387_bool = 0; var_5388_object = Obj();
		var_5389_object = GlobalVars[16];
		var_5389_object = var_5388_object;
		func_11312(var_5387_bool, var_5388_object);
		if(var_5387_bool != 0) {
			var_5390_int = 0; var_5391_float = 0;
			var_4817_float = var_5391_float;
			func_9898(var_5390_int, var_5391_float);
		}
	}
	var_5397_bool = var_4816_int == (int)45244;
	if(var_5397_bool != 0) {
		var_5398_int = 0; var_5399_float = 0;
		var_4817_float = var_5399_float;
		func_9988(var_5398_int, var_5399_float);
	}
	var_5405_bool = var_4816_int == (int)45246;
	if(var_5405_bool != 0) {
		var_5406_int = 0; var_5407_float = 0;
		var_4817_float = var_5407_float;
		func_10060(var_5406_int, var_5407_float);
	}
	var_5413_bool = var_4816_int == (int)45236;
	if(var_5413_bool != 0) {
		var_5414_int = 0; var_5415_float = 0;
		var_4817_float = var_5415_float;
		func_10033(var_5414_int, var_5415_float);
	}
	var_5421_bool = var_4816_int == (int)45248;
	if(var_5421_bool != 0) {
		var_5422_bool = 0; var_5423_object = Obj();
		var_5424_object = GlobalVars[16];
		var_5424_object = var_5423_object;
		func_11096(var_5423_object);
		var_5429_bool = var_5422_bool == 0; //@nz
		if(var_5429_bool != 0) {
			var_5430_int = 0; var_5431_float = 0;
			var_4817_float = var_5431_float;
			func_10096(var_5430_int, var_5431_float);
		}
	}
	var_5437_bool = var_4816_int == (int)45251;
	if(var_5437_bool != 0) {
		var_5438_bool = 0;
		var_5438_bool = 1;
		var_5439_bool = 0; var_5440_object = Obj();
		var_5441_object = GlobalVars[16];
		var_5441_object = var_5440_object;
		func_11144(var_5440_object);
		var_5446_bool = var_5439_bool == 0; //@nz
		if(var_5446_bool != 1) {
			var_5447_bool = 0; var_5448_object = Obj();
			var_5449_object = GlobalVars[16];
			var_5449_object = var_5448_object;
			func_11156(var_5448_object);
			var_5454_bool = var_5447_bool == 0; //@nz
			if(var_5454_bool != 1) {
				var_5438_bool = 0;
			}
		}
		if(var_5438_bool != 0) {
			var_5455_int = 0; var_5456_float = 0;
			var_4817_float = var_5456_float;
			func_9979(var_5455_int, var_5456_float);
		}
	}
	var_5458_bool = var_4816_int == (int)45242;
	if(var_5458_bool != 0) {
		var_5459_bool = 0;
		var_5459_bool = 1;
		var_5460_bool = 0; var_5461_object = Obj();
		var_5462_object = GlobalVars[16];
		var_5462_object = var_5461_object;
		func_11072(var_5461_object);
		var_5467_bool = var_5460_bool == 0; //@nz
		if(var_5467_bool != 1) {
			var_5468_bool = 0; var_5469_object = Obj();
			var_5470_object = GlobalVars[16];
			var_5470_object = var_5469_object;
			func_11108(var_5469_object);
			var_5475_bool = var_5468_bool == 0; //@nz
			if(var_5475_bool != 1) {
				var_5459_bool = 0;
			}
		}
		if(var_5459_bool != 0) {
			var_5476_int = 0; var_5477_float = 0;
			var_4817_float = var_5477_float;
			func_9979(var_5476_int, var_5477_float);
		}
	}
	var_5479_bool = var_4816_int == (int)45169;
	if(var_5479_bool != 0) {
		var_5480_bool = 0; var_5481_object = Obj();
		var_5482_object = GlobalVars[16];
		var_5482_object = var_5481_object;
		func_11312(var_5480_bool, var_5481_object);
		if(var_5480_bool != 0) {
			var_5483_int = 0; var_5484_float = 0;
			var_4817_float = var_5484_float;
			func_9880(var_5483_int, var_5484_float);
		}
	}
	var_5490_bool = var_4816_int == (int)45108;
	if(var_5490_bool != 0) {
		var_5491_object = Obj(); var_5492_object = Obj();
		var_5493_object = GlobalVars[16];
		var_5493_object = var_5491_object;
		var_5494_object = GlobalVars[16];
		var_5494_object = var_5492_object;
		func_10757();
		var_5512_bool = 0; var_5513_string = ""; var_5514_string = "";
		func_239(var_5512_bool, "quest_k10_01", "cleanup");
		var_5515_object = Obj(); var_5516_string = "";
		func_137(var_5515_object, "quest_k11_01");
	}
	var_5518_bool = var_4816_int == (int)45102;
	if(var_5518_bool != 0) {
		var_5519_object = Obj(); var_5520_object = Obj();
		var_5521_object = GlobalVars[16];
		var_5521_object = var_5519_object;
		var_5522_object = GlobalVars[16];
		var_5522_object = var_5520_object;
		func_10530();
		var_5552_object = Obj(); var_5553_string = "";
		func_148(var_5552_object, "quest_k6_01");
	}
	var_5561_bool = var_4816_int == (int)45103;
	if(var_5561_bool != 0) {
		var_5562_object = Obj(); var_5563_object = Obj();
		var_5564_object = GlobalVars[16];
		var_5564_object = var_5562_object;
		var_5565_object = GlobalVars[16];
		var_5565_object = var_5563_object;
		func_10610();
		var_5591_bool = 0; var_5592_string = ""; var_5593_string = "";
		func_239(var_5591_bool, "quest_k6_01", "cleanup");
		var_5594_object = Obj(); var_5595_string = "";
		func_137(var_5594_object, "quest_k7_01");
	}
	var_5597_bool = var_4816_int == (int)45107;
	if(var_5597_bool != 0) {
		var_5598_bool = 0; var_5599_object = Obj();
		var_5600_object = GlobalVars[16];
		var_5600_object = var_5599_object;
		func_11048(var_5599_object);
		var_5605_bool = var_5598_bool == 0; //@nz
		if(var_5605_bool != 0) {
			var_5606_int = 0; var_5607_float = 0;
			var_4817_float = var_5607_float;
			func_9907(var_5606_int, var_5607_float);
		}
	}
	var_5613_bool = var_4816_int == (int)45101;
	if(var_5613_bool != 0) {
		var_5614_object = Obj(); var_5615_object = Obj();
		var_5616_object = GlobalVars[16];
		var_5616_object = var_5614_object;
		var_5617_object = GlobalVars[16];
		var_5617_object = var_5615_object;
		func_10461();
		var_5643_object = Obj(); var_5644_object = Obj();
		var_5645_object = GlobalVars[16];
		var_5645_object = var_5643_object;
		var_5646_object = GlobalVars[16];
		var_5646_object = var_5644_object;
		func_10162();
		var_5657_bool = 0; var_5658_string = ""; var_5659_string = "";
		func_239(var_5657_bool, "quest_k4_01", "cleanup");
	}
	var_5661_bool = var_4816_int == (int)45109;
	if(var_5661_bool != 0) {
		var_5662_object = Obj(); var_5663_object = Obj();
		var_5664_object = GlobalVars[16];
		var_5664_object = var_5662_object;
		var_5665_object = GlobalVars[16];
		var_5665_object = var_5663_object;
		func_10795();
		var_5674_bool = 0; var_5675_string = ""; var_5676_string = "";
		func_239(var_5674_bool, "quest_k11_01", "cleanup");
		var_5677_object = Obj(); var_5678_string = "";
		func_137(var_5677_object, "quest_k12_01");
	}
	var_5680_bool = var_4816_int == (int)45105;
	if(var_5680_bool != 0) {
		var_5681_object = Obj(); var_5682_object = Obj();
		var_5683_object = GlobalVars[16];
		var_5683_object = var_5681_object;
		var_5684_object = GlobalVars[16];
		var_5684_object = var_5682_object;
		func_10721();
		var_5693_bool = 0; var_5694_string = ""; var_5695_string = "";
		func_239(var_5693_bool, "quest_k8_01", "cleanup");
		var_5696_object = Obj(); var_5697_string = "";
		func_137(var_5696_object, "quest_k9_01");
	}
	var_5699_bool = var_4816_int == (int)45106;
	if(var_5699_bool != 0) {
		var_5700_object = Obj(); var_5701_object = Obj();
		var_5702_object = GlobalVars[16];
		var_5702_object = var_5700_object;
		var_5703_object = GlobalVars[16];
		var_5703_object = var_5701_object;
		func_10739();
		var_5712_bool = 0; var_5713_string = ""; var_5714_string = "";
		func_239(var_5712_bool, "quest_k9_01", "cleanup");
		var_5715_object = Obj(); var_5716_string = "";
		func_137(var_5715_object, "quest_k10_01");
	}
	var_5718_bool = var_4816_int == (int)45095;
	if(var_5718_bool != 0) {
		var_5719_object = Obj(); var_5720_object = Obj();
		var_5721_object = GlobalVars[16];
		var_5721_object = var_5719_object;
		var_5722_object = GlobalVars[16];
		var_5722_object = var_5720_object;
		func_10176();
		var_5754_bool = 0; var_5755_string = ""; var_5756_string = "";
		func_239(var_5754_bool, "quest_k1_01", "cleanup");
	}
	var_5758_bool = var_4816_int == (int)45163;
	if(var_5758_bool != 0) {
		var_5759_bool = 0; var_5760_object = Obj();
		var_5761_object = GlobalVars[16];
		var_5761_object = var_5760_object;
		func_11312(var_5759_bool, var_5760_object);
		if(var_5759_bool != 0) {
			var_5762_int = 0; var_5763_float = 0;
			var_4817_float = var_5763_float;
			func_9826(var_5762_int, var_5763_float);
		}
	}
	var_5769_bool = var_4816_int == (int)45164;
	if(var_5769_bool != 0) {
		var_5770_bool = 0; var_5771_object = Obj();
		var_5772_object = GlobalVars[16];
		var_5772_object = var_5771_object;
		func_11312(var_5770_bool, var_5771_object);
		if(var_5770_bool != 0) {
			var_5773_int = 0; var_5774_float = 0;
			var_4817_float = var_5774_float;
			func_9835(var_5773_int, var_5774_float);
		}
	}
	var_5780_bool = var_4816_int == (int)45165;
	if(var_5780_bool != 0) {
		var_5781_bool = 0; var_5782_object = Obj();
		var_5783_object = GlobalVars[16];
		var_5783_object = var_5782_object;
		func_11312(var_5781_bool, var_5782_object);
		if(var_5781_bool != 0) {
			var_5784_int = 0; var_5785_float = 0;
			var_4817_float = var_5785_float;
			func_9844(var_5784_int, var_5785_float);
		}
	}
	var_5791_bool = var_4816_int == (int)45110;
	if(var_5791_bool != 0) {
		var_5792_object = Obj(); var_5793_object = Obj();
		var_5794_object = GlobalVars[16];
		var_5794_object = var_5792_object;
		var_5795_object = GlobalVars[16];
		var_5795_object = var_5793_object;
		func_10266();
		var_5833_object = Obj(); var_5834_object = Obj();
		var_5835_object = GlobalVars[16];
		var_5835_object = var_5833_object;
		var_5836_object = GlobalVars[16];
		var_5836_object = var_5834_object;
		func_10162();
		var_5837_object = Obj(); var_5838_string = "";
		func_137(var_5837_object, "quest_k3_01");
	}
	var_5840_bool = var_4816_int == (int)45166;
	if(var_5840_bool != 0) {
		var_5841_bool = 0; var_5842_object = Obj();
		var_5843_object = GlobalVars[16];
		var_5843_object = var_5842_object;
		func_11312(var_5841_bool, var_5842_object);
		if(var_5841_bool != 0) {
			var_5844_int = 0; var_5845_float = 0;
			var_4817_float = var_5845_float;
			func_9853(var_5844_int, var_5845_float);
		}
	}
	var_5851_bool = var_4816_int == (int)45096;
	if(var_5851_bool != 0) {
		var_5852_bool = 0; var_5853_object = Obj();
		var_5854_object = GlobalVars[16];
		var_5854_object = var_5853_object;
		func_11036(var_5853_object);
		if(var_5852_bool != 0) {
			var_5859_object = Obj(); var_5860_object = Obj();
			var_5861_object = GlobalVars[16];
			var_5861_object = var_5859_object;
			var_5862_object = GlobalVars[16];
			var_5862_object = var_5860_object;
			func_10994(var_5860_object);
			var_5895_int = 0; var_5896_float = 0;
			var_4817_float = var_5896_float;
			func_10051(var_5895_int, var_5896_float);
		}
	}
	var_5902_bool = var_4816_int == (int)45104;
	if(var_5902_bool != 0) {
		var_5903_object = Obj(); var_5904_object = Obj();
		var_5905_object = GlobalVars[16];
		var_5905_object = var_5903_object;
		var_5906_object = GlobalVars[16];
		var_5906_object = var_5904_object;
		func_10676();
		var_5926_bool = 0; var_5927_string = ""; var_5928_string = "";
		func_239(var_5926_bool, "quest_k7_01", "cleanup");
		var_5929_object = Obj(); var_5930_string = "";
		func_137(var_5929_object, "quest_k8_01");
	}
	var_5932_bool = var_4816_int == (int)45100;
	if(var_5932_bool != 0) {
		var_5933_object = Obj(); var_5934_object = Obj();
		var_5935_object = GlobalVars[16];
		var_5935_object = var_5933_object;
		var_5936_object = GlobalVars[16];
		var_5936_object = var_5934_object;
		func_10374();
		var_5968_object = Obj(); var_5969_object = Obj();
		var_5970_object = GlobalVars[16];
		var_5970_object = var_5968_object;
		var_5971_object = GlobalVars[16];
		var_5971_object = var_5969_object;
		func_10169();
		var_5974_bool = 0; var_5975_string = ""; var_5976_string = "";
		func_239(var_5974_bool, "quest_k3_01", "cleanup");
		var_5977_object = Obj(); var_5978_string = "";
		func_148(var_5977_object, "quest_k4_01");
	}
	return 0;
}


func_5394(var_144_object)
{
	@@var_144_object:add("dt_house3_14_i2");
	@@var_144_object:add("dt_house3_14");
	@@var_144_object:add("house1_arc_01l");
	@@var_144_object:add("house1_arc_01r");
	@@var_144_object:add("dt_House6_01");
	@@var_144_object:add("dt_house_1_09");
	@@var_144_object:add("house5_24");
	@@var_144_object:add("dt_House6_03");
	@@var_144_object:add("dt_House6_04");
	@@var_144_object:add("dt_house_1_08");
	@@var_144_object:add("house5_unoin_solidl");
	@@var_144_object:add("house5_unoin_solidr");
	@@var_144_object:add("dt_house2_12");
	@@var_144_object:add("dt_house2_11");
	@@var_144_object:add("dt_house2_13");
	@@var_144_object:add("dt_house2_09");
	@@var_144_object:add("dt_house2_08");
	@@var_144_object:add("dt_house2_07");
	@@var_144_object:add("dt_house2_06");
	@@var_144_object:add("house5_01");
	@@var_144_object:add("house5_15");
	@@var_144_object:add("house5_16");
	@@var_144_object:add("house5_17");
	@@var_144_object:add("house5_unoin04l");
	@@var_144_object:add("house5_unoin04r");
	@@var_144_object:add("house5_23");
	@@var_144_object:add("house1_se_05r");
	@@var_144_object:add("house1_se_05l");
	@@var_144_object:add("dt_house2_10");
	return 0;
}


func_6422(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object)
{
	var_4004_bool = var_3998_int == (int)0;
	if(var_4004_bool != 0) {
		var_4005_int = 0; var_4006_bool = 0;
		func_796((int)10, (bool)0);
		var_4007_int = 0; var_4008_bool = 0; var_4009_int = 0;
		func_813((int)10, (bool)0, (int)1);
		var_4010_int = 0; var_4011_int = 0; var_4012_object = Obj(); var_4013_object = Obj(); var_4014_object = Obj();
		var_3997_int = var_4011_int;
		var_3999_object = var_4012_object;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		func_720((int)10, var_4011_int, var_4012_object, var_4013_object, var_4014_object);
		var_4015_object = Obj(); var_4016_int = 0;
		var_4002_object = var_4015_object;
		func_305(var_4015_object, (int)2);
		var_4017_int = 0; var_4018_bool = 0; var_4019_int = 0;
		func_870((int)10, (bool)0, (int)7);
		var_4020_int = 0; var_4021_bool = 0; var_4022_int = 0;
		func_932((int)10, (bool)1, (int)7);
	}
	var_4023_int = 0; var_4024_bool = 0;
	func_779((int)10, (bool)0);
	var_4025_int = 0; var_4026_int = 0; var_4027_int = 0;
	var_3997_int = var_4026_int;
	var_3998_int = var_4027_int;
	func_3659((int)10, var_4026_int, var_4027_int);
	return 0;
}


func_284(var_4580_float)
{
	var_4581_float = 0; var_4582_float = 0;
	GetGameTime(var_4582_float);
	var_4582_float = var_4580_float;
	return 2;
}


func_289()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_4385()
{
	return 0;
}


func_4387(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object)
{
	var_525_bool = var_519_int == (int)0;
	if(var_525_bool != 0) {
		var_526_int = 0; var_527_bool = 0;
		func_796((int)0, (bool)0);
		var_528_int = 0; var_529_bool = 0; var_530_int = 0;
		func_813((int)0, (bool)0, (int)1);
		var_566_int = 0; var_567_int = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj();
		var_566_int = 0;
		var_518_int = var_567_int;
		var_520_object = var_568_object;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		func_622(var_567_int, var_568_object, var_569_object, var_570_object);
		var_612_object = Obj(); var_613_int = 0;
		var_523_object = var_612_object;
		func_305(var_612_object, (int)0);
		var_639_int = 0; var_640_bool = 0; var_641_int = 0;
		func_870((int)0, (bool)0, (int)4);
		var_686_int = 0; var_687_bool = 0; var_688_int = 0;
		func_932((int)0, (bool)0, (int)4);
	}
	var_724_int = 0; var_725_int = 0;
	var_519_int = var_725_int;
	func_1050((int)0, var_725_int);
	var_750_int = 0; var_751_int = 0; var_752_int = 0;
	var_518_int = var_751_int;
	var_519_int = var_752_int;
	func_2206((int)0, var_751_int, var_752_int);
	return 0;
}


func_10530()
{
	var_5523_object = Obj(); var_5524_object = Obj(); var_5525_object = Obj(); var_5526_object = Obj();
	func_11417(Obj());
	var_5527_object = var_5525_object;
	@@var_5525_object:FindMark(var_5526_object, "k5q03LaskaGotoAlbinos");
	var_5529_object = var_5526_object;
	if(var_5529_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q01AlexandrGotoMladVlad");
	var_5531_object = var_5526_object;
	if(var_5531_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q01RubinGotoGeorg");
	var_5533_object = var_5526_object;
	if(var_5533_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q04KapellaGotoMaria");
	var_5535_object = var_5526_object;
	if(var_5535_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q04MariaGotoDanko");
	var_5537_object = var_5526_object;
	if(var_5537_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q02KabatchikGotoAlexandr");
	var_5539_object = var_5526_object;
	if(var_5539_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q02KaterinaGotoPetr");
	var_5541_object = var_5526_object;
	if(var_5541_object != 0) {
		@@var_5526_object:Remove();
	}
	@@var_5525_object:FindMark(var_5526_object, "k5q02PetrGotoAndrei");
	var_5543_object = var_5526_object;
	if(var_5543_object != 0) {
		@@var_5526_object:Remove();
	}
	var_5544_bool = 0; var_5545_int = 0;
	func_11392(var_5544_bool, (int)390);
	var_5546_bool = 0; var_5547_int = 0;
	func_11392(var_5546_bool, (int)397);
	var_5548_bool = 0; var_5549_int = 0;
	func_11392(var_5548_bool, (int)405);
	var_5550_bool = 0; var_5551_int = 0;
	func_11392(var_5550_bool, (int)740);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_294()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_299(var_446_string, var_447_int)
{
	var_449_int = "Region" + var_447_int;
	var_446_string = var_449_int + "State";
	return 0;
}


func_305(var_612_object, var_613_int)
{
	var_614_int = 0; var_615_string = ""; var_616_int = 0; var_617_string = ""; var_618_string = ""; var_619_object = Obj(); var_620_int = 0; var_621_string = ""; var_622_int = 0; var_623_string = ""; var_624_string = ""; var_625_object = Obj();
	@@var_612_object:size(var_620_int);
	var_627_bool = var_613_int == (int)1;
	if(var_627_bool != 0) {
		var_621_string = "s_";
	} else {
			var_638_bool = var_613_int == (int)2;
			if(var_638_bool == 0) goto Label_317;
			var_621_string = "n_";
	}
Label_317:
	var_622_int = 0;
	
Label_318:
	var_628_bool = var_622_int < var_620_int;
	if(var_628_bool != 0) {
		@@var_612_object:get(var_623_string, var_622_int);
		var_629_int = var_621_string + var_623_string;
		var_624_string = var_629_int + ".isc";
		GetSceneByName(var_625_object, var_623_string);
		var_631_bool = var_625_object == 0; //@nz
		if(var_631_bool != 0) {
			var_633_int = "City manager: can't replace indoor scene \"" + var_623_string;
			var_635_int = var_633_int + "\" because it doesn't exist";
			Trace(var_635_int);
		} else {
			ReplaceScene(var_625_object, var_624_string);
	}
		var_625_object = 0;
		var_622_int = var_622_int + (int)1;
		goto Label_318;
	}
	return 12;
	
}


func_1345(var_1128_bool, var_1129_int, var_1130_int)
{
	var_1128_bool = 0;
	var_1132_bool = var_1129_int >= (int)10;
	if(var_1132_bool != 0) {
		var_1134_bool = var_1130_int < (int)6;
		if(var_1134_bool != 0) {
			var_1128_bool = 1;
		}
	}
	return 0;
}


func_6474(var_245_object)
{
	@@var_245_object:add("r5_house2_01");
	@@var_245_object:add("r5_house2_02");
	@@var_245_object:add("r5_house2_03");
	@@var_245_object:add("r5_house3_01_i2");
	@@var_245_object:add("r5_house3_01");
	@@var_245_object:add("r5_house3_02_i2");
	@@var_245_object:add("r5_house3_02");
	@@var_245_object:add("r5_house3_03_i2");
	@@var_245_object:add("r5_house3_03");
	@@var_245_object:add("r5_house3_04_i2");
	@@var_245_object:add("r5_house3_04");
	@@var_245_object:add("r5_house3_05_i2");
	@@var_245_object:add("r5_house3_05");
	@@var_245_object:add("r5_house3_06_i2");
	@@var_245_object:add("r5_house3_06");
	@@var_245_object:add("r5_house3_07_i2");
	@@var_245_object:add("r5_house3_07");
	@@var_245_object:add("r5_House6_01");
	return 0;
}


func_1355(var_1139_bool, var_1140_int, var_1141_int)
{
	var_1139_bool = 0;
	var_1143_bool = var_1140_int >= (int)3;
	if(var_1143_bool != 0) {
		var_1144_bool = 0;
		var_1144_bool = 1;
		var_1146_bool = var_1141_int > (int)22;
		if(var_1146_bool != 1) {
			var_1148_bool = var_1141_int < (int)5;
			if(var_1148_bool != 1) {
				var_1144_bool = 0;
			}
		}
		if(var_1144_bool != 0) {
			var_1139_bool = 1;
		}
	}
	return 0;
}


func_2383(var_914_int, var_915_int, var_916_int)
{
	var_917_int = 0; var_918_int = 0;
	var_920_int = var_915_int + (int)1;
	var_922_bool = var_920_int == (int)12;
	if(var_922_bool != 0) {
		return 2;
	}
	var_923_bool = 0;
	var_923_bool = 0;
	var_924_bool = 0;
	var_924_bool = 1;
	var_926_bool = var_916_int < (int)7;
	if(var_926_bool != 1) {
		var_928_bool = var_916_int > (int)21;
		if(var_928_bool != 1) {
			var_924_bool = 0;
		}
	}
	if(var_924_bool != 0) {
		var_930_bool = var_915_int != (int)0;
		if(var_930_bool != 0) {
			var_923_bool = 1;
		}
	}
	if(var_923_bool != 0) {
		var_932_float = 0; var_933_int = 0;
		var_915_int = var_933_int;
		func_1141(var_932_float, var_933_int);
		var_918_int = (int)1 * var_932_float;
		var_934_int = var_918_int;
		if(var_934_int != 0) {
			var_935_int = 0; var_936_string = ""; var_937_string = ""; var_938_int = 0;
			var_914_int = var_935_int;
			var_918_int = var_938_int;
			func_503(var_935_int, "pers_grabitel", "grabitel.xml", var_938_int);
		}
	}
	var_939_bool = 0; var_940_int = 0; var_941_int = 0;
	var_915_int = var_940_int;
	var_916_int = var_941_int;
	func_1110(var_939_bool, var_940_int, var_941_int);
	if(var_939_bool != 0) {
		var_942_int = 0; var_943_string = ""; var_944_string = ""; var_945_int = 0;
		var_914_int = var_942_int;
		func_503(var_942_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_946_int = 0; var_947_string = ""; var_948_string = ""; var_949_int = 0;
		var_914_int = var_946_int;
		func_503(var_946_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_950_int = 0; var_951_string = ""; var_952_string = ""; var_953_int = 0;
		var_914_int = var_950_int;
		func_503(var_950_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_954_int = 0; var_955_string = ""; var_956_string = ""; var_957_int = 0;
		var_914_int = var_954_int;
		func_503(var_954_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_958_int = 0; var_959_string = ""; var_960_string = ""; var_961_int = 0;
		var_914_int = var_958_int;
		func_503(var_958_int, "pers_alkash", "alkash.xml", (int)1);
		var_962_int = 0; var_963_string = ""; var_964_string = ""; var_965_int = 0;
		var_914_int = var_962_int;
		func_503(var_962_int, "pers_woman", "woman.xml", (int)2);
	} else {
		var_978_bool = 0;
		var_978_bool = 0;
		var_980_bool = var_916_int > (int)8;
		if(var_980_bool != 0) {
			var_982_bool = var_916_int < (int)21;
			if(var_982_bool != 0) {
				var_978_bool = 1;
			}
		}
		if(var_978_bool != 0) {
			var_983_int = 0; var_984_string = ""; var_985_string = ""; var_986_int = 0;
			var_914_int = var_983_int;
			func_503(var_983_int, "pers_worker", "worker.xml", (int)2);
			var_987_int = 0; var_988_string = ""; var_989_string = ""; var_990_int = 0;
			var_914_int = var_987_int;
			func_503(var_987_int, "pers_worker", "worker2.xml", (int)2);
			var_991_int = 0; var_992_string = ""; var_993_string = ""; var_994_int = 0;
			var_914_int = var_991_int;
			func_503(var_991_int, "pers_alkash", "alkash.xml", (int)1);
			var_995_int = 0; var_996_string = ""; var_997_string = ""; var_998_int = 0;
			var_914_int = var_995_int;
			func_503(var_995_int, "pers_woman", "woman.xml", (int)2);
			var_999_int = 0; var_1000_string = ""; var_1001_string = ""; var_1002_int = 0;
			var_914_int = var_999_int;
			func_503(var_999_int, "pers_unosha", "unosha.xml", (int)1);
			var_1003_int = 0; var_1004_string = ""; var_1005_string = ""; var_1006_int = 0;
			var_914_int = var_1003_int;
			func_503(var_1003_int, "pers_unosha", "unosha2.xml", (int)1);
			goto Label_2559;
		}
		var_1007_int = 0; var_1008_string = ""; var_1009_string = ""; var_1010_int = 0;
		var_914_int = var_1007_int;
		func_503(var_1007_int, "pers_alkash", "alkash.xml", (int)1);
		var_1011_int = 0; var_1012_string = ""; var_1013_string = ""; var_1014_int = 0;
		var_914_int = var_1011_int;
		func_503(var_1011_int, "pers_worker", "worker.xml", (int)1);
		var_1015_int = 0; var_1016_string = ""; var_1017_string = ""; var_1018_int = 0;
		var_914_int = var_1015_int;
		func_503(var_1015_int, "pers_worker", "worker2.xml", (int)1);
		var_1019_int = 0; var_1020_string = ""; var_1021_string = ""; var_1022_int = 0;
		var_914_int = var_1019_int;
		func_503(var_1019_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1023_int = 0; var_1024_string = ""; var_1025_string = ""; var_1026_int = 0;
		var_914_int = var_1023_int;
		func_503(var_1023_int, "pers_dog", "dog.xml", (int)1);
	}
Label_2559:
	var_966_bool = 0;
	var_966_bool = 0;
	var_967_bool = 0;
	var_967_bool = 0;
	var_969_bool = var_915_int == (int)0;
	if(var_969_bool != 0) {
		var_971_bool = var_916_int > (int)12;
		if(var_971_bool != 0) {
			var_967_bool = 1;
		}
	}
	if(var_967_bool != 0) {
		var_973_bool = var_916_int < (int)22;
		if(var_973_bool != 0) {
			var_966_bool = 1;
		}
	}
	if(var_966_bool != 0) {
		var_974_int = 0; var_975_string = ""; var_976_string = ""; var_977_int = 0;
		var_914_int = var_974_int;
		func_503(var_974_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	return 2;
	
}


func_4439(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object)
{
	var_2012_bool = var_2006_int == (int)0;
	if(var_2012_bool != 0) {
		var_2013_int = 0; var_2014_bool = 0;
		func_796((int)0, (bool)1);
		var_2015_int = 0; var_2016_bool = 0; var_2017_int = 0;
		func_813((int)0, (bool)1, (int)1);
		var_2018_int = 0; var_2019_int = 0; var_2020_object = Obj(); var_2021_object = Obj(); var_2022_object = Obj();
		var_2005_int = var_2019_int;
		var_2007_object = var_2020_object;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		func_641((int)0, var_2019_int, var_2020_object, var_2021_object, var_2022_object);
		var_2108_object = Obj(); var_2109_int = 0;
		var_2010_object = var_2108_object;
		func_305(var_2108_object, (int)1);
		var_2110_int = 0; var_2111_bool = 0; var_2112_int = 0;
		func_870((int)0, (bool)1, (int)4);
		var_2113_int = 0; var_2114_bool = 0; var_2115_int = 0;
		func_932((int)0, (bool)0, (int)4);
	}
	var_2116_int = 0; var_2117_bool = 0;
	func_779((int)0, (bool)0);
	var_2118_int = 0; var_2119_int = 0; var_2120_int = 0;
	var_2005_int = var_2119_int;
	var_2006_int = var_2120_int;
	func_3137((int)0, var_2119_int, var_2120_int);
	return 0;
}


func_343(var_122_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0;
	
Label_346:
	var_128_bool = (int)0 < (int)16;
	if(var_128_bool != 0) {
		var_129_bool = 0; var_130_int = 0;
		var_126_int = var_130_int;
		func_430(var_129_bool, var_130_int);
		if(var_129_bool != 0) {
			(int)0 = (int)0 + (int)1;
		}
		var_126_int = var_126_int + (int)1;
		goto Label_346;
	}
	var_125_int = var_122_int;
	return 4;
}


func_1372(var_2208_bool, var_2209_int)
{
	var_2208_bool = var_2209_int >= (int)8;
	return 0;
}


func_1376(var_1806_int, var_1807_int, var_1808_int)
{
	var_1809_int = 0; var_1810_int = 0;
	var_1812_int = var_1807_int + (int)1;
	var_1814_bool = var_1812_int == (int)12;
	if(var_1814_bool != 0) {
		return 2;
	}
	var_1815_bool = 0;
	var_1815_bool = 0;
	var_1816_bool = 0;
	var_1816_bool = 1;
	var_1818_bool = var_1808_int < (int)7;
	if(var_1818_bool != 1) {
		var_1820_bool = var_1808_int > (int)21;
		if(var_1820_bool != 1) {
			var_1816_bool = 0;
		}
	}
	if(var_1816_bool != 0) {
		var_1822_bool = var_1807_int != (int)0;
		if(var_1822_bool != 0) {
			var_1815_bool = 1;
		}
	}
	if(var_1815_bool != 0) {
		var_1823_float = 0; var_1824_int = 0;
		var_1807_int = var_1824_int;
		func_1141(var_1823_float, var_1824_int);
		var_1823_float = var_1810_int;
		var_1825_int = var_1810_int;
		if(var_1825_int != 0) {
			var_1826_int = 0; var_1827_string = ""; var_1828_string = ""; var_1829_int = 0;
			var_1806_int = var_1826_int;
			var_1810_int = var_1829_int;
			func_503(var_1826_int, "pers_grabitel", "grabitel.xml", var_1829_int);
		}
	}
	var_1830_bool = 0; var_1831_int = 0; var_1832_int = 0;
	var_1807_int = var_1831_int;
	var_1808_int = var_1832_int;
	func_1110(var_1830_bool, var_1831_int, var_1832_int);
	if(var_1830_bool != 0) {
		var_1833_int = 0; var_1834_string = ""; var_1835_string = ""; var_1836_int = 0;
		var_1806_int = var_1833_int;
		func_503(var_1833_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1837_int = 0; var_1838_string = ""; var_1839_string = ""; var_1840_int = 0;
		var_1806_int = var_1837_int;
		func_503(var_1837_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1841_int = 0; var_1842_string = ""; var_1843_string = ""; var_1844_int = 0;
		var_1806_int = var_1841_int;
		func_503(var_1841_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1845_int = 0; var_1846_string = ""; var_1847_string = ""; var_1848_int = 0;
		var_1806_int = var_1845_int;
		func_503(var_1845_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1849_int = 0; var_1850_string = ""; var_1851_string = ""; var_1852_int = 0;
		var_1806_int = var_1849_int;
		func_503(var_1849_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
		var_1853_int = 0; var_1854_string = ""; var_1855_string = ""; var_1856_int = 0;
		var_1806_int = var_1853_int;
		func_503(var_1853_int, "pers_wasted_male", "wasted_male.xml", (int)3);
		var_1857_int = 0; var_1858_string = ""; var_1859_string = ""; var_1860_int = 0;
		var_1806_int = var_1857_int;
		func_503(var_1857_int, "pers_woman", "woman.xml", (int)3);
		var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0;
		var_1806_int = var_1861_int;
		func_503(var_1861_int, "pers_boy", "boy.xml", (int)1);
		var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0;
		var_1806_int = var_1865_int;
		func_503(var_1865_int, "pers_girl", "girl.xml", (int)1);
		var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0;
		var_1806_int = var_1869_int;
		func_503(var_1869_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1892_bool = 0;
		var_1892_bool = 0;
		var_1894_bool = var_1808_int > (int)8;
		if(var_1894_bool != 0) {
			var_1896_bool = var_1808_int < (int)21;
			if(var_1896_bool != 0) {
				var_1892_bool = 1;
			}
		}
		if(var_1892_bool != 0) {
			var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0;
			var_1806_int = var_1897_int;
			func_503(var_1897_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
			var_1901_int = 0; var_1902_string = ""; var_1903_string = ""; var_1904_int = 0;
			var_1806_int = var_1901_int;
			func_503(var_1901_int, "pers_wasted_male", "wasted_male.xml", (int)3);
			var_1905_int = 0; var_1906_string = ""; var_1907_string = ""; var_1908_int = 0;
			var_1806_int = var_1905_int;
			func_503(var_1905_int, "pers_woman", "woman.xml", (int)3);
			var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0;
			var_1806_int = var_1909_int;
			func_503(var_1909_int, "pers_unosha", "unosha.xml", (int)2);
			var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0;
			var_1806_int = var_1913_int;
			func_503(var_1913_int, "pers_unosha", "unosha2.xml", (int)2);
			var_1917_int = 0; var_1918_string = ""; var_1919_string = ""; var_1920_int = 0;
			var_1806_int = var_1917_int;
			func_503(var_1917_int, "pers_boy", "boy.xml", (int)2);
			var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0;
			var_1806_int = var_1921_int;
			func_503(var_1921_int, "pers_girl", "girl.xml", (int)1);
			var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0;
			var_1806_int = var_1925_int;
			func_503(var_1925_int, "pers_girl", "girl2.xml", (int)1);
			goto Label_1586;
		}
		var_1929_int = 0; var_1930_string = ""; var_1931_string = ""; var_1932_int = 0;
		var_1806_int = var_1929_int;
		func_503(var_1929_int, "pers_wasted_girl", "wasted_girl.xml", (int)1);
		var_1933_int = 0; var_1934_string = ""; var_1935_string = ""; var_1936_int = 0;
		var_1806_int = var_1933_int;
		func_503(var_1933_int, "pers_wasted_male", "wasted_male.xml", (int)2);
		var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0;
		var_1806_int = var_1937_int;
		func_503(var_1937_int, "pers_unosha", "unosha.xml", (int)1);
		var_1941_int = 0; var_1942_string = ""; var_1943_string = ""; var_1944_int = 0;
		var_1806_int = var_1941_int;
		func_503(var_1941_int, "pers_unosha", "unosha2.xml", (int)1);
	}
Label_1586:
	var_1873_bool = 0;
	var_1873_bool = 0;
	var_1874_bool = 0;
	var_1874_bool = 0;
	var_1876_bool = var_1807_int == (int)0;
	if(var_1876_bool != 0) {
		var_1878_bool = var_1808_int > (int)12;
		if(var_1878_bool != 0) {
			var_1874_bool = 1;
		}
	}
	if(var_1874_bool != 0) {
		var_1880_bool = var_1808_int < (int)22;
		if(var_1880_bool != 0) {
			var_1873_bool = 1;
		}
	}
	if(var_1873_bool != 0) {
		var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0;
		var_1806_int = var_1881_int;
		func_503(var_1881_int, "pers_wasted_girl", "wasted_girl_killme.xml", (int)1);
	}
	var_1885_bool = 0; var_1886_int = 0; var_1887_int = 0;
	var_1807_int = var_1886_int;
	var_1808_int = var_1887_int;
	func_1345(var_1885_bool, var_1886_int, var_1887_int);
	if(var_1885_bool != 0) {
		var_1888_int = 0; var_1889_string = ""; var_1890_string = ""; var_1891_int = 0;
		var_1806_int = var_1888_int;
		func_503(var_1888_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_13671(var_4538_object, var_4539_object, var_4540_cvector, var_4541_cvector)
{
	var_4542_object = Obj(); var_4543_object = Obj();
	@@var_4539_object:AddStationaryActor(var_4543_object, var_4540_cvector, var_4541_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4543_object = var_4538_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_361(var_135_int)
{
	var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0;
	irand(var_140_int, (int)16);
	var_141_int = 0;
	
Label_366:
	var_145_bool = var_141_int < (int)16;
	if(var_145_bool != 0) {
		var_146_int = var_141_int + var_140_int;
		var_142_int = var_146_int % (int)16;
		var_148_bool = 0;
		var_148_bool = 0;
		var_149_bool = 0; var_150_int = 0;
		var_142_int = var_150_int;
		func_400(var_149_bool, var_150_int);
		if(var_149_bool != 0) {
			var_158_bool = 0; var_159_int = 0; var_160_int = 0;
			var_142_int = var_159_int;
			var_135_int = var_160_int;
			func_13113(var_158_bool, var_159_int, var_160_int);
			if(var_158_bool != 0) {
				var_148_bool = 1;
			}
		}
		if(var_148_bool != 0) {
			var_221_int = 0;
			var_142_int = var_221_int;
			func_442(var_221_int);
			var_223_int = "Diseased Region: " + var_142_int;
			Trace(var_223_int);
			var_141_int = var_141_int + (int)1;
			goto Label_366;
		}
		return 6;
	}
	return 6;
}


func_5483(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object)
{
	var_1348_bool = var_1342_int == (int)0;
	if(var_1348_bool != 0) {
		var_1349_int = 0; var_1350_bool = 0;
		func_796((int)5, (bool)0);
		var_1351_int = 0; var_1352_bool = 0; var_1353_int = 0;
		func_813((int)5, (bool)0, (int)1);
		var_1354_int = 0; var_1355_int = 0; var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj();
		var_1354_int = 5;
		var_1341_int = var_1355_int;
		var_1343_object = var_1356_object;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		func_622(var_1355_int, var_1356_object, var_1357_object, var_1358_object);
		var_1359_object = Obj(); var_1360_int = 0;
		var_1346_object = var_1359_object;
		func_305(var_1359_object, (int)0);
		var_1361_int = 0; var_1362_bool = 0; var_1363_int = 0;
		func_870((int)5, (bool)0, (int)4);
		var_1364_int = 0; var_1365_bool = 0; var_1366_int = 0;
		func_932((int)5, (bool)0, (int)4);
	}
	var_1367_int = 0; var_1368_int = 0;
	var_1342_int = var_1368_int;
	func_983((int)5, var_1368_int);
	var_1369_int = 0; var_1370_int = 0; var_1371_int = 0;
	var_1341_int = var_1370_int;
	var_1342_int = var_1371_int;
	func_1897((int)5, var_1370_int, var_1371_int);
	return 0;
}


func_10610()
{
	var_5566_object = Obj(); var_5567_object = Obj(); var_5568_object = Obj(); var_5569_object = Obj();
	func_11417(Obj());
	var_5570_object = var_5568_object;
	@@var_5568_object:FindMark(var_5569_object, "k6q03LaskaGotoAlbinos");
	var_5572_object = var_5569_object;
	if(var_5572_object != 0) {
		@@var_5569_object:Remove();
	}
	@@var_5568_object:FindMark(var_5569_object, "k6q01IfAnna");
	var_5574_object = var_5569_object;
	if(var_5574_object != 0) {
		@@var_5569_object:Remove();
	}
	@@var_5568_object:FindMark(var_5569_object, "k6q01IfEva");
	var_5576_object = var_5569_object;
	if(var_5576_object != 0) {
		@@var_5569_object:Remove();
	}
	@@var_5568_object:FindMark(var_5569_object, "k6q01IfLara");
	var_5578_object = var_5569_object;
	if(var_5578_object != 0) {
		@@var_5569_object:Remove();
	}
	@@var_5568_object:FindMark(var_5569_object, "k6q01IfOspina");
	var_5580_object = var_5569_object;
	if(var_5580_object != 0) {
		@@var_5569_object:Remove();
	}
	@@var_5568_object:FindMark(var_5569_object, "k6q02GotoKapella");
	var_5582_object = var_5569_object;
	if(var_5582_object != 0) {
		@@var_5569_object:Remove();
	}
	var_5583_bool = 0; var_5584_int = 0;
	func_11392(var_5583_bool, (int)408);
	var_5585_bool = 0; var_5586_int = 0;
	func_11392(var_5585_bool, (int)500);
	var_5587_bool = 0; var_5588_int = 0;
	func_11392(var_5587_bool, (int)748);
	var_5589_bool = 0; var_5590_int = 0;
	func_11392(var_5589_bool, (int)723);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8570(var_4477_int, var_4478_int)
{
	var_4480_object = Obj(); var_4481_object = Obj(); var_4482_string = ""; var_4483_int = 0; var_4484_int = 0; var_4485_int = 0; var_4486_object = Obj(); var_4487_object = Obj(); var_4488_string = ""; var_4489_int = 0; var_4490_int = 0; var_4491_int = 0;
	var_4492_bool = 0;
	var_4492_bool = 0;
	var_4494_bool = var_4478_int == (int)5;
	if(var_4494_bool != 0) {
		var_4496_bool = var_4477_int >= (int)7;
		if(var_4496_bool != 0) {
			var_4492_bool = 1;
		}
	}
	if(var_4492_bool != 0) {
		var_4497_int = 0;
		func_11434(var_4497_int);
		var_4499_bool = var_4497_int != (int)2;
		if(var_4499_bool != 0) {
			func_7781();
		}
	} else {
					var_4774_bool = 0;
					var_4774_bool = 0;
					var_4776_bool = var_4478_int == (int)22;
					if(var_4776_bool != 0) {
						var_4778_bool = var_4477_int >= (int)7;
						if(var_4778_bool != 0) {
							var_4774_bool = 1;
						}
					}
					if(var_4774_bool == 0) goto Label_8610;
					var_4779_int = 0;
					func_11434(var_4779_int);
					var_4781_bool = var_4779_int != (int)2;
					if(var_4781_bool == 0) goto Label_8610;
					func_7844();
	}
Label_8610:
	var_4546_bool = 0;
	var_4546_bool = 0;
	var_4548_bool = var_4478_int == (int)7;
	if(var_4548_bool != 0) {
		var_4550_bool = var_4477_int != (int)1;
		if(var_4550_bool != 0) {
			var_4546_bool = 1;
		}
	}
	if(var_4546_bool != 0) {
		SendWorldWndMessage((int)100);
	}
	var_4553_bool = var_4478_int == (int)0;
	if(var_4553_bool != 0) {
		func_8748();
		func_8823();
		var_4648_bool = var_4477_int == (int)6;
		if(var_4648_bool != 0) {
			GetMainOutdoorScene(var_4486_object);
			AddScriptedActor(var_4487_object, "shed_corpse", "splash_object_wo_pf.bin", var_4486_object, CVector(0.0, 0.0, 0.0));
			var_4487_object = 0;
			var_4486_object = 0;
		}
		var_4653_bool = var_4477_int == (int)9;
		if(var_4653_bool != 0) {
			func_8872();
		}
		var_4668_bool = var_4477_int != (int)1;
		if(var_4668_bool != 0) {
			var_4669_int = 0;
			func_11434(var_4669_int);
			var_4671_bool = var_4669_int == (int)1;
			if(var_4671_bool != 0) {
				var_4674_int = var_4477_int - (int)1;
				var_4675_int = "b" + var_4674_int;
				var_4677_int = var_4675_int + "q01";
				GetVariable(var_4677_int, var_4489_int);
				var_4488_string = "volonteers_burah";
			} else {
				var_4759_int = 0;
				func_11434(var_4759_int);
				var_4761_bool = var_4759_int == (int)0;
				if(var_4761_bool != 0) {
					var_4764_int = var_4477_int - (int)1;
					var_4765_int = "d" + var_4764_int;
					var_4767_int = var_4765_int + "q01";
					GetVariable(var_4767_int, var_4489_int);
					var_4488_string = "volonteers_danko";
					goto Label_8694;
				}
				var_4770_int = var_4477_int - (int)1;
				var_4771_int = "k" + var_4770_int;
				var_4773_int = var_4771_int + "q01";
				GetVariable(var_4773_int, var_4489_int);
				var_4488_string = "volonteers_klara";

			}
		Label_8694:
			Trace(var_4488_string);
			var_4679_bool = var_4489_int == (int)1000;
			if(var_4679_bool != 0) {
				var_4680_bool = 0; var_4681_string = ""; var_4682_string = ""; var_4683_string = "";
				var_4488_string = var_4681_string;
				func_251(var_4680_bool, var_4681_string, "rescue_locked", "");
			}
			var_4687_bool = 0; var_4688_string = ""; var_4689_string = ""; var_4690_string = "";
			var_4488_string = var_4688_string;
			func_251(var_4687_bool, var_4688_string, "update", "");
		}
	}
	var_4691_bool = 0;
	var_4691_bool = 0;
	var_4693_bool = var_4477_int == (int)6;
	if(var_4693_bool != 0) {
		var_4695_bool = var_4478_int == (int)0;
		if(var_4695_bool != 0) {
			var_4691_bool = 1;
		}
	}
	if(var_4691_bool != 0) {
		func_7901();
	}
	var_4698_bool = 0;
	var_4698_bool = 0;
	var_4700_bool = var_4477_int == (int)7;
	if(var_4700_bool != 0) {
		var_4702_bool = var_4478_int == (int)0;
		if(var_4702_bool != 0) {
			var_4698_bool = 1;
		}
	}
	if(var_4698_bool != 0) {
		var_4703_object = GlobalVars[14];
		@@var_4703_object:size(var_4490_int);

	Label_8738:
		var_4704_bool = (int)0 < var_4490_int;
		if(var_4704_bool != 0) {
			var_4705_int = 0;
			var_4491_int = var_4705_int;
			func_7608(var_4705_int);
			var_4491_int = var_4491_int + (int)1;
			goto Label_8738;
		}
	}
	return 12;
	
}


func_9601(var_3169_int, var_3170_int, var_3171_int)
{
	var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj();
	var_3180_object = GlobalVars[8];
	@@var_3180_object:get(var_3176_object, var_3169_int);
	var_3181_object = GlobalVars[9];
	@@var_3181_object:get(var_3177_object, var_3169_int);
	var_3182_object = GlobalVars[10];
	@@var_3182_object:get(var_3178_object, var_3169_int);
	var_3183_object = GlobalVars[13];
	@@var_3183_object:get(var_3179_object, var_3169_int);
	var_3185_bool = var_3169_int == (int)0;
	if(var_3185_bool != 0) {
		var_3186_int = 0; var_3187_int = 0; var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj();
		var_3170_int = var_3186_int;
		var_3171_int = var_3187_int;
		var_3176_object = var_3188_object;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		func_4491(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object);
	} else {
		var_3399_bool = var_3169_int == (int)1;
		if(var_3399_bool != 0) {
			var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj();
			var_3170_int = var_3400_int;
			var_3171_int = var_3401_int;
			var_3176_object = var_3402_object;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			func_4688(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
			goto Label_9821;
		}
		var_3535_bool = var_3169_int == (int)2;
		if(var_3535_bool != 0) {
			var_3536_int = 0; var_3537_int = 0; var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj();
			var_3170_int = var_3536_int;
			var_3171_int = var_3537_int;
			var_3176_object = var_3538_object;
			var_3177_object = var_3539_object;
			var_3178_object = var_3540_object;
			var_3179_object = var_3541_object;
			func_4894(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object);
			goto Label_9821;
		}
		var_3678_bool = var_3169_int == (int)3;
		if(var_3678_bool != 0) {
			var_3679_int = 0; var_3680_int = 0; var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj();
			var_3170_int = var_3679_int;
			var_3171_int = var_3680_int;
			var_3176_object = var_3681_object;
			var_3177_object = var_3682_object;
			var_3178_object = var_3683_object;
			var_3179_object = var_3684_object;
			func_5124(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object);
			goto Label_9821;
		}
		var_3711_bool = var_3169_int == (int)4;
		if(var_3711_bool != 0) {
			var_3712_int = 0; var_3713_int = 0; var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj();
			var_3170_int = var_3712_int;
			var_3171_int = var_3713_int;
			var_3176_object = var_3714_object;
			var_3177_object = var_3715_object;
			var_3178_object = var_3716_object;
			var_3179_object = var_3717_object;
			func_5342(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object);
			goto Label_9821;
		}
		var_3744_bool = var_3169_int == (int)5;
		if(var_3744_bool != 0) {
			var_3745_int = 0; var_3746_int = 0; var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj();
			var_3170_int = var_3745_int;
			var_3171_int = var_3746_int;
			var_3176_object = var_3747_object;
			var_3177_object = var_3748_object;
			var_3178_object = var_3749_object;
			var_3179_object = var_3750_object;
			func_5587(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object);
			goto Label_9821;
		}
		var_3777_bool = var_3169_int == (int)6;
		if(var_3777_bool != 0) {
			var_3778_int = 0; var_3779_int = 0; var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj();
			var_3170_int = var_3778_int;
			var_3171_int = var_3779_int;
			var_3176_object = var_3780_object;
			var_3177_object = var_3781_object;
			var_3178_object = var_3782_object;
			var_3179_object = var_3783_object;
			func_5655();
			goto Label_9821;
		}
		var_3787_bool = var_3169_int == (int)7;
		if(var_3787_bool != 0) {
			var_3788_int = 0; var_3789_int = 0; var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj();
			var_3170_int = var_3788_int;
			var_3171_int = var_3789_int;
			var_3176_object = var_3790_object;
			var_3177_object = var_3791_object;
			var_3178_object = var_3792_object;
			var_3179_object = var_3793_object;
			func_5810(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object);
			goto Label_9821;
		}
		var_3930_bool = var_3169_int == (int)8;
		if(var_3930_bool != 0) {
			var_3931_int = 0; var_3932_int = 0; var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj();
			var_3170_int = var_3931_int;
			var_3171_int = var_3932_int;
			var_3176_object = var_3933_object;
			var_3177_object = var_3934_object;
			var_3178_object = var_3935_object;
			var_3179_object = var_3936_object;
			func_6010(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object);
			goto Label_9821;
		}
		var_3963_bool = var_3169_int == (int)9;
		if(var_3963_bool != 0) {
			var_3964_int = 0; var_3965_int = 0; var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj();
			var_3170_int = var_3964_int;
			var_3171_int = var_3965_int;
			var_3176_object = var_3966_object;
			var_3177_object = var_3967_object;
			var_3178_object = var_3968_object;
			var_3179_object = var_3969_object;
			func_6213(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object);
			goto Label_9821;
		}
		var_3996_bool = var_3169_int == (int)10;
		if(var_3996_bool != 0) {
			var_3997_int = 0; var_3998_int = 0; var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj();
			var_3170_int = var_3997_int;
			var_3171_int = var_3998_int;
			var_3176_object = var_3999_object;
			var_3177_object = var_4000_object;
			var_3178_object = var_4001_object;
			var_3179_object = var_4002_object;
			func_6422(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object);
			goto Label_9821;
		}
		var_4029_bool = var_3169_int == (int)11;
		if(var_4029_bool != 0) {
			var_4030_int = 0; var_4031_int = 0; var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj();
			var_3170_int = var_4030_int;
			var_3171_int = var_4031_int;
			var_3176_object = var_4032_object;
			var_3177_object = var_4033_object;
			var_3178_object = var_4034_object;
			var_3179_object = var_4035_object;
			func_6634(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object);
			goto Label_9821;
		}
		var_4062_bool = var_3169_int == (int)12;
		if(var_4062_bool != 0) {
			var_4063_int = 0; var_4064_int = 0; var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj();
			var_3170_int = var_4063_int;
			var_3171_int = var_4064_int;
			var_3176_object = var_4065_object;
			var_3177_object = var_4066_object;
			var_3178_object = var_4067_object;
			var_3179_object = var_4068_object;
			func_6831(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object);
			goto Label_9821;
		}
		var_4095_bool = var_3169_int == (int)13;
		if(var_4095_bool != 0) {
			var_4096_int = 0; var_4097_int = 0; var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj();
			var_3170_int = var_4096_int;
			var_3171_int = var_4097_int;
			var_3176_object = var_4098_object;
			var_3177_object = var_4099_object;
			var_3178_object = var_4100_object;
			var_3179_object = var_4101_object;
			func_7034(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object);
			goto Label_9821;
		}
		var_4128_bool = var_3169_int == (int)14;
		if(var_4128_bool != 0) {
			var_4129_int = 0; var_4130_int = 0; var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj();
			var_3170_int = var_4129_int;
			var_3171_int = var_4130_int;
			var_3176_object = var_4131_object;
			var_3177_object = var_4132_object;
			var_3178_object = var_4133_object;
			var_3179_object = var_4134_object;
			func_7234(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object);
			goto Label_9821;
		}
		var_4271_bool = var_3169_int == (int)15;
		if(var_4271_bool == 0) goto Label_9821;
		var_4272_int = 0; var_4273_int = 0; var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj();
		var_3170_int = var_4272_int;
		var_3171_int = var_4273_int;
		var_3176_object = var_4274_object;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		func_7416(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object);
	}
Label_9821:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_6530(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object)
{
	var_1677_bool = var_1671_int == (int)0;
	if(var_1677_bool != 0) {
		var_1678_int = 0; var_1679_bool = 0;
		func_796((int)11, (bool)0);
		var_1680_int = 0; var_1681_bool = 0; var_1682_int = 0;
		func_813((int)11, (bool)0, (int)1);
		var_1683_int = 0; var_1684_int = 0; var_1685_object = Obj(); var_1686_object = Obj(); var_1687_object = Obj();
		var_1683_int = 11;
		var_1670_int = var_1684_int;
		var_1672_object = var_1685_object;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		func_622(var_1684_int, var_1685_object, var_1686_object, var_1687_object);
		var_1688_object = Obj(); var_1689_int = 0;
		var_1675_object = var_1688_object;
		func_305(var_1688_object, (int)0);
		var_1690_int = 0; var_1691_bool = 0; var_1692_int = 0;
		func_870((int)11, (bool)0, (int)5);
		var_1693_int = 0; var_1694_bool = 0; var_1695_int = 0;
		func_932((int)11, (bool)0, (int)5);
	}
	var_1696_int = 0; var_1697_int = 0;
	var_1671_int = var_1697_int;
	func_983((int)11, var_1697_int);
	var_1698_int = 0; var_1699_int = 0; var_1700_int = 0;
	var_1670_int = var_1699_int;
	var_1671_int = var_1700_int;
	func_1624((int)11, var_1699_int, var_1700_int);
	return 0;
}


func_4491(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object)
{
	var_3193_bool = var_3187_int == (int)0;
	if(var_3193_bool != 0) {
		var_3194_int = 0; var_3195_bool = 0;
		func_796((int)0, (bool)0);
		var_3196_int = 0; var_3197_bool = 0; var_3198_int = 0;
		func_813((int)0, (bool)0, (int)1);
		var_3199_int = 0; var_3200_int = 0; var_3201_object = Obj(); var_3202_object = Obj(); var_3203_object = Obj();
		var_3186_int = var_3200_int;
		var_3188_object = var_3201_object;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		func_720((int)0, var_3200_int, var_3201_object, var_3202_object, var_3203_object);
		var_3238_object = Obj(); var_3239_int = 0;
		var_3191_object = var_3238_object;
		func_305(var_3238_object, (int)2);
		var_3240_int = 0; var_3241_bool = 0; var_3242_int = 0;
		func_870((int)0, (bool)0, (int)4);
		var_3243_int = 0; var_3244_bool = 0; var_3245_int = 0;
		func_932((int)0, (bool)1, (int)4);
	}
	var_3246_int = 0; var_3247_bool = 0;
	func_779((int)0, (bool)0);
	var_3248_int = 0; var_3249_int = 0; var_3250_int = 0;
	var_3186_int = var_3249_int;
	var_3187_int = var_3250_int;
	func_4035((int)0, var_3249_int, var_3250_int);
	return 0;
}


func_3471(var_4157_int, var_4158_int, var_4159_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0;
	var_4168_bool = 0;
	var_4168_bool = 0;
	var_4170_bool = var_4159_int > (int)8;
	if(var_4170_bool != 0) {
		var_4172_bool = var_4159_int < (int)21;
		if(var_4172_bool != 0) {
			var_4168_bool = 1;
		}
	}
	if(var_4168_bool != 0) {
		var_4173_int = 0; var_4174_string = ""; var_4175_string = ""; var_4176_int = 0;
		var_4157_int = var_4173_int;
		func_503(var_4173_int, "pers_rat", "rat.xml", (int)3);
		var_4177_int = 0; var_4178_string = ""; var_4179_string = ""; var_4180_int = 0;
		var_4157_int = var_4177_int;
		func_503(var_4177_int, "pers_alkash", "alkash.xml", (int)2);
		var_4181_int = 0; var_4182_string = ""; var_4183_string = ""; var_4184_int = 0;
		var_4157_int = var_4181_int;
		func_503(var_4181_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_4186_float = 0; var_4187_int = 0;
		var_4158_int = var_4187_int;
		func_1165(var_4186_float, var_4187_int);
		var_4164_int = (int)2 * var_4186_float;
		var_4188_int = var_4164_int;
		if(var_4188_int != 0) {
			var_4189_int = 0; var_4190_string = ""; var_4191_string = ""; var_4192_int = 0;
			var_4157_int = var_4189_int;
			var_4164_int = var_4192_int;
			func_503(var_4189_int, "pers_grabitel", "grabitel.xml", var_4192_int);
		}
		var_4194_int = var_4158_int + (int)1;
		var_4196_bool = var_4194_int >= (int)2;
		if(var_4196_bool != 0) {
			var_4197_int = 0; var_4198_string = ""; var_4199_string = ""; var_4200_int = 0;
			var_4157_int = var_4197_int;
			func_503(var_4197_int, "pers_patrool", "patrol.xml", (int)2);
			var_4201_bool = 0; var_4202_int = 0;
			var_4158_int = var_4202_int;
			func_1372(var_4201_bool, var_4202_int);
			if(var_4201_bool != 0) {
				var_4203_int = 0; var_4204_string = ""; var_4205_string = ""; var_4206_int = 0;
				var_4157_int = var_4203_int;
				func_503(var_4203_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4208_float = 0; var_4209_int = 0;
		var_4158_int = var_4209_int;
		func_1255(var_4208_float, var_4209_int);
		var_4165_int = (int)1 * var_4208_float;
		var_4210_int = var_4165_int;
		if(var_4210_int != 0) {
			var_4211_int = 0; var_4212_string = ""; var_4213_string = ""; var_4214_int = 0;
			var_4157_int = var_4211_int;
			var_4165_int = var_4214_int;
			func_503(var_4211_int, "pers_bomber", "bomber.xml", var_4214_int);
		}
	} else {
		var_4228_int = 0; var_4229_string = ""; var_4230_string = ""; var_4231_int = 0;
		var_4157_int = var_4228_int;
		func_503(var_4228_int, "pers_rat", "rat.xml", (int)5);
		var_4232_int = 0; var_4233_string = ""; var_4234_string = ""; var_4235_int = 0;
		var_4157_int = var_4232_int;
		func_503(var_4232_int, "pers_alkash", "alkash.xml", (int)1);
		var_4237_int = var_4158_int + (int)1;
		var_4239_bool = var_4237_int >= (int)2;
		if(var_4239_bool != 0) {
			var_4240_int = 0; var_4241_string = ""; var_4242_string = ""; var_4243_int = 0;
			var_4157_int = var_4240_int;
			func_503(var_4240_int, "pers_patrool", "patrol.xml", (int)1);
			var_4244_bool = 0; var_4245_int = 0;
			var_4158_int = var_4245_int;
			func_1372(var_4244_bool, var_4245_int);
			if(var_4244_bool != 0) {
				var_4246_int = 0; var_4247_string = ""; var_4248_string = ""; var_4249_int = 0;
				var_4157_int = var_4246_int;
				func_503(var_4246_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4250_int = 0; var_4251_string = ""; var_4252_string = ""; var_4253_int = 0;
		var_4157_int = var_4250_int;
		func_503(var_4250_int, "pers_rat", "rat.xml", (int)2);
		var_4255_float = 0; var_4256_int = 0;
		var_4158_int = var_4256_int;
		func_1165(var_4255_float, var_4256_int);
		var_4166_int = (int)3 * var_4255_float;
		var_4257_int = var_4166_int;
		if(var_4257_int != 0) {
			var_4258_int = 0; var_4259_string = ""; var_4260_string = ""; var_4261_int = 0;
			var_4157_int = var_4258_int;
			var_4166_int = var_4261_int;
			func_503(var_4258_int, "pers_grabitel", "grabitel.xml", var_4261_int);
		}
		var_4263_float = 0; var_4264_int = 0;
		var_4158_int = var_4264_int;
		func_1255(var_4263_float, var_4264_int);
		var_4167_int = (int)1 * var_4263_float;
		var_4265_int = var_4167_int;
		if(var_4265_int == 0) goto Label_3633;
		var_4266_int = 0; var_4267_string = ""; var_4268_string = ""; var_4269_int = 0;
		var_4157_int = var_4266_int;
		var_4167_int = var_4269_int;
		func_503(var_4266_int, "pers_bomber", "bomber.xml", var_4269_int);
	}
Label_3633:
	var_4215_bool = 0; var_4216_int = 0; var_4217_int = 0;
	var_4158_int = var_4216_int;
	var_4159_int = var_4217_int;
	func_1345(var_4215_bool, var_4216_int, var_4217_int);
	if(var_4215_bool != 0) {
		var_4218_int = 0; var_4219_string = ""; var_4220_string = ""; var_4221_int = 0;
		var_4157_int = var_4218_int;
		func_503(var_4218_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_4222_bool = 0; var_4223_int = 0;
	var_4158_int = var_4223_int;
	func_1372(var_4222_bool, var_4223_int);
	if(var_4222_bool != 0) {
		var_4224_int = 0; var_4225_string = ""; var_4226_string = ""; var_4227_int = 0;
		var_4157_int = var_4224_int;
		func_503(var_4224_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_400(var_492_bool, var_493_int)
{
	var_494_int = 0; var_495_int = 0;
	var_496_string = ""; var_497_int = 0;
	var_493_int = var_497_int;
	func_299(var_496_string, var_497_int);
	GetVariable(var_496_string, var_495_int);
	var_499_int = var_495_int & (int)3;
	var_492_bool = var_499_int == (int)0;
	return 2;
}


func_412(var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0;
	var_100_string = ""; var_101_int = 0;
	var_95_int = var_101_int;
	func_299(var_100_string, var_101_int);
	GetVariable(var_100_string, var_98_int);
	var_103_int = var_98_int & (int)252;
	var_99_int = var_103_int | (int)0;
	var_105_string = ""; var_106_int = 0;
	var_95_int = var_106_int;
	func_299(var_105_string, var_106_int);
	SetVariable(var_105_string, var_99_int);
	return 4;
}


func_5535(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object)
{
	var_2626_bool = var_2620_int == (int)0;
	if(var_2626_bool != 0) {
		var_2627_int = 0; var_2628_bool = 0;
		func_796((int)5, (bool)1);
		var_2629_int = 0; var_2630_bool = 0; var_2631_int = 0;
		func_813((int)5, (bool)1, (int)1);
		var_2632_int = 0; var_2633_int = 0; var_2634_object = Obj(); var_2635_object = Obj(); var_2636_object = Obj();
		var_2619_int = var_2633_int;
		var_2621_object = var_2634_object;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		func_641((int)5, var_2633_int, var_2634_object, var_2635_object, var_2636_object);
		var_2637_object = Obj(); var_2638_int = 0;
		var_2624_object = var_2637_object;
		func_305(var_2637_object, (int)1);
		var_2639_int = 0; var_2640_bool = 0; var_2641_int = 0;
		func_870((int)5, (bool)1, (int)4);
		var_2642_int = 0; var_2643_bool = 0; var_2644_int = 0;
		func_932((int)5, (bool)0, (int)4);
	}
	var_2645_int = 0; var_2646_bool = 0;
	func_779((int)5, (bool)0);
	var_2647_int = 0; var_2648_int = 0; var_2649_int = 0;
	var_2619_int = var_2648_int;
	var_2620_int = var_2649_int;
	func_2944((int)5, var_2648_int, var_2649_int);
	return 0;
}


func_430(var_1979_bool, var_1980_int)
{
	var_1981_int = 0; var_1982_int = 0;
	var_1983_string = ""; var_1984_int = 0;
	var_1980_int = var_1984_int;
	func_299(var_1983_string, var_1984_int);
	GetVariable(var_1983_string, var_1982_int);
	var_1986_int = var_1982_int & (int)3;
	var_1979_bool = var_1986_int == (int)1;
	return 2;
}


func_10676()
{
	var_5907_object = Obj(); var_5908_object = Obj(); var_5909_object = Obj(); var_5910_object = Obj();
	func_11417(Obj());
	var_5911_object = var_5909_object;
	@@var_5909_object:FindMark(var_5910_object, "k7q01BirdmaskGotoCorpse");
	var_5913_object = var_5910_object;
	if(var_5913_object != 0) {
		@@var_5910_object:Remove();
	}
	@@var_5909_object:FindMark(var_5910_object, "k7q02DankoGotoGatherer");
	var_5915_object = var_5910_object;
	if(var_5915_object != 0) {
		@@var_5910_object:Remove();
	}
	@@var_5909_object:FindMark(var_5910_object, "k7q03BurahGotoFather");
	var_5917_object = var_5910_object;
	if(var_5917_object != 0) {
		@@var_5910_object:Remove();
	}
	var_5918_bool = 0; var_5919_int = 0;
	func_11392(var_5918_bool, (int)416);
	var_5920_bool = 0; var_5921_int = 0;
	func_11392(var_5920_bool, (int)430);
	var_5922_bool = 0; var_5923_int = 0;
	func_11392(var_5922_bool, (int)434);
	var_5924_bool = 0; var_5925_int = 0;
	func_11392(var_5924_bool, (int)723);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6582(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object)
{
	var_2907_bool = var_2901_int == (int)0;
	if(var_2907_bool != 0) {
		var_2908_int = 0; var_2909_bool = 0;
		func_796((int)11, (bool)0);
		var_2910_int = 0; var_2911_bool = 0; var_2912_int = 0;
		func_813((int)11, (bool)1, (int)1);
		var_2913_int = 0; var_2914_int = 0; var_2915_object = Obj(); var_2916_object = Obj(); var_2917_object = Obj();
		var_2900_int = var_2914_int;
		var_2902_object = var_2915_object;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		func_641((int)11, var_2914_int, var_2915_object, var_2916_object, var_2917_object);
		var_2918_object = Obj(); var_2919_int = 0;
		var_2905_object = var_2918_object;
		func_305(var_2918_object, (int)1);
		var_2920_int = 0; var_2921_bool = 0; var_2922_int = 0;
		func_870((int)11, (bool)1, (int)5);
		var_2923_int = 0; var_2924_bool = 0; var_2925_int = 0;
		func_932((int)11, (bool)0, (int)5);
	}
	var_2926_int = 0; var_2927_bool = 0;
	func_779((int)11, (bool)0);
	var_2928_int = 0; var_2929_int = 0; var_2930_int = 0;
	var_2900_int = var_2929_int;
	var_2901_int = var_2930_int;
	func_2764((int)11, var_2929_int, var_2930_int);
	return 0;
}


func_7608(var_10_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj();
	var_28_object = GlobalVars[14];
	@@var_28_object:size(var_20_int);
	var_29_bool = 0;
	var_29_bool = 1;
	var_30_bool = var_10_int >= var_20_int;
	if(var_30_bool != 1) {
		var_32_bool = var_10_int == (int)-1;
		if(var_32_bool != 1) {
			var_29_bool = 0;
		}
	}
	if(var_29_bool != 0) {
		var_34_int = "Wrong bonfire index " + var_10_int;
		Trace(var_34_int);
		return 16;
	}
	var_35_object = GlobalVars[14];
	@@var_35_object:get(var_21_object, var_10_int);
	var_38_int = var_10_int + (int)1;
	var_39_int = "bonfire_light" + var_38_int;
	FindActor(var_22_object, var_39_int);
	var_40_bool = var_22_object == 0; //@nz
	if(var_40_bool != 0) {
		var_43_int = var_10_int + (int)1;
		var_44_int = "Bofire  light " + var_43_int;
		var_46_int = var_44_int + " not found";
		Trace(var_46_int);
	} else {
		@@var_22_object:Switch((bool)1);
	}
	GetMainOutdoorScene(var_23_object);
	var_49_int = var_10_int + (int)1;
	var_50_int = "pt_bonfire" + var_49_int;
	@@var_23_object:GetLocator(var_50_int, var_26_bool, var_24_cvector, var_25_cvector);
	var_51_bool = var_26_bool == 0; //@nz
	if(var_51_bool != 0) {
		Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	var_53_bool = var_21_object == 0; //@nz
	if(var_53_bool != 0) {
		AddActorByType(var_27_object, "scripted", var_23_object, var_24_cvector, var_25_cvector, "bonfire_big.xml");
		var_56_object = GlobalVars[14];
		@@var_56_object:set(var_10_int, var_27_object);
		var_27_object = 0;
	}
	var_59_int = var_10_int + (int)1;
	var_60_int = "Setting bonfire " + var_59_int;
	var_62_int = var_60_int + "... ok";
	Trace(var_62_int);
	return 16;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_442(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0;
	var_29_string = ""; var_30_int = 0;
	var_24_int = var_30_int;
	func_299(var_29_string, var_30_int);
	GetVariable(var_29_string, var_27_int);
	var_35_int = var_27_int & (int)252;
	var_28_int = var_35_int | (int)1;
	var_37_string = ""; var_38_int = 0;
	var_24_int = var_38_int;
	func_299(var_37_string, var_38_int);
	SetVariable(var_37_string, var_28_int);
	return 4;
}


func_4543(var_63_object)
{
	@@var_63_object:add("dt_house3_05_i2");
	@@var_63_object:add("dt_house3_05");
	@@var_63_object:add("dt_house3_06_i2");
	@@var_63_object:add("dt_house_1_10");
	@@var_63_object:add("house5_10");
	@@var_63_object:add("house5_07");
	@@var_63_object:add("dt_house_1_03");
	@@var_63_object:add("dt_house1_union2_04l");
	@@var_63_object:add("dt_house1_union2_04r");
	@@var_63_object:add("house5_22");
	@@var_63_object:add("house5_08");
	@@var_63_object:add("dt_house1_union2_02l");
	@@var_63_object:add("dt_house1_union2_02r");
	return 0;
}


func_460(var_86_bool, var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	var_90_string = ""; var_91_int = 0;
	var_87_int = var_91_int;
	func_299(var_90_string, var_91_int);
	GetVariable(var_90_string, var_89_int);
	var_93_int = var_89_int & (int)3;
	var_86_bool = var_93_int == (int)2;
	return 2;
}


func_5587(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object)
{
	var_3752_bool = var_3746_int == (int)0;
	if(var_3752_bool != 0) {
		var_3753_int = 0; var_3754_bool = 0;
		func_796((int)5, (bool)0);
		var_3755_int = 0; var_3756_bool = 0; var_3757_int = 0;
		func_813((int)5, (bool)0, (int)1);
		var_3758_int = 0; var_3759_int = 0; var_3760_object = Obj(); var_3761_object = Obj(); var_3762_object = Obj();
		var_3745_int = var_3759_int;
		var_3747_object = var_3760_object;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		func_720((int)5, var_3759_int, var_3760_object, var_3761_object, var_3762_object);
		var_3763_object = Obj(); var_3764_int = 0;
		var_3750_object = var_3763_object;
		func_305(var_3763_object, (int)2);
		var_3765_int = 0; var_3766_bool = 0; var_3767_int = 0;
		func_870((int)5, (bool)0, (int)4);
		var_3768_int = 0; var_3769_bool = 0; var_3770_int = 0;
		func_932((int)5, (bool)1, (int)4);
	}
	var_3771_int = 0; var_3772_bool = 0;
	func_779((int)5, (bool)0);
	var_3773_int = 0; var_3774_int = 0; var_3775_int = 0;
	var_3745_int = var_3774_int;
	var_3746_int = var_3775_int;
	func_3847((int)5, var_3774_int, var_3775_int);
	return 0;
}


func_472(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0;
	var_81_string = ""; var_82_int = 0;
	var_76_int = var_82_int;
	func_299(var_81_string, var_82_int);
	GetVariable(var_81_string, var_79_int);
	var_84_int = var_79_int & (int)252;
	var_80_int = var_84_int | (int)2;
	var_86_string = ""; var_87_int = 0;
	var_76_int = var_87_int;
	func_299(var_86_string, var_87_int);
	SetVariable(var_86_string, var_80_int);
	return 4;
}


func_10721()
{
	var_5685_bool = 0; var_5686_int = 0;
	func_11392(var_5685_bool, (int)438);
	var_5687_bool = 0; var_5688_int = 0;
	func_11392(var_5687_bool, (int)723);
	var_5689_bool = 0; var_5690_int = 0;
	func_11392(var_5689_bool, (int)751);
	var_5691_bool = 0; var_5692_int = 0;
	func_11392(var_5691_bool, (int)757);
	return 0;
}


func_4584(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object)
{
	var_893_bool = var_887_int == (int)0;
	if(var_893_bool != 0) {
		var_894_int = 0; var_895_bool = 0;
		func_796((int)1, (bool)0);
		var_896_int = 0; var_897_bool = 0; var_898_int = 0;
		func_813((int)1, (bool)0, (int)1);
		var_899_int = 0; var_900_int = 0; var_901_object = Obj(); var_902_object = Obj(); var_903_object = Obj();
		var_899_int = 1;
		var_886_int = var_900_int;
		var_888_object = var_901_object;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		func_622(var_900_int, var_901_object, var_902_object, var_903_object);
		var_904_object = Obj(); var_905_int = 0;
		var_891_object = var_904_object;
		func_305(var_904_object, (int)0);
		var_906_int = 0; var_907_bool = 0; var_908_int = 0;
		func_870((int)1, (bool)0, (int)8);
		var_909_int = 0; var_910_bool = 0; var_911_int = 0;
		func_932((int)1, (bool)0, (int)8);
	}
	var_912_int = 0; var_913_int = 0;
	var_887_int = var_913_int;
	func_1050((int)1, var_913_int);
	var_914_int = 0; var_915_int = 0; var_916_int = 0;
	var_886_int = var_915_int;
	var_887_int = var_916_int;
	func_2383((int)1, var_915_int, var_916_int);
	return 0;
}


func_490(var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj();
	GetMainOutdoorScene(var_489_object);
	var_490_bool = var_489_object == 0; //@ne
	if(var_490_bool != 0) {
		Trace("City manager: main outdoor scene not found");
		return 2;
	}
	@@var_489_object:RemoveAllRegionActors(var_487_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6634(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object)
{
	var_4037_bool = var_4031_int == (int)0;
	if(var_4037_bool != 0) {
		var_4038_int = 0; var_4039_bool = 0;
		func_796((int)11, (bool)1);
		var_4040_int = 0; var_4041_bool = 0; var_4042_int = 0;
		func_813((int)11, (bool)0, (int)1);
		var_4043_int = 0; var_4044_int = 0; var_4045_object = Obj(); var_4046_object = Obj(); var_4047_object = Obj();
		var_4030_int = var_4044_int;
		var_4032_object = var_4045_object;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		func_720((int)11, var_4044_int, var_4045_object, var_4046_object, var_4047_object);
		var_4048_object = Obj(); var_4049_int = 0;
		var_4035_object = var_4048_object;
		func_305(var_4048_object, (int)2);
		var_4050_int = 0; var_4051_bool = 0; var_4052_int = 0;
		func_870((int)11, (bool)0, (int)5);
		var_4053_int = 0; var_4054_bool = 0; var_4055_int = 0;
		func_932((int)11, (bool)1, (int)5);
	}
	var_4056_int = 0; var_4057_bool = 0;
	func_779((int)11, (bool)0);
	var_4058_int = 0; var_4059_int = 0; var_4060_int = 0;
	var_4030_int = var_4059_int;
	var_4031_int = var_4060_int;
	func_3659((int)11, var_4059_int, var_4060_int);
	return 0;
}


func_10739()
{
	var_5704_bool = 0; var_5705_int = 0;
	func_11392(var_5704_bool, (int)517);
	var_5706_bool = 0; var_5707_int = 0;
	func_11392(var_5706_bool, (int)723);
	var_5708_bool = 0; var_5709_int = 0;
	func_11392(var_5708_bool, (int)751);
	var_5710_bool = 0; var_5711_int = 0;
	func_11392(var_5710_bool, (int)757);
	return 0;
}


func_503(var_783_int, var_784_string, var_785_string, var_786_int)
{
	var_787_object = Obj(); var_788_object = Obj();
	GetMainOutdoorScene(var_788_object);
	var_789_bool = var_788_object == 0; //@ne
	if(var_789_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_788_object:SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_516(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int)
{
	var_2221_object = Obj(); var_2222_object = Obj();
	GetMainOutdoorScene(var_2222_object);
	var_2223_bool = var_2222_object == 0; //@ne
	if(var_2223_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2222_object:SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7685(var_379_int)
{
	var_380_int = 0; var_381_object = Obj(); var_382_object = Obj(); var_383_int = 0; var_384_object = Obj(); var_385_object = Obj();
	var_386_object = GlobalVars[14];
	@@var_386_object:size(var_383_int);
	var_387_bool = 0;
	var_387_bool = 1;
	var_388_bool = var_379_int >= var_383_int;
	if(var_388_bool != 1) {
		var_390_bool = var_379_int == (int)-1;
		if(var_390_bool != 1) {
			var_387_bool = 0;
		}
	}
	if(var_387_bool != 0) {
		var_392_int = "Wrong bonfire index " + var_379_int;
		Trace(var_392_int);
		return 6;
	}
	var_393_object = GlobalVars[14];
	@@var_393_object:get(var_384_object, var_379_int);
	var_396_int = var_379_int + (int)1;
	var_397_int = "bonfire_light" + var_396_int;
	FindActor(var_385_object, var_397_int);
	var_398_bool = var_385_object == 0; //@nz
	if(var_398_bool != 0) {
		var_401_int = var_379_int + (int)1;
		var_402_int = "Bofire  light " + var_401_int;
		var_404_int = var_402_int + " not found";
		Trace(var_404_int);
	} else {
		@@var_385_object:Switch((bool)0);
	}
	var_405_object = var_384_object;
	if(var_405_object != 0) {
		RemoveActor(var_384_object);
	}
	var_406_object = GlobalVars[14];
	@@var_406_object:set(var_379_int, Obj());
	var_409_int = var_379_int + (int)1;
	var_410_int = "Cleanup bonfire " + var_409_int;
	var_412_int = var_410_int + "... ok";
	Trace(var_412_int);
	return 6;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10757()
{
	var_5495_object = Obj(); var_5496_object = Obj(); var_5497_object = Obj(); var_5498_object = Obj();
	func_11417(Obj());
	var_5499_object = var_5497_object;
	@@var_5497_object:FindMark(var_5498_object, "k10q01NotkinGotoRubin");
	var_5501_object = var_5498_object;
	if(var_5501_object != 0) {
		@@var_5498_object:Remove();
	}
	@@var_5497_object:FindMark(var_5498_object, "k10q01WastedGotoBurah");
	var_5503_object = var_5498_object;
	if(var_5503_object != 0) {
		@@var_5498_object:Remove();
	}
	var_5504_bool = 0; var_5505_int = 0;
	func_11392(var_5504_bool, (int)447);
	var_5506_bool = 0; var_5507_int = 0;
	func_11392(var_5506_bool, (int)723);
	var_5508_bool = 0; var_5509_int = 0;
	func_11392(var_5508_bool, (int)751);
	var_5510_bool = 0; var_5511_int = 0;
	func_11392(var_5510_bool, (int)757);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5639()
{
	return 0;
}


func_5641(var_1375_int)
{
	var_1380_int = 0; var_1381_int = 0;
	var_1375_int = var_1381_int;
	func_1050((int)6, var_1381_int);
	return 0;
}


func_5648()
{
	var_2658_int = 0; var_2659_bool = 0;
	func_779((int)6, (bool)0);
	return 0;
}


func_529(var_2142_int, var_2143_string, var_2144_string, var_2145_int)
{
	var_2146_object = Obj(); var_2147_object = Obj();
	GetMainOutdoorScene(var_2147_object);
	var_2148_bool = var_2147_object == 0; //@ne
	if(var_2148_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2147_object:SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5655()
{
	var_3784_int = 0; var_3785_bool = 0;
	func_779((int)6, (bool)0);
	return 0;
}


func_2584(var_3027_int, var_3028_int, var_3029_int)
{
	var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; var_3033_int = 0;
	var_3034_bool = 0;
	var_3034_bool = 0;
	var_3036_bool = var_3029_int > (int)8;
	if(var_3036_bool != 0) {
		var_3038_bool = var_3029_int < (int)21;
		if(var_3038_bool != 0) {
			var_3034_bool = 1;
		}
	}
	if(var_3034_bool != 0) {
		var_3039_int = 0; var_3040_string = ""; var_3041_string = ""; var_3042_int = 0;
		var_3027_int = var_3039_int;
		func_503(var_3039_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3043_int = 0; var_3044_string = ""; var_3045_string = ""; var_3046_int = 0;
		var_3027_int = var_3043_int;
		func_503(var_3043_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_3047_int = 0; var_3048_string = ""; var_3049_string = ""; var_3050_int = 0;
		var_3027_int = var_3047_int;
		func_503(var_3047_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_3051_int = 0; var_3052_string = ""; var_3053_string = ""; var_3054_int = 0;
		var_3027_int = var_3051_int;
		func_529(var_3051_int, "fog", "fog.xml", (int)8);
		var_3056_bool = var_3028_int >= (int)5;
		if(var_3056_bool != 0) {
			var_3057_int = 0; var_3058_string = ""; var_3059_string = ""; var_3060_int = 0;
			var_3027_int = var_3057_int;
			func_529(var_3057_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_3062_float = 0; var_3063_int = 0;
		var_3028_int = var_3063_int;
		func_1255(var_3062_float, var_3063_int);
		var_3032_int = (int)1 * var_3062_float;
		var_3064_int = var_3032_int;
		if(var_3064_int != 0) {
			var_3065_int = 0; var_3066_string = ""; var_3067_string = ""; var_3068_int = 0;
			var_3027_int = var_3065_int;
			var_3032_int = var_3068_int;
			func_503(var_3065_int, "pers_bomber", "bomber.xml", var_3068_int);
		}
	} else {
		var_3106_int = 0; var_3107_string = ""; var_3108_string = ""; var_3109_int = 0;
		var_3027_int = var_3106_int;
		func_503(var_3106_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0;
		var_3027_int = var_3110_int;
		func_503(var_3110_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0;
		var_3027_int = var_3114_int;
		func_503(var_3114_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0;
		var_3027_int = var_3118_int;
		func_529(var_3118_int, "fog", "fog.xml", (int)6);
		var_3123_bool = var_3028_int >= (int)5;
		if(var_3123_bool != 0) {
			var_3124_int = 0; var_3125_string = ""; var_3126_string = ""; var_3127_int = 0;
			var_3027_int = var_3124_int;
			func_529(var_3124_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_3129_float = 0; var_3130_int = 0;
		var_3028_int = var_3130_int;
		func_1255(var_3129_float, var_3130_int);
		var_3033_int = (int)1 * var_3129_float;
		var_3131_int = var_3033_int;
		if(var_3131_int == 0) goto Label_2702;
		var_3132_int = 0; var_3133_string = ""; var_3134_string = ""; var_3135_int = 0;
		var_3027_int = var_3132_int;
		var_3033_int = var_3135_int;
		func_503(var_3132_int, "pers_bomber", "bomber.xml", var_3135_int);
	}
Label_2702:
	var_3069_int = 0; var_3070_string = ""; var_3071_string = ""; var_3072_int = 0; var_3073_int = 0; var_3074_int = 0;
	var_3027_int = var_3069_int;
	func_516(var_3069_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; var_3079_int = 0; var_3080_int = 0;
	var_3027_int = var_3075_int;
	func_516(var_3075_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3081_int = 0; var_3082_string = ""; var_3083_string = ""; var_3084_int = 0; var_3085_int = 0; var_3086_int = 0;
	var_3027_int = var_3081_int;
	func_516(var_3081_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; var_3091_int = 0; var_3092_int = 0;
	var_3027_int = var_3087_int;
	func_516(var_3087_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3093_bool = 0; var_3094_int = 0; var_3095_int = 0;
	var_3028_int = var_3094_int;
	var_3029_int = var_3095_int;
	func_1345(var_3093_bool, var_3094_int, var_3095_int);
	if(var_3093_bool != 0) {
		var_3096_int = 0; var_3097_string = ""; var_3098_string = ""; var_3099_int = 0;
		var_3027_int = var_3096_int;
		func_503(var_3096_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3100_bool = 0; var_3101_int = 0;
	var_3028_int = var_3101_int;
	func_1372(var_3100_bool, var_3101_int);
	if(var_3100_bool != 0) {
		var_3102_int = 0; var_3103_string = ""; var_3104_string = ""; var_3105_int = 0;
		var_3027_int = var_3102_int;
		func_503(var_3102_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 4;
	
}


func_4636(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object)
{
	var_2282_bool = var_2276_int == (int)0;
	if(var_2282_bool != 0) {
		var_2283_int = 0; var_2284_bool = 0;
		func_796((int)1, (bool)1);
		var_2285_int = 0; var_2286_bool = 0; var_2287_int = 0;
		func_813((int)1, (bool)1, (int)1);
		var_2288_int = 0; var_2289_int = 0; var_2290_object = Obj(); var_2291_object = Obj(); var_2292_object = Obj();
		var_2275_int = var_2289_int;
		var_2277_object = var_2290_object;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		func_641((int)1, var_2289_int, var_2290_object, var_2291_object, var_2292_object);
		var_2293_object = Obj(); var_2294_int = 0;
		var_2280_object = var_2293_object;
		func_305(var_2293_object, (int)1);
		var_2295_int = 0; var_2296_bool = 0; var_2297_int = 0;
		func_870((int)1, (bool)1, (int)8);
		var_2298_int = 0; var_2299_bool = 0; var_2300_int = 0;
		func_932((int)1, (bool)0, (int)8);
	}
	var_2301_int = 0; var_2302_bool = 0;
	func_779((int)1, (bool)0);
	var_2303_int = 0; var_2304_int = 0; var_2305_int = 0;
	var_2275_int = var_2304_int;
	var_2276_int = var_2305_int;
	func_3304((int)1, var_2304_int, var_2305_int);
	return 0;
}


func_542(var_571_int, var_572_bool)
{
	var_573_object = Obj(); var_574_object = Obj(); var_575_bool = 0; var_576_object = Obj(); var_577_object = Obj(); var_578_object = Obj(); var_579_bool = 0; var_580_object = Obj();
	GetMainOutdoorScene(var_577_object);
	var_582_int = (int)101 + var_571_int;
	@@var_577_object:GetGroupActors(var_578_object, var_582_int);
	var_583_object = var_578_object;
	if(var_583_object != 0) {

	Label_551:
		@@var_578_object:Next(var_579_bool, var_580_object);
		var_584_bool = var_579_bool;
		if(var_584_bool != 0) {
			var_585_bool = 0; var_586_object = Obj(); var_587_string = "";
			var_580_object = var_586_object;
			func_81(var_585_bool, var_586_object, "locked");
			if(var_585_bool != 0) {
				@@var_580_object:SetProperty("locked", var_572_bool);
			} else {
				var_596_int = "Actor \"" + var_580_object;
				var_598_int = var_596_int + "\" can't be locked";
				Trace(var_598_int);
		}
			var_580_object = 0;
	}
		return 8;
	}
	goto Label_551;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_5662(var_177_object)
{
	@@var_177_object:add("House6_02");
	@@var_177_object:add("House6_01");
	@@var_177_object:add("house_2_01");
	@@var_177_object:add("house7_03");
	@@var_177_object:add("house7_02");
	@@var_177_object:add("house3_01_i2");
	@@var_177_object:add("house3_01");
	@@var_177_object:add("house_2_03");
	@@var_177_object:add("house_2_02");
	@@var_177_object:add("house4_01_i2");
	@@var_177_object:add("house4_01");
	@@var_177_object:add("House6_05");
	@@var_177_object:add("House6_04");
	@@var_177_object:add("House6_03");
	return 0;
}


func_6686(var_265_object)
{
	@@var_265_object:add("r6_house2_03");
	@@var_265_object:add("r6_house4_01_i2");
	@@var_265_object:add("r6_house4_02_i2");
	@@var_265_object:add("r6_house4_02");
	@@var_265_object:add("r6_house3_02_i2");
	@@var_265_object:add("r6_house3_02");
	@@var_265_object:add("r6_house3_01_i2");
	@@var_265_object:add("r6_house3_01");
	@@var_265_object:add("r6_house2_01");
	@@var_265_object:add("r6_house7_01");
	@@var_265_object:add("r6_house7_02");
	@@var_265_object:add("r6_House6_01");
	@@var_265_object:add("r6_house2_02");
	return 0;
}


func_12830(var_5108_object, var_5109_bool)
{
	@@var_5108_object:add((int)7);
	@@var_5108_object:add((int)23);
	@@var_5108_object:add((int)21);
	@@var_5108_object:add((int)9);
	@@var_5108_object:add((int)3);
	@@var_5108_object:add((int)1);
	@@var_5108_object:add((int)11);
	@@var_5108_object:add((int)13);
	var_5120_bool = var_5109_bool == (bool)0;
	if(var_5120_bool != 0) {
		@@var_5108_object:add((int)25);
	}
	return 0;
}


func_10795()
{
	var_5666_bool = 0; var_5667_int = 0;
	func_11392(var_5666_bool, (int)480);
	var_5668_bool = 0; var_5669_int = 0;
	func_11392(var_5668_bool, (int)723);
	var_5670_bool = 0; var_5671_int = 0;
	func_11392(var_5670_bool, (int)751);
	var_5672_bool = 0; var_5673_int = 0;
	func_11392(var_5672_bool, (int)757);
	return 0;
}


func_8748()
{
	var_4477_int = 0; var_4478_object = Obj(); var_4479_int = 0; var_4480_object = Obj(); var_4481_bool = 0; var_4482_cvector = CVector(0,0,0); var_4483_cvector = CVector(0,0,0); var_4484_string = ""; var_4485_int = 0; var_4486_object = Obj(); var_4487_int = 0; var_4488_object = Obj(); var_4489_bool = 0; var_4490_cvector = CVector(0,0,0); var_4491_cvector = CVector(0,0,0); var_4492_string = "";
	var_4493_int = 0;
	func_11434(var_4493_int);
	var_4495_bool = var_4493_int == (int)0;
	if(var_4495_bool != 0) {
		return 16;
	}
	var_4496_object = GlobalVars[6];
	@@var_4496_object:size(var_4485_int);
	GetMainOutdoorScene(var_4486_object);
	var_4487_int = 0;
	
Label_8762:
	var_4497_bool = var_4487_int < var_4485_int;
	if(var_4497_bool != 0) {
		var_4498_object = GlobalVars[6];
		@@var_4498_object:get(var_4488_object, var_4487_int);
		var_4499_object = var_4488_object;
		if(var_4499_object != 0) {
		} else {
			var_4503_int = var_4487_int + (int)1;
			var_4504_int = "pt_plant" + var_4503_int;
			@@var_4486_object:GetLocator(var_4504_int, var_4489_bool, var_4490_cvector, var_4491_cvector);
			var_4505_bool = var_4489_bool == 0; //@nz
			if(var_4505_bool != 0) {
				Trace("Plant point not found");
				goto Label_8818;
			}
			RandOneOf(var_4492_string, (int)6, (int)3, (int)3, (int)3, (int)1, (int)1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			var_4519_string = var_4492_string;
			if(var_4519_string != 0) {
				var_4522_int = "item_" + var_4492_string;
				var_4524_int = var_4522_int + "_stat.xml";
				@@var_4486_object:AddStationaryActorByType(var_4488_object, var_4490_cvector, var_4491_cvector, "scripted", var_4524_int);
				var_4525_object = GlobalVars[6];
				@@var_4525_object:set(var_4487_int, var_4488_object);
				var_4527_int = "New plant: \"" + var_4492_string;
				var_4529_int = var_4527_int + "\" at location #";
				var_4531_int = var_4487_int + (int)1;
				var_4532_int = var_4529_int + var_4531_int;
				Trace(var_4532_int);
			}
			var_4488_object = 0;
	}
		var_4487_int = var_4487_int + (int)1;
		goto Label_8762;
	}
	return 16;
	
}
EMIT "Stack[-7] = 0";


func_10813()
{
	var_4740_string = ""; var_4741_bool = 0;
	func_177("house1_kabak@door1", (bool)1);
	return 0;
}


func_12862(var_5123_int)
{
	var_5124_int = 0; var_5125_int = 0;
	var_5127_int = "vol_" + var_5123_int;
	GetVariable(var_5127_int, var_5125_int);
	var_5129_int = "vol_" + var_5123_int;
	var_5131_int = var_5125_int | (int)8;
	SetVariable(var_5129_int, var_5131_int);
	return 2;
}


func_576(var_2030_string, var_2031_object, var_2032_string, var_2033_string)
{
	var_2039_object = Obj(); var_2040_int = 0; var_2041_bool = 0; var_2042_cvector = CVector(0,0,0); var_2043_cvector = CVector(0,0,0); var_2044_object = Obj(); var_2045_object = Obj(); var_2046_int = 0; var_2047_bool = 0; var_2048_cvector = CVector(0,0,0); var_2049_cvector = CVector(0,0,0); var_2050_object = Obj();
	GetMainOutdoorScene(var_2045_object);
	var_2046_int = 0;
	
Label_580:
	var_2052_int = var_2046_int + (int)1;
	var_2053_int = var_2030_string + var_2052_int;
	@@var_2045_object:GetLocator(var_2053_int, var_2047_bool, var_2048_cvector, var_2049_cvector);
	var_2054_bool = var_2047_bool == 0; //@nz
	if(var_2054_bool != 0) {
	} else {
		@@var_2045_object:AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string);
		@@var_2031_object:add(var_2050_object);
		var_2050_object = 0;
		var_2046_int = var_2046_int + (int)1;
		goto Label_580;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


func_7745(var_4432_object, var_4433_object, var_4434_string, var_4435_string, var_4436_string)
{
	var_4438_bool = 0; var_4439_cvector = CVector(0,0,0); var_4440_cvector = CVector(0,0,0); var_4441_object = Obj(); var_4442_bool = 0; var_4443_cvector = CVector(0,0,0); var_4444_cvector = CVector(0,0,0); var_4445_object = Obj();
	var_4447_int = "pt_guard_" + var_4434_string;
	@@var_4433_object:GetLocator(var_4447_int, var_4442_bool, var_4443_cvector, var_4444_cvector);
	var_4448_bool = var_4442_bool == 0; //@nz
	if(var_4448_bool != 0) {
		var_4450_int = "Locator doesn't exist for guard " + var_4434_string;
		Trace(var_4450_int);
	} else {
		@@var_4433_object:AddStationaryActor(var_4445_object, var_4443_cvector, var_4444_cvector, var_4435_string, var_4436_string);
	}
	var_4445_object = var_4432_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_10820()
{
	var_4752_string = ""; var_4753_bool = 0;
	func_177("mnogogrannik_han@door1", (bool)1);
	return 0;
}


func_6727(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object)
{
	var_1710_bool = var_1704_int == (int)0;
	if(var_1710_bool != 0) {
		var_1711_int = 0; var_1712_bool = 0;
		func_796((int)12, (bool)0);
		var_1713_int = 0; var_1714_bool = 0; var_1715_int = 0;
		func_813((int)12, (bool)0, (int)1);
		var_1716_int = 0; var_1717_int = 0; var_1718_object = Obj(); var_1719_object = Obj(); var_1720_object = Obj();
		var_1716_int = 12;
		var_1703_int = var_1717_int;
		var_1705_object = var_1718_object;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		func_622(var_1717_int, var_1718_object, var_1719_object, var_1720_object);
		var_1721_object = Obj(); var_1722_int = 0;
		var_1708_object = var_1721_object;
		func_305(var_1721_object, (int)0);
		var_1723_int = 0; var_1724_bool = 0; var_1725_int = 0;
		func_870((int)12, (bool)0, (int)4);
		var_1726_int = 0; var_1727_bool = 0; var_1728_int = 0;
		func_932((int)12, (bool)0, (int)4);
	}
	var_1729_int = 0; var_1730_int = 0;
	var_1704_int = var_1730_int;
	func_1020((int)12, var_1730_int);
	var_1731_int = 0; var_1732_int = 0; var_1733_int = 0;
	var_1703_int = var_1732_int;
	var_1704_int = var_1733_int;
	func_1624((int)12, var_1732_int, var_1733_int);
	return 0;
}


func_5706(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object)
{
	var_1391_bool = var_1385_int == (int)0;
	if(var_1391_bool != 0) {
		var_1392_int = 0; var_1393_bool = 0;
		func_796((int)7, (bool)0);
		var_1394_int = 0; var_1395_bool = 0; var_1396_int = 0;
		func_813((int)7, (bool)0, (int)1);
		var_1397_int = 0; var_1398_int = 0; var_1399_object = Obj(); var_1400_object = Obj(); var_1401_object = Obj();
		var_1397_int = 7;
		var_1384_int = var_1398_int;
		var_1386_object = var_1399_object;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		func_622(var_1398_int, var_1399_object, var_1400_object, var_1401_object);
		var_1402_object = Obj(); var_1403_int = 0;
		var_1389_object = var_1402_object;
		func_305(var_1402_object, (int)0);
		var_1404_int = 0; var_1405_bool = 0; var_1406_int = 0;
		func_870((int)7, (bool)0, (int)6);
		var_1407_int = 0; var_1408_bool = 0; var_1409_int = 0;
		func_932((int)7, (bool)0, (int)6);
	}
	var_1410_int = 0; var_1411_int = 0;
	var_1385_int = var_1411_int;
	func_1020((int)7, var_1411_int);
	var_1412_int = 0; var_1413_int = 0; var_1414_int = 0;
	var_1384_int = var_1413_int;
	var_1385_int = var_1414_int;
	func_1624((int)7, var_1413_int, var_1414_int);
	return 0;
}


func_3659(var_3816_int, var_3817_int, var_3818_int)
{
	var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0;
	var_3827_bool = 0;
	var_3827_bool = 0;
	var_3829_bool = var_3818_int > (int)8;
	if(var_3829_bool != 0) {
		var_3831_bool = var_3818_int < (int)21;
		if(var_3831_bool != 0) {
			var_3827_bool = 1;
		}
	}
	if(var_3827_bool != 0) {
		var_3832_int = 0; var_3833_string = ""; var_3834_string = ""; var_3835_int = 0;
		var_3816_int = var_3832_int;
		func_503(var_3832_int, "pers_rat", "rat.xml", (int)1);
		var_3836_int = 0; var_3837_string = ""; var_3838_string = ""; var_3839_int = 0;
		var_3816_int = var_3836_int;
		func_503(var_3836_int, "pers_alkash", "alkash.xml", (int)2);
		var_3840_int = 0; var_3841_string = ""; var_3842_string = ""; var_3843_int = 0;
		var_3816_int = var_3840_int;
		func_503(var_3840_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3845_float = 0; var_3846_int = 0;
		var_3817_int = var_3846_int;
		func_1165(var_3845_float, var_3846_int);
		var_3823_int = (int)2 * var_3845_float;
		var_3847_int = var_3823_int;
		if(var_3847_int != 0) {
			var_3848_int = 0; var_3849_string = ""; var_3850_string = ""; var_3851_int = 0;
			var_3816_int = var_3848_int;
			var_3823_int = var_3851_int;
			func_503(var_3848_int, "pers_grabitel", "grabitel.xml", var_3851_int);
		}
		var_3853_int = var_3817_int + (int)1;
		var_3855_bool = var_3853_int >= (int)2;
		if(var_3855_bool != 0) {
			var_3856_int = 0; var_3857_string = ""; var_3858_string = ""; var_3859_int = 0;
			var_3816_int = var_3856_int;
			func_503(var_3856_int, "pers_patrool", "patrol.xml", (int)1);
			var_3860_bool = 0; var_3861_int = 0;
			var_3817_int = var_3861_int;
			func_1372(var_3860_bool, var_3861_int);
			if(var_3860_bool != 0) {
				var_3862_int = 0; var_3863_string = ""; var_3864_string = ""; var_3865_int = 0;
				var_3816_int = var_3862_int;
				func_503(var_3862_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3867_float = 0; var_3868_int = 0;
		var_3817_int = var_3868_int;
		func_1255(var_3867_float, var_3868_int);
		var_3824_int = (int)1 * var_3867_float;
		var_3869_int = var_3824_int;
		if(var_3869_int != 0) {
			var_3870_int = 0; var_3871_string = ""; var_3872_string = ""; var_3873_int = 0;
			var_3816_int = var_3870_int;
			var_3824_int = var_3873_int;
			func_503(var_3870_int, "pers_bomber", "bomber.xml", var_3873_int);
		}
	} else {
		var_3887_int = 0; var_3888_string = ""; var_3889_string = ""; var_3890_int = 0;
		var_3816_int = var_3887_int;
		func_503(var_3887_int, "pers_rat", "rat.xml", (int)3);
		var_3891_int = 0; var_3892_string = ""; var_3893_string = ""; var_3894_int = 0;
		var_3816_int = var_3891_int;
		func_503(var_3891_int, "pers_alkash", "alkash.xml", (int)1);
		var_3895_int = 0; var_3896_string = ""; var_3897_string = ""; var_3898_int = 0;
		var_3816_int = var_3895_int;
		func_503(var_3895_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3900_float = 0; var_3901_int = 0;
		var_3817_int = var_3901_int;
		func_1165(var_3900_float, var_3901_int);
		var_3825_int = (int)3 * var_3900_float;
		var_3902_int = var_3825_int;
		if(var_3902_int != 0) {
			var_3903_int = 0; var_3904_string = ""; var_3905_string = ""; var_3906_int = 0;
			var_3816_int = var_3903_int;
			var_3825_int = var_3906_int;
			func_503(var_3903_int, "pers_grabitel", "grabitel.xml", var_3906_int);
		}
		var_3908_int = var_3817_int + (int)1;
		var_3910_bool = var_3908_int >= (int)2;
		if(var_3910_bool != 0) {
			var_3911_int = 0; var_3912_string = ""; var_3913_string = ""; var_3914_int = 0;
			var_3816_int = var_3911_int;
			func_503(var_3911_int, "pers_patrool", "patrol.xml", (int)1);
			var_3915_bool = 0; var_3916_int = 0;
			var_3817_int = var_3916_int;
			func_1372(var_3915_bool, var_3916_int);
			if(var_3915_bool != 0) {
				var_3917_int = 0; var_3918_string = ""; var_3919_string = ""; var_3920_int = 0;
				var_3816_int = var_3917_int;
				func_503(var_3917_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3922_float = 0; var_3923_int = 0;
		var_3817_int = var_3923_int;
		func_1255(var_3922_float, var_3923_int);
		var_3826_int = (int)1 * var_3922_float;
		var_3924_int = var_3826_int;
		if(var_3924_int == 0) goto Label_3821;
		var_3925_int = 0; var_3926_string = ""; var_3927_string = ""; var_3928_int = 0;
		var_3816_int = var_3925_int;
		var_3826_int = var_3928_int;
		func_503(var_3925_int, "pers_bomber", "bomber.xml", var_3928_int);
	}
Label_3821:
	var_3874_bool = 0; var_3875_int = 0; var_3876_int = 0;
	var_3817_int = var_3875_int;
	var_3818_int = var_3876_int;
	func_1345(var_3874_bool, var_3875_int, var_3876_int);
	if(var_3874_bool != 0) {
		var_3877_int = 0; var_3878_string = ""; var_3879_string = ""; var_3880_int = 0;
		var_3816_int = var_3877_int;
		func_503(var_3877_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3881_bool = 0; var_3882_int = 0;
	var_3817_int = var_3882_int;
	func_1372(var_3881_bool, var_3882_int);
	if(var_3881_bool != 0) {
		var_3883_int = 0; var_3884_string = ""; var_3885_string = ""; var_3886_int = 0;
		var_3816_int = var_3883_int;
		func_503(var_3883_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_10827()
{
	var_5169_object = Obj(); var_5170_object = Obj();
	func_11417(Obj());
	var_5171_object = var_5170_object;
	var_5182_float = 0;
	func_284(var_5182_float);
	@@var_5170_object:AddMark("k2q03LaraLetter", "pt_map_lara", (int)0, (int)539375, var_5182_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12874()
{
	var_5100_object = Obj(); var_5101_int = 0; var_5102_int = 0; var_5103_int = 0; var_5104_object = Obj(); var_5105_int = 0; var_5106_int = 0; var_5107_int = 0;
	CreateIntVector(var_5104_object);
	var_5108_object = Obj(); var_5109_bool = 0; var_5110_int = 0;
	var_5104_object = var_5108_object;
	func_12830((bool)0, (int)-1);
	@@var_5104_object:size(var_5105_int);
	var_5106_int = 0;
	
Label_12886:
	var_5122_bool = var_5106_int < var_5105_int;
	if(var_5122_bool != 0) {
		@@var_5104_object:get(var_5107_int, var_5106_int);
		var_5123_int = 0;
		var_5107_int = var_5123_int;
		func_12862(var_5123_int);
		var_5106_int = var_5106_int + (int)1;
		goto Label_12886;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_4688(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3407_bool = var_3401_int == (int)0;
	if(var_3407_bool != 0) {
		var_3408_int = 0; var_3409_bool = 0;
		func_796((int)1, (bool)0);
		var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0;
		func_813((int)1, (bool)0, (int)1);
		var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj();
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_720((int)1, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		var_3418_object = Obj(); var_3419_int = 0;
		var_3405_object = var_3418_object;
		func_305(var_3418_object, (int)2);
		var_3420_int = 0; var_3421_bool = 0; var_3422_int = 0;
		func_870((int)1, (bool)0, (int)8);
		var_3423_int = 0; var_3424_bool = 0; var_3425_int = 0;
		func_932((int)1, (bool)1, (int)8);
	}
	var_3426_int = 0; var_3427_bool = 0;
	func_779((int)1, (bool)0);
	var_3428_int = 0; var_3429_int = 0; var_3430_int = 0;
	var_3400_int = var_3429_int;
	var_3401_int = var_3430_int;
	func_4210((int)1, var_3429_int, var_3430_int);
	return 0;
}


func_7762(var_4429_object, var_4430_object, var_4431_int)
{
	var_4432_object = Obj(); var_4433_object = Obj(); var_4434_string = ""; var_4435_string = ""; var_4436_string = "";
	var_4430_object = var_4433_object;
	var_4434_string = "term" + var_4431_int;
	func_7745(var_4432_object, var_4433_object, var_4434_string, "pers_patrool", "guard_term.xml");
	var_4432_object = var_4429_object;
	return 0;
}


func_598(var_2056_string, var_2057_object)
{
	var_2063_object = Obj(); var_2064_int = 0; var_2065_bool = 0; var_2066_cvector = CVector(0,0,0); var_2067_cvector = CVector(0,0,0); var_2068_object = Obj(); var_2069_string = ""; var_2070_object = Obj(); var_2071_int = 0; var_2072_bool = 0; var_2073_cvector = CVector(0,0,0); var_2074_cvector = CVector(0,0,0); var_2075_object = Obj(); var_2076_string = "";
	GetMainOutdoorScene(var_2070_object);
	var_2071_int = 0;
	
Label_602:
	var_2078_int = var_2071_int + (int)1;
	var_2079_int = var_2056_string + var_2078_int;
	@@var_2070_object:GetLocator(var_2079_int, var_2072_bool, var_2073_cvector, var_2074_cvector);
	var_2080_bool = var_2072_bool == 0; //@nz
	if(var_2080_bool != 0) {
	} else {
		@@var_2070_object:AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, "fog", "fog_stat.xml");
		@@var_2057_object:add(var_2075_object);
		var_2075_object = 0;
		var_2071_int = var_2071_int + (int)1;
		goto Label_602;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_1624(var_1412_int, var_1413_int, var_1414_int)
{
	var_1415_int = 0; var_1416_int = 0;
	var_1418_int = var_1413_int + (int)1;
	var_1420_bool = var_1418_int == (int)12;
	if(var_1420_bool != 0) {
		return 2;
	}
	var_1421_bool = 0;
	var_1421_bool = 0;
	var_1422_bool = 0;
	var_1422_bool = 1;
	var_1424_bool = var_1414_int < (int)7;
	if(var_1424_bool != 1) {
		var_1426_bool = var_1414_int > (int)21;
		if(var_1426_bool != 1) {
			var_1422_bool = 0;
		}
	}
	if(var_1422_bool != 0) {
		var_1428_bool = var_1413_int != (int)0;
		if(var_1428_bool != 0) {
			var_1421_bool = 1;
		}
	}
	if(var_1421_bool != 0) {
		var_1430_float = 0; var_1431_int = 0;
		var_1413_int = var_1431_int;
		func_1141(var_1430_float, var_1431_int);
		var_1416_int = (int)1 * var_1430_float;
		var_1432_int = var_1416_int;
		if(var_1432_int != 0) {
			var_1433_int = 0; var_1434_string = ""; var_1435_string = ""; var_1436_int = 0;
			var_1412_int = var_1433_int;
			var_1416_int = var_1436_int;
			func_503(var_1433_int, "pers_grabitel", "grabitel.xml", var_1436_int);
		}
	}
	var_1437_bool = 0; var_1438_int = 0; var_1439_int = 0;
	var_1413_int = var_1438_int;
	var_1414_int = var_1439_int;
	func_1110(var_1437_bool, var_1438_int, var_1439_int);
	if(var_1437_bool != 0) {
		var_1440_int = 0; var_1441_string = ""; var_1442_string = ""; var_1443_int = 0;
		var_1412_int = var_1440_int;
		func_503(var_1440_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1444_int = 0; var_1445_string = ""; var_1446_string = ""; var_1447_int = 0;
		var_1412_int = var_1444_int;
		func_503(var_1444_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1448_int = 0; var_1449_string = ""; var_1450_string = ""; var_1451_int = 0;
		var_1412_int = var_1448_int;
		func_503(var_1448_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1452_int = 0; var_1453_string = ""; var_1454_string = ""; var_1455_int = 0;
		var_1412_int = var_1452_int;
		func_503(var_1452_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1456_int = 0; var_1457_string = ""; var_1458_string = ""; var_1459_int = 0;
		var_1412_int = var_1456_int;
		func_503(var_1456_int, "pers_woman", "woman.xml", (int)1);
		var_1460_int = 0; var_1461_string = ""; var_1462_string = ""; var_1463_int = 0;
		var_1412_int = var_1460_int;
		func_503(var_1460_int, "pers_alkash", "alkash.xml", (int)1);
		var_1464_bool = 0;
		var_1464_bool = 0;
		var_1466_bool = var_1414_int > (int)8;
		if(var_1466_bool != 0) {
			var_1468_bool = var_1414_int < (int)21;
			if(var_1468_bool != 0) {
				var_1464_bool = 1;
			}
		}
		if(var_1464_bool != 0) {
			var_1469_int = 0; var_1470_string = ""; var_1471_string = ""; var_1472_int = 0;
			var_1412_int = var_1469_int;
			func_503(var_1469_int, "pers_boy", "boy.xml", (int)1);
			var_1473_int = 0; var_1474_string = ""; var_1475_string = ""; var_1476_int = 0;
			var_1412_int = var_1473_int;
			func_503(var_1473_int, "pers_girl", "girl.xml", (int)1);
			var_1477_int = 0; var_1478_string = ""; var_1479_string = ""; var_1480_int = 0;
			var_1412_int = var_1477_int;
			func_503(var_1477_int, "pers_girl", "girl2.xml", (int)1);
			var_1481_int = 0; var_1482_string = ""; var_1483_string = ""; var_1484_int = 0;
			var_1412_int = var_1481_int;
			func_503(var_1481_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1485_int = 0; var_1486_string = ""; var_1487_string = ""; var_1488_int = 0;
			var_1412_int = var_1485_int;
			func_503(var_1485_int, "pers_littlegirl", "littlegirl.xml", (int)1);
		}
	} else {
		var_1496_bool = 0;
		var_1496_bool = 0;
		var_1498_bool = var_1414_int > (int)8;
		if(var_1498_bool != 0) {
			var_1500_bool = var_1414_int < (int)21;
			if(var_1500_bool != 0) {
				var_1496_bool = 1;
			}
		}
		if(var_1496_bool != 0) {
			var_1501_int = 0; var_1502_string = ""; var_1503_string = ""; var_1504_int = 0;
			var_1412_int = var_1501_int;
			func_503(var_1501_int, "pers_woman", "woman.xml", (int)1);
			var_1505_int = 0; var_1506_string = ""; var_1507_string = ""; var_1508_int = 0;
			var_1412_int = var_1505_int;
			func_503(var_1505_int, "pers_unosha", "unosha.xml", (int)1);
			var_1509_int = 0; var_1510_string = ""; var_1511_string = ""; var_1512_int = 0;
			var_1412_int = var_1509_int;
			func_503(var_1509_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1513_int = 0; var_1514_string = ""; var_1515_string = ""; var_1516_int = 0;
			var_1412_int = var_1513_int;
			func_503(var_1513_int, "pers_boy", "boy.xml", (int)1);
			var_1517_int = 0; var_1518_string = ""; var_1519_string = ""; var_1520_int = 0;
			var_1412_int = var_1517_int;
			func_503(var_1517_int, "pers_girl", "girl.xml", (int)1);
			var_1521_int = 0; var_1522_string = ""; var_1523_string = ""; var_1524_int = 0;
			var_1412_int = var_1521_int;
			func_503(var_1521_int, "pers_girl", "girl2.xml", (int)1);
			var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0;
			var_1412_int = var_1525_int;
			func_503(var_1525_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0;
			var_1412_int = var_1529_int;
			func_503(var_1529_int, "pers_littlegirl", "littlegirl.xml", (int)1);
			var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0;
			var_1412_int = var_1533_int;
			func_503(var_1533_int, "pers_alkash", "alkash.xml", (int)1);
			var_1538_int = var_1413_int + (int)1;
			var_1540_bool = var_1538_int >= (int)3;
			if(var_1540_bool != 0) {
				var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0;
				var_1412_int = var_1541_int;
				func_503(var_1541_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			goto Label_1883;
		}
		var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0;
		var_1412_int = var_1545_int;
		func_503(var_1545_int, "pers_woman", "woman.xml", (int)1);
		var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0;
		var_1412_int = var_1549_int;
		func_503(var_1549_int, "pers_unosha", "unosha.xml", (int)1);
		var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0;
		var_1412_int = var_1553_int;
		func_503(var_1553_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1557_int = 0; var_1558_string = ""; var_1559_string = ""; var_1560_int = 0;
		var_1412_int = var_1557_int;
		func_503(var_1557_int, "pers_alkash", "alkash.xml", (int)1);
		var_1562_int = var_1413_int + (int)1;
		var_1564_bool = var_1562_int >= (int)3;
		if(var_1564_bool == 0) goto Label_1883;
		var_1565_int = 0; var_1566_string = ""; var_1567_string = ""; var_1568_int = 0;
		var_1412_int = var_1565_int;
		func_503(var_1565_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
	}
Label_1883:
	var_1489_bool = 0; var_1490_int = 0; var_1491_int = 0;
	var_1413_int = var_1490_int;
	var_1414_int = var_1491_int;
	func_1345(var_1489_bool, var_1490_int, var_1491_int);
	if(var_1489_bool != 0) {
		var_1492_int = 0; var_1493_string = ""; var_1494_string = ""; var_1495_int = 0;
		var_1412_int = var_1492_int;
		func_503(var_1492_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_10843()
{
	var_4893_int = 0; var_4894_string = "";
	func_132(var_4893_int, "map_chertez_state");
	var_4896_bool = var_4893_int <= (int)1;
	if(var_4896_bool != 0) {
		SetVariable("map_chertez_state", (int)1);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_7773(var_4473_bool)
{
	var_4474_object = Obj(); var_4475_object = Obj();
	FindActor(var_4475_object, "arena_light");
	@@var_4475_object:Switch(var_4473_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9826(var_5762_int, var_5763_float)
{
	var_5764_int = 0; var_5765_int = 0; var_5766_int = 0; var_5767_float = 0;
	var_5763_float = var_5767_float;
	func_11409(var_5764_int, (int)530554, (int)530553, var_5767_float);
	var_5764_int = var_5762_int;
	return 0;
}


func_12899()
{
	func_12874();
	return 0;
}


func_7781()
{
	var_4500_object = Obj(); var_4501_bool = 0; var_4502_cvector = CVector(0,0,0); var_4503_cvector = CVector(0,0,0); var_4504_int = 0; var_4505_object = Obj(); var_4506_object = Obj(); var_4507_bool = 0; var_4508_cvector = CVector(0,0,0); var_4509_cvector = CVector(0,0,0); var_4510_int = 0; var_4511_object = Obj();
	Trace("Setting arena...");
	var_4513_object = GlobalVars[11];
	var_4514_bool = var_4513_object == 0; //@ne
	if(var_4514_bool != 0) {
		GetMainOutdoorScene(var_4506_object);
		@@var_4506_object:GetLocator("pt_arena_manager", var_4507_bool, var_4508_cvector, var_4509_cvector);
		var_4516_bool = var_4507_bool == 0; //@nz
		if(var_4516_bool != 0) {
			Trace("Locator doesn't exist for arena manager");
		} else {
				var_4537_object = GlobalVars[11];
				var_4538_object = Obj(); var_4539_object = Obj(); var_4540_cvector = CVector(0,0,0); var_4541_cvector = CVector(0,0,0);
				var_4506_object = var_4539_object;
				var_4508_cvector = var_4540_cvector;
				var_4509_cvector = var_4541_cvector;
				func_13671(var_4538_object, var_4539_object, var_4540_cvector, var_4541_cvector);
				var_4538_object = var_4537_object;
				GlobalVars[11] = var_4537_object;
		}
		var_4510_int = 0;

	Label_7809:
		var_4519_bool = var_4510_int < (int)6;
		if(var_4519_bool != 0) {
			var_4522_int = var_4510_int + (int)1;
			var_4523_int = "pt_arena_torch" + var_4522_int;
			@@var_4506_object:GetLocator(var_4523_int, var_4507_bool, var_4508_cvector, var_4509_cvector);
			var_4524_bool = var_4507_bool == 0; //@nz
			if(var_4524_bool != 0) {
				var_4527_int = var_4510_int + (int)1;
				var_4528_int = "Locator doesn't exist for arena torch " + var_4527_int;
				Trace(var_4528_int);
			} else {
				AddActorByType(var_4511_object, "scripted", var_4506_object, var_4508_cvector, var_4509_cvector, "torch.xml");
				var_4532_object = GlobalVars[12];
				@@var_4532_object:add(var_4511_object);
				var_4511_object = 0;
		}
			var_4533_bool = 0;
			func_7773((bool)1);
			var_4506_object = 0;
	}
		return 12;

	}
	var_4510_int = var_4510_int + (int)1;
	goto Label_7809;
	
}


func_12903(var_303_bool, var_304_int)
{
	var_305_int = 0; var_306_int = 0;
	var_308_int = "K2System" + var_304_int;
	GetVariable(var_308_int, var_306_int);
	var_303_bool = var_306_int != (int)0;
	return 2;
}


func_9835(var_5773_int, var_5774_float)
{
	var_5775_int = 0; var_5776_int = 0; var_5777_int = 0; var_5778_float = 0;
	var_5774_float = var_5778_float;
	func_11409(var_5775_int, (int)530556, (int)530555, var_5778_float);
	var_5775_int = var_5773_int;
	return 0;
}


func_10860()
{
	var_5139_int = 0; var_5140_string = "";
	func_132(var_5139_int, "map_chertez_state");
	var_5142_bool = var_5139_int <= (int)2;
	if(var_5142_bool != 0) {
		SetVariable("map_chertez_state", (int)2);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_622(var_566_int, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_bool = 0;
	var_566_int = var_571_int;
	func_542(var_571_int, (bool)1);
	var_599_object = Obj();
	var_568_object = var_599_object;
	func_263(var_599_object);
	var_610_object = Obj();
	var_569_object = var_610_object;
	func_263(var_610_object);
	var_611_object = Obj();
	var_570_object = var_611_object;
	func_263(var_611_object);
	return 0;
}


func_12911(var_198_int, var_199_int)
{
	var_201_bool = var_199_int == (int)6;
	if(var_201_bool != 0) {
		var_198_int = 14;
		return 0;
	EMIT "GOTO 0x3293";
	}
	var_203_bool = var_199_int == (int)7;
	if(var_203_bool != 0) {
		var_198_int = 8;
		return 0;
	EMIT "GOTO 0x3293";
	}
	var_205_bool = var_199_int == (int)8;
	if(var_205_bool != 0) {
		var_198_int = 4;
		return 0;
	EMIT "GOTO 0x3293";
	}
	var_207_bool = var_199_int == (int)9;
	if(var_207_bool != 0) {
		var_198_int = 13;
		return 0;
	EMIT "GOTO 0x3293";
	}
	var_209_bool = var_199_int == (int)10;
	if(var_209_bool != 0) {
		var_198_int = 5;
		return 0;
	EMIT "GOTO 0x3293";
	}
	var_211_bool = var_199_int == (int)11;
	if(var_211_bool != 0) {
		var_198_int = 11;
		return 0;
	}
	var_198_int = -1;
	return 0;
}


func_9844(var_5784_int, var_5785_float)
{
	var_5786_int = 0; var_5787_int = 0; var_5788_int = 0; var_5789_float = 0;
	var_5785_float = var_5789_float;
	func_11409(var_5786_int, (int)530558, (int)530557, var_5789_float);
	var_5786_int = var_5784_int;
	return 0;
}


func_8823()
{
	var_4533_object = Obj(); var_4534_int = 0; var_4535_int = 0; var_4536_object = Obj(); var_4537_bool = 0; var_4538_cvector = CVector(0,0,0); var_4539_cvector = CVector(0,0,0); var_4540_string = ""; var_4541_object = Obj(); var_4542_int = 0; var_4543_int = 0; var_4544_object = Obj(); var_4545_bool = 0; var_4546_cvector = CVector(0,0,0); var_4547_cvector = CVector(0,0,0); var_4548_string = "";
	GetMainOutdoorScene(var_4541_object);
	var_4549_object = GlobalVars[7];
	@@var_4549_object:size(var_4542_int);
	var_4543_int = 0;
	
Label_8830:
	var_4550_bool = var_4543_int < var_4542_int;
	if(var_4550_bool != 0) {
		var_4551_object = GlobalVars[7];
		@@var_4551_object:get(var_4544_object, var_4543_int);
		var_4552_object = var_4544_object;
		if(var_4552_object != 0) {
		} else {
			var_4556_int = var_4543_int + (int)1;
			var_4557_int = "pt_grave_supply" + var_4556_int;
			@@var_4541_object:GetLocator(var_4557_int, var_4545_bool, var_4546_cvector, var_4547_cvector);
			var_4558_bool = var_4545_bool == 0; //@nz
			if(var_4558_bool != 0) {
				Trace("Grave supply point not found");
				goto Label_8867;
			}
			RandOneOf(var_4548_string, (int)1, (int)1, "bread", "milk");
			var_4566_int = "item_" + var_4548_string;
			var_4568_int = var_4566_int + "_stat.xml";
			@@var_4541_object:AddStationaryActorByType(var_4544_object, var_4546_cvector, var_4547_cvector, "scripted", var_4568_int);
			var_4569_object = GlobalVars[7];
			@@var_4569_object:set(var_4543_int, var_4544_object);
			var_4544_object = 0;
	}
		var_4543_int = var_4543_int + (int)1;
		goto Label_8830;
	}
	return 16;
	
}
EMIT "Stack[-8] = 0";


func_6779(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object)
{
	var_2940_bool = var_2934_int == (int)0;
	if(var_2940_bool != 0) {
		var_2941_int = 0; var_2942_bool = 0;
		func_796((int)12, (bool)1);
		var_2943_int = 0; var_2944_bool = 0; var_2945_int = 0;
		func_813((int)12, (bool)1, (int)1);
		var_2946_int = 0; var_2947_int = 0; var_2948_object = Obj(); var_2949_object = Obj(); var_2950_object = Obj();
		var_2933_int = var_2947_int;
		var_2935_object = var_2948_object;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		func_641((int)12, var_2947_int, var_2948_object, var_2949_object, var_2950_object);
		var_2951_object = Obj(); var_2952_int = 0;
		var_2938_object = var_2951_object;
		func_305(var_2951_object, (int)1);
		var_2953_int = 0; var_2954_bool = 0; var_2955_int = 0;
		func_870((int)12, (bool)1, (int)4);
		var_2956_int = 0; var_2957_bool = 0; var_2958_int = 0;
		func_932((int)12, (bool)0, (int)4);
	}
	var_2959_int = 0; var_2960_bool = 0;
	func_779((int)12, (bool)0);
	var_2961_int = 0; var_2962_int = 0; var_2963_int = 0;
	var_2933_int = var_2962_int;
	var_2934_int = var_2963_int;
	func_2764((int)12, var_2962_int, var_2963_int);
	return 0;
}


func_10877()
{
	var_4983_int = 0; var_4984_string = "";
	func_132(var_4983_int, "map_chertez_state");
	var_4986_bool = var_4983_int <= (int)3;
	if(var_4986_bool != 0) {
		SetVariable("map_chertez_state", (int)3);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_5758(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object)
{
	var_2669_bool = var_2663_int == (int)0;
	if(var_2669_bool != 0) {
		var_2670_int = 0; var_2671_bool = 0;
		func_796((int)7, (bool)1);
		var_2672_int = 0; var_2673_bool = 0; var_2674_int = 0;
		func_813((int)7, (bool)1, (int)1);
		var_2675_int = 0; var_2676_int = 0; var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj();
		var_2662_int = var_2676_int;
		var_2664_object = var_2677_object;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		func_641((int)7, var_2676_int, var_2677_object, var_2678_object, var_2679_object);
		var_2680_object = Obj(); var_2681_int = 0;
		var_2667_object = var_2680_object;
		func_305(var_2680_object, (int)1);
		var_2682_int = 0; var_2683_bool = 0; var_2684_int = 0;
		func_870((int)7, (bool)1, (int)6);
		var_2685_int = 0; var_2686_bool = 0; var_2687_int = 0;
		func_932((int)7, (bool)0, (int)6);
	}
	var_2688_int = 0; var_2689_bool = 0;
	func_779((int)7, (bool)0);
	var_2690_int = 0; var_2691_int = 0; var_2692_int = 0;
	var_2662_int = var_2691_int;
	var_2663_int = var_2692_int;
	func_2764((int)7, var_2691_int, var_2692_int);
	return 0;
}


func_9853(var_5844_int, var_5845_float)
{
	var_5846_int = 0; var_5847_int = 0; var_5848_int = 0; var_5849_float = 0;
	var_5845_float = var_5849_float;
	func_11409(var_5846_int, (int)530560, (int)530559, var_5849_float);
	var_5846_int = var_5844_int;
	return 0;
}


func_641(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object)
{
	var_2023_int = 0; var_2024_bool = 0;
	var_2018_int = var_2023_int;
	func_542(var_2023_int, (bool)0);
	var_2025_object = Obj();
	var_2020_object = var_2025_object;
	func_263(var_2025_object);
	var_2026_object = Obj();
	var_2021_object = var_2026_object;
	func_263(var_2026_object);
	var_2027_object = Obj();
	var_2022_object = var_2027_object;
	func_263(var_2027_object);
	var_2029_bool = var_2019_int < (int)8;
	if(var_2029_bool != 0) {
		var_2030_string = ""; var_2031_object = Obj(); var_2032_string = ""; var_2033_string = "";
		var_2036_int = var_2018_int + (int)1;
		var_2037_int = "pt_blockpost" + var_2036_int;
		var_2030_string = var_2037_int + "_1_";
		var_2020_object = var_2031_object;
		func_576(var_2030_string, var_2031_object, "pers_patrool", "patrol_stat.xml");
		var_2056_string = ""; var_2057_object = Obj();
		var_2060_int = var_2018_int + (int)1;
		var_2061_int = "pt_fog" + var_2060_int;
		var_2056_string = var_2061_int + "_";
		var_2022_object = var_2057_object;
		func_598(var_2056_string, var_2057_object);
	} else {
		var_2083_string = ""; var_2084_object = Obj(); var_2085_string = ""; var_2086_string = "";
		var_2089_int = var_2018_int + (int)1;
		var_2090_int = "pt_blockpost" + var_2089_int;
		var_2083_string = var_2090_int + "_1_";
		var_2020_object = var_2084_object;
		func_576(var_2083_string, var_2084_object, "pers_soldat", "soldier.xml");
		var_2092_string = ""; var_2093_object = Obj(); var_2094_string = ""; var_2095_string = "";
		var_2098_int = var_2018_int + (int)1;
		var_2099_int = "pt_blockpost" + var_2098_int;
		var_2092_string = var_2099_int + "_2_";
		var_2021_object = var_2093_object;
		func_576(var_2092_string, var_2093_object, "pers_sanitar", "sanitar_stat.xml");
		var_2101_string = ""; var_2102_object = Obj();
		var_2105_int = var_2018_int + (int)1;
		var_2106_int = "pt_fog" + var_2105_int;
		var_2101_string = var_2106_int + "_";
		var_2022_object = var_2102_object;
		func_598(var_2101_string, var_2102_object);
	}
	return 0;
	
}


func_4740(var_78_object)
{
	@@var_78_object:add("dt_house1_union2_05l");
	@@var_78_object:add("dt_house1_union2_05r");
	@@var_78_object:add("dt_house2_01");
	@@var_78_object:add("dt_house2_02");
	@@var_78_object:add("dt_house2_03");
	@@var_78_object:add("dt_house2_04");
	@@var_78_object:add("dt_house2_05");
	@@var_78_object:add("dt_house3_10_i2");
	@@var_78_object:add("dt_house3_10");
	@@var_78_object:add("dt_house3_11_i2");
	@@var_78_object:add("dt_house3_11");
	@@var_78_object:add("dt_house3_12_i2");
	@@var_78_object:add("dt_house3_12");
	@@var_78_object:add("dt_house_1_06");
	@@var_78_object:add("dt_house3_07_i2");
	@@var_78_object:add("dt_house3_07");
	return 0;
}


func_9862(var_5335_int, var_5336_float)
{
	var_5337_int = 0; var_5338_int = 0; var_5339_int = 0; var_5340_float = 0;
	var_5336_float = var_5340_float;
	func_11409(var_5337_int, (int)530562, (int)530561, var_5340_float);
	var_5337_int = var_5335_int;
	return 0;
}


func_10894()
{
	var_5076_int = 0; var_5077_string = "";
	func_132(var_5076_int, "map_chertez_state");
	var_5079_bool = var_5076_int <= (int)4;
	if(var_5079_bool != 0) {
		SetVariable("map_chertez_state", (int)4);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_9871(var_5379_int, var_5380_float)
{
	var_5381_int = 0; var_5382_int = 0; var_5383_int = 0; var_5384_float = 0;
	var_5380_float = var_5384_float;
	func_11409(var_5381_int, (int)530564, (int)530563, var_5384_float);
	var_5381_int = var_5379_int;
	return 0;
}


func_12949(var_245_bool, var_246_int)
{
	var_247_int = 0; var_248_int = 0;
	var_250_int = "K2SystemSvitaRemoved" + var_246_int;
	GetVariable(var_250_int, var_248_int);
	var_245_bool = var_248_int != (int)0;
	return 2;
}


func_9880(var_5483_int, var_5484_float)
{
	var_5485_int = 0; var_5486_int = 0; var_5487_int = 0; var_5488_float = 0;
	var_5484_float = var_5488_float;
	func_11409(var_5485_int, (int)530566, (int)530565, var_5488_float);
	var_5485_int = var_5483_int;
	return 0;
}


func_12957(var_178_int, var_179_int)
{
	var_181_bool = var_179_int == (int)6;
	if(var_181_bool != 0) {
		var_178_int = 4;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	var_183_bool = var_179_int == (int)7;
	if(var_183_bool != 0) {
		var_178_int = 3;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	var_185_bool = var_179_int == (int)8;
	if(var_185_bool != 0) {
		var_178_int = 12;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	var_187_bool = var_179_int == (int)9;
	if(var_187_bool != 0) {
		var_178_int = 5;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	var_189_bool = var_179_int == (int)10;
	if(var_189_bool != 0) {
		var_178_int = 9;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	var_191_bool = var_179_int == (int)11;
	if(var_191_bool != 0) {
		var_178_int = 13;
		return 0;
	}
	var_178_int = -1;
	return 0;
}


func_10911()
{
	var_4997_int = 0; var_4998_string = "";
	func_132(var_4997_int, "map_chertez_state");
	var_5000_bool = var_4997_int <= (int)5;
	if(var_5000_bool != 0) {
		SetVariable("map_chertez_state", (int)5);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_9889(var_5268_int, var_5269_float)
{
	var_5270_int = 0; var_5271_int = 0; var_5272_int = 0; var_5273_float = 0;
	var_5269_float = var_5273_float;
	func_11409(var_5270_int, (int)530568, (int)530567, var_5273_float);
	var_5270_int = var_5268_int;
	return 0;
}


func_7844()
{
	var_4782_int = 0; var_4783_int = 0; var_4784_object = Obj(); var_4785_int = 0; var_4786_int = 0; var_4787_object = Obj();
	Trace("Cleaning arena...");
	var_4789_object = GlobalVars[11];
	var_4790_bool = var_4789_object != 0; //@nn
	if(var_4790_bool != 0) {
		var_4791_object = GlobalVars[11];
		@@var_4791_object:Remove();
		var_4792_object = GlobalVars[12];
		@@var_4792_object:size(var_4785_int);
		var_4786_int = 0;

	Label_7858:
		var_4793_bool = var_4786_int < var_4785_int;
		if(var_4793_bool != 0) {
			var_4794_object = GlobalVars[12];
			@@var_4794_object:get(var_4787_object, var_4786_int);
			Trigger(var_4787_object, "remove");
			var_4787_object = 0;
			var_4786_int = var_4786_int + (int)1;
			goto Label_7858;
		}
		var_4797_object = GlobalVars[12];
		@@var_4797_object:clear();
		var_4798_bool = 0;
		func_7773((bool)0);
	}
	return 6;
}


func_8872()
{
	var_4654_object = Obj(); var_4655_object = Obj(); var_4656_object = Obj(); var_4657_object = Obj();
	GetMainOutdoorScene(var_4656_object);
	AddScriptedActor(var_4657_object, "big_gun", "big_gun.bin", var_4656_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4657_object, "vagon_martira", "big_gun.bin", var_4656_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4657_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4656_object, CVector(0.0, 0.0, 0.0));
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9898(var_5390_int, var_5391_float)
{
	var_5392_int = 0; var_5393_int = 0; var_5394_int = 0; var_5395_float = 0;
	var_5391_float = var_5395_float;
	func_11409(var_5392_int, (int)530570, (int)530569, var_5395_float);
	var_5392_int = var_5390_int;
	return 0;
}


func_6831(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object)
{
	var_4070_bool = var_4064_int == (int)0;
	if(var_4070_bool != 0) {
		var_4071_int = 0; var_4072_bool = 0;
		func_796((int)12, (bool)0);
		var_4073_int = 0; var_4074_bool = 0; var_4075_int = 0;
		func_813((int)12, (bool)0, (int)1);
		var_4076_int = 0; var_4077_int = 0; var_4078_object = Obj(); var_4079_object = Obj(); var_4080_object = Obj();
		var_4063_int = var_4077_int;
		var_4065_object = var_4078_object;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		func_720((int)12, var_4077_int, var_4078_object, var_4079_object, var_4080_object);
		var_4081_object = Obj(); var_4082_int = 0;
		var_4068_object = var_4081_object;
		func_305(var_4081_object, (int)2);
		var_4083_int = 0; var_4084_bool = 0; var_4085_int = 0;
		func_870((int)12, (bool)0, (int)4);
		var_4086_int = 0; var_4087_bool = 0; var_4088_int = 0;
		func_932((int)12, (bool)1, (int)4);
	}
	var_4089_int = 0; var_4090_bool = 0;
	func_779((int)12, (bool)0);
	var_4091_int = 0; var_4092_int = 0; var_4093_int = 0;
	var_4063_int = var_4092_int;
	var_4064_int = var_4093_int;
	func_3659((int)12, var_4092_int, var_4093_int);
	return 0;
}


func_10928()
{
	var_4907_int = 0; var_4908_string = "";
	func_132(var_4907_int, "map_chertez_state");
	var_4910_bool = var_4907_int <= (int)6;
	if(var_4910_bool != 0) {
		SetVariable("map_chertez_state", (int)6);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_5810(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object)
{
	var_3795_bool = var_3789_int == (int)0;
	if(var_3795_bool != 0) {
		var_3796_int = 0; var_3797_bool = 0;
		func_796((int)7, (bool)0);
		var_3798_int = 0; var_3799_bool = 0; var_3800_int = 0;
		func_813((int)7, (bool)0, (int)1);
		var_3801_int = 0; var_3802_int = 0; var_3803_object = Obj(); var_3804_object = Obj(); var_3805_object = Obj();
		var_3788_int = var_3802_int;
		var_3790_object = var_3803_object;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		func_720((int)7, var_3802_int, var_3803_object, var_3804_object, var_3805_object);
		var_3806_object = Obj(); var_3807_int = 0;
		var_3793_object = var_3806_object;
		func_305(var_3806_object, (int)2);
		var_3808_int = 0; var_3809_bool = 0; var_3810_int = 0;
		func_870((int)7, (bool)0, (int)6);
		var_3811_int = 0; var_3812_bool = 0; var_3813_int = 0;
		func_932((int)7, (bool)1, (int)6);
	}
	var_3814_int = 0; var_3815_bool = 0;
	func_779((int)7, (bool)0);
	var_3816_int = 0; var_3817_int = 0; var_3818_int = 0;
	var_3788_int = var_3817_int;
	var_3789_int = var_3818_int;
	func_3659((int)7, var_3817_int, var_3818_int);
	return 0;
}


func_9907(var_5606_int, var_5607_float)
{
	var_5608_int = 0; var_5609_int = 0; var_5610_int = 0; var_5611_float = 0;
	var_5607_float = var_5611_float;
	func_11409(var_5608_int, (int)527719, (int)527718, var_5611_float);
	var_5608_int = var_5606_int;
	return 0;
}


func_4790(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object)
{
	var_1036_bool = var_1030_int == (int)0;
	if(var_1036_bool != 0) {
		var_1037_int = 0; var_1038_bool = 0;
		func_796((int)2, (bool)0);
		var_1039_int = 0; var_1040_bool = 0; var_1041_int = 0;
		func_813((int)2, (bool)0, (int)1);
		var_1042_int = 0; var_1043_int = 0; var_1044_object = Obj(); var_1045_object = Obj(); var_1046_object = Obj();
		var_1042_int = 2;
		var_1029_int = var_1043_int;
		var_1031_object = var_1044_object;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		func_622(var_1043_int, var_1044_object, var_1045_object, var_1046_object);
		var_1047_object = Obj(); var_1048_int = 0;
		var_1034_object = var_1047_object;
		func_305(var_1047_object, (int)0);
		var_1049_int = 0; var_1050_bool = 0; var_1051_int = 0;
		func_870((int)2, (bool)0, (int)5);
		var_1052_int = 0; var_1053_bool = 0; var_1054_int = 0;
		func_932((int)2, (bool)0, (int)5);
	}
	var_1055_int = 0; var_1056_int = 0;
	var_1030_int = var_1056_int;
	func_1050((int)2, var_1056_int);
	var_1057_int = 0; var_1058_int = 0; var_1059_int = 0;
	var_1029_int = var_1058_int;
	var_1030_int = var_1059_int;
	func_1897((int)2, var_1058_int, var_1059_int);
	return 0;
}


func_9916(var_5198_int, var_5199_float)
{
	var_5200_int = 0; var_5201_int = 0; var_5202_int = 0; var_5203_float = 0;
	var_5199_float = var_5203_float;
	func_11409(var_5200_int, (int)530572, (int)530571, var_5203_float);
	var_5200_int = var_5198_int;
	return 0;
}


func_8893(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_19_bool = var_3_int > (int)16384;
	if(var_19_bool != 0) {
		var_21_bool = var_3_int < (int)16396;
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - (int)16384;
		var_23_int = 0;
		var_11_int = var_23_int;
		func_13216(var_23_int);
		var_2_bool = 1;
		return 12;
	}
	var_365_bool = 0;
	var_365_bool = 0;
	var_367_bool = var_3_int > (int)32768;
	if(var_367_bool != 0) {
		var_369_bool = var_3_int < (int)33056;
		if(var_369_bool != 0) {
			var_365_bool = 1;
		}
	}
	if(var_365_bool != 0) {
		var_371_int = var_3_int - (int)32768;
		var_12_int = var_371_int / (int)24;
		var_374_int = var_3_int - (int)32768;
		var_13_int = var_374_int % (int)24;
		GetGameTime(var_14_float);
		var_15_int = var_14_float / (int)24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % (int)24;
		var_378_int = 0; var_379_int = 0; var_380_int = 0; var_381_int = 0;
		var_12_int = var_378_int;
		var_13_int = var_379_int;
		var_15_int = var_380_int;
		var_16_int = var_381_int;
		func_9031(var_378_int, var_379_int, var_380_int, var_381_int);
		var_2_bool = 1;
		return 12;
	}
	var_2_bool = 0;
	return 12;
}


func_10945()
{
	func_11325();
	return 0;
}


func_12995(var_282_int, var_283_int)
{
	var_286_bool = var_283_int == (int)8;
	if(var_286_bool != 0) {
		var_282_int = 5;
		return 0;
	EMIT "GOTO 0x32db";
	}
	var_288_bool = var_283_int == (int)9;
	if(var_288_bool != 0) {
		var_282_int = 10;
		return 0;
	EMIT "GOTO 0x32db";
	}
	var_290_bool = var_283_int == (int)10;
	if(var_290_bool != 0) {
		var_282_int = 3;
		return 0;
	EMIT "GOTO 0x32db";
	}
	var_292_bool = var_283_int == (int)11;
	if(var_292_bool != 0) {
		var_282_int = 1;
		return 0;
	}
	var_282_int = -1;
	return 0;
}


func_9925(var_4865_int, var_4866_float)
{
	var_4867_int = 0; var_4868_int = 0; var_4869_int = 0; var_4870_float = 0;
	var_4866_float = var_4870_float;
	func_11409(var_4867_int, (int)542478, (int)542477, var_4870_float);
	var_4867_int = var_4865_int;
	return 0;
}


func_7878()
{
	var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); var_325_int = 0;
	GetMainOutdoorScene(var_324_object);
	var_325_int = 1;
	
Label_7882:
	var_327_bool = var_325_int <= (int)17;
	if(var_327_bool != 0) {
		var_328_object = GlobalVars[15];
		var_329_object = Obj(); var_330_object = Obj(); var_331_string = ""; var_332_string = ""; var_333_string = "";
		var_324_object = var_330_object;
		var_331_string = "pt_bull" + var_325_int;
		func_159(var_329_object, var_330_object, var_331_string, "pers_bull", "bull.xml");
		@@var_328_object:add(var_329_object);
		var_325_int = var_325_int + (int)1;
		goto Label_7882;
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_10950()
{
	var_5027_int = 0; var_5028_string = "";
	func_132(var_5027_int, "K_Mission5");
	var_5030_bool = var_5027_int == (int)0;
	if(var_5030_bool != 0) {
		SetVariable("K_Mission5", (int)1);
		func_11338();
		var_5056_bool = 0; var_5057_int = 0;
		func_11392(var_5056_bool, (int)567);
		var_5064_bool = 0; var_5065_int = 0;
		func_11392(var_5064_bool, (int)568);
		var_5066_bool = 0; var_5067_int = 0;
		func_11392(var_5066_bool, (int)569);
		var_5068_bool = 0; var_5069_int = 0;
		func_11392(var_5068_bool, (int)570);
	}
	return 0;
}


func_2764(var_2690_int, var_2691_int, var_2692_int)
{
	var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; var_2696_int = 0;
	var_2697_bool = 0;
	var_2697_bool = 0;
	var_2699_bool = var_2692_int > (int)8;
	if(var_2699_bool != 0) {
		var_2701_bool = var_2692_int < (int)21;
		if(var_2701_bool != 0) {
			var_2697_bool = 1;
		}
	}
	if(var_2697_bool != 0) {
		var_2702_int = 0; var_2703_string = ""; var_2704_string = ""; var_2705_int = 0;
		var_2690_int = var_2702_int;
		func_503(var_2702_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2706_int = 0; var_2707_string = ""; var_2708_string = ""; var_2709_int = 0;
		var_2690_int = var_2706_int;
		func_503(var_2706_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2710_int = 0; var_2711_string = ""; var_2712_string = ""; var_2713_int = 0;
		var_2690_int = var_2710_int;
		func_503(var_2710_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2714_int = 0; var_2715_string = ""; var_2716_string = ""; var_2717_int = 0;
		var_2690_int = var_2714_int;
		func_529(var_2714_int, "fog", "fog.xml", (int)6);
		var_2719_bool = var_2691_int >= (int)5;
		if(var_2719_bool != 0) {
			var_2720_int = 0; var_2721_string = ""; var_2722_string = ""; var_2723_int = 0;
			var_2690_int = var_2720_int;
			func_529(var_2720_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2725_float = 0; var_2726_int = 0;
		var_2691_int = var_2726_int;
		func_1255(var_2725_float, var_2726_int);
		var_2695_int = (int)1 * var_2725_float;
		var_2727_int = var_2695_int;
		if(var_2727_int != 0) {
			var_2728_int = 0; var_2729_string = ""; var_2730_string = ""; var_2731_int = 0;
			var_2690_int = var_2728_int;
			var_2695_int = var_2731_int;
			func_503(var_2728_int, "pers_bomber", "bomber.xml", var_2731_int);
		}
	} else {
		var_2769_int = 0; var_2770_string = ""; var_2771_string = ""; var_2772_int = 0;
		var_2690_int = var_2769_int;
		func_503(var_2769_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2773_int = 0; var_2774_string = ""; var_2775_string = ""; var_2776_int = 0;
		var_2690_int = var_2773_int;
		func_503(var_2773_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2777_int = 0; var_2778_string = ""; var_2779_string = ""; var_2780_int = 0;
		var_2690_int = var_2777_int;
		func_503(var_2777_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2781_int = 0; var_2782_string = ""; var_2783_string = ""; var_2784_int = 0;
		var_2690_int = var_2781_int;
		func_529(var_2781_int, "fog", "fog.xml", (int)6);
		var_2786_bool = var_2691_int >= (int)5;
		if(var_2786_bool != 0) {
			var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0;
			var_2690_int = var_2787_int;
			func_529(var_2787_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2792_float = 0; var_2793_int = 0;
		var_2691_int = var_2793_int;
		func_1255(var_2792_float, var_2793_int);
		var_2696_int = (int)1 * var_2792_float;
		var_2794_int = var_2696_int;
		if(var_2794_int == 0) goto Label_2882;
		var_2795_int = 0; var_2796_string = ""; var_2797_string = ""; var_2798_int = 0;
		var_2690_int = var_2795_int;
		var_2696_int = var_2798_int;
		func_503(var_2795_int, "pers_bomber", "bomber.xml", var_2798_int);
	}
Label_2882:
	var_2732_int = 0; var_2733_string = ""; var_2734_string = ""; var_2735_int = 0; var_2736_int = 0; var_2737_int = 0;
	var_2690_int = var_2732_int;
	func_516(var_2732_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2738_int = 0; var_2739_string = ""; var_2740_string = ""; var_2741_int = 0; var_2742_int = 0; var_2743_int = 0;
	var_2690_int = var_2738_int;
	func_516(var_2738_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2744_int = 0; var_2745_string = ""; var_2746_string = ""; var_2747_int = 0; var_2748_int = 0; var_2749_int = 0;
	var_2690_int = var_2744_int;
	func_516(var_2744_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2750_int = 0; var_2751_string = ""; var_2752_string = ""; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0;
	var_2690_int = var_2750_int;
	func_516(var_2750_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2756_bool = 0; var_2757_int = 0; var_2758_int = 0;
	var_2691_int = var_2757_int;
	var_2692_int = var_2758_int;
	func_1345(var_2756_bool, var_2757_int, var_2758_int);
	if(var_2756_bool != 0) {
		var_2759_int = 0; var_2760_string = ""; var_2761_string = ""; var_2762_int = 0;
		var_2690_int = var_2759_int;
		func_503(var_2759_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2763_bool = 0; var_2764_int = 0;
	var_2691_int = var_2764_int;
	func_1372(var_2763_bool, var_2764_int);
	if(var_2763_bool != 0) {
		var_2765_int = 0; var_2766_string = ""; var_2767_string = ""; var_2768_int = 0;
		var_2690_int = var_2765_int;
		func_503(var_2765_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_9934(var_5300_int, var_5301_float)
{
	var_5302_int = 0; var_5303_int = 0; var_5304_int = 0; var_5305_float = 0;
	var_5301_float = var_5305_float;
	func_11409(var_5302_int, (int)530574, (int)530573, var_5305_float);
	var_5302_int = var_5300_int;
	return 0;
}


func_720(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object)
{
	var_3204_int = 0; var_3205_bool = 0;
	var_3199_int = var_3204_int;
	func_542(var_3204_int, (bool)0);
	var_3206_object = Obj();
	var_3201_object = var_3206_object;
	func_263(var_3206_object);
	var_3207_object = Obj();
	var_3202_object = var_3207_object;
	func_263(var_3207_object);
	var_3208_object = Obj();
	var_3203_object = var_3208_object;
	func_263(var_3208_object);
	var_3210_bool = var_3200_int < (int)8;
	if(var_3210_bool != 0) {
		var_3211_string = ""; var_3212_object = Obj(); var_3213_string = ""; var_3214_string = "";
		var_3217_int = var_3199_int + (int)1;
		var_3218_int = "pt_blockpost" + var_3217_int;
		var_3211_string = var_3218_int + "_1_";
		var_3201_object = var_3212_object;
		func_576(var_3211_string, var_3212_object, "pers_patrool", "patrol_stat.xml");
	} else {
		var_3220_string = ""; var_3221_object = Obj(); var_3222_string = ""; var_3223_string = "";
		var_3226_int = var_3199_int + (int)1;
		var_3227_int = "pt_blockpost" + var_3226_int;
		var_3220_string = var_3227_int + "_1_";
		var_3201_object = var_3221_object;
		func_576(var_3220_string, var_3221_object, "pers_soldat", "soldier.xml");
		var_3229_string = ""; var_3230_object = Obj(); var_3231_string = ""; var_3232_string = "";
		var_3235_int = var_3199_int + (int)1;
		var_3236_int = "pt_blockpost" + var_3235_int;
		var_3229_string = var_3236_int + "_2_";
		var_3202_object = var_3230_object;
		func_576(var_3229_string, var_3230_object, "pers_sanitar", "sanitar_stat.xml");
	}
	return 0;
	
}


func_9943(var_4849_int, var_4850_float)
{
	var_4851_int = 0; var_4852_int = 0; var_4853_int = 0; var_4854_float = 0;
	var_4850_float = var_4854_float;
	func_11409(var_4851_int, (int)530266, (int)530265, var_4854_float);
	var_4851_int = var_4849_int;
	return 0;
}


func_7901()
{
	var_4696_object = Obj();
	var_4697_object = GlobalVars[15];
	var_4697_object = var_4696_object;
	func_263(var_4696_object);
	return 0;
}


func_13021(var_265_int, var_266_int)
{
	var_269_bool = var_266_int == (int)8;
	if(var_269_bool != 0) {
		var_265_int = 11;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	var_271_bool = var_266_int == (int)9;
	if(var_271_bool != 0) {
		var_265_int = 2;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	var_273_bool = var_266_int == (int)10;
	if(var_273_bool != 0) {
		var_265_int = 7;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	var_275_bool = var_266_int == (int)11;
	if(var_275_bool != 0) {
		var_265_int = 15;
		return 0;
	}
	var_265_int = -1;
	return 0;
}


func_9952(var_4881_int, var_4882_float)
{
	var_4883_int = 0; var_4884_int = 0; var_4885_int = 0; var_4886_float = 0;
	var_4882_float = var_4886_float;
	func_11409(var_4883_int, (int)542793, (int)542792, var_4886_float);
	var_4883_int = var_4881_int;
	return 0;
}


func_6883(var_280_object)
{
	@@var_280_object:add("r7_house2_01");
	@@var_280_object:add("r7_house2_02");
	@@var_280_object:add("r7_house2_03");
	@@var_280_object:add("r7_house2_04");
	@@var_280_object:add("r7_house3_03_i2");
	@@var_280_object:add("r7_house3_03");
	@@var_280_object:add("r7_house3_04_i2");
	@@var_280_object:add("r7_house3_04");
	@@var_280_object:add("r7_house3_05_i2");
	@@var_280_object:add("r7_house3_05");
	@@var_280_object:add("r7_house3_06_i2");
	@@var_280_object:add("r7_house3_01_i2");
	@@var_280_object:add("r7_house3_01");
	@@var_280_object:add("r7_house3_02_i2");
	@@var_280_object:add("r7_house3_02");
	return 0;
}


func_7908()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj();
	var_39_object = GlobalVars[15];
	func_126(Obj());
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	func_126(Obj());
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	func_126(Obj());
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	func_126(Obj());
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	func_126(Obj());
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	var_29_int = 0;
	
Label_7940:
	var_52_bool = var_29_int < (int)16;
	if(var_52_bool != 0) {
		var_53_object = GlobalVars[8];
		var_54_object = Obj();
		func_126(var_54_object);
		@@var_53_object:add(var_54_object);
		var_55_object = GlobalVars[9];
		var_56_object = Obj();
		func_126(var_56_object);
		@@var_55_object:add(var_56_object);
		var_57_object = GlobalVars[10];
		var_58_object = Obj();
		func_126(var_58_object);
		@@var_57_object:add(var_58_object);
		var_29_int = var_29_int + (int)1;
		goto Label_7940;
	}
	CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	@@var_60_object:add(var_30_object);
	var_30_object = Obj();
	func_4385();
	CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	@@var_62_object:add(var_30_object);
	var_63_object = Obj();
	var_30_object = var_63_object;
	func_4543(var_63_object);
	CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	@@var_77_object:add(var_30_object);
	var_78_object = Obj();
	var_30_object = var_78_object;
	func_4740(var_78_object);
	CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	@@var_95_object:add(var_30_object);
	var_96_object = Obj();
	var_30_object = var_96_object;
	func_4946(var_96_object);
	CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	@@var_121_object:add(var_30_object);
	var_122_object = Obj();
	var_30_object = var_122_object;
	func_5176(var_122_object);
	CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	@@var_143_object:add(var_30_object);
	var_144_object = Obj();
	var_30_object = var_144_object;
	func_5394(var_144_object);
	CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	@@var_174_object:add(var_30_object);
	var_30_object = Obj();
	func_5639();
	CreateStringVector(var_30_object);
	var_176_object = GlobalVars[13];
	@@var_176_object:add(var_30_object);
	var_177_object = Obj();
	var_30_object = var_177_object;
	func_5662(var_177_object);
	CreateStringVector(var_30_object);
	var_192_object = GlobalVars[13];
	@@var_192_object:add(var_30_object);
	var_193_object = Obj();
	var_30_object = var_193_object;
	func_5862(var_193_object);
	CreateStringVector(var_30_object);
	var_208_object = GlobalVars[13];
	@@var_208_object:add(var_30_object);
	var_209_object = Obj();
	var_30_object = var_209_object;
	func_6062(var_209_object);
	CreateStringVector(var_30_object);
	var_225_object = GlobalVars[13];
	@@var_225_object:add(var_30_object);
	var_226_object = Obj();
	var_30_object = var_226_object;
	func_6265(var_226_object);
	CreateStringVector(var_30_object);
	var_244_object = GlobalVars[13];
	@@var_244_object:add(var_30_object);
	var_245_object = Obj();
	var_30_object = var_245_object;
	func_6474(var_245_object);
	CreateStringVector(var_30_object);
	var_264_object = GlobalVars[13];
	@@var_264_object:add(var_30_object);
	var_265_object = Obj();
	var_30_object = var_265_object;
	func_6686(var_265_object);
	CreateStringVector(var_30_object);
	var_279_object = GlobalVars[13];
	@@var_279_object:add(var_30_object);
	var_280_object = Obj();
	var_30_object = var_280_object;
	func_6883(var_280_object);
	CreateStringVector(var_30_object);
	var_296_object = GlobalVars[13];
	@@var_296_object:add(var_30_object);
	var_297_object = Obj();
	var_30_object = var_297_object;
	func_7086(var_297_object);
	CreateStringVector(var_30_object);
	var_312_object = GlobalVars[13];
	@@var_312_object:add(var_30_object);
	var_313_object = Obj();
	var_30_object = var_313_object;
	func_7286(var_313_object);
	func_7878();
	GetMainOutdoorScene(var_31_object);
	var_349_object = GlobalVars[6];
	func_126(Obj());
	var_350_object = var_349_object;
	GlobalVars[6] = var_349_object;
	var_32_int = 0;
	
Label_8120:
	var_353_int = var_32_int + (int)1;
	var_354_int = "pt_plant" + var_353_int;
	@@var_31_object:GetLocator(var_354_int, var_33_bool);
	var_355_bool = var_33_bool == 0; //@nz
	if(var_355_bool != 0) {
	} else {
				var_32_int = var_32_int + (int)1;
				goto Label_8120;
	}
	var_356_object = GlobalVars[6];
	@@var_356_object:resize(var_32_int);
	var_358_int = "Total plants: " + var_32_int;
	Trace(var_358_int);
	var_359_object = GlobalVars[7];
	func_126(Obj());
	var_360_object = var_359_object;
	GlobalVars[7] = var_359_object;
	var_34_int = 0;
	
Label_8146:
	var_363_int = var_34_int + (int)1;
	var_364_int = "pt_grave_supply" + var_363_int;
	@@var_31_object:GetLocator(var_364_int, var_35_bool);
	var_365_bool = var_35_bool == 0; //@nz
	if(var_365_bool != 0) {
	} else {
			var_34_int = var_34_int + (int)1;
			goto Label_8146;

	}
	var_366_object = GlobalVars[7];
	@@var_366_object:resize(var_34_int);
	var_368_int = "Total grave supplies: " + var_34_int;
	Trace(var_368_int);
	var_369_object = GlobalVars[14];
	func_126(Obj());
	var_370_object = var_369_object;
	GlobalVars[14] = var_369_object;
	
Label_8172:
	var_373_int = (int)0 + (int)1;
	var_374_int = "pt_bonfire" + var_373_int;
	@@var_31_object:GetLocator(var_374_int, var_37_bool);
	var_375_bool = var_37_bool == 0; //@nz
	if(var_375_bool != 0) {
	} else {
		var_378_object = GlobalVars[14];
		@@var_378_object:add(Obj());
		var_379_int = 0;
		var_36_int = var_379_int;
		func_7685(var_379_int);
		var_38_object = 0;
		var_36_int = var_36_int + (int)1;
		goto Label_8172;

	}
	var_377_int = "Total bonfires: " + var_36_int;
	Trace(var_377_int);
	return 20;
	
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_5862(var_193_object)
{
	@@var_193_object:add("r2_house_2_01");
	@@var_193_object:add("r2_house_2_02");
	@@var_193_object:add("r2_house_2_03");
	@@var_193_object:add("r2_house7_02");
	@@var_193_object:add("r2_house01_01");
	@@var_193_object:add("r2_house7_01");
	@@var_193_object:add("r2_house3_01_i2");
	@@var_193_object:add("r2_house3_01");
	@@var_193_object:add("r2_house3_02_i2");
	@@var_193_object:add("r2_house3_02");
	@@var_193_object:add("r2_house3_03_i2");
	@@var_193_object:add("r2_house3_03");
	@@var_193_object:add("r3_house7_01");
	@@var_193_object:add("r3_house7_02");
	return 0;
}


func_10982()
{
	var_4700_string = ""; var_4701_bool = 0;
	func_177("cot_georg@door1", (bool)0);
	var_4710_string = ""; var_4711_bool = 0;
	func_177("cot_georg@door2", (bool)0);
	return 0;
}


func_9961(var_5347_int, var_5348_float)
{
	var_5349_int = 0; var_5350_int = 0; var_5351_int = 0; var_5352_float = 0;
	var_5348_float = var_5352_float;
	func_11409(var_5349_int, (int)538944, (int)538943, var_5352_float);
	var_5349_int = var_5347_int;
	return 0;
}


func_4842(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object)
{
	var_2414_bool = var_2408_int == (int)0;
	if(var_2414_bool != 0) {
		var_2415_int = 0; var_2416_bool = 0;
		func_796((int)2, (bool)1);
		var_2417_int = 0; var_2418_bool = 0; var_2419_int = 0;
		func_813((int)2, (bool)1, (int)1);
		var_2420_int = 0; var_2421_int = 0; var_2422_object = Obj(); var_2423_object = Obj(); var_2424_object = Obj();
		var_2407_int = var_2421_int;
		var_2409_object = var_2422_object;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		func_641((int)2, var_2421_int, var_2422_object, var_2423_object, var_2424_object);
		var_2425_object = Obj(); var_2426_int = 0;
		var_2412_object = var_2425_object;
		func_305(var_2425_object, (int)1);
		var_2427_int = 0; var_2428_bool = 0; var_2429_int = 0;
		func_870((int)2, (bool)1, (int)5);
		var_2430_int = 0; var_2431_bool = 0; var_2432_int = 0;
		func_932((int)2, (bool)0, (int)5);
	}
	var_2433_int = 0; var_2434_bool = 0;
	func_779((int)2, (bool)0);
	var_2435_int = 0; var_2436_int = 0; var_2437_int = 0;
	var_2407_int = var_2436_int;
	var_2408_int = var_2437_int;
	func_2944((int)2, var_2436_int, var_2437_int);
	return 0;
}


func_9970(var_5216_int, var_5217_float)
{
	var_5218_int = 0; var_5219_int = 0; var_5220_int = 0; var_5221_float = 0;
	var_5217_float = var_5221_float;
	func_11409(var_5218_int, (int)538946, (int)538945, var_5221_float);
	var_5218_int = var_5216_int;
	return 0;
}


func_10994(var_5859_object)
{
	var_5863_bool = 0; var_5864_object = Obj(); var_5865_float = 0;
	var_5859_object = var_5864_object;
	func_194(var_5863_bool, var_5864_object, (float)-0.10000000149011612);
	return 0;
}


func_8948()
{
	var_417_float = 0; var_418_int = 0; var_419_int = 0; var_420_float = 0; var_421_int = 0; var_422_object = Obj(); var_423_object = Obj(); var_424_float = 0; var_425_int = 0; var_426_int = 0; var_427_float = 0; var_428_int = 0; var_429_object = Obj(); var_430_object = Obj();
	GetGameTime(var_424_float);
	var_425_int = 1;
	
Label_8952:
	var_432_bool = var_425_int < (int)12;
	if(var_432_bool != 0) {
		var_434_int = (int)16384 + var_425_int;
		var_436_float = (int)24 * var_425_int;
		SetTimeEvent(var_434_int, var_436_float);
		var_425_int = var_425_int + (int)1;
		goto Label_8952;
	}
	
Label_8965:
	var_439_bool = (int)0 < (int)288;
	if(var_439_bool != 0) {
		var_426_int = var_427_float;
		var_440_bool = var_427_float < var_424_float;
		if(var_440_bool != 0) {
		} else {
			var_443_int = (int)32768 + var_426_int;
			SetTimeEvent(var_443_int, var_427_float);
	}

	Label_8980:
		var_445_bool = (int)0 < (int)16;
		if(var_445_bool != 0) {
			var_446_string = ""; var_447_int = 0;
			var_428_int = var_447_int;
			func_299(var_446_string, var_447_int);
			SetVariable(var_446_string, (int)0);
			var_452_int = 0; var_453_bool = 0;
			var_428_int = var_452_int;
			func_796(var_452_int, (bool)0);
			var_428_int = var_428_int + (int)1;
			goto Label_8980;
		}
		var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_int = 0;
		var_465_int = var_424_float % (int)24;
		var_467_int = var_424_float % (int)24;
		func_9031((int)0, var_465_int, (int)0, var_467_int);
		FindActor(var_429_object, "dt_house_1_07");
		@@var_429_object:EnableSubset((int)200, (bool)0);
		GetMainOutdoorScene(var_430_object);
		var_4404_bool = 0;
		var_4404_bool = 1;
		var_4406_bool = var_424_float < (int)7;
		if(var_4406_bool != 1) {
			var_4408_bool = var_424_float >= (int)20;
			if(var_4408_bool != 1) {
				var_4404_bool = 0;
			}
		}
		@@var_430_object:SwitchLights((int)0, var_4404_bool);
		var_426_int = var_426_int + (int)1;
		goto Label_8965;
	}
	return 14;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_13047(var_4336_string, var_4337_int)
{
	var_4340_bool = var_4337_int == (int)8;
	if(var_4340_bool != 0) {
		var_4336_string = "house5_unoin_solidl";
		return 0;
	EMIT "GOTO 0x330f";
	}
	var_4342_bool = var_4337_int == (int)9;
	if(var_4342_bool != 0) {
		var_4336_string = "r4_house4_02_i2";
		return 0;
	EMIT "GOTO 0x330f";
	}
	var_4344_bool = var_4337_int == (int)10;
	if(var_4344_bool != 0) {
		var_4336_string = "dt_house1_union2_01r";
		return 0;
	EMIT "GOTO 0x330f";
	}
	var_4346_bool = var_4337_int == (int)11;
	if(var_4346_bool != 0) {
		var_4336_string = "dt_house_1_03";
		return 0;
	}
	var_4336_string = "";
	return 0;
}


func_11001()
{
	var_4722_string = ""; var_4723_bool = 0;
	func_177("termitnik@door1", (bool)1);
	return 0;
}


func_9979(var_5249_int, var_5250_float)
{
	var_5251_int = 0; var_5252_int = 0; var_5253_int = 0; var_5254_float = 0;
	var_5250_float = var_5254_float;
	func_11409(var_5251_int, (int)538954, (int)538953, var_5254_float);
	var_5251_int = var_5249_int;
	return 0;
}


func_11008()
{
	SetVariable("resque_list", (int)1);
	func_12899();
	return 0;
}


func_9988(var_5398_int, var_5399_float)
{
	var_5400_int = 0; var_5401_int = 0; var_5402_int = 0; var_5403_float = 0;
	var_5399_float = var_5403_float;
	func_11409(var_5400_int, (int)538948, (int)538947, var_5403_float);
	var_5400_int = var_5398_int;
	return 0;
}


func_3847(var_3564_int, var_3565_int, var_3566_int)
{
	var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0;
	var_3575_bool = 0;
	var_3575_bool = 0;
	var_3577_bool = var_3566_int > (int)8;
	if(var_3577_bool != 0) {
		var_3579_bool = var_3566_int < (int)21;
		if(var_3579_bool != 0) {
			var_3575_bool = 1;
		}
	}
	if(var_3575_bool != 0) {
		var_3580_int = 0; var_3581_string = ""; var_3582_string = ""; var_3583_int = 0;
		var_3564_int = var_3580_int;
		func_503(var_3580_int, "pers_rat", "rat.xml", (int)2);
		var_3584_int = 0; var_3585_string = ""; var_3586_string = ""; var_3587_int = 0;
		var_3564_int = var_3584_int;
		func_503(var_3584_int, "pers_alkash", "alkash.xml", (int)2);
		var_3588_int = 0; var_3589_string = ""; var_3590_string = ""; var_3591_int = 0;
		var_3564_int = var_3588_int;
		func_503(var_3588_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3593_float = 0; var_3594_int = 0;
		var_3565_int = var_3594_int;
		func_1165(var_3593_float, var_3594_int);
		var_3571_int = (int)2 * var_3593_float;
		var_3595_int = var_3571_int;
		if(var_3595_int != 0) {
			var_3596_int = 0; var_3597_string = ""; var_3598_string = ""; var_3599_int = 0;
			var_3564_int = var_3596_int;
			var_3571_int = var_3599_int;
			func_503(var_3596_int, "pers_grabitel", "grabitel.xml", var_3599_int);
		}
		var_3601_int = var_3565_int + (int)1;
		var_3603_bool = var_3601_int >= (int)2;
		if(var_3603_bool != 0) {
			var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0;
			var_3564_int = var_3604_int;
			func_503(var_3604_int, "pers_patrool", "patrol.xml", (int)2);
			var_3608_bool = 0; var_3609_int = 0;
			var_3565_int = var_3609_int;
			func_1372(var_3608_bool, var_3609_int);
			if(var_3608_bool != 0) {
				var_3610_int = 0; var_3611_string = ""; var_3612_string = ""; var_3613_int = 0;
				var_3564_int = var_3610_int;
				func_503(var_3610_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3615_float = 0; var_3616_int = 0;
		var_3565_int = var_3616_int;
		func_1255(var_3615_float, var_3616_int);
		var_3572_int = (int)1 * var_3615_float;
		var_3617_int = var_3572_int;
		if(var_3617_int != 0) {
			var_3618_int = 0; var_3619_string = ""; var_3620_string = ""; var_3621_int = 0;
			var_3564_int = var_3618_int;
			var_3572_int = var_3621_int;
			func_503(var_3618_int, "pers_bomber", "bomber.xml", var_3621_int);
		}
	} else {
		var_3635_int = 0; var_3636_string = ""; var_3637_string = ""; var_3638_int = 0;
		var_3564_int = var_3635_int;
		func_503(var_3635_int, "pers_rat", "rat.xml", (int)4);
		var_3639_int = 0; var_3640_string = ""; var_3641_string = ""; var_3642_int = 0;
		var_3564_int = var_3639_int;
		func_503(var_3639_int, "pers_alkash", "alkash.xml", (int)1);
		var_3643_int = 0; var_3644_string = ""; var_3645_string = ""; var_3646_int = 0;
		var_3564_int = var_3643_int;
		func_503(var_3643_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3648_float = 0; var_3649_int = 0;
		var_3565_int = var_3649_int;
		func_1165(var_3648_float, var_3649_int);
		var_3573_int = (int)3 * var_3648_float;
		var_3650_int = var_3573_int;
		if(var_3650_int != 0) {
			var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0;
			var_3564_int = var_3651_int;
			var_3573_int = var_3654_int;
			func_503(var_3651_int, "pers_grabitel", "grabitel.xml", var_3654_int);
		}
		var_3656_int = var_3565_int + (int)1;
		var_3658_bool = var_3656_int >= (int)2;
		if(var_3658_bool != 0) {
			var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0;
			var_3564_int = var_3659_int;
			func_503(var_3659_int, "pers_patrool", "patrol.xml", (int)1);
			var_3663_bool = 0; var_3664_int = 0;
			var_3565_int = var_3664_int;
			func_1372(var_3663_bool, var_3664_int);
			if(var_3663_bool != 0) {
				var_3665_int = 0; var_3666_string = ""; var_3667_string = ""; var_3668_int = 0;
				var_3564_int = var_3665_int;
				func_503(var_3665_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3670_float = 0; var_3671_int = 0;
		var_3565_int = var_3671_int;
		func_1255(var_3670_float, var_3671_int);
		var_3574_int = (int)1 * var_3670_float;
		var_3672_int = var_3574_int;
		if(var_3672_int == 0) goto Label_4009;
		var_3673_int = 0; var_3674_string = ""; var_3675_string = ""; var_3676_int = 0;
		var_3564_int = var_3673_int;
		var_3574_int = var_3676_int;
		func_503(var_3673_int, "pers_bomber", "bomber.xml", var_3676_int);
	}
Label_4009:
	var_3622_bool = 0; var_3623_int = 0; var_3624_int = 0;
	var_3565_int = var_3623_int;
	var_3566_int = var_3624_int;
	func_1345(var_3622_bool, var_3623_int, var_3624_int);
	if(var_3622_bool != 0) {
		var_3625_int = 0; var_3626_string = ""; var_3627_string = ""; var_3628_int = 0;
		var_3564_int = var_3625_int;
		func_503(var_3625_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3629_bool = 0; var_3630_int = 0;
	var_3565_int = var_3630_int;
	func_1372(var_3629_bool, var_3630_int);
	if(var_3629_bool != 0) {
		var_3631_int = 0; var_3632_string = ""; var_3633_string = ""; var_3634_int = 0;
		var_3564_int = var_3631_int;
		func_503(var_3631_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_11017()
{
	var_4746_string = ""; var_4747_bool = 0;
	func_177("mnogogrannik@door1", (bool)1);
	return 0;
}


func_779(var_737_int, var_738_bool)
{
	var_739_object = Obj(); var_740_int = 0; var_741_object = Obj(); var_742_int = 0;
	GetMainOutdoorScene(var_741_object);
	var_743_bool = var_741_object == 0; //@ne
	if(var_743_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_742_int = var_737_int + (int)1;
	@@var_741_object:EnableSubsets(var_742_int, (int)100, var_738_bool, (bool)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_9997(var_5185_int, var_5186_float)
{
	var_5187_int = 0; var_5188_int = 0; var_5189_int = 0; var_5190_float = 0;
	var_5186_float = var_5190_float;
	func_11409(var_5187_int, (int)538950, (int)538949, var_5190_float);
	var_5187_int = var_5185_int;
	return 0;
}


func_11024(var_4873_bool)
{
	var_4876_int = 0; var_4877_string = "";
	func_132(var_4876_int, "k12DankoVisit");
	var_4879_bool = var_4876_int != (int)0;
	if(var_4879_bool != 0) {
		var_4873_bool = 1;
		return 0;
	}
	var_4873_bool = 0;
	return 0;
}


func_13073(var_4351_string, var_4352_int)
{
	var_4355_bool = var_4352_int == (int)8;
	if(var_4355_bool != 0) {
		var_4351_string = "r5_House6_01";
		return 0;
	EMIT "GOTO 0x3329";
	}
	var_4357_bool = var_4352_int == (int)9;
	if(var_4357_bool != 0) {
		var_4351_string = "dt_house2_01";
		return 0;
	EMIT "GOTO 0x3329";
	}
	var_4359_bool = var_4352_int == (int)10;
	if(var_4359_bool != 0) {
		var_4351_string = "house7_02";
		return 0;
	EMIT "GOTO 0x3329";
	}
	var_4361_bool = var_4352_int == (int)11;
	if(var_4361_bool != 0) {
		var_4351_string = "lc_house3_05";
		return 0;
	}
	var_4351_string = "";
	return 0;
}


func_5906(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object)
{
	var_1578_bool = var_1572_int == (int)0;
	if(var_1578_bool != 0) {
		var_1579_int = 0; var_1580_bool = 0;
		func_796((int)8, (bool)0);
		var_1581_int = 0; var_1582_bool = 0; var_1583_int = 0;
		func_813((int)8, (bool)0, (int)1);
		var_1584_int = 0; var_1585_int = 0; var_1586_object = Obj(); var_1587_object = Obj(); var_1588_object = Obj();
		var_1584_int = 8;
		var_1571_int = var_1585_int;
		var_1573_object = var_1586_object;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		func_622(var_1585_int, var_1586_object, var_1587_object, var_1588_object);
		var_1589_object = Obj(); var_1590_int = 0;
		var_1576_object = var_1589_object;
		func_305(var_1589_object, (int)0);
		var_1591_int = 0; var_1592_bool = 0; var_1593_int = 0;
		func_870((int)8, (bool)0, (int)4);
		var_1594_int = 0; var_1595_bool = 0; var_1596_int = 0;
		func_932((int)8, (bool)0, (int)4);
	}
	var_1597_int = 0; var_1598_int = 0;
	var_1572_int = var_1598_int;
	func_983((int)8, var_1598_int);
	var_1599_int = 0; var_1600_int = 0; var_1601_int = 0;
	var_1571_int = var_1600_int;
	var_1572_int = var_1601_int;
	func_1624((int)8, var_1600_int, var_1601_int);
	return 0;
}


func_6930(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object)
{
	var_1743_bool = var_1737_int == (int)0;
	if(var_1743_bool != 0) {
		var_1744_int = 0; var_1745_bool = 0;
		func_796((int)13, (bool)0);
		var_1746_int = 0; var_1747_bool = 0; var_1748_int = 0;
		func_813((int)13, (bool)0, (int)1);
		var_1749_int = 0; var_1750_int = 0; var_1751_object = Obj(); var_1752_object = Obj(); var_1753_object = Obj();
		var_1749_int = 13;
		var_1736_int = var_1750_int;
		var_1738_object = var_1751_object;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		func_622(var_1750_int, var_1751_object, var_1752_object, var_1753_object);
		var_1754_object = Obj(); var_1755_int = 0;
		var_1741_object = var_1754_object;
		func_305(var_1754_object, (int)0);
		var_1756_int = 0; var_1757_bool = 0; var_1758_int = 0;
		func_870((int)13, (bool)0, (int)4);
		var_1759_int = 0; var_1760_bool = 0; var_1761_int = 0;
		func_932((int)13, (bool)0, (int)4);
	}
	var_1762_int = 0; var_1763_int = 0;
	var_1737_int = var_1763_int;
	func_1050((int)13, var_1763_int);
	var_1764_int = 0; var_1765_int = 0; var_1766_int = 0;
	var_1736_int = var_1765_int;
	var_1737_int = var_1766_int;
	func_1624((int)13, var_1765_int, var_1766_int);
	return 0;
}


func_10006(var_5149_int, var_5150_float)
{
	var_5151_int = 0; var_5152_int = 0; var_5153_int = 0; var_5154_float = 0;
	var_5150_float = var_5154_float;
	func_11409(var_5151_int, (int)530678, (int)530677, var_5154_float);
	var_5151_int = var_5149_int;
	return 0;
}


func_796(var_452_int, var_453_bool)
{
	var_454_object = Obj(); var_455_int = 0; var_456_object = Obj(); var_457_int = 0;
	GetMainOutdoorScene(var_456_object);
	var_458_bool = var_456_object == 0; //@ne
	if(var_458_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_457_int = var_452_int + (int)1;
	@@var_456_object:EnableSubsets(var_457_int, (int)200, var_453_bool, (bool)0);
	return 4;
}
EMIT "Stack[-2] = 0";


func_11036(var_5852_bool)
{
	var_5855_int = 0; var_5856_string = "";
	func_132(var_5855_int, "k3q04SendBurahMail");
	var_5858_bool = var_5855_int != (int)0;
	if(var_5858_bool != 0) {
		var_5852_bool = 1;
		return 0;
	}
	var_5852_bool = 0;
	return 0;
}


func_4894(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object)
{
	var_3543_bool = var_3537_int == (int)0;
	if(var_3543_bool != 0) {
		var_3544_int = 0; var_3545_bool = 0;
		func_796((int)2, (bool)0);
		var_3546_int = 0; var_3547_bool = 0; var_3548_int = 0;
		func_813((int)2, (bool)0, (int)1);
		var_3549_int = 0; var_3550_int = 0; var_3551_object = Obj(); var_3552_object = Obj(); var_3553_object = Obj();
		var_3536_int = var_3550_int;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		func_720((int)2, var_3550_int, var_3551_object, var_3552_object, var_3553_object);
		var_3554_object = Obj(); var_3555_int = 0;
		var_3541_object = var_3554_object;
		func_305(var_3554_object, (int)2);
		var_3556_int = 0; var_3557_bool = 0; var_3558_int = 0;
		func_870((int)2, (bool)0, (int)5);
		var_3559_int = 0; var_3560_bool = 0; var_3561_int = 0;
		func_932((int)2, (bool)1, (int)5);
	}
	var_3562_int = 0; var_3563_bool = 0;
	func_779((int)2, (bool)0);
	var_3564_int = 0; var_3565_int = 0; var_3566_int = 0;
	var_3536_int = var_3565_int;
	var_3537_int = var_3566_int;
	func_3847((int)2, var_3565_int, var_3566_int);
	return 0;
}


func_10015(var_4936_int, var_4937_float)
{
	var_4938_int = 0; var_4939_int = 0; var_4940_int = 0; var_4941_float = 0;
	var_4937_float = var_4941_float;
	func_11409(var_4938_int, (int)530680, (int)530679, var_4941_float);
	var_4938_int = var_4936_int;
	return 0;
}


func_10024(var_5224_int, var_5225_float)
{
	var_5226_int = 0; var_5227_int = 0; var_5228_int = 0; var_5229_float = 0;
	var_5225_float = var_5229_float;
	func_11409(var_5226_int, (int)538956, (int)538955, var_5229_float);
	var_5226_int = var_5224_int;
	return 0;
}


func_11048(var_5598_bool)
{
	var_5601_int = 0; var_5602_string = "";
	func_132(var_5601_int, "k10q01KnowAboutRubin");
	var_5604_bool = var_5601_int != (int)0;
	if(var_5604_bool != 0) {
		var_5598_bool = 1;
		return 0;
	}
	var_5598_bool = 0;
	return 0;
}


func_13099()
{
	var_4571_int = 0; var_4572_int = 0;
	var_4572_int = 1;
	
Label_13101:
	var_4574_bool = var_4572_int <= (int)12;
	if(var_4574_bool != 0) {
		var_4576_int = "RMap" + var_4572_int;
		SetVariable(var_4576_int, (int)1);
		var_4572_int = var_4572_int + (int)1;
		goto Label_13101;
	}
	return 2;
}


func_813(var_528_int, var_529_bool, var_530_int)
{
	var_531_string = ""; var_532_object = Obj(); var_533_int = 0; var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_string = ""; var_542_object = Obj(); var_543_int = 0; var_544_object = Obj();
	var_547_int = var_528_int + (int)1;
	var_538_string = "street_rags" + var_547_int;
	var_548_bool = var_529_bool;
	if(var_548_bool != 0) {
		GetMainOutdoorScene(var_539_object);
		var_549_bool = var_539_object == 0; //@ne
		if(var_549_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_540_int = 1;

	Label_829:
		var_551_bool = var_540_int <= var_530_int;
		if(var_551_bool != 0) {
			var_553_int = var_538_string + "_";
			var_541_string = var_553_int + var_540_int;
			FindActor(var_542_object, var_541_string);
			var_554_bool = var_542_object == 0; //@nz
			if(var_554_bool != 0) {
				AddActor(var_542_object, var_541_string, var_539_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "do_invis.xml");
			} else {
				@@var_542_object:RemoveOnUnload((bool)0);
		}
			var_539_object = 0;
	} else {
			var_543_int = 1;

		Label_854:
			var_560_bool = var_543_int <= var_530_int;
			if(var_560_bool == 0) goto Label_869;
			var_562_int = var_538_string + "_";
			var_563_int = var_562_int + var_543_int;
			FindActor(var_544_object, var_563_int);
			var_564_object = var_544_object;
			if(var_564_object != 0) {
				@@var_544_object:RemoveOnUnload();
			}
			var_544_object = 0;
			var_543_int = var_543_int + (int)1;
			goto Label_854;
	}
	Label_869:
		return 14;

	}
	var_542_object = 0;
	var_540_int = var_540_int + (int)1;
	goto Label_829;
	
}


func_10033(var_5414_int, var_5415_float)
{
	var_5416_int = 0; var_5417_int = 0; var_5418_int = 0; var_5419_float = 0;
	var_5415_float = var_5419_float;
	func_11409(var_5416_int, (int)538402, (int)538401, var_5419_float);
	var_5416_int = var_5414_int;
	return 0;
}


func_11060(var_5086_bool)
{
	var_5089_int = 0; var_5090_string = "";
	func_132(var_5089_int, "resque_list");
	var_5092_bool = var_5089_int != (int)0;
	if(var_5092_bool != 0) {
		var_5086_bool = 1;
		return 0;
	}
	var_5086_bool = 0;
	return 0;
}


func_13113(var_158_bool, var_159_int, var_160_int)
{
	var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_int = 0;
	var_166_bool = var_159_int == (int)6;
	if(var_166_bool != 0) {
		var_158_bool = 0;
		return 4;
	}
	var_168_bool = var_160_int == (int)4;
	if(var_168_bool != 0) {
		var_170_bool = var_159_int == (int)15;
		if(var_170_bool != 0) {
			var_158_bool = 0;
			return 4;
		}
		var_172_bool = var_159_int == (int)9;
		if(var_172_bool != 0) {
			var_158_bool = 0;
			return 4;
		}
	} else {
		var_214_bool = var_160_int == (int)5;
		if(var_214_bool != 0) {
			var_216_bool = var_159_int == (int)15;
			if(var_216_bool != 0) {
				var_158_bool = 0;
				return 4;
			}
			goto Label_13150;
		}
		var_218_bool = var_160_int == (int)6;
		if(var_218_bool == 0) goto Label_13150;
		var_220_bool = var_159_int == (int)15;
		if(var_220_bool == 0) goto Label_13150;
		var_158_bool = 0;
		return 4;
	}
Label_13150:
	var_173_bool = 0;
	var_173_bool = 0;
	var_175_bool = var_160_int > (int)4;
	if(var_175_bool != 0) {
		var_177_bool = var_160_int < (int)6;
		if(var_177_bool != 0) {
			var_173_bool = 1;
		}
	}
	if(var_173_bool != 0) {
		var_178_int = 0; var_179_int = 0;
		func_12957(var_178_int, (int)6);
		var_178_int = var_163_int;
		var_192_bool = var_163_int == var_159_int;
		if(var_192_bool != 0) {
			var_158_bool = 0;
			return 4;
		}
	}
	var_193_bool = 0;
	var_193_bool = 0;
	var_195_bool = var_160_int > (int)3;
	if(var_195_bool != 0) {
		var_197_bool = var_160_int < (int)6;
		if(var_197_bool != 0) {
			var_193_bool = 1;
		}
	}
	if(var_193_bool != 0) {
		var_198_int = 0; var_199_int = 0;
		func_12911(var_198_int, (int)6);
		var_198_int = var_164_int;
		var_212_bool = var_164_int == var_159_int;
		if(var_212_bool != 0) {
			var_158_bool = 0;
			return 4;
		}
	}
	var_158_bool = 1;
	return 4;
	
}


func_10042(var_5308_int, var_5309_float)
{
	var_5310_int = 0; var_5311_int = 0; var_5312_int = 0; var_5313_float = 0;
	var_5309_float = var_5313_float;
	func_11409(var_5310_int, (int)539490, (int)539489, var_5313_float);
	var_5310_int = var_5308_int;
	return 0;
}


func_11072(var_5460_bool)
{
	var_5463_int = 0; var_5464_string = "";
	func_132(var_5463_int, "k2AlexandrVisit");
	var_5466_bool = var_5463_int != (int)0;
	if(var_5466_bool != 0) {
		var_5460_bool = 1;
		return 0;
	}
	var_5460_bool = 0;
	return 0;
}


func_10051(var_5895_int, var_5896_float)
{
	var_5897_int = 0; var_5898_int = 0; var_5899_int = 0; var_5900_float = 0;
	var_5896_float = var_5900_float;
	func_11409(var_5897_int, (int)525653, (int)525652, var_5900_float);
	var_5897_int = var_5895_int;
	return 0;
}


func_5958(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object)
{
	var_2808_bool = var_2802_int == (int)0;
	if(var_2808_bool != 0) {
		var_2809_int = 0; var_2810_bool = 0;
		func_796((int)8, (bool)1);
		var_2811_int = 0; var_2812_bool = 0; var_2813_int = 0;
		func_813((int)8, (bool)1, (int)1);
		var_2814_int = 0; var_2815_int = 0; var_2816_object = Obj(); var_2817_object = Obj(); var_2818_object = Obj();
		var_2801_int = var_2815_int;
		var_2803_object = var_2816_object;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		func_641((int)8, var_2815_int, var_2816_object, var_2817_object, var_2818_object);
		var_2819_object = Obj(); var_2820_int = 0;
		var_2806_object = var_2819_object;
		func_305(var_2819_object, (int)1);
		var_2821_int = 0; var_2822_bool = 0; var_2823_int = 0;
		func_870((int)8, (bool)1, (int)4);
		var_2824_int = 0; var_2825_bool = 0; var_2826_int = 0;
		func_932((int)8, (bool)0, (int)4);
	}
	var_2827_int = 0; var_2828_bool = 0;
	func_779((int)8, (bool)0);
	var_2829_int = 0; var_2830_int = 0; var_2831_int = 0;
	var_2801_int = var_2830_int;
	var_2802_int = var_2831_int;
	func_2764((int)8, var_2830_int, var_2831_int);
	return 0;
}


func_9031(var_464_int, var_465_int, var_466_int, var_467_int)
{
	var_470_int = 0; var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj();
	Trace("City update");
	var_481_bool = 0;
	var_481_bool = 0;
	var_482_bool = var_464_int == var_466_int;
	if(var_482_bool != 0) {
		var_483_bool = var_465_int == var_467_int;
		if(var_483_bool != 0) {
			var_481_bool = 1;
		}
	}
	if(var_481_bool != 0) {
		PlaySound("kolokol");
	}
	
Label_9047:
	var_486_bool = (int)0 < (int)16;
	if(var_486_bool != 0) {
		var_487_int = 0;
		var_475_int = var_487_int;
		func_490(var_487_int);
		var_492_bool = 0; var_493_int = 0;
		var_475_int = var_493_int;
		func_400(var_492_bool, var_493_int);
		if(var_492_bool != 0) {
			var_501_int = 0; var_502_int = 0; var_503_int = 0;
			var_475_int = var_501_int;
			var_464_int = var_502_int;
			var_465_int = var_503_int;
			func_9151(var_501_int, var_502_int, var_503_int);
		} else {
			var_1979_bool = 0; var_1980_int = 0;
			var_475_int = var_1980_int;
			func_430(var_1979_bool, var_1980_int);
			if(var_1979_bool != 0) {
				var_1988_int = 0; var_1989_int = 0; var_1990_int = 0;
				var_475_int = var_1988_int;
				var_464_int = var_1989_int;
				var_465_int = var_1990_int;
				func_9376(var_1988_int, var_1989_int, var_1990_int);
				goto Label_9084;
			}
			var_3169_int = 0; var_3170_int = 0; var_3171_int = 0;
			var_475_int = var_3169_int;
			var_464_int = var_3170_int;
			var_465_int = var_3171_int;
			func_9601(var_3169_int, var_3170_int, var_3171_int);
	}
		var_4304_bool = var_465_int == (int)0;
		if(var_4304_bool != 0) {
			var_4305_int = 0;
			var_464_int = var_4305_int;
			func_13574(var_4305_int);
			var_4379_bool = 0;
			var_4379_bool = 1;
			var_4381_bool = var_464_int == (int)1;
			if(var_4381_bool != 1) {
				var_4382_bool = 0; var_4383_int = 0;
				func_430(var_4382_bool, (int)5);
				if(var_4382_bool != 1) {
					var_4379_bool = 0;
				}
			}
			if(var_4379_bool != 0) {
				FindActor(var_476_object, "dt_house_1_07");
				@@var_476_object:EnableSubset((int)200, (bool)1);
				var_476_object = 0;
			} else {
					FindActor(var_477_object, "dt_house_1_07");
					@@var_477_object:EnableSubset((int)200, (bool)0);
					var_477_object = 0;
			}
		}
		var_4388_bool = var_465_int == (int)7;
		if(var_4388_bool != 0) {
			Trace("day time");
			GetMainOutdoorScene(var_478_object);
			@@var_478_object:SwitchLights((int)0, (bool)0);
			var_478_object = 0;
		} else {
			var_4393_bool = var_465_int == (int)20;
			if(var_4393_bool == 0) goto Label_9150;
			Trace("night time");
			GetMainOutdoorScene(var_479_object);
			@@var_479_object:SwitchLights((int)0, (bool)1);
			var_479_object = 0;

		}
	Label_9150:
		var_475_int = var_475_int + (int)1;
		goto Label_9047;
	}
	return 10;
	
}


func_6982(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object)
{
	var_2973_bool = var_2967_int == (int)0;
	if(var_2973_bool != 0) {
		var_2974_int = 0; var_2975_bool = 0;
		func_796((int)13, (bool)1);
		var_2976_int = 0; var_2977_bool = 0; var_2978_int = 0;
		func_813((int)13, (bool)1, (int)1);
		var_2979_int = 0; var_2980_int = 0; var_2981_object = Obj(); var_2982_object = Obj(); var_2983_object = Obj();
		var_2966_int = var_2980_int;
		var_2968_object = var_2981_object;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		func_641((int)13, var_2980_int, var_2981_object, var_2982_object, var_2983_object);
		var_2984_object = Obj(); var_2985_int = 0;
		var_2971_object = var_2984_object;
		func_305(var_2984_object, (int)1);
		var_2986_int = 0; var_2987_bool = 0; var_2988_int = 0;
		func_870((int)13, (bool)1, (int)4);
		var_2989_int = 0; var_2990_bool = 0; var_2991_int = 0;
		func_932((int)13, (bool)0, (int)4);
	}
	var_2992_int = 0; var_2993_bool = 0;
	func_779((int)13, (bool)0);
	var_2994_int = 0; var_2995_int = 0; var_2996_int = 0;
	var_2966_int = var_2995_int;
	var_2967_int = var_2996_int;
	func_2764((int)13, var_2995_int, var_2996_int);
	return 0;
}


func_11084(var_5157_bool)
{
	var_5160_int = 0; var_5161_string = "";
	func_132(var_5160_int, "k2LaraVisit");
	var_5163_bool = var_5160_int != (int)0;
	if(var_5163_bool != 0) {
		var_5157_bool = 1;
		return 0;
	}
	var_5157_bool = 0;
	return 0;
}


func_10060(var_5406_int, var_5407_float)
{
	var_5408_int = 0; var_5409_int = 0; var_5410_int = 0; var_5411_float = 0;
	var_5407_float = var_5411_float;
	func_11409(var_5408_int, (int)538962, (int)538961, var_5411_float);
	var_5408_int = var_5406_int;
	return 0;
}


func_4946(var_96_object)
{
	@@var_96_object:add("house5_02");
	@@var_96_object:add("dt_house1_union2_03l");
	@@var_96_object:add("dt_house1_union2_03r");
	@@var_96_object:add("dt_house1_union2_01l");
	@@var_96_object:add("dt_house1_union2_01r");
	@@var_96_object:add("house5_unoinl");
	@@var_96_object:add("house5_unoinr");
	@@var_96_object:add("dt_house_1_01");
	@@var_96_object:add("house5_05");
	@@var_96_object:add("house5_06");
	@@var_96_object:add("dt_house_1_02");
	@@var_96_object:add("house5_unoin_solid01l");
	@@var_96_object:add("house5_unoin_solid01r");
	@@var_96_object:add("house5_03");
	@@var_96_object:add("house5_04");
	@@var_96_object:add("house1_se_02l");
	@@var_96_object:add("house1_se_02r");
	@@var_96_object:add("dt_house3_01_i2");
	@@var_96_object:add("dt_house3_02_i2");
	@@var_96_object:add("dt_house3_02");
	@@var_96_object:add("dt_house3_03_i2");
	@@var_96_object:add("dt_house3_03");
	@@var_96_object:add("dt_house3_04_i2");
	@@var_96_object:add("house5_21");
	return 0;
}


func_10069(var_5015_int, var_5016_float)
{
	var_5017_int = 0; var_5018_int = 0; var_5019_int = 0; var_5020_float = 0;
	var_5016_float = var_5020_float;
	func_11409(var_5017_int, (int)540537, (int)540536, var_5020_float);
	var_5017_int = var_5015_int;
	return 0;
}


func_11096(var_5422_bool)
{
	var_5425_int = 0; var_5426_string = "";
	func_132(var_5425_int, "k5LaskaVisit");
	var_5428_bool = var_5425_int != (int)0;
	if(var_5428_bool != 0) {
		var_5422_bool = 1;
		return 0;
	}
	var_5422_bool = 0;
	return 0;
}


func_10078(var_5324_int, var_5325_float)
{
	var_5326_int = 0; var_5327_int = 0; var_5328_int = 0; var_5329_float = 0;
	var_5325_float = var_5329_float;
	func_11409(var_5326_int, (int)539492, (int)539491, var_5329_float);
	var_5326_int = var_5324_int;
	return 0;
}


func_11108(var_5468_bool)
{
	var_5471_int = 0; var_5472_string = "";
	func_132(var_5471_int, "k2KaterinaVisit");
	var_5474_bool = var_5471_int != (int)0;
	if(var_5474_bool != 0) {
		var_5468_bool = 1;
		return 0;
	}
	var_5468_bool = 0;
	return 0;
}


func_870(var_639_int, var_640_bool, var_641_int)
{
	var_642_string = ""; var_643_object = Obj(); var_644_int = 0; var_645_string = ""; var_646_object = Obj(); var_647_int = 0; var_648_string = ""; var_649_object = Obj(); var_650_string = ""; var_651_object = Obj(); var_652_int = 0; var_653_string = ""; var_654_object = Obj(); var_655_int = 0; var_656_string = ""; var_657_object = Obj();
	var_660_int = var_639_int + (int)1;
	var_650_string = "dr_mark" + var_660_int;
	var_661_bool = var_640_bool;
	if(var_661_bool != 0) {
		GetMainOutdoorScene(var_651_object);
		var_662_bool = var_651_object == 0; //@ne
		if(var_662_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_652_int = 1;

	Label_886:
		var_664_bool = var_652_int <= var_641_int;
		if(var_664_bool != 0) {
			var_666_int = var_650_string + "_";
			var_653_string = var_666_int + var_652_int;
			FindActor(var_654_object, var_653_string);
			var_667_bool = var_654_object == 0; //@nz
			if(var_667_bool != 0) {
				AddActor(var_654_object, var_653_string, var_651_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "disease_object.xml");
			} else {
				var_672_bool = 0; var_673_string = ""; var_674_string = "";
				var_653_string = var_673_string;
				func_239(var_672_bool, var_673_string, "restore");
		}
			var_651_object = 0;
	} else {
			var_655_int = 1;

		Label_913:
			var_678_bool = var_655_int <= var_641_int;
			if(var_678_bool == 0) goto Label_931;
			var_680_int = var_650_string + "_";
			var_656_string = var_680_int + var_655_int;
			FindActor(var_657_object, var_656_string);
			var_681_object = var_657_object;
			if(var_681_object != 0) {
				var_682_bool = 0; var_683_string = ""; var_684_string = "";
				var_656_string = var_683_string;
				func_239(var_682_bool, var_683_string, "cleanup");
			}
			var_657_object = 0;
			var_655_int = var_655_int + (int)1;
			goto Label_913;
	}
	Label_931:
		return 16;

	}
	var_654_object = 0;
	var_652_int = var_652_int + (int)1;
	goto Label_886;
	
}


func_10087(var_5257_int, var_5258_float)
{
	var_5259_int = 0; var_5260_int = 0; var_5261_int = 0; var_5262_float = 0;
	var_5258_float = var_5262_float;
	func_11409(var_5259_int, (int)538964, (int)538963, var_5262_float);
	var_5259_int = var_5257_int;
	return 0;
}


func_1897(var_1057_int, var_1058_int, var_1059_int)
{
	var_1060_int = 0; var_1061_int = 0;
	var_1063_int = var_1058_int + (int)1;
	var_1065_bool = var_1063_int == (int)12;
	if(var_1065_bool != 0) {
		return 2;
	}
	var_1066_bool = 0;
	var_1066_bool = 0;
	var_1067_bool = 0;
	var_1067_bool = 1;
	var_1069_bool = var_1059_int < (int)7;
	if(var_1069_bool != 1) {
		var_1071_bool = var_1059_int > (int)21;
		if(var_1071_bool != 1) {
			var_1067_bool = 0;
		}
	}
	if(var_1067_bool != 0) {
		var_1073_bool = var_1058_int != (int)0;
		if(var_1073_bool != 0) {
			var_1066_bool = 1;
		}
	}
	if(var_1066_bool != 0) {
		var_1074_float = 0; var_1075_int = 0;
		var_1058_int = var_1075_int;
		func_1141(var_1074_float, var_1075_int);
		var_1074_float = var_1061_int;
		var_1076_int = var_1061_int;
		if(var_1076_int != 0) {
			var_1077_int = 0; var_1078_string = ""; var_1079_string = ""; var_1080_int = 0;
			var_1057_int = var_1077_int;
			var_1061_int = var_1080_int;
			func_503(var_1077_int, "pers_grabitel", "grabitel.xml", var_1080_int);
		}
	}
	var_1081_bool = 0; var_1082_int = 0; var_1083_int = 0;
	var_1058_int = var_1082_int;
	var_1059_int = var_1083_int;
	func_1110(var_1081_bool, var_1082_int, var_1083_int);
	if(var_1081_bool != 0) {
		var_1084_int = 0; var_1085_string = ""; var_1086_string = ""; var_1087_int = 0;
		var_1057_int = var_1084_int;
		func_503(var_1084_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1088_int = 0; var_1089_string = ""; var_1090_string = ""; var_1091_int = 0;
		var_1057_int = var_1088_int;
		func_503(var_1088_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1092_int = 0; var_1093_string = ""; var_1094_string = ""; var_1095_int = 0;
		var_1057_int = var_1092_int;
		func_503(var_1092_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1096_int = 0; var_1097_string = ""; var_1098_string = ""; var_1099_int = 0;
		var_1057_int = var_1096_int;
		func_503(var_1096_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1100_int = 0; var_1101_string = ""; var_1102_string = ""; var_1103_int = 0;
		var_1057_int = var_1100_int;
		func_503(var_1100_int, "pers_woman", "woman.xml", (int)1);
		var_1104_int = 0; var_1105_string = ""; var_1106_string = ""; var_1107_int = 0;
		var_1057_int = var_1104_int;
		func_503(var_1104_int, "pers_alkash", "alkash.xml", (int)1);
		var_1108_int = 0; var_1109_string = ""; var_1110_string = ""; var_1111_int = 0;
		var_1057_int = var_1108_int;
		func_503(var_1108_int, "pers_girl", "girl.xml", (int)1);
		var_1112_int = 0; var_1113_string = ""; var_1114_string = ""; var_1115_int = 0;
		var_1057_int = var_1112_int;
		func_503(var_1112_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1153_bool = 0;
		var_1153_bool = 0;
		var_1155_bool = var_1059_int > (int)8;
		if(var_1155_bool != 0) {
			var_1157_bool = var_1059_int < (int)21;
			if(var_1157_bool != 0) {
				var_1153_bool = 1;
			}
		}
		if(var_1153_bool != 0) {
			var_1158_int = 0; var_1159_string = ""; var_1160_string = ""; var_1161_int = 0;
			var_1057_int = var_1158_int;
			func_503(var_1158_int, "pers_woman", "woman.xml", (int)1);
			var_1162_int = 0; var_1163_string = ""; var_1164_string = ""; var_1165_int = 0;
			var_1057_int = var_1162_int;
			func_503(var_1162_int, "pers_unosha", "unosha.xml", (int)1);
			var_1166_int = 0; var_1167_string = ""; var_1168_string = ""; var_1169_int = 0;
			var_1057_int = var_1166_int;
			func_503(var_1166_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1170_int = 0; var_1171_string = ""; var_1172_string = ""; var_1173_int = 0;
			var_1057_int = var_1170_int;
			func_503(var_1170_int, "pers_worker", "worker.xml", (int)1);
			var_1174_int = 0; var_1175_string = ""; var_1176_string = ""; var_1177_int = 0;
			var_1057_int = var_1174_int;
			func_503(var_1174_int, "pers_worker", "worker2.xml", (int)1);
			var_1178_int = 0; var_1179_string = ""; var_1180_string = ""; var_1181_int = 0;
			var_1057_int = var_1178_int;
			func_503(var_1178_int, "pers_alkash", "alkash.xml", (int)1);
			var_1182_int = 0; var_1183_string = ""; var_1184_string = ""; var_1185_int = 0;
			var_1057_int = var_1182_int;
			func_503(var_1182_int, "pers_girl", "girl.xml", (int)1);
			var_1186_int = 0; var_1187_string = ""; var_1188_string = ""; var_1189_int = 0;
			var_1057_int = var_1186_int;
			func_503(var_1186_int, "pers_girl", "girl2.xml", (int)1);
			var_1191_int = var_1058_int + (int)1;
			var_1193_bool = var_1191_int >= (int)3;
			if(var_1193_bool != 0) {
				var_1194_int = 0; var_1195_string = ""; var_1196_string = ""; var_1197_int = 0;
				var_1057_int = var_1194_int;
				func_503(var_1194_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			var_1199_int = var_1058_int + (int)1;
			var_1201_bool = var_1199_int >= (int)7;
			if(var_1201_bool != 0) {
				var_1202_int = 0; var_1203_string = ""; var_1204_string = ""; var_1205_int = 0;
				var_1057_int = var_1202_int;
				func_503(var_1202_int, "pers_butcher", "butcher.xml", (int)2);
			}
			goto Label_2155;
		}
		var_1206_int = 0; var_1207_string = ""; var_1208_string = ""; var_1209_int = 0;
		var_1057_int = var_1206_int;
		func_503(var_1206_int, "pers_woman", "woman.xml", (int)1);
		var_1210_int = 0; var_1211_string = ""; var_1212_string = ""; var_1213_int = 0;
		var_1057_int = var_1210_int;
		func_503(var_1210_int, "pers_unosha", "unosha.xml", (int)1);
		var_1214_int = 0; var_1215_string = ""; var_1216_string = ""; var_1217_int = 0;
		var_1057_int = var_1214_int;
		func_503(var_1214_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1218_int = 0; var_1219_string = ""; var_1220_string = ""; var_1221_int = 0;
		var_1057_int = var_1218_int;
		func_503(var_1218_int, "pers_worker", "worker.xml", (int)1);
		var_1222_int = 0; var_1223_string = ""; var_1224_string = ""; var_1225_int = 0;
		var_1057_int = var_1222_int;
		func_503(var_1222_int, "pers_worker", "worker2.xml", (int)1);
		var_1226_int = 0; var_1227_string = ""; var_1228_string = ""; var_1229_int = 0;
		var_1057_int = var_1226_int;
		func_503(var_1226_int, "pers_alkash", "alkash.xml", (int)1);
		var_1231_int = var_1058_int + (int)1;
		var_1233_bool = var_1231_int >= (int)3;
		if(var_1233_bool != 0) {
			var_1234_int = 0; var_1235_string = ""; var_1236_string = ""; var_1237_int = 0;
			var_1057_int = var_1234_int;
			func_503(var_1234_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		}
		var_1239_int = var_1058_int + (int)1;
		var_1241_bool = var_1239_int >= (int)7;
		if(var_1241_bool == 0) goto Label_2155;
		var_1242_int = 0; var_1243_string = ""; var_1244_string = ""; var_1245_int = 0;
		var_1057_int = var_1242_int;
		func_503(var_1242_int, "pers_butcher", "butcher.xml", (int)3);
	}
Label_2155:
	var_1116_bool = 0;
	var_1116_bool = 0;
	var_1117_bool = 0;
	var_1117_bool = 0;
	var_1119_bool = var_1058_int == (int)0;
	if(var_1119_bool != 0) {
		var_1121_bool = var_1059_int > (int)12;
		if(var_1121_bool != 0) {
			var_1117_bool = 1;
		}
	}
	if(var_1117_bool != 0) {
		var_1123_bool = var_1059_int < (int)22;
		if(var_1123_bool != 0) {
			var_1116_bool = 1;
		}
	}
	if(var_1116_bool != 0) {
		var_1124_int = 0; var_1125_string = ""; var_1126_string = ""; var_1127_int = 0;
		var_1057_int = var_1124_int;
		func_503(var_1124_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	var_1128_bool = 0; var_1129_int = 0; var_1130_int = 0;
	var_1058_int = var_1129_int;
	var_1059_int = var_1130_int;
	func_1345(var_1128_bool, var_1129_int, var_1130_int);
	if(var_1128_bool != 0) {
		var_1135_int = 0; var_1136_string = ""; var_1137_string = ""; var_1138_int = 0;
		var_1057_int = var_1135_int;
		func_503(var_1135_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_1139_bool = 0; var_1140_int = 0; var_1141_int = 0;
	var_1058_int = var_1140_int;
	var_1059_int = var_1141_int;
	func_1355(var_1139_bool, var_1140_int, var_1141_int);
	if(var_1139_bool != 0) {
		var_1149_int = 0; var_1150_string = ""; var_1151_string = ""; var_1152_int = 0;
		var_1057_int = var_1149_int;
		func_503(var_1149_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	return 2;
	
}


func_11120(var_5356_bool)
{
	var_5359_int = 0; var_5360_string = "";
	func_132(var_5359_int, "k3AlexandrVisit");
	var_5362_bool = var_5359_int != (int)0;
	if(var_5362_bool != 0) {
		var_5356_bool = 1;
		return 0;
	}
	var_5356_bool = 0;
	return 0;
}


func_10096(var_5430_int, var_5431_float)
{
	var_5432_int = 0; var_5433_int = 0; var_5434_int = 0; var_5435_float = 0;
	var_5431_float = var_5435_float;
	func_11409(var_5432_int, (int)538958, (int)538957, var_5435_float);
	var_5432_int = var_5430_int;
	return 0;
}


func_10105(var_4971_int, var_4972_float)
{
	var_4973_int = 0; var_4974_int = 0; var_4975_int = 0; var_4976_float = 0;
	var_4972_float = var_4976_float;
	func_11409(var_4973_int, (int)539494, (int)539493, var_4976_float);
	var_4973_int = var_4971_int;
	return 0;
}


func_6010(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object)
{
	var_3938_bool = var_3932_int == (int)0;
	if(var_3938_bool != 0) {
		var_3939_int = 0; var_3940_bool = 0;
		func_796((int)8, (bool)0);
		var_3941_int = 0; var_3942_bool = 0; var_3943_int = 0;
		func_813((int)8, (bool)0, (int)1);
		var_3944_int = 0; var_3945_int = 0; var_3946_object = Obj(); var_3947_object = Obj(); var_3948_object = Obj();
		var_3931_int = var_3945_int;
		var_3933_object = var_3946_object;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		func_720((int)8, var_3945_int, var_3946_object, var_3947_object, var_3948_object);
		var_3949_object = Obj(); var_3950_int = 0;
		var_3936_object = var_3949_object;
		func_305(var_3949_object, (int)2);
		var_3951_int = 0; var_3952_bool = 0; var_3953_int = 0;
		func_870((int)8, (bool)0, (int)4);
		var_3954_int = 0; var_3955_bool = 0; var_3956_int = 0;
		func_932((int)8, (bool)1, (int)4);
	}
	var_3957_int = 0; var_3958_bool = 0;
	func_779((int)8, (bool)0);
	var_3959_int = 0; var_3960_int = 0; var_3961_int = 0;
	var_3931_int = var_3960_int;
	var_3932_int = var_3961_int;
	func_3659((int)8, var_3960_int, var_3961_int);
	return 0;
}


func_7034(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object)
{
	var_4103_bool = var_4097_int == (int)0;
	if(var_4103_bool != 0) {
		var_4104_int = 0; var_4105_bool = 0;
		func_796((int)13, (bool)0);
		var_4106_int = 0; var_4107_bool = 0; var_4108_int = 0;
		func_813((int)13, (bool)0, (int)1);
		var_4109_int = 0; var_4110_int = 0; var_4111_object = Obj(); var_4112_object = Obj(); var_4113_object = Obj();
		var_4096_int = var_4110_int;
		var_4098_object = var_4111_object;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		func_720((int)13, var_4110_int, var_4111_object, var_4112_object, var_4113_object);
		var_4114_object = Obj(); var_4115_int = 0;
		var_4101_object = var_4114_object;
		func_305(var_4114_object, (int)2);
		var_4116_int = 0; var_4117_bool = 0; var_4118_int = 0;
		func_870((int)13, (bool)0, (int)4);
		var_4119_int = 0; var_4120_bool = 0; var_4121_int = 0;
		func_932((int)13, (bool)1, (int)4);
	}
	var_4122_int = 0; var_4123_bool = 0;
	func_779((int)13, (bool)0);
	var_4124_int = 0; var_4125_int = 0; var_4126_int = 0;
	var_4096_int = var_4125_int;
	var_4097_int = var_4126_int;
	func_3659((int)13, var_4125_int, var_4126_int);
	return 0;
}


func_11132(var_5364_bool)
{
	var_5367_int = 0; var_5368_string = "";
	func_132(var_5367_int, "k3KaterinaVisit");
	var_5370_bool = var_5367_int != (int)0;
	if(var_5370_bool != 0) {
		var_5364_bool = 1;
		return 0;
	}
	var_5364_bool = 0;
	return 0;
}


func_2944(var_2435_int, var_2436_int, var_2437_int)
{
	var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; var_2441_int = 0;
	var_2442_bool = 0;
	var_2442_bool = 0;
	var_2444_bool = var_2437_int > (int)8;
	if(var_2444_bool != 0) {
		var_2446_bool = var_2437_int < (int)21;
		if(var_2446_bool != 0) {
			var_2442_bool = 1;
		}
	}
	if(var_2442_bool != 0) {
		var_2447_int = 0; var_2448_string = ""; var_2449_string = ""; var_2450_int = 0;
		var_2435_int = var_2447_int;
		func_503(var_2447_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2451_int = 0; var_2452_string = ""; var_2453_string = ""; var_2454_int = 0;
		var_2435_int = var_2451_int;
		func_503(var_2451_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_2455_int = 0; var_2456_string = ""; var_2457_string = ""; var_2458_int = 0;
		var_2435_int = var_2455_int;
		func_503(var_2455_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2459_int = 0; var_2460_string = ""; var_2461_string = ""; var_2462_int = 0;
		var_2435_int = var_2459_int;
		func_529(var_2459_int, "fog", "fog.xml", (int)6);
		var_2464_bool = var_2436_int >= (int)5;
		if(var_2464_bool != 0) {
			var_2465_int = 0; var_2466_string = ""; var_2467_string = ""; var_2468_int = 0;
			var_2435_int = var_2465_int;
			func_529(var_2465_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2470_float = 0; var_2471_int = 0;
		var_2436_int = var_2471_int;
		func_1255(var_2470_float, var_2471_int);
		var_2440_int = (int)1 * var_2470_float;
		var_2472_int = var_2440_int;
		if(var_2472_int != 0) {
			var_2473_int = 0; var_2474_string = ""; var_2475_string = ""; var_2476_int = 0;
			var_2435_int = var_2473_int;
			var_2440_int = var_2476_int;
			func_503(var_2473_int, "pers_bomber", "bomber.xml", var_2476_int);
		}
	} else {
		var_2521_int = 0; var_2522_string = ""; var_2523_string = ""; var_2524_int = 0;
		var_2435_int = var_2521_int;
		func_503(var_2521_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2525_int = 0; var_2526_string = ""; var_2527_string = ""; var_2528_int = 0;
		var_2435_int = var_2525_int;
		func_503(var_2525_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2529_int = 0; var_2530_string = ""; var_2531_string = ""; var_2532_int = 0;
		var_2435_int = var_2529_int;
		func_503(var_2529_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2533_int = 0; var_2534_string = ""; var_2535_string = ""; var_2536_int = 0;
		var_2435_int = var_2533_int;
		func_529(var_2533_int, "fog", "fog.xml", (int)6);
		var_2538_bool = var_2436_int >= (int)5;
		if(var_2538_bool != 0) {
			var_2539_int = 0; var_2540_string = ""; var_2541_string = ""; var_2542_int = 0;
			var_2435_int = var_2539_int;
			func_529(var_2539_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2544_float = 0; var_2545_int = 0;
		var_2436_int = var_2545_int;
		func_1255(var_2544_float, var_2545_int);
		var_2441_int = (int)1 * var_2544_float;
		var_2546_int = var_2441_int;
		if(var_2546_int == 0) goto Label_3062;
		var_2547_int = 0; var_2548_string = ""; var_2549_string = ""; var_2550_int = 0;
		var_2435_int = var_2547_int;
		var_2441_int = var_2550_int;
		func_503(var_2547_int, "pers_bomber", "bomber.xml", var_2550_int);
	}
Label_3062:
	var_2477_int = 0; var_2478_string = ""; var_2479_string = ""; var_2480_int = 0; var_2481_int = 0; var_2482_int = 0;
	var_2435_int = var_2477_int;
	func_516(var_2477_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2483_int = 0; var_2484_string = ""; var_2485_string = ""; var_2486_int = 0; var_2487_int = 0; var_2488_int = 0;
	var_2435_int = var_2483_int;
	func_516(var_2483_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2489_int = 0; var_2490_string = ""; var_2491_string = ""; var_2492_int = 0; var_2493_int = 0; var_2494_int = 0;
	var_2435_int = var_2489_int;
	func_516(var_2489_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2495_int = 0; var_2496_string = ""; var_2497_string = ""; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0;
	var_2435_int = var_2495_int;
	func_516(var_2495_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2501_bool = 0; var_2502_int = 0; var_2503_int = 0;
	var_2436_int = var_2502_int;
	var_2437_int = var_2503_int;
	func_1345(var_2501_bool, var_2502_int, var_2503_int);
	if(var_2501_bool != 0) {
		var_2504_int = 0; var_2505_string = ""; var_2506_string = ""; var_2507_int = 0;
		var_2435_int = var_2504_int;
		func_503(var_2504_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2508_bool = 0; var_2509_int = 0; var_2510_int = 0;
	var_2436_int = var_2509_int;
	var_2437_int = var_2510_int;
	func_1355(var_2508_bool, var_2509_int, var_2510_int);
	if(var_2508_bool != 0) {
		var_2511_int = 0; var_2512_string = ""; var_2513_string = ""; var_2514_int = 0;
		var_2435_int = var_2511_int;
		func_503(var_2511_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	var_2515_bool = 0; var_2516_int = 0;
	var_2436_int = var_2516_int;
	func_1372(var_2515_bool, var_2516_int);
	if(var_2515_bool != 0) {
		var_2517_int = 0; var_2518_string = ""; var_2519_string = ""; var_2520_int = 0;
		var_2435_int = var_2517_int;
		func_503(var_2517_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_10114(var_4928_int, var_4929_float)
{
	var_4930_int = 0; var_4931_int = 0; var_4932_int = 0; var_4933_float = 0;
	var_4929_float = var_4933_float;
	func_11409(var_4930_int, (int)542472, (int)542471, var_4933_float);
	var_4930_int = var_4928_int;
	return 0;
}


func_13190(var_4799_int, var_4800_int)
{
	var_4802_object = Obj(); var_4803_object = Obj();
	var_4805_int = "Updating game " + var_4799_int;
	var_4807_int = var_4805_int + " ";
	var_4808_int = var_4807_int + var_4800_int;
	Trace(var_4808_int);
	var_4809_bool = 0;
	var_4809_bool = 0;
	var_4811_bool = var_4799_int == (int)7;
	if(var_4811_bool != 0) {
		var_4813_bool = var_4800_int == (int)0;
		if(var_4813_bool != 0) {
			var_4809_bool = 1;
		}
	}
	if(var_4809_bool != 0) {
		GetSceneByName(var_4803_object, "sobor");
		Trigger(var_4803_object, "aglaja");
		var_4803_object = 0;
	}
	return 2;
}


func_11144(var_5439_bool)
{
	var_5442_int = 0; var_5443_string = "";
	func_132(var_5442_int, "k4AlexandrVisit");
	var_5445_bool = var_5442_int != (int)0;
	if(var_5445_bool != 0) {
		var_5439_bool = 1;
		return 0;
	}
	var_5439_bool = 0;
	return 0;
}


func_10123(var_4952_int, var_4953_float)
{
	var_4954_int = 0; var_4955_int = 0; var_4956_int = 0; var_4957_float = 0;
	var_4953_float = var_4957_float;
	func_11409(var_4954_int, (int)542474, (int)542473, var_4957_float);
	var_4954_int = var_4952_int;
	return 0;
}


func_10132(var_4830_int, var_4831_float)
{
	var_4832_int = 0; var_4833_int = 0; var_4834_int = 0; var_4835_float = 0;
	var_4831_float = var_4835_float;
	func_11409(var_4832_int, (int)542476, (int)542475, var_4835_float);
	var_4832_int = var_4830_int;
	return 0;
}


func_11156(var_5447_bool)
{
	var_5450_int = 0; var_5451_string = "";
	func_132(var_5450_int, "k4KaterinaVisit");
	var_5453_bool = var_5450_int != (int)0;
	if(var_5453_bool != 0) {
		var_5447_bool = 1;
		return 0;
	}
	var_5447_bool = 0;
	return 0;
}


func_5020(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object)
{
	var_1255_bool = var_1249_int == (int)0;
	if(var_1255_bool != 0) {
		var_1256_int = 0; var_1257_bool = 0;
		func_796((int)3, (bool)0);
		var_1258_int = 0; var_1259_bool = 0; var_1260_int = 0;
		func_813((int)3, (bool)0, (int)1);
		var_1261_int = 0; var_1262_int = 0; var_1263_object = Obj(); var_1264_object = Obj(); var_1265_object = Obj();
		var_1261_int = 3;
		var_1248_int = var_1262_int;
		var_1250_object = var_1263_object;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		func_622(var_1262_int, var_1263_object, var_1264_object, var_1265_object);
		var_1266_object = Obj(); var_1267_int = 0;
		var_1253_object = var_1266_object;
		func_305(var_1266_object, (int)0);
		var_1268_int = 0; var_1269_bool = 0; var_1270_int = 0;
		func_870((int)3, (bool)0, (int)7);
		var_1271_int = 0; var_1272_bool = 0; var_1273_int = 0;
		func_932((int)3, (bool)0, (int)7);
	}
	var_1274_int = 0; var_1275_int = 0;
	var_1249_int = var_1275_int;
	func_983((int)3, var_1275_int);
	var_1291_int = 0; var_1292_int = 0; var_1293_int = 0;
	var_1248_int = var_1292_int;
	var_1249_int = var_1293_int;
	func_1897((int)3, var_1292_int, var_1293_int);
	return 0;
}


func_10141()
{
	var_4728_string = ""; var_4729_bool = 0;
	func_177("termitnik2@door1", (bool)1);
	return 0;
}


func_13216(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0;
	Trace("Disease update");
	var_35_int = 0;
	var_48_bool = var_23_int == (int)0;
	if(var_48_bool != 0) {
		var_35_int = 0;
	} else {
										var_344_bool = var_23_int == (int)1;
										if(var_344_bool != 0) {
											var_35_int = 0;
											goto Label_13280;
										}
										var_346_bool = var_23_int == (int)2;
										if(var_346_bool != 0) {
											var_35_int = 1;
											goto Label_13280;
										}
										var_348_bool = var_23_int == (int)3;
										if(var_348_bool != 0) {
											var_35_int = 2;
											goto Label_13280;
										}
										var_350_bool = var_23_int == (int)4;
										if(var_350_bool != 0) {
											var_35_int = 3;
											goto Label_13280;
										}
										var_352_bool = var_23_int == (int)5;
										if(var_352_bool != 0) {
											var_35_int = 4;
											goto Label_13280;
										}
										var_354_bool = var_23_int == (int)6;
										if(var_354_bool != 0) {
											var_35_int = 5;
											goto Label_13280;
										}
										var_356_bool = var_23_int == (int)7;
										if(var_356_bool != 0) {
											var_35_int = 5;
											goto Label_13280;
										}
										var_358_bool = var_23_int == (int)8;
										if(var_358_bool != 0) {
											var_35_int = 6;
											goto Label_13280;
										}
										var_360_bool = var_23_int == (int)9;
										if(var_360_bool != 0) {
											var_35_int = 6;
											goto Label_13280;
										}
										var_362_bool = var_23_int == (int)10;
										if(var_362_bool != 0) {
											var_35_int = 7;
											goto Label_13280;
										}
										var_364_bool = var_23_int == (int)11;
										if(var_364_bool == 0) goto Label_13280;
										var_35_int = 8;
	}
Label_13280:
	var_50_int = var_23_int + (int)1;
	var_52_bool = var_50_int != (int)12;
	if(var_52_bool != 0) {
		var_54_int = "Diseased regions : " + var_35_int;
		Trace(var_54_int);
		var_56_int = var_23_int + (int)1;
		var_58_bool = var_56_int < (int)6;
		if(var_58_bool != 0) {

		Label_13295:
			var_60_bool = (int)0 < (int)16;
			if(var_60_bool != 0) {
				var_61_bool = 0; var_62_int = 0;
				var_36_int = var_62_int;
				func_430(var_61_bool, var_62_int);
				if(var_61_bool != 0) {
					var_73_int = 0;
					var_36_int = var_73_int;
					func_472(var_73_int);
				} else {
					var_86_bool = 0; var_87_int = 0;
					var_36_int = var_87_int;
					func_460(var_86_bool, var_87_int);
					if(var_86_bool == 0) goto Label_13317;
					var_95_int = 0;
					var_36_int = var_95_int;
					func_412(var_95_int);
			}
				var_108_bool = var_23_int == (int)2;
				if(var_108_bool != 0) {
					Trace("Special diseased region: 5");
					var_110_int = 0;
					func_442((int)5);
				} else {
					var_227_bool = var_23_int == (int)3;
					if(var_227_bool != 0) {
						Trace("Special diseased region: 1");
						var_229_int = 0;
						func_442((int)1);
		}
					var_231_int = var_23_int + (int)1;
					var_233_bool = var_231_int == (int)6;
					if(var_233_bool != 0) {

					Label_13366:
						var_235_bool = (int)0 < (int)16;
						if(var_235_bool != 0) {
							var_236_bool = 0; var_237_int = 0;
							var_41_int = var_237_int;
							func_430(var_236_bool, var_237_int);
							if(var_236_bool != 0) {
								var_238_int = 0;
								var_41_int = var_238_int;
								func_472(var_238_int);
							} else {
								var_240_bool = 0; var_241_int = 0;
								var_41_int = var_241_int;
								func_460(var_240_bool, var_241_int);
								if(var_240_bool != 0) {
									var_242_int = 0;
									var_41_int = var_242_int;
									func_412(var_242_int);
						}
							} else {
							var_41_int = var_41_int + (int)1;
							goto Label_13366;
							}
						Label_13408:
							var_243_int = 0; var_244_int = 0;
							var_23_int = var_244_int;
							func_12957(var_243_int, var_244_int);
							var_243_int = var_40_int;
							var_245_bool = 0; var_246_int = 0;
							var_23_int = var_246_int;
							func_12949(var_245_bool, var_246_int);
							if(var_245_bool != 0) {
								var_252_int = 0;
								var_40_int = var_252_int;
								func_412(var_252_int);
							} else {
										var_327_int = 0;
										var_40_int = var_327_int;
										func_442(var_327_int);
					}

								Label_13393:
									var_329_bool = (int)0 < (int)16;
									if(var_329_bool == 0) goto Label_13408;
									var_330_bool = 0; var_331_int = 0;
									var_42_int = var_331_int;
									func_460(var_330_bool, var_331_int);
									if(var_330_bool != 0) {
										var_332_int = 0;
										var_42_int = var_332_int;
										func_412(var_332_int);
									}
									var_42_int = var_42_int + (int)1;
									goto Label_13393;
	}

							Label_13549:
								var_335_bool = (int)0 < (int)16;
								if(var_335_bool != 0) {
									var_336_bool = 0;
									var_336_bool = 1;
									var_337_bool = 0; var_338_int = 0;
									var_45_int = var_338_int;
									func_430(var_337_bool, var_338_int);
									if(var_337_bool != 1) {
										var_339_bool = 0; var_340_int = 0;
										var_45_int = var_340_int;
										func_460(var_339_bool, var_340_int);
										if(var_339_bool != 1) {
											var_336_bool = 0;
										}
									}
									if(var_336_bool != 0) {
										var_341_int = 0;
										var_45_int = var_341_int;
										func_412(var_341_int);
									}
									var_45_int = var_45_int + (int)1;
									goto Label_13549;

						}
						var_253_int = 0; var_254_int = 0;
						var_254_int = var_23_int + (int)1;
						func_12911(var_253_int, var_254_int);
						var_253_int = var_40_int;
						var_257_bool = var_40_int != (int)-1;
						if(var_257_bool != 0) {
							var_258_int = 0;
							var_40_int = var_258_int;
							func_442(var_258_int);
						}
						var_259_int = 0; var_260_int = 0;
						var_260_int = var_23_int + (int)1;
						func_12957(var_259_int, var_260_int);
						var_259_int = var_40_int;
						var_263_bool = var_40_int != (int)-1;
						if(var_263_bool != 0) {
							var_264_int = 0;
							var_40_int = var_264_int;
							func_412(var_264_int);
						}
						var_265_int = 0; var_266_int = 0;
						var_266_int = var_23_int + (int)2;
						func_13021(var_265_int, var_266_int);
						var_265_int = var_40_int;
						var_277_bool = var_40_int != (int)-1;
						if(var_277_bool != 0) {
							var_278_bool = 0; var_279_int = 0;
							var_40_int = var_279_int;
							func_430(var_278_bool, var_279_int);
							var_280_bool = var_278_bool == 0; //@nz
							if(var_280_bool != 0) {
								var_281_int = 0;
								var_40_int = var_281_int;
								func_442(var_281_int);
							}
						}
						var_282_int = 0; var_283_int = 0;
						var_283_int = var_23_int + (int)2;
						func_12995(var_282_int, var_283_int);
						var_282_int = var_40_int;
						var_294_bool = var_40_int != (int)-1;
						if(var_294_bool != 0) {
							var_295_bool = 0; var_296_int = 0;
							var_40_int = var_296_int;
							func_430(var_295_bool, var_296_int);
							var_297_bool = var_295_bool == 0; //@nz
							if(var_297_bool != 0) {
								var_298_int = 0;
								var_40_int = var_298_int;
								func_442(var_298_int);
							}
						}
						var_299_int = 0; var_300_int = 0;
						var_23_int = var_300_int;
						func_12911(var_299_int, var_300_int);
						var_299_int = var_40_int;
						var_302_bool = var_40_int != (int)-1;
						if(var_302_bool != 0) {
							var_303_bool = 0; var_304_int = 0;
							var_23_int = var_304_int;
							func_12903(var_303_bool, var_304_int);
							var_303_bool = var_43_bool;
							var_310_bool = var_43_bool;
							if(var_310_bool != 0) {
								var_311_int = 0;
								var_40_int = var_311_int;
								func_442(var_311_int);
							} else {
								var_326_int = 0;
								var_40_int = var_326_int;
								func_472(var_326_int);

							}
						}
						var_312_int = 0; var_313_int = 0;
						var_313_int = var_23_int + (int)1;
						func_12995(var_312_int, var_313_int);
						var_312_int = var_40_int;
						var_316_bool = var_40_int != (int)-1;
						if(var_316_bool != 0) {
							var_317_int = 0;
							var_40_int = var_317_int;
							func_472(var_317_int);
						}
						var_318_int = 0; var_319_int = 0;
						var_319_int = var_23_int + (int)1;
						func_13021(var_318_int, var_319_int);
						var_318_int = var_44_int;
						var_321_bool = 0;
						var_321_bool = 0;
						var_322_bool = var_44_int != var_40_int;
						if(var_322_bool != 0) {
							var_324_bool = var_44_int != (int)-1;
							if(var_324_bool != 0) {
								var_321_bool = 1;
							}
						}
						if(var_321_bool == 0) goto Label_13547;
						var_325_int = 0;
						var_44_int = var_325_int;
						func_472(var_325_int);
					}
				}
			}
			func_343((int)0);
			var_122_int = var_37_int;
			var_133_bool = var_37_int < var_35_int;
			if(var_133_bool != 0) {
				var_38_int = var_35_int - var_37_int;
				var_39_int = 0;

			Label_13349:
				var_134_bool = var_39_int < var_38_int;
				if(var_134_bool != 0) {
					var_135_int = 0;
					var_135_int = var_23_int + (int)1;
					func_361(var_135_int);
					var_39_int = var_39_int + (int)1;
					goto Label_13349;
				}
			}
							} else {
			return 22;
							}
	Label_13547:
		goto Label_13573;
	}
Label_13317:
	var_36_int = var_36_int + (int)1;
	goto Label_13295;
	
}


func_11168(var_5233_bool)
{
	var_5236_int = 0; var_5237_string = "";
	func_132(var_5236_int, "k5AlexandrVisit");
	var_5239_bool = var_5236_int != (int)0;
	if(var_5239_bool != 0) {
		var_5233_bool = 1;
		return 0;
	}
	var_5233_bool = 0;
	return 0;
}


func_932(var_686_int, var_687_bool, var_688_int)
{
	var_689_string = ""; var_690_object = Obj(); var_691_object = Obj(); var_692_int = 0; var_693_string = ""; var_694_object = Obj(); var_695_string = ""; var_696_object = Obj(); var_697_object = Obj(); var_698_int = 0; var_699_string = ""; var_700_object = Obj();
	var_703_int = var_686_int + (int)1;
	var_695_string = "dr_mark" + var_703_int;
	var_706_int = var_686_int + (int)1;
	var_707_int = "br_" + var_706_int;
	FindActor(var_696_object, var_707_int);
	var_708_bool = var_687_bool;
	if(var_708_bool != 0) {
		var_709_bool = var_696_object == 0; //@nz
		if(var_709_bool != 0) {
			GetMainOutdoorScene(var_697_object);
			var_712_int = var_686_int + (int)1;
			var_713_int = "br_" + var_712_int;
			AddActor(var_696_object, var_713_int, var_697_object, CVector(0.0, 0.0, 0.0));
			var_697_object = 0;
		}
	} else {
		var_723_object = var_696_object;
		if(var_723_object == 0) goto Label_962;
		RemoveActor(var_696_object);
	}
Label_962:
	var_698_int = 1;
	
Label_963:
	var_715_bool = var_698_int <= var_688_int;
	if(var_715_bool != 0) {
		var_717_int = var_695_string + "_";
		var_699_string = var_717_int + var_698_int;
		FindActor(var_700_object, var_699_string);
		var_718_object = var_700_object;
		if(var_718_object != 0) {
			var_719_bool = 0; var_720_string = ""; var_721_string = "";
			var_699_string = var_720_string;
			func_239(var_719_bool, var_720_string, "cleanup");
		}
		var_700_object = 0;
		var_698_int = var_698_int + (int)1;
		goto Label_963;
	}
	return 12;
	
}
EMIT "Stack[-5] = 0";


func_10148()
{
	var_4734_string = ""; var_4735_bool = 0;
	func_177("house_vlad@door2", (bool)1);
	return 0;
}


func_10155()
{
	var_4716_string = ""; var_4717_bool = 0;
	func_177("cot_maria@door1", (bool)0);
	return 0;
}


func_11180(var_5241_bool)
{
	var_5244_int = 0; var_5245_string = "";
	func_132(var_5244_int, "k5KaterinaVisit");
	var_5247_bool = var_5244_int != (int)0;
	if(var_5247_bool != 0) {
		var_5241_bool = 1;
		return 0;
	}
	var_5241_bool = 0;
	return 0;
}


func_6062(var_209_object)
{
	@@var_209_object:add("r3_house_2_02");
	@@var_209_object:add("r3_house3_02_i2");
	@@var_209_object:add("r3_house3_02");
	@@var_209_object:add("r3_house4_05_i2");
	@@var_209_object:add("r3_house4_05");
	@@var_209_object:add("r3_house4_03_i2");
	@@var_209_object:add("r3_house4_04_i2");
	@@var_209_object:add("r3_house4_04");
	@@var_209_object:add("r3_house4_01_i2");
	@@var_209_object:add("r3_house4_01");
	@@var_209_object:add("r3_house_2_01");
	@@var_209_object:add("r3_house4_02_i2");
	@@var_209_object:add("r3_house4_02");
	@@var_209_object:add("r3_house3_01_i2");
	@@var_209_object:add("r3_house3_01");
	return 0;
}


func_7086(var_297_object)
{
	@@var_297_object:add("lc_house7_02");
	@@var_297_object:add("lc_house7_03");
	@@var_297_object:add("lc_house7_04");
	@@var_297_object:add("lc_house7_05");
	@@var_297_object:add("lc_house7_06");
	@@var_297_object:add("lc_house7_07");
	@@var_297_object:add("lc_House6_02");
	@@var_297_object:add("lc_house7_01");
	@@var_297_object:add("lc_house_2_02");
	@@var_297_object:add("lc_House6_01");
	@@var_297_object:add("lc_house3_03_i2");
	@@var_297_object:add("lc_house3_03");
	@@var_297_object:add("lc_House6_03");
	@@var_297_object:add("lc_House6_04");
	return 0;
}


func_10162()
{
	var_5647_string = ""; var_5648_bool = 0;
	func_177("warehouse_rubin@door1", (bool)0);
	return 0;
}


func_11192(var_5285_bool)
{
	var_5288_int = 0; var_5289_string = "";
	func_132(var_5288_int, "k6KaterinaVisit");
	var_5291_bool = var_5288_int != (int)0;
	if(var_5291_bool != 0) {
		var_5285_bool = 1;
		return 0;
	}
	var_5285_bool = 0;
	return 0;
}


func_10169()
{
	var_5972_string = ""; var_5973_bool = 0;
	func_177("warehouse_rubin@door1", (bool)1);
	return 0;
}


func_9151(var_501_int, var_502_int, var_503_int)
{
	var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj();
	var_512_object = GlobalVars[8];
	@@var_512_object:get(var_508_object, var_501_int);
	var_513_object = GlobalVars[9];
	@@var_513_object:get(var_509_object, var_501_int);
	var_514_object = GlobalVars[10];
	@@var_514_object:get(var_510_object, var_501_int);
	var_515_object = GlobalVars[13];
	@@var_515_object:get(var_511_object, var_501_int);
	var_517_bool = var_501_int == (int)0;
	if(var_517_bool != 0) {
		var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj();
		var_502_int = var_518_int;
		var_503_int = var_519_int;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		func_4387(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object);
	} else {
		var_885_bool = var_501_int == (int)1;
		if(var_885_bool != 0) {
			var_886_int = 0; var_887_int = 0; var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj();
			var_502_int = var_886_int;
			var_503_int = var_887_int;
			var_508_object = var_888_object;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			func_4584(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object);
			goto Label_9371;
		}
		var_1028_bool = var_501_int == (int)2;
		if(var_1028_bool != 0) {
			var_1029_int = 0; var_1030_int = 0; var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj();
			var_502_int = var_1029_int;
			var_503_int = var_1030_int;
			var_508_object = var_1031_object;
			var_509_object = var_1032_object;
			var_510_object = var_1033_object;
			var_511_object = var_1034_object;
			func_4790(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object);
			goto Label_9371;
		}
		var_1247_bool = var_501_int == (int)3;
		if(var_1247_bool != 0) {
			var_1248_int = 0; var_1249_int = 0; var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj();
			var_502_int = var_1248_int;
			var_503_int = var_1249_int;
			var_508_object = var_1250_object;
			var_509_object = var_1251_object;
			var_510_object = var_1252_object;
			var_511_object = var_1253_object;
			func_5020(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object);
			goto Label_9371;
		}
		var_1295_bool = var_501_int == (int)4;
		if(var_1295_bool != 0) {
			var_1296_int = 0; var_1297_int = 0; var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj();
			var_502_int = var_1296_int;
			var_503_int = var_1297_int;
			var_508_object = var_1298_object;
			var_509_object = var_1299_object;
			var_510_object = var_1300_object;
			var_511_object = var_1301_object;
			func_5238(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object);
			goto Label_9371;
		}
		var_1340_bool = var_501_int == (int)5;
		if(var_1340_bool != 0) {
			var_1341_int = 0; var_1342_int = 0; var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj();
			var_502_int = var_1341_int;
			var_503_int = var_1342_int;
			var_508_object = var_1343_object;
			var_509_object = var_1344_object;
			var_510_object = var_1345_object;
			var_511_object = var_1346_object;
			func_5483(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object);
			goto Label_9371;
		}
		var_1373_bool = var_501_int == (int)6;
		if(var_1373_bool != 0) {
			var_1374_int = 0; var_1375_int = 0; var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj();
			var_502_int = var_1374_int;
			var_503_int = var_1375_int;
			var_508_object = var_1376_object;
			var_509_object = var_1377_object;
			var_510_object = var_1378_object;
			var_511_object = var_1379_object;
			func_5641(var_1379_object);
			goto Label_9371;
		}
		var_1383_bool = var_501_int == (int)7;
		if(var_1383_bool != 0) {
			var_1384_int = 0; var_1385_int = 0; var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj();
			var_502_int = var_1384_int;
			var_503_int = var_1385_int;
			var_508_object = var_1386_object;
			var_509_object = var_1387_object;
			var_510_object = var_1388_object;
			var_511_object = var_1389_object;
			func_5706(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object);
			goto Label_9371;
		}
		var_1570_bool = var_501_int == (int)8;
		if(var_1570_bool != 0) {
			var_1571_int = 0; var_1572_int = 0; var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj();
			var_502_int = var_1571_int;
			var_503_int = var_1572_int;
			var_508_object = var_1573_object;
			var_509_object = var_1574_object;
			var_510_object = var_1575_object;
			var_511_object = var_1576_object;
			func_5906(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object);
			goto Label_9371;
		}
		var_1603_bool = var_501_int == (int)9;
		if(var_1603_bool != 0) {
			var_1604_int = 0; var_1605_int = 0; var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj();
			var_502_int = var_1604_int;
			var_503_int = var_1605_int;
			var_508_object = var_1606_object;
			var_509_object = var_1607_object;
			var_510_object = var_1608_object;
			var_511_object = var_1609_object;
			func_6109(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object);
			goto Label_9371;
		}
		var_1636_bool = var_501_int == (int)10;
		if(var_1636_bool != 0) {
			var_1637_int = 0; var_1638_int = 0; var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj();
			var_502_int = var_1637_int;
			var_503_int = var_1638_int;
			var_508_object = var_1639_object;
			var_509_object = var_1640_object;
			var_510_object = var_1641_object;
			var_511_object = var_1642_object;
			func_6318(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object);
			goto Label_9371;
		}
		var_1669_bool = var_501_int == (int)11;
		if(var_1669_bool != 0) {
			var_1670_int = 0; var_1671_int = 0; var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj();
			var_502_int = var_1670_int;
			var_503_int = var_1671_int;
			var_508_object = var_1672_object;
			var_509_object = var_1673_object;
			var_510_object = var_1674_object;
			var_511_object = var_1675_object;
			func_6530(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object);
			goto Label_9371;
		}
		var_1702_bool = var_501_int == (int)12;
		if(var_1702_bool != 0) {
			var_1703_int = 0; var_1704_int = 0; var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj();
			var_502_int = var_1703_int;
			var_503_int = var_1704_int;
			var_508_object = var_1705_object;
			var_509_object = var_1706_object;
			var_510_object = var_1707_object;
			var_511_object = var_1708_object;
			func_6727(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object);
			goto Label_9371;
		}
		var_1735_bool = var_501_int == (int)13;
		if(var_1735_bool != 0) {
			var_1736_int = 0; var_1737_int = 0; var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj();
			var_502_int = var_1736_int;
			var_503_int = var_1737_int;
			var_508_object = var_1738_object;
			var_509_object = var_1739_object;
			var_510_object = var_1740_object;
			var_511_object = var_1741_object;
			func_6930(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object);
			goto Label_9371;
		}
		var_1768_bool = var_501_int == (int)14;
		if(var_1768_bool != 0) {
			var_1769_int = 0; var_1770_int = 0; var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj();
			var_502_int = var_1769_int;
			var_503_int = var_1770_int;
			var_508_object = var_1771_object;
			var_509_object = var_1772_object;
			var_510_object = var_1773_object;
			var_511_object = var_1774_object;
			func_7130(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object);
			goto Label_9371;
		}
		var_1946_bool = var_501_int == (int)15;
		if(var_1946_bool == 0) goto Label_9371;
		var_1947_int = 0; var_1948_int = 0; var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj();
		var_502_int = var_1947_int;
		var_503_int = var_1948_int;
		var_508_object = var_1949_object;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		func_7312(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object);
	}
Label_9371:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_10176()
{
	var_5723_object = Obj(); var_5724_object = Obj(); var_5725_object = Obj(); var_5726_object = Obj();
	func_11417(Obj());
	var_5727_object = var_5725_object;
	@@var_5725_object:FindMark(var_5726_object, "k1q01AlexandrGotoKaterina");
	var_5729_object = var_5726_object;
	if(var_5729_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01AlexandrGotoStation");
	var_5731_object = var_5726_object;
	if(var_5731_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01BurahGotoAnna");
	var_5733_object = var_5726_object;
	if(var_5733_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01CompletedGotoAlexandt");
	var_5735_object = var_5726_object;
	if(var_5735_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01KaterinaGotoAlexandr");
	var_5737_object = var_5726_object;
	if(var_5737_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01LaskaGotoBurah");
	var_5739_object = var_5726_object;
	if(var_5739_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q01StationGotoLaska");
	var_5741_object = var_5726_object;
	if(var_5741_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q02GeorgGotoMaria");
	var_5743_object = var_5726_object;
	if(var_5743_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q02KaterinaGotoGeorg");
	var_5745_object = var_5726_object;
	if(var_5745_object != 0) {
		@@var_5726_object:Remove();
	}
	@@var_5725_object:FindMark(var_5726_object, "k1q03AnnaGotoNotkin");
	var_5747_object = var_5726_object;
	if(var_5747_object != 0) {
		@@var_5726_object:Remove();
	}
	var_5748_bool = 0; var_5749_int = 0;
	func_11392(var_5748_bool, (int)318);
	var_5750_bool = 0; var_5751_int = 0;
	func_11392(var_5750_bool, (int)326);
	var_5752_bool = 0; var_5753_int = 0;
	func_11392(var_5752_bool, (int)333);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4035(var_3248_int, var_3249_int, var_3250_int)
{
	var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0;
	var_3259_bool = 0;
	var_3259_bool = 0;
	var_3261_bool = var_3250_int > (int)8;
	if(var_3261_bool != 0) {
		var_3263_bool = var_3250_int < (int)21;
		if(var_3263_bool != 0) {
			var_3259_bool = 1;
		}
	}
	if(var_3259_bool != 0) {
		var_3264_int = 0; var_3265_string = ""; var_3266_string = ""; var_3267_int = 0;
		var_3248_int = var_3264_int;
		func_503(var_3264_int, "pers_rat", "rat.xml", (int)4);
		var_3268_int = 0; var_3269_string = ""; var_3270_string = ""; var_3271_int = 0;
		var_3248_int = var_3268_int;
		func_503(var_3268_int, "pers_alkash", "alkash.xml", (int)2);
		var_3272_int = 0; var_3273_string = ""; var_3274_string = ""; var_3275_int = 0;
		var_3248_int = var_3272_int;
		func_503(var_3272_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3277_float = 0; var_3278_int = 0;
		var_3249_int = var_3278_int;
		func_1165(var_3277_float, var_3278_int);
		var_3255_int = (int)2 * var_3277_float;
		var_3323_int = var_3255_int;
		if(var_3323_int != 0) {
			var_3324_int = 0; var_3325_string = ""; var_3326_string = ""; var_3327_int = 0;
			var_3248_int = var_3324_int;
			var_3255_int = var_3327_int;
			func_503(var_3324_int, "pers_grabitel", "grabitel.xml", var_3327_int);
		}
		var_3329_int = var_3249_int + (int)1;
		var_3331_bool = var_3329_int >= (int)2;
		if(var_3331_bool != 0) {
			var_3332_int = 0; var_3333_string = ""; var_3334_string = ""; var_3335_int = 0;
			var_3248_int = var_3332_int;
			func_503(var_3332_int, "pers_patrool", "patrol.xml", (int)2);
			var_3336_bool = 0; var_3337_int = 0;
			var_3249_int = var_3337_int;
			func_1372(var_3336_bool, var_3337_int);
			if(var_3336_bool != 0) {
				var_3338_int = 0; var_3339_string = ""; var_3340_string = ""; var_3341_int = 0;
				var_3248_int = var_3338_int;
				func_503(var_3338_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3343_float = 0; var_3344_int = 0;
		var_3249_int = var_3344_int;
		func_1255(var_3343_float, var_3344_int);
		var_3256_int = (int)1 * var_3343_float;
		var_3345_int = var_3256_int;
		if(var_3345_int != 0) {
			var_3346_int = 0; var_3347_string = ""; var_3348_string = ""; var_3349_int = 0;
			var_3248_int = var_3346_int;
			var_3256_int = var_3349_int;
			func_503(var_3346_int, "pers_bomber", "bomber.xml", var_3349_int);
		}
	} else {
		var_3356_int = 0; var_3357_string = ""; var_3358_string = ""; var_3359_int = 0;
		var_3248_int = var_3356_int;
		func_503(var_3356_int, "pers_rat", "rat.xml", (int)7);
		var_3360_int = 0; var_3361_string = ""; var_3362_string = ""; var_3363_int = 0;
		var_3248_int = var_3360_int;
		func_503(var_3360_int, "pers_alkash", "alkash.xml", (int)1);
		var_3364_int = 0; var_3365_string = ""; var_3366_string = ""; var_3367_int = 0;
		var_3248_int = var_3364_int;
		func_503(var_3364_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3369_float = 0; var_3370_int = 0;
		var_3249_int = var_3370_int;
		func_1165(var_3369_float, var_3370_int);
		var_3257_int = (int)2 * var_3369_float;
		var_3371_int = var_3257_int;
		if(var_3371_int != 0) {
			var_3372_int = 0; var_3373_string = ""; var_3374_string = ""; var_3375_int = 0;
			var_3248_int = var_3372_int;
			var_3257_int = var_3375_int;
			func_503(var_3372_int, "pers_grabitel", "grabitel.xml", var_3375_int);
		}
		var_3377_int = var_3249_int + (int)1;
		var_3379_bool = var_3377_int >= (int)2;
		if(var_3379_bool != 0) {
			var_3380_int = 0; var_3381_string = ""; var_3382_string = ""; var_3383_int = 0;
			var_3248_int = var_3380_int;
			func_503(var_3380_int, "pers_patrool", "patrol.xml", (int)1);
			var_3384_bool = 0; var_3385_int = 0;
			var_3249_int = var_3385_int;
			func_1372(var_3384_bool, var_3385_int);
			if(var_3384_bool != 0) {
				var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0;
				var_3248_int = var_3386_int;
				func_503(var_3386_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3391_float = 0; var_3392_int = 0;
		var_3249_int = var_3392_int;
		func_1255(var_3391_float, var_3392_int);
		var_3258_int = (int)1 * var_3391_float;
		var_3393_int = var_3258_int;
		if(var_3393_int == 0) goto Label_4197;
		var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0;
		var_3248_int = var_3394_int;
		var_3258_int = var_3397_int;
		func_503(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_4197:
	var_3350_bool = 0; var_3351_int = 0;
	var_3249_int = var_3351_int;
	func_1372(var_3350_bool, var_3351_int);
	if(var_3350_bool != 0) {
		var_3352_int = 0; var_3353_string = ""; var_3354_string = ""; var_3355_int = 0;
		var_3248_int = var_3352_int;
		func_503(var_3352_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_11204(var_5277_bool)
{
	var_5280_int = 0; var_5281_string = "";
	func_132(var_5280_int, "k6AlexandrVisit");
	var_5283_bool = var_5280_int != (int)0;
	if(var_5283_bool != 0) {
		var_5277_bool = 1;
		return 0;
	}
	var_5277_bool = 0;
	return 0;
}


func_5072(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object)
{
	var_2560_bool = var_2554_int == (int)0;
	if(var_2560_bool != 0) {
		var_2561_int = 0; var_2562_bool = 0;
		func_796((int)3, (bool)1);
		var_2563_int = 0; var_2564_bool = 0; var_2565_int = 0;
		func_813((int)3, (bool)1, (int)1);
		var_2566_int = 0; var_2567_int = 0; var_2568_object = Obj(); var_2569_object = Obj(); var_2570_object = Obj();
		var_2553_int = var_2567_int;
		var_2555_object = var_2568_object;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		func_641((int)3, var_2567_int, var_2568_object, var_2569_object, var_2570_object);
		var_2571_object = Obj(); var_2572_int = 0;
		var_2558_object = var_2571_object;
		func_305(var_2571_object, (int)1);
		var_2573_int = 0; var_2574_bool = 0; var_2575_int = 0;
		func_870((int)3, (bool)1, (int)7);
		var_2576_int = 0; var_2577_bool = 0; var_2578_int = 0;
		func_932((int)3, (bool)0, (int)7);
	}
	var_2579_int = 0; var_2580_bool = 0;
	func_779((int)3, (bool)0);
	var_2581_int = 0; var_2582_int = 0; var_2583_int = 0;
	var_2553_int = var_2582_int;
	var_2554_int = var_2583_int;
	func_2944((int)3, var_2582_int, var_2583_int);
	return 0;
}


func_11216(var_5316_bool)
{
	var_5319_int = 0; var_5320_string = "";
	func_132(var_5319_int, "k5Kapellavisit");
	var_5322_bool = var_5319_int != (int)0;
	if(var_5322_bool != 0) {
		var_5316_bool = 1;
		return 0;
	}
	var_5316_bool = 0;
	return 0;
}


func_983(var_1274_int, var_1275_int)
{
	var_1276_bool = 0;
	var_1276_bool = 1;
	var_1277_bool = 0;
	var_1277_bool = 1;
	var_1279_bool = var_1275_int >= (int)20;
	if(var_1279_bool != 1) {
		var_1281_bool = var_1275_int < (int)2;
		if(var_1281_bool != 1) {
			var_1277_bool = 0;
		}
	}
	if(var_1277_bool != 1) {
		var_1282_bool = 0;
		var_1282_bool = 0;
		var_1284_bool = var_1275_int >= (int)6;
		if(var_1284_bool != 0) {
			var_1286_bool = var_1275_int < (int)10;
			if(var_1286_bool != 0) {
				var_1282_bool = 1;
			}
		}
		if(var_1282_bool != 1) {
			var_1276_bool = 0;
		}
	}
	if(var_1276_bool != 0) {
		var_1287_int = 0; var_1288_bool = 0;
		var_1274_int = var_1287_int;
		func_779(var_1287_int, (bool)1);
	} else {
		var_1289_int = 0; var_1290_bool = 0;
		var_1274_int = var_1289_int;
		func_779(var_1289_int, (bool)0);
	}
	return 0;
	
}


func_7130(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object)
{
	var_1776_bool = var_1770_int == (int)0;
	if(var_1776_bool != 0) {
		var_1777_int = 0; var_1778_bool = 0;
		func_796((int)14, (bool)0);
		var_1779_int = 0; var_1780_bool = 0; var_1781_int = 0;
		func_813((int)14, (bool)0, (int)1);
		var_1782_int = 0; var_1783_int = 0; var_1784_object = Obj(); var_1785_object = Obj(); var_1786_object = Obj();
		var_1782_int = 14;
		var_1769_int = var_1783_int;
		var_1771_object = var_1784_object;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		func_622(var_1783_int, var_1784_object, var_1785_object, var_1786_object);
		var_1787_object = Obj(); var_1788_int = 0;
		var_1774_object = var_1787_object;
		func_305(var_1787_object, (int)0);
		var_1789_int = 0; var_1790_bool = 0; var_1791_int = 0;
		func_870((int)14, (bool)0, (int)5);
		var_1792_int = 0; var_1793_bool = 0; var_1794_int = 0;
		func_932((int)14, (bool)0, (int)5);
	}
	var_1795_int = 0; var_1796_int = 0;
	var_1770_int = var_1796_int;
	func_1087((int)14, var_1796_int);
	var_1806_int = 0; var_1807_int = 0; var_1808_int = 0;
	var_1769_int = var_1807_int;
	var_1770_int = var_1808_int;
	func_1376((int)14, var_1807_int, var_1808_int);
	return 0;
}


func_11228(var_4963_bool)
{
	var_4966_int = 0; var_4967_string = "";
	func_132(var_4966_int, "k6LaskaVisit");
	var_4969_bool = var_4966_int != (int)0;
	if(var_4969_bool != 0) {
		var_4963_bool = 1;
		return 0;
	}
	var_4963_bool = 0;
	return 0;
}


func_6109(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object)
{
	var_1611_bool = var_1605_int == (int)0;
	if(var_1611_bool != 0) {
		var_1612_int = 0; var_1613_bool = 0;
		func_796((int)9, (bool)0);
		var_1614_int = 0; var_1615_bool = 0; var_1616_int = 0;
		func_813((int)9, (bool)0, (int)1);
		var_1617_int = 0; var_1618_int = 0; var_1619_object = Obj(); var_1620_object = Obj(); var_1621_object = Obj();
		var_1617_int = 9;
		var_1604_int = var_1618_int;
		var_1606_object = var_1619_object;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		func_622(var_1618_int, var_1619_object, var_1620_object, var_1621_object);
		var_1622_object = Obj(); var_1623_int = 0;
		var_1609_object = var_1622_object;
		func_305(var_1622_object, (int)0);
		var_1624_int = 0; var_1625_bool = 0; var_1626_int = 0;
		func_870((int)9, (bool)0, (int)7);
		var_1627_int = 0; var_1628_bool = 0; var_1629_int = 0;
		func_932((int)9, (bool)0, (int)7);
	}
	var_1630_int = 0; var_1631_int = 0;
	var_1605_int = var_1631_int;
	func_1050((int)9, var_1631_int);
	var_1632_int = 0; var_1633_int = 0; var_1634_int = 0;
	var_1604_int = var_1633_int;
	var_1605_int = var_1634_int;
	func_1624((int)9, var_1633_int, var_1634_int);
	return 0;
}


func_11240(var_5007_bool)
{
	var_5010_int = 0; var_5011_string = "";
	func_132(var_5010_int, "k4LaraVisit");
	var_5013_bool = var_5010_int != (int)0;
	if(var_5013_bool != 0) {
		var_5007_bool = 1;
		return 0;
	}
	var_5007_bool = 0;
	return 0;
}


func_11252(var_4920_bool)
{
	var_4923_int = 0; var_4924_string = "";
	func_132(var_4923_int, "k7AglajaVisit");
	var_4926_bool = var_4923_int != (int)0;
	if(var_4926_bool != 0) {
		var_4920_bool = 1;
		return 0;
	}
	var_4920_bool = 0;
	return 0;
}


func_1020(var_1322_int, var_1323_int)
{
	var_1324_bool = 0;
	var_1324_bool = 1;
	var_1326_bool = var_1323_int >= (int)20;
	if(var_1326_bool != 1) {
		var_1327_bool = 0;
		var_1327_bool = 0;
		var_1329_bool = var_1323_int >= (int)6;
		if(var_1329_bool != 0) {
			var_1331_bool = var_1323_int < (int)10;
			if(var_1331_bool != 0) {
				var_1327_bool = 1;
			}
		}
		if(var_1327_bool != 1) {
			var_1324_bool = 0;
		}
	}
	if(var_1324_bool != 0) {
		var_1332_int = 0; var_1333_bool = 0;
		var_1322_int = var_1332_int;
		func_779(var_1332_int, (bool)1);
	} else {
		var_1334_int = 0; var_1335_bool = 0;
		var_1322_int = var_1334_int;
		func_779(var_1334_int, (bool)0);
	}
	return 0;
	
}


