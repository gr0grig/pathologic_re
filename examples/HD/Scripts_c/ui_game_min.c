// @IMPORTS: NewGame/2,DestroyWindow/0
// @STRINGS: W:world_min.xml|W:player.xml
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	NewGame("world_min.xml", "player.xml");
	DestroyWindow();
	return 0;
}


