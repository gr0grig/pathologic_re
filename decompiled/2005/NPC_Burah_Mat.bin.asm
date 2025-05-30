GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Rage
	Patronage
	Discontent
	Untrust
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	.bin
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png
	b7q01
	b7q01MatGotoPrison
	pt_map_uprava_prison
	AddMark
	quest_b7_01
	init_prison
	ShowMap
	b7q02
	quest_b7_02
	init_termitnik2
	completed
	b8q01
	quest_b8_01
	place_klara
	remove_klara
	unlock_boiny
	b8q03
	b8q03MladVladIsVictim
	oob10Mat1
	oob10Mat2
	b10q04
	b10q04MatGotoMorlok
	pt_b10q04_morlok
	quest_b10_04
	place_morloks
	b10MatVisit
	fail
	oob12Mat1
	b10q01
	b10q04PlennikTalk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	mt_mat

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xa6c
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1cb Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x322 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x504 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x812 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa42 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xab5 Vars = (int)
		EVENT_6 Op = 0xadb Vars = ()
		EVENT_5 Op = 0xaea Vars = ()
		EVENT_45 Op = 0xaf7 Vars = (bool)
		EVENT_0 Op = 0xb03 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xb8c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xcfa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xcf8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xcfc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xcfe

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf6b

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xca0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xbe1

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0xbd0

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 535263)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xe69

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 535264)
0x66: Push((int) 37039)
0x67: Push((int) 36939)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535339)
0x6b: Push((int) -1)
0x6c: Push((int) 37021)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 535354)
0x70: Push((int) -1)
0x71: Push((int) 37038)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xd00

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0xc6b

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0xd00

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0xc7b

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0xc99

0xb0: Pop(0)
0xb1: Push((int) 36939)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xdd3

0xb8: Pop(2)
0xb9: Push((int) 36938)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 535263)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0xe69

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 535264)
0xcb: Push((int) 37039)
0xcc: Push((int) 36939)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 535339)
0xd0: Push((int) -1)
0xd1: Push((int) 37021)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 535354)
0xd5: Push((int) -1)
0xd6: Push((int) 37038)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 37039)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Rage"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 535355)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 535356)
0xe7: Push((int) 37042)
0xe8: Push((int) 37040)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 37043)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xef: Push((int) 37042)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Rage"
0xf4: Call2 0x95

0xf5: Pop(1)
0xf6: Push((int) 535358)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 535362)
0xfc: Push((int) 37049)
0xfd: Push((int) 37047)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 535363)
0x101: Push((int) -1)
0x102: Push((int) 37048)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 37049)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Patronage"
0x10b: Call2 0x95

0x10c: Pop(1)
0x10d: Push((int) 535364)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 535365)
0x113: Push((int) -1)
0x114: Push((int) 37050)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 535366)
0x118: Push((int) -1)
0x119: Push((int) 37051)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11e: PushEmpty(bool)
0x11f: Call2 0xd00

0x120: Pop(0)
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: @ lshStopAnimation()
0x123: Pop(0)
0x124: GOTO 0x127

0x125: @ StopAnimation()
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: GOTO 0xac

0x129: Return(); Pop(0)

0x12a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12c: PushEmpty(bool, object, float)
0x12d: Stack[-2] = Stack[-12]
0x12e: Stack[-1] = (float) 70.0
0x12f: Call2 0xb8c

0x130: Pop(2)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-10] = (int) -2
0x134: Return(); Pop(8)

0x135: @ CreateDialog(Stack[-4])
0x136: Pop(0)
0x137: PushEmpty(int)
0x138: Call2 0xcfa

0x139: Pop(0)
0x13a: @@ SetNPCName(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(int)
0x13d: Call2 0xcf8

0x13e: Pop(0)
0x13f: @@ SetNPCDescription(Stack[-1])
0x140: Pop(1)
0x141: PushEmpty(string)
0x142: Call2 0xcfc

0x143: Pop(0)
0x144: @@ SetPhoto(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(string)
0x147: Call2 0xcfe

0x148: Pop(0)
0x149: @@ SetPhoto2(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(int)
0x14c: Call2 0xf6b

0x14d: Pop(0)
0x14e: @@ SetPlayerName(Stack[-1])
0x14f: Pop(1)
0x150: Stack[-2] = (int) -1
0x151: @ IsOverrideActive(Stack[-3])
0x152: Pop(0)
0x153: Push(Stack[-3])
0x154: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x155: Stack[-10] = (int) -2
0x156: Return(); Pop(8)

0x157: @ DoDialog(Stack[-4])
0x158: Pop(0)
0x159: PushEmpty(bool, object)
0x15a: PushEmpty(object)
0x15b: Call2 0xca0

0x15c: Stack[-2] = Stack[-1]
0x15d: Pop(1)
0x15e: Call2 0xbe1

0x15f: Pop(2)
0x160: PushEmpty(object, object)
0x161: Stack[-2] = Stack[-11]
0x162: Stack[-1] = Stack[-6]
0x163: Push(-2, 4); TaskCall(3)
0x164: Call2 0x17b

0x165: Pop(-2, 4); TaskReturn
0x166: Pop(2)
0x167: @@ IsDialogEnd(Stack[-1])
0x168: Pop(0)
0x169: Pop(0); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: @ sync()
0x16c: Pop(0)
0x16d: @@ IsDialogEnd(Stack[-1])
0x16e: Pop(0)
0x16f: GOTO 0x169

0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[-10]
0x172: Call2 0xbd0

0x173: Pop(1)
0x174: @ StopDialog(Stack[-4])
0x175: Pop(0)
0x176: @@ GetReturnValue(Stack[-2])
0x177: Pop(0)
0x178: Stack[-10] = Stack[-2]
0x179: Return(); Pop(8)

0x17a: Stack[-4] = 0
0x17b: PushEmpty()
0x17c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x17d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x17e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17f: Push((int) 1)
0x180: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Neutral"
0x183: Call2 0x1b5

0x184: Pop(1)
0x185: Push((int) 518060)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 518061)
0x18b: Push((int) 29781)
0x18c: Push((int) 19194)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Push((int) 528400)
0x190: Push((int) 29777)
0x191: Push((int) 29776)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: GOTO 0x197

0x195: Return(); Pop(0)

0x196: GOTO 0x17f

0x197: PushEmpty(bool)
0x198: Call2 0xd00

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19b: @ lshWaitForAnimEnd()
0x19c: Pop(0)
0x19d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: GOTO 0x1a5

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a2: Call2 0xc6b

0x1a3: Pop(1)
0x1a4: GOTO 0x19b

0x1a5: GOTO 0x1b4

0x1a6: Push("all")
0x1a7: Push("idle")
0x1a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: GOTO 0x1b4

0x1af: Push("all")
0x1b0: Push("idle")
0x1b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: GOTO 0x1aa

0x1b4: Return(); Pop(0)

0x1b5: PushEmpty()
0x1b6: PushEmpty(bool)
0x1b7: Call2 0xd00

0x1b8: Pop(0)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Return(); Pop(0)

0x1bc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Return(); Pop(0)

0x1bf: PushEmpty(string, bool)
0x1c0: Stack[-2] = Stack[-3]
0x1c1: Push("")
0x1c2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c4: Stack[-1] = (bool) 0
0x1c5: GOTO 0x1c7

0x1c6: Stack[-1] = (bool) 1
0x1c7: Call2 0xc7b

0x1c8: Pop(2)
0x1c9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty()
0x1cc: Push((int) 1)
0x1cd: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x1ce: PushEmpty()
0x1cf: Call2 0xc99

0x1d0: Pop(0)
0x1d1: Push((int) 19193)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0x1b5

0x1d7: Pop(1)
0x1d8: Push((int) 518060)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 518061)
0x1de: Push((int) 29781)
0x1df: Push((int) 19194)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 528400)
0x1e3: Push((int) 29777)
0x1e4: Push((int) 29776)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 29777)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0x1b5

0x1ee: Pop(1)
0x1ef: Push((int) 528401)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 528402)
0x1f5: Push((int) 29779)
0x1f6: Push((int) 29778)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 29779)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0x1b5

0x200: Pop(1)
0x201: Push((int) 528403)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 528404)
0x207: Push((int) 29781)
0x208: Push((int) 29780)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 29781)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0x1b5

0x212: Pop(1)
0x213: Push((int) 528405)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 528406)
0x219: Push((int) 29784)
0x21a: Push((int) 29782)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 528407)
0x21e: Push((int) 29786)
0x21f: Push((int) 29783)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 29786)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral"
0x228: Call2 0x1b5

0x229: Pop(1)
0x22a: Push((int) 528409)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 528410)
0x230: Push((int) 29784)
0x231: Push((int) 29787)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Push((int) 528411)
0x235: Push((int) 29784)
0x236: Push((int) 29788)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 29784)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral"
0x23f: Call2 0x1b5

0x240: Pop(1)
0x241: Push((int) 528408)
0x242: @@ SetMessage(Stack[-1])
0x243: Pop(1)
0x244: @@ ClearReplies()
0x245: Pop(0)
0x246: Push((int) 528412)
0x247: Push((int) -1)
0x248: Push((int) 29791)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Push((int) 528413)
0x24c: Push((int) -1)
0x24d: Push((int) 29792)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x252: PushEmpty(bool)
0x253: Call2 0xd00

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: @ lshStopAnimation()
0x257: Pop(0)
0x258: GOTO 0x25b

0x259: @ StopAnimation()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: GOTO 0x1cc

0x25d: Return(); Pop(0)

0x25e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x25f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x260: PushEmpty(bool, object, float)
0x261: Stack[-2] = Stack[-12]
0x262: Stack[-1] = (float) 70.0
0x263: Call2 0xb8c

0x264: Pop(2)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: Stack[-10] = (int) -2
0x268: Return(); Pop(8)

0x269: @ CreateDialog(Stack[-4])
0x26a: Pop(0)
0x26b: PushEmpty(int)
0x26c: Call2 0xcfa

0x26d: Pop(0)
0x26e: @@ SetNPCName(Stack[-1])
0x26f: Pop(1)
0x270: PushEmpty(int)
0x271: Call2 0xcf8

0x272: Pop(0)
0x273: @@ SetNPCDescription(Stack[-1])
0x274: Pop(1)
0x275: PushEmpty(string)
0x276: Call2 0xcfc

0x277: Pop(0)
0x278: @@ SetPhoto(Stack[-1])
0x279: Pop(1)
0x27a: PushEmpty(string)
0x27b: Call2 0xcfe

0x27c: Pop(0)
0x27d: @@ SetPhoto2(Stack[-1])
0x27e: Pop(1)
0x27f: PushEmpty(int)
0x280: Call2 0xf6b

0x281: Pop(0)
0x282: @@ SetPlayerName(Stack[-1])
0x283: Pop(1)
0x284: Stack[-2] = (int) -1
0x285: @ IsOverrideActive(Stack[-3])
0x286: Pop(0)
0x287: Push(Stack[-3])
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-10] = (int) -2
0x28a: Return(); Pop(8)

0x28b: @ DoDialog(Stack[-4])
0x28c: Pop(0)
0x28d: PushEmpty(bool, object)
0x28e: PushEmpty(object)
0x28f: Call2 0xca0

0x290: Stack[-2] = Stack[-1]
0x291: Pop(1)
0x292: Call2 0xbe1

0x293: Pop(2)
0x294: PushEmpty(object, object)
0x295: Stack[-2] = Stack[-11]
0x296: Stack[-1] = Stack[-6]
0x297: Push(-2, 4); TaskCall(5)
0x298: Call2 0x2af

0x299: Pop(-2, 4); TaskReturn
0x29a: Pop(2)
0x29b: @@ IsDialogEnd(Stack[-1])
0x29c: Pop(0)
0x29d: Pop(0); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: @ sync()
0x2a0: Pop(0)
0x2a1: @@ IsDialogEnd(Stack[-1])
0x2a2: Pop(0)
0x2a3: GOTO 0x29d

0x2a4: PushEmpty(object)
0x2a5: Stack[-1] = Stack[-10]
0x2a6: Call2 0xbd0

0x2a7: Pop(1)
0x2a8: @ StopDialog(Stack[-4])
0x2a9: Pop(0)
0x2aa: @@ GetReturnValue(Stack[-2])
0x2ab: Pop(0)
0x2ac: Stack[-10] = Stack[-2]
0x2ad: Return(); Pop(8)

0x2ae: Stack[-4] = 0
0x2af: PushEmpty()
0x2b0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2b1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2b2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2b3: Push((int) 1)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2b5: PushEmpty(bool, object)
0x2b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b7: Call2 0xe75

0x2b8: Pop(1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Rage"
0x2bc: Call2 0x30c

0x2bd: Pop(1)
0x2be: Push((int) 520984)
0x2bf: @@ SetMessage(Stack[-1])
0x2c0: Pop(1)
0x2c1: @@ ClearReplies()
0x2c2: Pop(0)
0x2c3: Push((int) 528518)
0x2c4: Push((int) 29911)
0x2c5: Push((int) 29910)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: GOTO 0x2ee

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral"
0x2cb: Call2 0x30c

0x2cc: Pop(1)
0x2cd: Push((int) 520986)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d4: Call2 0xdd9

0x2d5: Pop(1)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: Push((int) 521209)
0x2d8: Push((int) 29920)
0x2d9: Push((int) 22405)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Call2 0xde5

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: Push((int) 521216)
0x2e2: Push((int) 22411)
0x2e3: Push((int) 22410)
0x2e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(3)
0x2e6: Push((int) 520987)
0x2e7: Push((int) -1)
0x2e8: Push((int) 22200)
0x2e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(3)
0x2eb: GOTO 0x2ee

0x2ec: Return(); Pop(0)

0x2ed: GOTO 0x2b3

0x2ee: PushEmpty(bool)
0x2ef: Call2 0xd00

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f2: @ lshWaitForAnimEnd()
0x2f3: Pop(0)
0x2f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2fc

0x2f7: PushEmpty(string)
0x2f8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2f9: Call2 0xc6b

0x2fa: Pop(1)
0x2fb: GOTO 0x2f2

0x2fc: GOTO 0x30b

0x2fd: Push("all")
0x2fe: Push("idle")
0x2ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: @ WaitForAnimEnd()
0x302: Pop(0)
0x303: Push( Stack[3 + Tasks[-1].StackPointer] )
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x30b

0x306: Push("all")
0x307: Push("idle")
0x308: @ PlayAnimation(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: GOTO 0x301

0x30b: Return(); Pop(0)

0x30c: PushEmpty()
0x30d: PushEmpty(bool)
0x30e: Call2 0xd00

0x30f: Pop(0)
0x310: Pop(1); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: Return(); Pop(0)

0x313: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Return(); Pop(0)

0x316: PushEmpty(string, bool)
0x317: Stack[-2] = Stack[-3]
0x318: Push("")
0x319: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-1] = (bool) 0
0x31c: GOTO 0x31e

0x31d: Stack[-1] = (bool) 1
0x31e: Call2 0xc7b

0x31f: Pop(2)
0x320: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x321: Return(); Pop(0)

0x322: PushEmpty()
0x323: Push((int) 1)
0x324: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x325: PushEmpty()
0x326: Call2 0xc99

0x327: Pop(0)
0x328: Push((int) 22198)
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32b: PushEmpty(object, object)
0x32c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32e: Call2 0xd02

0x32f: Pop(2)
0x330: PushEmpty(object, object)
0x331: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x332: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x333: Call2 0xd1e

0x334: Pop(2)
0x335: Push((int) 22409)
0x336: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: PushEmpty(object, object)
0x339: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33b: Call2 0xd2e

0x33c: Pop(2)
0x33d: Push((int) 22412)
0x33e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x340: PushEmpty(object, object)
0x341: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x342: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x343: Call2 0xd43

0x344: Pop(2)
0x345: Push((int) 22197)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0xe75

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Rage"
0x34f: Call2 0x30c

0x350: Pop(1)
0x351: Push((int) 520984)
0x352: @@ SetMessage(Stack[-1])
0x353: Pop(1)
0x354: @@ ClearReplies()
0x355: Pop(0)
0x356: Push((int) 528518)
0x357: Push((int) 29911)
0x358: Push((int) 29910)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Return(); Pop(0)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x30c

0x35f: Pop(1)
0x360: Push((int) 520986)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0xdd9

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push((int) 521209)
0x36b: Push((int) 29920)
0x36c: Push((int) 22405)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call2 0xde5

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 521216)
0x375: Push((int) 22411)
0x376: Push((int) 22410)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 520987)
0x37a: Push((int) -1)
0x37b: Push((int) 22200)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Return(); Pop(0)

0x37f: Push((int) 22411)
0x380: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x382: PushEmpty(string)
0x383: Stack[-1] = "Rage"
0x384: Call2 0x30c

0x385: Pop(1)
0x386: Push((int) 521217)
0x387: @@ SetMessage(Stack[-1])
0x388: Pop(1)
0x389: @@ ClearReplies()
0x38a: Pop(0)
0x38b: Push((int) 521218)
0x38c: Push((int) -1)
0x38d: Push((int) 22412)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 29920)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Rage"
0x396: Call2 0x30c

0x397: Pop(1)
0x398: Push((int) 528528)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 528529)
0x39e: Push((int) 29922)
0x39f: Push((int) 29921)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 29922)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Discontent"
0x3a8: Call2 0x30c

0x3a9: Pop(1)
0x3aa: Push((int) 528530)
0x3ab: @@ SetMessage(Stack[-1])
0x3ac: Pop(1)
0x3ad: @@ ClearReplies()
0x3ae: Pop(0)
0x3af: Push((int) 528548)
0x3b0: Push((int) 29942)
0x3b1: Push((int) 29940)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Push((int) 528531)
0x3b5: Push((int) 29924)
0x3b6: Push((int) 29923)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 29924)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Discontent"
0x3bf: Call2 0x30c

0x3c0: Pop(1)
0x3c1: Push((int) 528532)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 528533)
0x3c7: Push((int) 22406)
0x3c8: Push((int) 29925)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Return(); Pop(0)

0x3cc: Push((int) 22406)
0x3cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3cf: PushEmpty(string)
0x3d0: Stack[-1] = "Discontent"
0x3d1: Call2 0x30c

0x3d2: Pop(1)
0x3d3: Push((int) 521210)
0x3d4: @@ SetMessage(Stack[-1])
0x3d5: Pop(1)
0x3d6: @@ ClearReplies()
0x3d7: Pop(0)
0x3d8: Push((int) 528549)
0x3d9: Push((int) 29942)
0x3da: Push((int) 29941)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 29942)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Discontent"
0x3e3: Call2 0x30c

0x3e4: Pop(1)
0x3e5: Push((int) 528550)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 521211)
0x3eb: Push((int) 22408)
0x3ec: Push((int) 22407)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Push((int) 528524)
0x3f0: Push((int) 22408)
0x3f1: Push((int) 29916)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 22408)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Discontent"
0x3fa: Call2 0x30c

0x3fb: Pop(1)
0x3fc: Push((int) 521212)
0x3fd: @@ SetMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ ClearReplies()
0x400: Pop(0)
0x401: Push((int) 521213)
0x402: Push((int) -1)
0x403: Push((int) 22409)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Return(); Pop(0)

0x407: Push((int) 29911)
0x408: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x40a: PushEmpty(string)
0x40b: Stack[-1] = "Rage"
0x40c: Call2 0x30c

0x40d: Pop(1)
0x40e: Push((int) 528519)
0x40f: @@ SetMessage(Stack[-1])
0x410: Pop(1)
0x411: @@ ClearReplies()
0x412: Pop(0)
0x413: Push((int) 528520)
0x414: Push((int) 29913)
0x415: Push((int) 29912)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 29913)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Rage"
0x41e: Call2 0x30c

0x41f: Pop(1)
0x420: Push((int) 528521)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 528522)
0x426: Push((int) 29915)
0x427: Push((int) 29914)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 29915)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Rage"
0x430: Call2 0x30c

0x431: Pop(1)
0x432: Push((int) 528523)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 520985)
0x438: Push((int) -1)
0x439: Push((int) 22198)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x43e: PushEmpty(bool)
0x43f: Call2 0xd00

0x440: Pop(0)
0x441: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x442: @ lshStopAnimation()
0x443: Pop(0)
0x444: GOTO 0x447

0x445: @ StopAnimation()
0x446: Pop(0)
0x447: Return(); Pop(0)

0x448: GOTO 0x323

0x449: Return(); Pop(0)

0x44a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x44b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x44c: PushEmpty(bool, object, float)
0x44d: Stack[-2] = Stack[-12]
0x44e: Stack[-1] = (float) 70.0
0x44f: Call2 0xb8c

0x450: Pop(2)
0x451: Pop(1); Push((bool) Stack[-1] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-10] = (int) -2
0x454: Return(); Pop(8)

0x455: @ CreateDialog(Stack[-4])
0x456: Pop(0)
0x457: PushEmpty(int)
0x458: Call2 0xcfa

0x459: Pop(0)
0x45a: @@ SetNPCName(Stack[-1])
0x45b: Pop(1)
0x45c: PushEmpty(int)
0x45d: Call2 0xcf8

0x45e: Pop(0)
0x45f: @@ SetNPCDescription(Stack[-1])
0x460: Pop(1)
0x461: PushEmpty(string)
0x462: Call2 0xcfc

0x463: Pop(0)
0x464: @@ SetPhoto(Stack[-1])
0x465: Pop(1)
0x466: PushEmpty(string)
0x467: Call2 0xcfe

0x468: Pop(0)
0x469: @@ SetPhoto2(Stack[-1])
0x46a: Pop(1)
0x46b: PushEmpty(int)
0x46c: Call2 0xf6b

0x46d: Pop(0)
0x46e: @@ SetPlayerName(Stack[-1])
0x46f: Pop(1)
0x470: Stack[-2] = (int) -1
0x471: @ IsOverrideActive(Stack[-3])
0x472: Pop(0)
0x473: Push(Stack[-3])
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-10] = (int) -2
0x476: Return(); Pop(8)

0x477: @ DoDialog(Stack[-4])
0x478: Pop(0)
0x479: PushEmpty(bool, object)
0x47a: PushEmpty(object)
0x47b: Call2 0xca0

0x47c: Stack[-2] = Stack[-1]
0x47d: Pop(1)
0x47e: Call2 0xbe1

0x47f: Pop(2)
0x480: PushEmpty(object, object)
0x481: Stack[-2] = Stack[-11]
0x482: Stack[-1] = Stack[-6]
0x483: Push(-2, 4); TaskCall(7)
0x484: Call2 0x49b

0x485: Pop(-2, 4); TaskReturn
0x486: Pop(2)
0x487: @@ IsDialogEnd(Stack[-1])
0x488: Pop(0)
0x489: Pop(0); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48b: @ sync()
0x48c: Pop(0)
0x48d: @@ IsDialogEnd(Stack[-1])
0x48e: Pop(0)
0x48f: GOTO 0x489

0x490: PushEmpty(object)
0x491: Stack[-1] = Stack[-10]
0x492: Call2 0xbd0

0x493: Pop(1)
0x494: @ StopDialog(Stack[-4])
0x495: Pop(0)
0x496: @@ GetReturnValue(Stack[-2])
0x497: Pop(0)
0x498: Stack[-10] = Stack[-2]
0x499: Return(); Pop(8)

0x49a: Stack[-4] = 0
0x49b: PushEmpty()
0x49c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x49d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x49e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49f: Push((int) 1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Neutral"
0x4a3: Call2 0x4ee

0x4a4: Pop(1)
0x4a5: Push((int) 521382)
0x4a6: @@ SetMessage(Stack[-1])
0x4a7: Pop(1)
0x4a8: @@ ClearReplies()
0x4a9: Pop(0)
0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Call2 0xdf1

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4af: Push((int) 521383)
0x4b0: Push((int) 25136)
0x4b1: Push((int) 22561)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call2 0xdfd

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b9: Push((int) 521412)
0x4ba: Push((int) 22591)
0x4bb: Push((int) 22590)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Call2 0xe15

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c3: Push((int) 521519)
0x4c4: Push((int) 25119)
0x4c5: Push((int) 22680)
0x4c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: Push((int) 521384)
0x4c9: Push((int) -1)
0x4ca: Push((int) 22562)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: GOTO 0x4d0

0x4ce: Return(); Pop(0)

0x4cf: GOTO 0x49f

0x4d0: PushEmpty(bool)
0x4d1: Call2 0xd00

0x4d2: Pop(0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d4: @ lshWaitForAnimEnd()
0x4d5: Pop(0)
0x4d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: GOTO 0x4de

0x4d9: PushEmpty(string)
0x4da: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4db: Call2 0xc6b

0x4dc: Pop(1)
0x4dd: GOTO 0x4d4

0x4de: GOTO 0x4ed

0x4df: Push("all")
0x4e0: Push("idle")
0x4e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: @ WaitForAnimEnd()
0x4e4: Pop(0)
0x4e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: GOTO 0x4ed

0x4e8: Push("all")
0x4e9: Push("idle")
0x4ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x4eb: Pop(2)
0x4ec: GOTO 0x4e3

0x4ed: Return(); Pop(0)

0x4ee: PushEmpty()
0x4ef: PushEmpty(bool)
0x4f0: Call2 0xd00

0x4f1: Pop(0)
0x4f2: Pop(1); Push((bool) Stack[-1] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: Return(); Pop(0)

0x4f5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f7: Return(); Pop(0)

0x4f8: PushEmpty(string, bool)
0x4f9: Stack[-2] = Stack[-3]
0x4fa: Push("")
0x4fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-1] = (bool) 0
0x4fe: GOTO 0x500

0x4ff: Stack[-1] = (bool) 1
0x500: Call2 0xc7b

0x501: Pop(2)
0x502: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x503: Return(); Pop(0)

0x504: PushEmpty()
0x505: Push((int) 1)
0x506: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x507: PushEmpty()
0x508: Call2 0xc99

0x509: Pop(0)
0x50a: Push((int) 22564)
0x50b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50d: PushEmpty(object, object)
0x50e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x510: Call2 0xd4d

0x511: Pop(2)
0x512: Push((int) 32575)
0x513: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x515: PushEmpty(object, object)
0x516: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x517: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x518: Call2 0xdc9

0x519: Pop(2)
0x51a: Push((int) 22594)
0x51b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51d: PushEmpty(object, object)
0x51e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x520: Call2 0xd5b

0x521: Pop(2)
0x522: Push((int) 22682)
0x523: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x525: PushEmpty(object, object)
0x526: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x527: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x528: Call2 0xd6e

0x529: Pop(2)
0x52a: Push((int) 22683)
0x52b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52d: PushEmpty(object, object)
0x52e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x530: Call2 0xd7b

0x531: Pop(2)
0x532: Push((int) 22560)
0x533: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x535: PushEmpty(string)
0x536: Stack[-1] = "Neutral"
0x537: Call2 0x4ee

0x538: Pop(1)
0x539: Push((int) 521382)
0x53a: @@ SetMessage(Stack[-1])
0x53b: Pop(1)
0x53c: @@ ClearReplies()
0x53d: Pop(0)
0x53e: PushEmpty(bool, object)
0x53f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x540: Call2 0xdf1

0x541: Pop(1)
0x542: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x543: Push((int) 521383)
0x544: Push((int) 25136)
0x545: Push((int) 22561)
0x546: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x547: Pop(3)
0x548: PushEmpty(bool, object)
0x549: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54a: Call2 0xdfd

0x54b: Pop(1)
0x54c: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54d: Push((int) 521412)
0x54e: Push((int) 22591)
0x54f: Push((int) 22590)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: PushEmpty(bool, object)
0x553: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x554: Call2 0xe15

0x555: Pop(1)
0x556: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x557: Push((int) 521519)
0x558: Push((int) 25119)
0x559: Push((int) 22680)
0x55a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55b: Pop(3)
0x55c: Push((int) 521384)
0x55d: Push((int) -1)
0x55e: Push((int) 22562)
0x55f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(3)
0x561: Return(); Pop(0)

0x562: Push((int) 25119)
0x563: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x565: PushEmpty(string)
0x566: Stack[-1] = "Rage"
0x567: Call2 0x4ee

0x568: Pop(1)
0x569: Push((int) 523846)
0x56a: @@ SetMessage(Stack[-1])
0x56b: Pop(1)
0x56c: @@ ClearReplies()
0x56d: Pop(0)
0x56e: Push((int) 523851)
0x56f: Push((int) 25125)
0x570: Push((int) 25124)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: Push((int) 523847)
0x574: Push((int) 25121)
0x575: Push((int) 25120)
0x576: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x577: Pop(3)
0x578: Return(); Pop(0)

0x579: Push((int) 25121)
0x57a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x57c: PushEmpty(string)
0x57d: Stack[-1] = "Neutral"
0x57e: Call2 0x4ee

0x57f: Pop(1)
0x580: Push((int) 523848)
0x581: @@ SetMessage(Stack[-1])
0x582: Pop(1)
0x583: @@ ClearReplies()
0x584: Pop(0)
0x585: Push((int) 523855)
0x586: Push((int) 25123)
0x587: Push((int) 25128)
0x588: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 25125)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x58e: PushEmpty(string)
0x58f: Stack[-1] = "Rage"
0x590: Call2 0x4ee

0x591: Pop(1)
0x592: Push((int) 523852)
0x593: @@ SetMessage(Stack[-1])
0x594: Pop(1)
0x595: @@ ClearReplies()
0x596: Pop(0)
0x597: Push((int) 523853)
0x598: Push((int) 25127)
0x599: Push((int) 25126)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: Return(); Pop(0)

0x59d: Push((int) 25127)
0x59e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = "Rage"
0x5a2: Call2 0x4ee

0x5a3: Pop(1)
0x5a4: Push((int) 523854)
0x5a5: @@ SetMessage(Stack[-1])
0x5a6: Pop(1)
0x5a7: @@ ClearReplies()
0x5a8: Pop(0)
0x5a9: Push((int) 523849)
0x5aa: Push((int) 25123)
0x5ab: Push((int) 25122)
0x5ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: Return(); Pop(0)

0x5af: Push((int) 25123)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5b2: PushEmpty(string)
0x5b3: Stack[-1] = "Neutral"
0x5b4: Call2 0x4ee

0x5b5: Pop(1)
0x5b6: Push((int) 523850)
0x5b7: @@ SetMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ ClearReplies()
0x5ba: Pop(0)
0x5bb: Push((int) 523856)
0x5bc: Push((int) 22681)
0x5bd: Push((int) 25130)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 22681)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Neutral"
0x5c6: Call2 0x4ee

0x5c7: Pop(1)
0x5c8: Push((int) 521520)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 521521)
0x5ce: Push((int) 25132)
0x5cf: Push((int) 22682)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Push((int) 521522)
0x5d3: Push((int) 25134)
0x5d4: Push((int) 22683)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Push((int) 523857)
0x5d8: Push((int) -1)
0x5d9: Push((int) 25131)
0x5da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5db: Pop(3)
0x5dc: Return(); Pop(0)

0x5dd: Push((int) 25134)
0x5de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5e0: PushEmpty(string)
0x5e1: Stack[-1] = "Neutral"
0x5e2: Call2 0x4ee

0x5e3: Pop(1)
0x5e4: Push((int) 523860)
0x5e5: @@ SetMessage(Stack[-1])
0x5e6: Pop(1)
0x5e7: @@ ClearReplies()
0x5e8: Pop(0)
0x5e9: Push((int) 523861)
0x5ea: Push((int) -1)
0x5eb: Push((int) 25135)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 25132)
0x5f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f2: PushEmpty(string)
0x5f3: Stack[-1] = "Neutral"
0x5f4: Call2 0x4ee

0x5f5: Pop(1)
0x5f6: Push((int) 523858)
0x5f7: @@ SetMessage(Stack[-1])
0x5f8: Pop(1)
0x5f9: @@ ClearReplies()
0x5fa: Pop(0)
0x5fb: Push((int) 523859)
0x5fc: Push((int) -1)
0x5fd: Push((int) 25133)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Return(); Pop(0)

0x601: Push((int) 22591)
0x602: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x604: PushEmpty(string)
0x605: Stack[-1] = "Neutral"
0x606: Call2 0x4ee

0x607: Pop(1)
0x608: Push((int) 521413)
0x609: @@ SetMessage(Stack[-1])
0x60a: Pop(1)
0x60b: @@ ClearReplies()
0x60c: Pop(0)
0x60d: Push((int) 523877)
0x60e: Push((int) 25154)
0x60f: Push((int) 25153)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Return(); Pop(0)

0x613: Push((int) 25154)
0x614: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x616: PushEmpty(string)
0x617: Stack[-1] = "Neutral"
0x618: Call2 0x4ee

0x619: Pop(1)
0x61a: Push((int) 523878)
0x61b: @@ SetMessage(Stack[-1])
0x61c: Pop(1)
0x61d: @@ ClearReplies()
0x61e: Pop(0)
0x61f: Push((int) 523879)
0x620: Push((int) 25162)
0x621: Push((int) 25155)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Push((int) 523880)
0x625: Push((int) 25162)
0x626: Push((int) 25156)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Push((int) 523881)
0x62a: Push((int) 25158)
0x62b: Push((int) 25157)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Return(); Pop(0)

0x62f: Push((int) 25158)
0x630: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x632: PushEmpty(string)
0x633: Stack[-1] = "Untrust"
0x634: Call2 0x4ee

0x635: Pop(1)
0x636: Push((int) 523882)
0x637: @@ SetMessage(Stack[-1])
0x638: Pop(1)
0x639: @@ ClearReplies()
0x63a: Pop(0)
0x63b: Push((int) 523884)
0x63c: Push((int) 25162)
0x63d: Push((int) 25160)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Push((int) 523883)
0x641: Push((int) 25163)
0x642: Push((int) 25159)
0x643: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x644: Pop(3)
0x645: Push((int) 523885)
0x646: Push((int) 25162)
0x647: Push((int) 25161)
0x648: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x649: Pop(3)
0x64a: Return(); Pop(0)

0x64b: Push((int) 25163)
0x64c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x64e: PushEmpty(string)
0x64f: Stack[-1] = "Discontent"
0x650: Call2 0x4ee

0x651: Pop(1)
0x652: Push((int) 523887)
0x653: @@ SetMessage(Stack[-1])
0x654: Pop(1)
0x655: @@ ClearReplies()
0x656: Pop(0)
0x657: Push((int) 521414)
0x658: Push((int) 22593)
0x659: Push((int) 22592)
0x65a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65b: Pop(3)
0x65c: Return(); Pop(0)

0x65d: Push((int) 22593)
0x65e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Rage"
0x662: Call2 0x4ee

0x663: Pop(1)
0x664: Push((int) 521415)
0x665: @@ SetMessage(Stack[-1])
0x666: Pop(1)
0x667: @@ ClearReplies()
0x668: Pop(0)
0x669: Push((int) 521416)
0x66a: Push((int) -1)
0x66b: Push((int) 22594)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x670: Call2 0xe09

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x673: Push((int) 541573)
0x674: Push((int) -1)
0x675: Push((int) 43744)
0x676: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(3)
0x678: Return(); Pop(0)

0x679: Push((int) 25162)
0x67a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x67c: PushEmpty(string)
0x67d: Stack[-1] = "Discontent"
0x67e: Call2 0x4ee

0x67f: Pop(1)
0x680: Push((int) 523886)
0x681: @@ SetMessage(Stack[-1])
0x682: Pop(1)
0x683: @@ ClearReplies()
0x684: Pop(0)
0x685: Push((int) 531259)
0x686: Push((int) -1)
0x687: Push((int) 32575)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Return(); Pop(0)

0x68b: Push((int) 25136)
0x68c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x68e: PushEmpty(string)
0x68f: Stack[-1] = "Patronage"
0x690: Call2 0x4ee

0x691: Pop(1)
0x692: Push((int) 523862)
0x693: @@ SetMessage(Stack[-1])
0x694: Pop(1)
0x695: @@ ClearReplies()
0x696: Pop(0)
0x697: Push((int) 523863)
0x698: Push((int) 25138)
0x699: Push((int) 25137)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Return(); Pop(0)

0x69d: Push((int) 25138)
0x69e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Untrust"
0x6a2: Call2 0x4ee

0x6a3: Pop(1)
0x6a4: Push((int) 523864)
0x6a5: @@ SetMessage(Stack[-1])
0x6a6: Pop(1)
0x6a7: @@ ClearReplies()
0x6a8: Pop(0)
0x6a9: Push((int) 523865)
0x6aa: Push((int) 22563)
0x6ab: Push((int) 25139)
0x6ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Push((int) 523876)
0x6af: Push((int) 22563)
0x6b0: Push((int) 25151)
0x6b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b2: Pop(3)
0x6b3: Return(); Pop(0)

0x6b4: Push((int) 22563)
0x6b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6b7: PushEmpty(string)
0x6b8: Stack[-1] = "Untrust"
0x6b9: Call2 0x4ee

0x6ba: Pop(1)
0x6bb: Push((int) 521385)
0x6bc: @@ SetMessage(Stack[-1])
0x6bd: Pop(1)
0x6be: @@ ClearReplies()
0x6bf: Pop(0)
0x6c0: Push((int) 523866)
0x6c1: Push((int) 25141)
0x6c2: Push((int) 25140)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: Return(); Pop(0)

0x6c6: Push((int) 25141)
0x6c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6c9: PushEmpty(string)
0x6ca: Stack[-1] = "Untrust"
0x6cb: Call2 0x4ee

0x6cc: Pop(1)
0x6cd: Push((int) 523867)
0x6ce: @@ SetMessage(Stack[-1])
0x6cf: Pop(1)
0x6d0: @@ ClearReplies()
0x6d1: Pop(0)
0x6d2: Push((int) 523868)
0x6d3: Push((int) 25143)
0x6d4: Push((int) 25142)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Return(); Pop(0)

0x6d8: Push((int) 25143)
0x6d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral"
0x6dd: Call2 0x4ee

0x6de: Pop(1)
0x6df: Push((int) 523869)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: Push((int) 523870)
0x6e5: Push((int) 25148)
0x6e6: Push((int) 25144)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Push((int) 523871)
0x6ea: Push((int) 25146)
0x6eb: Push((int) 25145)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Push((int) 25146)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6f2: PushEmpty(string)
0x6f3: Stack[-1] = "Neutral"
0x6f4: Call2 0x4ee

0x6f5: Pop(1)
0x6f6: Push((int) 523872)
0x6f7: @@ SetMessage(Stack[-1])
0x6f8: Pop(1)
0x6f9: @@ ClearReplies()
0x6fa: Pop(0)
0x6fb: Push((int) 523873)
0x6fc: Push((int) 25148)
0x6fd: Push((int) 25147)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Return(); Pop(0)

0x701: Push((int) 25148)
0x702: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x704: PushEmpty(string)
0x705: Stack[-1] = "Neutral"
0x706: Call2 0x4ee

0x707: Pop(1)
0x708: Push((int) 523874)
0x709: @@ SetMessage(Stack[-1])
0x70a: Pop(1)
0x70b: @@ ClearReplies()
0x70c: Pop(0)
0x70d: Push((int) 521386)
0x70e: Push((int) -1)
0x70f: Push((int) 22564)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Push((int) 523875)
0x713: Push((int) -1)
0x714: Push((int) 25150)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Return(); Pop(0)

0x718: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x719: PushEmpty(bool)
0x71a: Call2 0xd00

0x71b: Pop(0)
0x71c: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71d: @ lshStopAnimation()
0x71e: Pop(0)
0x71f: GOTO 0x722

0x720: @ StopAnimation()
0x721: Pop(0)
0x722: Return(); Pop(0)

0x723: GOTO 0x505

0x724: Return(); Pop(0)

0x725: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x726: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x727: PushEmpty(bool, object, float)
0x728: Stack[-2] = Stack[-12]
0x729: Stack[-1] = (float) 70.0
0x72a: Call2 0xb8c

0x72b: Pop(2)
0x72c: Pop(1); Push((bool) Stack[-1] == 0)
0x72d: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72e: Stack[-10] = (int) -2
0x72f: Return(); Pop(8)

0x730: @ CreateDialog(Stack[-4])
0x731: Pop(0)
0x732: PushEmpty(int)
0x733: Call2 0xcfa

0x734: Pop(0)
0x735: @@ SetNPCName(Stack[-1])
0x736: Pop(1)
0x737: PushEmpty(int)
0x738: Call2 0xcf8

0x739: Pop(0)
0x73a: @@ SetNPCDescription(Stack[-1])
0x73b: Pop(1)
0x73c: PushEmpty(string)
0x73d: Call2 0xcfc

0x73e: Pop(0)
0x73f: @@ SetPhoto(Stack[-1])
0x740: Pop(1)
0x741: PushEmpty(string)
0x742: Call2 0xcfe

0x743: Pop(0)
0x744: @@ SetPhoto2(Stack[-1])
0x745: Pop(1)
0x746: PushEmpty(int)
0x747: Call2 0xf6b

0x748: Pop(0)
0x749: @@ SetPlayerName(Stack[-1])
0x74a: Pop(1)
0x74b: Stack[-2] = (int) -1
0x74c: @ IsOverrideActive(Stack[-3])
0x74d: Pop(0)
0x74e: Push(Stack[-3])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-10] = (int) -2
0x751: Return(); Pop(8)

0x752: @ DoDialog(Stack[-4])
0x753: Pop(0)
0x754: PushEmpty(bool, object)
0x755: PushEmpty(object)
0x756: Call2 0xca0

0x757: Stack[-2] = Stack[-1]
0x758: Pop(1)
0x759: Call2 0xbe1

0x75a: Pop(2)
0x75b: PushEmpty(object, object)
0x75c: Stack[-2] = Stack[-11]
0x75d: Stack[-1] = Stack[-6]
0x75e: Push(-2, 4); TaskCall(9)
0x75f: Call2 0x776

0x760: Pop(-2, 4); TaskReturn
0x761: Pop(2)
0x762: @@ IsDialogEnd(Stack[-1])
0x763: Pop(0)
0x764: Pop(0); Push((bool) Stack[-1] == 0)
0x765: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x766: @ sync()
0x767: Pop(0)
0x768: @@ IsDialogEnd(Stack[-1])
0x769: Pop(0)
0x76a: GOTO 0x764

0x76b: PushEmpty(object)
0x76c: Stack[-1] = Stack[-10]
0x76d: Call2 0xbd0

0x76e: Pop(1)
0x76f: @ StopDialog(Stack[-4])
0x770: Pop(0)
0x771: @@ GetReturnValue(Stack[-2])
0x772: Pop(0)
0x773: Stack[-10] = Stack[-2]
0x774: Return(); Pop(8)

0x775: Stack[-4] = 0
0x776: PushEmpty()
0x777: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x778: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x779: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x77a: Push((int) 1)
0x77b: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x77c: PushEmpty(object, object)
0x77d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77f: Call2 0xdc3

0x780: Pop(2)
0x781: PushEmpty(string)
0x782: Stack[-1] = "Neutral"
0x783: Call2 0x7fc

0x784: Pop(1)
0x785: Push((int) 521951)
0x786: @@ SetMessage(Stack[-1])
0x787: Pop(1)
0x788: @@ ClearReplies()
0x789: Pop(0)
0x78a: PushEmpty(bool)
0x78b: Stack[-1] = (bool) 1
0x78c: PushEmpty(bool)
0x78d: Stack[-1] = (bool) 0
0x78e: PushEmpty(bool, object)
0x78f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x790: Call2 0xe21

0x791: Pop(1)
0x792: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x793: PushEmpty(bool, object)
0x794: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x795: Call2 0xe39

0x796: Pop(1)
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Stack[-1] = (bool) 1
0x799: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x79a: PushEmpty(bool)
0x79b: Stack[-1] = (bool) 0
0x79c: PushEmpty(bool, object)
0x79d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79e: Call2 0xe2d

0x79f: Pop(1)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a1: PushEmpty(bool, object)
0x7a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a3: Call2 0xe39

0x7a4: Pop(1)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: Stack[-1] = (bool) 1
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 0
0x7a9: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7aa: Push((int) 521952)
0x7ab: Push((int) 23688)
0x7ac: Push((int) 23126)
0x7ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ae: Pop(3)
0x7af: PushEmpty(bool)
0x7b0: Stack[-1] = (bool) 0
0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Call2 0xe45

0x7b4: Pop(1)
0x7b5: Pop(1); Push((bool) Stack[-1] == 0)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b7: PushEmpty(bool, object)
0x7b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b9: Call2 0xe51

0x7ba: Pop(1)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: Stack[-1] = (bool) 1
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7be: Push((int) 530373)
0x7bf: Push((int) 31746)
0x7c0: Push((int) 31745)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: PushEmpty(bool)
0x7c4: Stack[-1] = (bool) 0
0x7c5: PushEmpty(bool, object)
0x7c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c7: Call2 0xe45

0x7c8: Pop(1)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cc: Call2 0xe5d

0x7cd: Pop(1)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: Stack[-1] = (bool) 1
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d1: Push((int) 530376)
0x7d2: Push((int) 31749)
0x7d3: Push((int) 31748)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 521955)
0x7d7: Push((int) -1)
0x7d8: Push((int) 23129)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: GOTO 0x7de

0x7dc: Return(); Pop(0)

0x7dd: GOTO 0x77a

0x7de: PushEmpty(bool)
0x7df: Call2 0xd00

0x7e0: Pop(0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e2: @ lshWaitForAnimEnd()
0x7e3: Pop(0)
0x7e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: GOTO 0x7ec

0x7e7: PushEmpty(string)
0x7e8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7e9: Call2 0xc6b

0x7ea: Pop(1)
0x7eb: GOTO 0x7e2

0x7ec: GOTO 0x7fb

0x7ed: Push("all")
0x7ee: Push("idle")
0x7ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f0: Pop(2)
0x7f1: @ WaitForAnimEnd()
0x7f2: Pop(0)
0x7f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: GOTO 0x7fb

0x7f6: Push("all")
0x7f7: Push("idle")
0x7f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f9: Pop(2)
0x7fa: GOTO 0x7f1

0x7fb: Return(); Pop(0)

0x7fc: PushEmpty()
0x7fd: PushEmpty(bool)
0x7fe: Call2 0xd00

0x7ff: Pop(0)
0x800: Pop(1); Push((bool) Stack[-1] == 0)
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: Return(); Pop(0)

0x803: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Return(); Pop(0)

0x806: PushEmpty(string, bool)
0x807: Stack[-2] = Stack[-3]
0x808: Push("")
0x809: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-1] = (bool) 0
0x80c: GOTO 0x80e

0x80d: Stack[-1] = (bool) 1
0x80e: Call2 0xc7b

0x80f: Pop(2)
0x810: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Push((int) 1)
0x814: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x815: PushEmpty()
0x816: Call2 0xc99

0x817: Pop(0)
0x818: Push((int) 23126)
0x819: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81b: PushEmpty(object, object)
0x81c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x81d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x81e: Call2 0xd88

0x81f: Pop(2)
0x820: Push((int) 31745)
0x821: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x823: PushEmpty(object, object)
0x824: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x825: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x826: Call2 0xd8e

0x827: Pop(2)
0x828: Push((int) 32812)
0x829: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x82b: PushEmpty(object, object)
0x82c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x82d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82e: Call2 0xd94

0x82f: Pop(2)
0x830: PushEmpty(object, object)
0x831: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x832: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x833: Call2 0xdb3

0x834: Pop(2)
0x835: Push((int) 31750)
0x836: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x838: PushEmpty(object, object)
0x839: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83b: Call2 0xd94

0x83c: Pop(2)
0x83d: PushEmpty(object, object)
0x83e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x840: Call2 0xdb3

0x841: Pop(2)
0x842: Push((int) 23125)
0x843: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x845: PushEmpty(object, object)
0x846: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x847: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x848: Call2 0xdc3

0x849: Pop(2)
0x84a: PushEmpty(string)
0x84b: Stack[-1] = "Neutral"
0x84c: Call2 0x7fc

0x84d: Pop(1)
0x84e: Push((int) 521951)
0x84f: @@ SetMessage(Stack[-1])
0x850: Pop(1)
0x851: @@ ClearReplies()
0x852: Pop(0)
0x853: PushEmpty(bool)
0x854: Stack[-1] = (bool) 1
0x855: PushEmpty(bool)
0x856: Stack[-1] = (bool) 0
0x857: PushEmpty(bool, object)
0x858: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x859: Call2 0xe21

0x85a: Pop(1)
0x85b: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85c: PushEmpty(bool, object)
0x85d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85e: Call2 0xe39

0x85f: Pop(1)
0x860: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x861: Stack[-1] = (bool) 1
0x862: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x863: PushEmpty(bool)
0x864: Stack[-1] = (bool) 0
0x865: PushEmpty(bool, object)
0x866: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x867: Call2 0xe2d

0x868: Pop(1)
0x869: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86a: PushEmpty(bool, object)
0x86b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86c: Call2 0xe39

0x86d: Pop(1)
0x86e: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86f: Stack[-1] = (bool) 1
0x870: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x871: Stack[-1] = (bool) 0
0x872: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x873: Push((int) 521952)
0x874: Push((int) 23688)
0x875: Push((int) 23126)
0x876: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x877: Pop(3)
0x878: PushEmpty(bool)
0x879: Stack[-1] = (bool) 0
0x87a: PushEmpty(bool, object)
0x87b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87c: Call2 0xe45

0x87d: Pop(1)
0x87e: Pop(1); Push((bool) Stack[-1] == 0)
0x87f: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x880: PushEmpty(bool, object)
0x881: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x882: Call2 0xe51

0x883: Pop(1)
0x884: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x885: Stack[-1] = (bool) 1
0x886: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x887: Push((int) 530373)
0x888: Push((int) 31746)
0x889: Push((int) 31745)
0x88a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: PushEmpty(bool)
0x88d: Stack[-1] = (bool) 0
0x88e: PushEmpty(bool, object)
0x88f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x890: Call2 0xe45

0x891: Pop(1)
0x892: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x893: PushEmpty(bool, object)
0x894: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x895: Call2 0xe5d

0x896: Pop(1)
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: Stack[-1] = (bool) 1
0x899: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89a: Push((int) 530376)
0x89b: Push((int) 31749)
0x89c: Push((int) 31748)
0x89d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89e: Pop(3)
0x89f: Push((int) 521955)
0x8a0: Push((int) -1)
0x8a1: Push((int) 23129)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: Return(); Pop(0)

0x8a5: Push((int) 31749)
0x8a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8a8: PushEmpty(string)
0x8a9: Stack[-1] = "Untrust"
0x8aa: Call2 0x7fc

0x8ab: Pop(1)
0x8ac: Push((int) 530377)
0x8ad: @@ SetMessage(Stack[-1])
0x8ae: Pop(1)
0x8af: @@ ClearReplies()
0x8b0: Pop(0)
0x8b1: Push((int) 531437)
0x8b2: Push((int) 32785)
0x8b3: Push((int) 32783)
0x8b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b5: Pop(3)
0x8b6: Push((int) 531438)
0x8b7: Push((int) -1)
0x8b8: Push((int) 32784)
0x8b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ba: Pop(3)
0x8bb: Return(); Pop(0)

0x8bc: Push((int) 32785)
0x8bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8be: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8bf: PushEmpty(string)
0x8c0: Stack[-1] = "Untrust"
0x8c1: Call2 0x7fc

0x8c2: Pop(1)
0x8c3: Push((int) 531439)
0x8c4: @@ SetMessage(Stack[-1])
0x8c5: Pop(1)
0x8c6: @@ ClearReplies()
0x8c7: Pop(0)
0x8c8: Push((int) 531460)
0x8c9: Push((int) 32811)
0x8ca: Push((int) 32810)
0x8cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cc: Pop(3)
0x8cd: Push((int) 530378)
0x8ce: Push((int) -1)
0x8cf: Push((int) 31750)
0x8d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d1: Pop(3)
0x8d2: Return(); Pop(0)

0x8d3: Push((int) 32811)
0x8d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8d6: PushEmpty(string)
0x8d7: Stack[-1] = "Untrust"
0x8d8: Call2 0x7fc

0x8d9: Pop(1)
0x8da: Push((int) 531461)
0x8db: @@ SetMessage(Stack[-1])
0x8dc: Pop(1)
0x8dd: @@ ClearReplies()
0x8de: Pop(0)
0x8df: Push((int) 531462)
0x8e0: Push((int) -1)
0x8e1: Push((int) 32812)
0x8e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e3: Pop(3)
0x8e4: Return(); Pop(0)

0x8e5: Push((int) 31746)
0x8e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8e8: PushEmpty(string)
0x8e9: Stack[-1] = "Neutral"
0x8ea: Call2 0x7fc

0x8eb: Pop(1)
0x8ec: Push((int) 530374)
0x8ed: @@ SetMessage(Stack[-1])
0x8ee: Pop(1)
0x8ef: @@ ClearReplies()
0x8f0: Pop(0)
0x8f1: Push((int) 530375)
0x8f2: Push((int) -1)
0x8f3: Push((int) 31747)
0x8f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f5: Pop(3)
0x8f6: Return(); Pop(0)

0x8f7: Push((int) 23688)
0x8f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f9: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x8fa: PushEmpty(string)
0x8fb: Stack[-1] = "Patronage"
0x8fc: Call2 0x7fc

0x8fd: Pop(1)
0x8fe: Push((int) 522512)
0x8ff: @@ SetMessage(Stack[-1])
0x900: Pop(1)
0x901: @@ ClearReplies()
0x902: Pop(0)
0x903: Push((int) 522513)
0x904: Push((int) 23690)
0x905: Push((int) 23689)
0x906: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x907: Pop(3)
0x908: Push((int) 522525)
0x909: Push((int) 23702)
0x90a: Push((int) 23701)
0x90b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: Return(); Pop(0)

0x90e: Push((int) 23702)
0x90f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x910: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x911: PushEmpty(string)
0x912: Stack[-1] = "Neutral"
0x913: Call2 0x7fc

0x914: Pop(1)
0x915: Push((int) 522526)
0x916: @@ SetMessage(Stack[-1])
0x917: Pop(1)
0x918: @@ ClearReplies()
0x919: Pop(0)
0x91a: Push((int) 522527)
0x91b: Push((int) 23692)
0x91c: Push((int) 23703)
0x91d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91e: Pop(3)
0x91f: Return(); Pop(0)

0x920: Push((int) 23690)
0x921: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x923: PushEmpty(string)
0x924: Stack[-1] = "Patronage"
0x925: Call2 0x7fc

0x926: Pop(1)
0x927: Push((int) 522514)
0x928: @@ SetMessage(Stack[-1])
0x929: Pop(1)
0x92a: @@ ClearReplies()
0x92b: Pop(0)
0x92c: Push((int) 522515)
0x92d: Push((int) 23692)
0x92e: Push((int) 23691)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Return(); Pop(0)

0x932: Push((int) 23692)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x935: PushEmpty(string)
0x936: Stack[-1] = "Rage"
0x937: Call2 0x7fc

0x938: Pop(1)
0x939: Push((int) 522516)
0x93a: @@ SetMessage(Stack[-1])
0x93b: Pop(1)
0x93c: @@ ClearReplies()
0x93d: Pop(0)
0x93e: Push((int) 522517)
0x93f: Push((int) 23694)
0x940: Push((int) 23693)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Return(); Pop(0)

0x944: Push((int) 23706)
0x945: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x946: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x947: Push((int) 23709)
0x948: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x94a: PushEmpty(string)
0x94b: Stack[-1] = "Neutral"
0x94c: Call2 0x7fc

0x94d: Pop(1)
0x94e: Push((int) 522531)
0x94f: @@ SetMessage(Stack[-1])
0x950: Pop(1)
0x951: @@ ClearReplies()
0x952: Pop(0)
0x953: Push((int) 522532)
0x954: Push((int) 23694)
0x955: Push((int) 23710)
0x956: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x957: Pop(3)
0x958: Return(); Pop(0)

0x959: Push((int) 23694)
0x95a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95b: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x95c: PushEmpty(string)
0x95d: Stack[-1] = "Rage"
0x95e: Call2 0x7fc

0x95f: Pop(1)
0x960: Push((int) 522518)
0x961: @@ SetMessage(Stack[-1])
0x962: Pop(1)
0x963: @@ ClearReplies()
0x964: Pop(0)
0x965: Push((int) 522519)
0x966: Push((int) 23696)
0x967: Push((int) 23695)
0x968: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x969: Pop(3)
0x96a: Return(); Pop(0)

0x96b: Push((int) 23696)
0x96c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x96e: PushEmpty(string)
0x96f: Stack[-1] = "Neutral"
0x970: Call2 0x7fc

0x971: Pop(1)
0x972: Push((int) 522520)
0x973: @@ SetMessage(Stack[-1])
0x974: Pop(1)
0x975: @@ ClearReplies()
0x976: Pop(0)
0x977: Push((int) 522521)
0x978: Push((int) -1)
0x979: Push((int) 23697)
0x97a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97b: Pop(3)
0x97c: Push((int) 522522)
0x97d: Push((int) 23699)
0x97e: Push((int) 23698)
0x97f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x980: Pop(3)
0x981: Return(); Pop(0)

0x982: Push((int) 23699)
0x983: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x985: PushEmpty(string)
0x986: Stack[-1] = "Neutral"
0x987: Call2 0x7fc

0x988: Pop(1)
0x989: Push((int) 522523)
0x98a: @@ SetMessage(Stack[-1])
0x98b: Pop(1)
0x98c: @@ ClearReplies()
0x98d: Pop(0)
0x98e: Push((int) 522524)
0x98f: Push((int) -1)
0x990: Push((int) 23700)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: Return(); Pop(0)

0x994: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x995: PushEmpty(bool)
0x996: Call2 0xd00

0x997: Pop(0)
0x998: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x999: @ lshStopAnimation()
0x99a: Pop(0)
0x99b: GOTO 0x99e

0x99c: @ StopAnimation()
0x99d: Pop(0)
0x99e: Return(); Pop(0)

0x99f: GOTO 0x813

0x9a0: Return(); Pop(0)

0x9a1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9a3: PushEmpty(bool, object, float)
0x9a4: Stack[-2] = Stack[-12]
0x9a5: Stack[-1] = (float) 70.0
0x9a6: Call2 0xb8c

0x9a7: Pop(2)
0x9a8: Pop(1); Push((bool) Stack[-1] == 0)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9aa: Stack[-10] = (int) -2
0x9ab: Return(); Pop(8)

0x9ac: @ CreateDialog(Stack[-4])
0x9ad: Pop(0)
0x9ae: PushEmpty(int)
0x9af: Call2 0xcfa

0x9b0: Pop(0)
0x9b1: @@ SetNPCName(Stack[-1])
0x9b2: Pop(1)
0x9b3: PushEmpty(int)
0x9b4: Call2 0xcf8

0x9b5: Pop(0)
0x9b6: @@ SetNPCDescription(Stack[-1])
0x9b7: Pop(1)
0x9b8: PushEmpty(string)
0x9b9: Call2 0xcfc

0x9ba: Pop(0)
0x9bb: @@ SetPhoto(Stack[-1])
0x9bc: Pop(1)
0x9bd: PushEmpty(string)
0x9be: Call2 0xcfe

0x9bf: Pop(0)
0x9c0: @@ SetPhoto2(Stack[-1])
0x9c1: Pop(1)
0x9c2: PushEmpty(int)
0x9c3: Call2 0xf6b

0x9c4: Pop(0)
0x9c5: @@ SetPlayerName(Stack[-1])
0x9c6: Pop(1)
0x9c7: Stack[-2] = (int) -1
0x9c8: @ IsOverrideActive(Stack[-3])
0x9c9: Pop(0)
0x9ca: Push(Stack[-3])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cc: Stack[-10] = (int) -2
0x9cd: Return(); Pop(8)

0x9ce: @ DoDialog(Stack[-4])
0x9cf: Pop(0)
0x9d0: PushEmpty(bool, object)
0x9d1: PushEmpty(object)
0x9d2: Call2 0xca0

0x9d3: Stack[-2] = Stack[-1]
0x9d4: Pop(1)
0x9d5: Call2 0xbe1

0x9d6: Pop(2)
0x9d7: PushEmpty(object, object)
0x9d8: Stack[-2] = Stack[-11]
0x9d9: Stack[-1] = Stack[-6]
0x9da: Push(-2, 4); TaskCall(11)
0x9db: Call2 0x9f2

0x9dc: Pop(-2, 4); TaskReturn
0x9dd: Pop(2)
0x9de: @@ IsDialogEnd(Stack[-1])
0x9df: Pop(0)
0x9e0: Pop(0); Push((bool) Stack[-1] == 0)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e2: @ sync()
0x9e3: Pop(0)
0x9e4: @@ IsDialogEnd(Stack[-1])
0x9e5: Pop(0)
0x9e6: GOTO 0x9e0

0x9e7: PushEmpty(object)
0x9e8: Stack[-1] = Stack[-10]
0x9e9: Call2 0xbd0

0x9ea: Pop(1)
0x9eb: @ StopDialog(Stack[-4])
0x9ec: Pop(0)
0x9ed: @@ GetReturnValue(Stack[-2])
0x9ee: Pop(0)
0x9ef: Stack[-10] = Stack[-2]
0x9f0: Return(); Pop(8)

0x9f1: Stack[-4] = 0
0x9f2: PushEmpty()
0x9f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9f4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9f5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9f6: Push((int) 1)
0x9f7: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0x9f8: PushEmpty(string)
0x9f9: Stack[-1] = "Neutral"
0x9fa: Call2 0xa2c

0x9fb: Pop(1)
0x9fc: Push((int) 540551)
0x9fd: @@ SetMessage(Stack[-1])
0x9fe: Pop(1)
0x9ff: @@ ClearReplies()
0xa00: Pop(0)
0xa01: Push((int) 540552)
0xa02: Push((int) -1)
0xa03: Push((int) 42561)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: Push((int) 540795)
0xa07: Push((int) -1)
0xa08: Push((int) 42844)
0xa09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0a: Pop(3)
0xa0b: GOTO 0xa0e

0xa0c: Return(); Pop(0)

0xa0d: GOTO 0x9f6

0xa0e: PushEmpty(bool)
0xa0f: Call2 0xd00

0xa10: Pop(0)
0xa11: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa12: @ lshWaitForAnimEnd()
0xa13: Pop(0)
0xa14: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa15: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa16: GOTO 0xa1c

0xa17: PushEmpty(string)
0xa18: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa19: Call2 0xc6b

0xa1a: Pop(1)
0xa1b: GOTO 0xa12

0xa1c: GOTO 0xa2b

0xa1d: Push("all")
0xa1e: Push("idle")
0xa1f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa20: Pop(2)
0xa21: @ WaitForAnimEnd()
0xa22: Pop(0)
0xa23: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: GOTO 0xa2b

0xa26: Push("all")
0xa27: Push("idle")
0xa28: @ PlayAnimation(Stack[-2], Stack[-1])
0xa29: Pop(2)
0xa2a: GOTO 0xa21

0xa2b: Return(); Pop(0)

0xa2c: PushEmpty()
0xa2d: PushEmpty(bool)
0xa2e: Call2 0xd00

0xa2f: Pop(0)
0xa30: Pop(1); Push((bool) Stack[-1] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa32: Return(); Pop(0)

0xa33: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa34: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa35: Return(); Pop(0)

0xa36: PushEmpty(string, bool)
0xa37: Stack[-2] = Stack[-3]
0xa38: Push("")
0xa39: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3b: Stack[-1] = (bool) 0
0xa3c: GOTO 0xa3e

0xa3d: Stack[-1] = (bool) 1
0xa3e: Call2 0xc7b

0xa3f: Pop(2)
0xa40: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa41: Return(); Pop(0)

0xa42: PushEmpty()
0xa43: Push((int) 1)
0xa44: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa45: PushEmpty()
0xa46: Call2 0xc99

0xa47: Pop(0)
0xa48: Push((int) 42560)
0xa49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa4b: PushEmpty(string)
0xa4c: Stack[-1] = "Neutral"
0xa4d: Call2 0xa2c

0xa4e: Pop(1)
0xa4f: Push((int) 540551)
0xa50: @@ SetMessage(Stack[-1])
0xa51: Pop(1)
0xa52: @@ ClearReplies()
0xa53: Pop(0)
0xa54: Push((int) 540552)
0xa55: Push((int) -1)
0xa56: Push((int) 42561)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Push((int) 540795)
0xa5a: Push((int) -1)
0xa5b: Push((int) 42844)
0xa5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5d: Pop(3)
0xa5e: Return(); Pop(0)

0xa5f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa60: PushEmpty(bool)
0xa61: Call2 0xd00

0xa62: Pop(0)
0xa63: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa64: @ lshStopAnimation()
0xa65: Pop(0)
0xa66: GOTO 0xa69

0xa67: @ StopAnimation()
0xa68: Pop(0)
0xa69: Return(); Pop(0)

0xa6a: GOTO 0xa43

0xa6b: Return(); Pop(0)

0xa6c: PushEmpty()
0xa6d: Call2 0xa70

0xa6e: Pop(0)
0xa6f: Return(); Pop(0)

0xa70: PushEmpty(bool)
0xa71: Call2 0xb87

0xa72: Pop(0)
0xa73: Pop(1); Push((bool) Stack[-1] == 0)
0xa74: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa75: @ Hold()
0xa76: Pop(0)
0xa77: @ GetDirection(Stack[-0])
0xa78: Pop(0)
0xa79: PushEmpty()
0xa7a: Call2 0xb20

0xa7b: Pop(0)
0xa7c: GOTO 0xa79

0xa7d: Return(); Pop(0)

0xa7e: PushEmpty(object, object)
0xa7f: Push("player")
0xa80: @ FindActor(Stack[-2], Stack[-1])
0xa81: Pop(1)
0xa82: Pop(0); Push((bool) Stack[-1] == 0)
0xa83: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa84: Stack[-3] = (bool) 0
0xa85: Return(); Pop(2)

0xa86: PushEmpty(bool, object)
0xa87: Stack[-1] = Stack[-3]
0xa88: Call2 0xb7e

0xa89: Stack[-5] = Stack[-2]
0xa8a: Pop(2)
0xa8b: Return(); Pop(2)

0xa8c: Stack[-1] = 0
0xa8d: Push(CvectorIndex(Stack[-0], 0))
0xa8e: Push(CvectorIndex(Stack[-0], 2))
0xa8f: @ RotateAsync(Stack[-2], Stack[-1])
0xa90: Pop(2)
0xa91: Return(); Pop(0)

0xa92: PushEmpty(object, bool, object, bool)
0xa93: Push("player")
0xa94: @ FindActor(Stack[-3], Stack[-1])
0xa95: Pop(1)
0xa96: Pop(0); Push((bool) Stack[-2] == 0)
0xa97: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa98: Stack[-5] = (bool) 0
0xa99: Return(); Pop(4)

0xa9a: PushEmpty(float, object)
0xa9b: Stack[-1] = Stack[-4]
0xa9c: Call2 0xb6c

0xa9d: Pop(1)
0xa9e: Push((float)90000.0)
0xa9f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xaa1: Stack[-5] = (bool) 0
0xaa2: Return(); Pop(4)

0xaa3: @ CanSee(Stack[-1], Stack[-2])
0xaa4: Pop(0)
0xaa5: Stack[-5] = Stack[-1]
0xaa6: Return(); Pop(4)

0xaa7: Stack[-2] = 0
0xaa8: PushEmpty(float, float)
0xaa9: Push((int) 8)
0xaaa: Push((int) 16)
0xaab: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xaac: Pop(2)
0xaad: Push((int) 10)
0xaae: @ SetTimer(Stack[-1], Stack[-2])
0xaaf: Pop(1)
0xab0: Return(); Pop(2)

0xab1: Push((int) 10)
0xab2: @ KillTimer(Stack[-1])
0xab3: Pop(1)
0xab4: Return(); Pop(0)

0xab5: PushEmpty()
0xab6: Push((int) 10)
0xab7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab8: IF (Stack[-1] == 0) GOTO 0xada; Pop(1)

0xab9: PushEmpty()
0xaba: Call2 0xab1

0xabb: Pop(0)
0xabc: PushEmpty(bool)
0xabd: Stack[-1] = (bool) 0
0xabe: PushEmpty(bool)
0xabf: Call2 0xb87

0xac0: Pop(0)
0xac1: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac2: PushEmpty(bool)
0xac3: Call2 0xa92

0xac4: Pop(0)
0xac5: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac6: Stack[-1] = (bool) 1
0xac7: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xac8: PushEmpty(bool)
0xac9: Call2 0xa7e

0xaca: Pop(0)
0xacb: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xacc: PushEmpty(bool, object)
0xacd: PushEmpty(object)
0xace: Call2 0xca0

0xacf: Stack[-2] = Stack[-1]
0xad0: Pop(1)
0xad1: Call2 0xc1b

0xad2: Pop(2)
0xad3: GOTO 0xada

0xad4: PushEmpty()
0xad5: Call2 0xa8d

0xad6: Pop(0)
0xad7: PushEmpty()
0xad8: Call2 0xaa8

0xad9: Pop(0)
0xada: Return(); Pop(0)

0xadb: PushEmpty()
0xadc: Call2 0xb67

0xadd: Pop(0)
0xade: PushEmpty()
0xadf: Call2 0xab1

0xae0: Pop(0)
0xae1: @ lshStopSpeech()
0xae2: Pop(0)
0xae3: @ lshStopAnimation()
0xae4: Pop(0)
0xae5: @ StopAsync()
0xae6: Pop(0)
0xae7: @ Hold()
0xae8: Pop(0)
0xae9: Return(); Pop(0)

0xaea: @ StopGroup0()
0xaeb: Pop(0)
0xaec: PushEmpty()
0xaed: Call2 0xab1

0xaee: Pop(0)
0xaef: PushEmpty(string)
0xaf0: Stack[-1] = "Neutral"
0xaf1: Call2 0xc6b

0xaf2: Pop(1)
0xaf3: PushEmpty()
0xaf4: Call2 0xaa8

0xaf5: Pop(0)
0xaf6: Return(); Pop(0)

0xaf7: PushEmpty()
0xaf8: Push(Stack[-1])
0xaf9: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xafa: PushEmpty()
0xafb: Call2 0xaa8

0xafc: Pop(0)
0xafd: GOTO 0xb02

0xafe: PushEmpty(string)
0xaff: Stack[-1] = "Neutral"
0xb00: Call2 0xc6b

0xb01: Pop(1)
0xb02: Return(); Pop(0)

0xb03: PushEmpty(bool, bool)
0xb04: @ IsOverrideActive(Stack[-1])
0xb05: Pop(0)
0xb06: Pop(0); Push((bool) Stack[-1] == 0)
0xb07: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb08: EventDisable(0)
0xb09: PushEmpty()
0xb0a: Call2 0xb67

0xb0b: Pop(0)
0xb0c: PushEmpty(bool, object)
0xb0d: Stack[-1] = Stack[-5]
0xb0e: Call2 0xb7e

0xb0f: Pop(2)
0xb10: EventEnable(0)
0xb11: PushEmpty(object)
0xb12: Stack[-1] = Stack[-4]
0xb13: Call2 0xf7c

0xb14: Pop(1)
0xb15: PushEmpty(string)
0xb16: Stack[-1] = "Neutral"
0xb17: Call2 0xc6b

0xb18: Pop(1)
0xb19: PushEmpty()
0xb1a: Call2 0xab1

0xb1b: Pop(0)
0xb1c: PushEmpty()
0xb1d: Call2 0xaa8

0xb1e: Pop(0)
0xb1f: Return(); Pop(2)

0xb20: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb21: @ WaitForAnimEnd()
0xb22: Pop(0)
0xb23: PushEmpty(bool)
0xb24: Call2 0xb87

0xb25: Pop(0)
0xb26: Pop(1); Push((bool) Stack[-1] == 0)
0xb27: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb28: Return(); Pop(12)

0xb29: PushEmpty(int)
0xb2a: Call2 0xce7

0xb2b: Stack[-7] = Stack[-1]
0xb2c: Pop(1)
0xb2d: Stack[-5] = (int) 0
0xb2e: PushEmpty(bool)
0xb2f: Stack[-1] = (bool) 0
0xb30: Push((int) 5)
0xb31: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb33: PushEmpty(bool)
0xb34: Call2 0xb87

0xb35: Pop(0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb37: Stack[-1] = (bool) 1
0xb38: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb39: Pop(0); Push((bool) Stack[-6] == 0)
0xb3a: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb3b: Push((int) 3)
0xb3c: @ Sleep(Stack[-1], Stack[-5])
0xb3d: Pop(1)
0xb3e: Pop(0); Push((bool) Stack[-4] == 0)
0xb3f: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xb40: GOTO 0xb62

0xb41: GOTO 0xb57

0xb42: @ irand(Stack[-3], Stack[-6])
0xb43: Pop(0)
0xb44: Push((int) 5)
0xb45: @ irand(Stack[-3], Stack[-1])
0xb46: Pop(1)
0xb47: Push((int) 0)
0xb48: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb49: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb4a: Stack[-3] = (int) 0
0xb4b: Push("all")
0xb4c: PushEmpty(string, int)
0xb4d: Stack[-1] = Stack[-6]
0xb4e: Call2 0xce0

0xb4f: Pop(1)
0xb50: @ PlayAnimation(Stack[-2], Stack[-1])
0xb51: Pop(2)
0xb52: @ WaitForAnimEnd(Stack[-1])
0xb53: Pop(0)
0xb54: Pop(0); Push((bool) Stack[-1] == 0)
0xb55: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb56: GOTO 0xb62

0xb57: PushEmpty(bool)
0xb58: Call2 0xb65

0xb59: Pop(0)
0xb5a: Pop(1); Push((bool) Stack[-1] == 0)
0xb5b: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5c: GOTO 0xb62

0xb5d: @ ResetAAS()
0xb5e: Pop(0)
0xb5f: Push((int) 1)
0xb60: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb61: GOTO 0xb2e

0xb62: @ ResetAAS()
0xb63: Pop(0)
0xb64: Return(); Pop(12)

0xb65: Stack[-1] = (bool) 1
0xb66: Return(); Pop(0)

0xb67: @ StopAnimation()
0xb68: Pop(0)
0xb69: @ StopGroup0()
0xb6a: Pop(0)
0xb6b: Return(); Pop(0)

0xb6c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb6d: @ GetPosition(Stack[-3])
0xb6e: Pop(0)
0xb6f: @@ GetPosition(Stack[-2])
0xb70: Pop(0)
0xb71: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb72: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb73: Return(); Pop(6)

0xb74: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb75: @ GetPosition(Stack[-3])
0xb76: Pop(0)
0xb77: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xb78: Push(CvectorIndex(Stack[-2], 0))
0xb79: Push(CvectorIndex(Stack[-3], 2))
0xb7a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb7b: Pop(2)
0xb7c: Stack[-8] = Stack[-1]
0xb7d: Return(); Pop(6)

0xb7e: PushEmpty(cvector, cvector)
0xb7f: @@ GetPosition(Stack[-1])
0xb80: Pop(0)
0xb81: PushEmpty(bool, cvector)
0xb82: Stack[-1] = Stack[-3]
0xb83: Call2 0xb74

0xb84: Stack[-6] = Stack[-2]
0xb85: Pop(2)
0xb86: Return(); Pop(2)

0xb87: PushEmpty(bool, bool)
0xb88: @ IsLoaded(Stack[-1])
0xb89: Pop(0)
0xb8a: Stack[-3] = Stack[-1]
0xb8b: Return(); Pop(2)

0xb8c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb8d: @@ GetPosition(Stack[-8])
0xb8e: Pop(0)
0xb8f: @@ GetEyesHeight(Stack[-9])
0xb90: Pop(0)
0xb91: Push(CvectorIndex(Stack[-8], 1))
0xb92: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb93: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb94: @ GetPosition(Stack[-7])
0xb95: Pop(0)
0xb96: @ GetEyesHeight(Stack[-9])
0xb97: Pop(0)
0xb98: Push(CvectorIndex(Stack[-7], 1))
0xb99: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb9a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb9b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb9c: Push(CvectorIndex(Stack[-6], 1))
0xb9d: Stack[-1] = (int) 0
0xb9e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb9f: Pop(0); Push(Stack[-6] | Stack[-6]);
0xba0: Pop(1); Push(Sqrt(Stack[-1]))
0xba1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xba2: Stack[-5] = -Stack[-6]; Pop(0);
0xba3: Pop(0); Push(Stack[-6] * Stack[-19]);
0xba4: PushEmpty(cvector, cvector)
0xba5: Push(CVector(0.0, 1.0, 0.0))
0xba6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xba7: Call2 0xca6

0xba8: Pop(1)
0xba9: Push((int) 25)
0xbaa: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbac: Push(CVector(0.0, 10.0, 0.0))
0xbad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xbae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xbaf: @ IsOverrideActive(Stack[-2])
0xbb0: Pop(0)
0xbb1: Push(Stack[-2])
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb3: Stack[-21] = (bool) 0
0xbb4: Return(); Pop(18)

0xbb5: @ StopWorld()
0xbb6: Pop(0)
0xbb7: @ CameraTransit(Stack[-3], Stack[-5])
0xbb8: Pop(0)
0xbb9: Push(CvectorIndex(Stack[-4], 0))
0xbba: Push(CvectorIndex(Stack[-5], 2))
0xbbb: @ Rotate(Stack[-2], Stack[-1])
0xbbc: Pop(2)
0xbbd: PushEmpty(bool)
0xbbe: Call2 0xd00

0xbbf: Pop(0)
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc1: GOTO 0xbca

0xbc2: Push("head")
0xbc3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbc4: Pop(1)
0xbc5: Push(Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc7: Push("head")
0xbc8: @ LookAsyncCamera(Stack[-1])
0xbc9: Pop(1)
0xbca: @ CameraWaitForPlayFinish()
0xbcb: Pop(0)
0xbcc: @ ResumeWorld()
0xbcd: Pop(0)
0xbce: Stack[-21] = (bool) 1
0xbcf: Return(); Pop(18)

0xbd0: PushEmpty(bool, bool)
0xbd1: @ CameraSwitchToNormal()
0xbd2: Pop(0)
0xbd3: PushEmpty(bool)
0xbd4: Call2 0xd00

0xbd5: Pop(0)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: GOTO 0xbe0

0xbd8: Push("head")
0xbd9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbda: Pop(1)
0xbdb: Push(Stack[-1])
0xbdc: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbdd: Push("head")
0xbde: @ UnlookAsync(Stack[-1])
0xbdf: Pop(1)
0xbe0: Return(); Pop(2)

0xbe1: PushEmpty(int, int, int, int)
0xbe2: Push("voice_common")
0xbe3: @ GetVariable(Stack[-1], Stack[-3])
0xbe4: Pop(1)
0xbe5: Push(Stack[-2])
0xbe6: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xbe7: PushEmpty(bool, object)
0xbe8: Stack[-1] = Stack[-7]
0xbe9: Call2 0xc1b

0xbea: Pop(1)
0xbeb: Pop(1); Push((bool) Stack[-1] == 0)
0xbec: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbed: PushEmpty(bool, object)
0xbee: Stack[-1] = Stack[-7]
0xbef: Call2 0xc40

0xbf0: Pop(1)
0xbf1: Pop(1); Push((bool) Stack[-1] == 0)
0xbf2: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf3: Stack[-6] = (bool) 0
0xbf4: Return(); Pop(4)

0xbf5: Push((int) 2)
0xbf6: @ irand(Stack[-2], Stack[-1])
0xbf7: Pop(1)
0xbf8: Push(Stack[-1])
0xbf9: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbfa: Push("voice_common")
0xbfb: Push((int) 1)
0xbfc: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbfd: Push((int) 3)
0xbfe: Pop(2); Push(Stack[-2] % Stack[-1]);
0xbff: @ SetVariable(Stack[-2], Stack[-1])
0xc00: Pop(2)
0xc01: GOTO 0xc06

0xc02: Push("voice_common")
0xc03: Push((int) 0)
0xc04: @ SetVariable(Stack[-2], Stack[-1])
0xc05: Pop(2)
0xc06: GOTO 0xc19

0xc07: PushEmpty(bool, object)
0xc08: Stack[-1] = Stack[-7]
0xc09: Call2 0xc40

0xc0a: Pop(1)
0xc0b: Pop(1); Push((bool) Stack[-1] == 0)
0xc0c: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc0d: PushEmpty(bool, object)
0xc0e: Stack[-1] = Stack[-7]
0xc0f: Call2 0xc1b

0xc10: Pop(1)
0xc11: Pop(1); Push((bool) Stack[-1] == 0)
0xc12: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc13: Stack[-6] = (bool) 0
0xc14: Return(); Pop(4)

0xc15: Push("voice_common")
0xc16: Push((int) 1)
0xc17: @ SetVariable(Stack[-2], Stack[-1])
0xc18: Pop(2)
0xc19: Stack[-6] = (bool) 1
0xc1a: Return(); Pop(4)

0xc1b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc1c: Stack[-5] = "c"
0xc1d: Stack[-4] = (int) 0
0xc1e: Push((int) 1)
0xc1f: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc20: Push((int) 1)
0xc21: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc22: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc23: @@ HasProperty(Stack[-1], Stack[-4])
0xc24: Pop(1)
0xc25: Pop(0); Push((bool) Stack[-3] == 0)
0xc26: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc27: GOTO 0xc2b

0xc28: Push((int) 1)
0xc29: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc2a: GOTO 0xc1e

0xc2b: Pop(0); Push((bool) Stack[-4] == 0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2d: Stack[-12] = (bool) 0
0xc2e: Return(); Pop(10)

0xc2f: Stack[-2] = (int) 0
0xc30: Push((int) 1)
0xc31: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc32: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc33: @ irand(Stack[-2], Stack[-4])
0xc34: Pop(0)
0xc35: Push((int) 1)
0xc36: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc37: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc38: @@ GetProperty(Stack[-1], Stack[-2])
0xc39: Pop(1)
0xc3a: PushEmpty(bool, string)
0xc3b: Stack[-1] = Stack[-3]
0xc3c: Call2 0xc8a

0xc3d: Stack[-14] = Stack[-2]
0xc3e: Pop(2)
0xc3f: Return(); Pop(10)

0xc40: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc41: Push("d")
0xc42: PushEmpty(int)
0xc43: Call2 0xcd1

0xc44: Pop(0)
0xc45: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc46: Push("m")
0xc47: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc48: Stack[-4] = (int) 0
0xc49: Push((int) 1)
0xc4a: IF (Stack[-1] == 0) GOTO 0xc56; Pop(1)

0xc4b: Push((int) 1)
0xc4c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc4d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc4e: @@ HasProperty(Stack[-1], Stack[-4])
0xc4f: Pop(1)
0xc50: Pop(0); Push((bool) Stack[-3] == 0)
0xc51: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc52: GOTO 0xc56

0xc53: Push((int) 1)
0xc54: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc55: GOTO 0xc49

0xc56: Pop(0); Push((bool) Stack[-4] == 0)
0xc57: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc58: Stack[-12] = (bool) 0
0xc59: Return(); Pop(10)

0xc5a: Stack[-2] = (int) 0
0xc5b: Push((int) 1)
0xc5c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5e: @ irand(Stack[-2], Stack[-4])
0xc5f: Pop(0)
0xc60: Push((int) 1)
0xc61: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc62: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc63: @@ GetProperty(Stack[-1], Stack[-2])
0xc64: Pop(1)
0xc65: PushEmpty(bool, string)
0xc66: Stack[-1] = Stack[-3]
0xc67: Call2 0xc8a

0xc68: Stack[-14] = Stack[-2]
0xc69: Pop(2)
0xc6a: Return(); Pop(10)

0xc6b: PushEmpty(bool, float, float, bool, float, float)
0xc6c: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc6d: Pop(0)
0xc6e: Push(Stack[-3])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc70: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc71: Pop(0)
0xc72: Push((bool) 0)
0xc73: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc74: Pop(1)
0xc75: GOTO 0xc7a

0xc76: Push("Can't find lsh animation : ")
0xc77: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc78: @ Trace(Stack[-1])
0xc79: Pop(1)
0xc7a: Return(); Pop(6)

0xc7b: PushEmpty(bool, float, float, bool, float, float)
0xc7c: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc7d: Pop(0)
0xc7e: Push(Stack[-3])
0xc7f: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc80: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc81: Pop(0)
0xc82: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc83: Pop(0)
0xc84: GOTO 0xc89

0xc85: Push("Can't find lsh animation : ")
0xc86: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc87: @ Trace(Stack[-1])
0xc88: Pop(1)
0xc89: Return(); Pop(6)

0xc8a: PushEmpty(bool, bool)
0xc8b: PushEmpty(bool)
0xc8c: Call2 0xd00

0xc8d: Pop(0)
0xc8e: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc8f: @ lshHasSpeech(Stack[-1], Stack[-3])
0xc90: Pop(0)
0xc91: Push(Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc93: @ lshPlaySpeech(Stack[-3])
0xc94: Pop(0)
0xc95: Stack[-4] = (bool) 1
0xc96: Return(); Pop(2)

0xc97: Stack[-4] = (bool) 0
0xc98: Return(); Pop(2)

0xc99: PushEmpty(bool)
0xc9a: Call2 0xd00

0xc9b: Pop(0)
0xc9c: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc9d: @ lshStopSpeech()
0xc9e: Pop(0)
0xc9f: Return(); Pop(0)

0xca0: PushEmpty(object, object)
0xca1: @ self(Stack[-1])
0xca2: Pop(0)
0xca3: Stack[-3] = Stack[-1]
0xca4: Return(); Pop(2)

0xca5: Stack[-1] = 0
0xca6: PushEmpty(float, float)
0xca7: Pop(0); Push(Stack[-3] | Stack[-3]);
0xca8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xca9: Push((float)0.0)
0xcaa: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcac: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xcad: Return(); Pop(2)

0xcae: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xcaf: Return(); Pop(2)

0xcb0: PushEmpty(int, int)
0xcb1: @ GetVariable(Stack[-3], Stack[-1])
0xcb2: Pop(0)
0xcb3: Stack[-4] = Stack[-1]
0xcb4: Return(); Pop(2)

0xcb5: PushEmpty(object, object, object, object)
0xcb6: @ GetMainOutdoorScene(Stack[-2])
0xcb7: Pop(0)
0xcb8: Push(".bin")
0xcb9: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcba: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xcbb: Pop(1)
0xcbc: Stack[-6] = Stack[-1]
0xcbd: Return(); Pop(4)

0xcbe: Stack[-1] = 0
0xcbf: Stack[-2] = 0
0xcc0: PushEmpty(object, object)
0xcc1: @ FindActor(Stack[-1], Stack[-4])
0xcc2: Pop(0)
0xcc3: Pop(0); Push((bool) Stack[-1] == 0)
0xcc4: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc5: Stack[-5] = (bool) 0
0xcc6: Return(); Pop(2)

0xcc7: @ Trigger(Stack[-1], Stack[-3])
0xcc8: Pop(0)
0xcc9: Stack[-5] = (bool) 1
0xcca: Return(); Pop(2)

0xccb: Stack[-1] = 0
0xccc: PushEmpty(float, float)
0xccd: @ GetGameTime(Stack[-1])
0xcce: Pop(0)
0xccf: Stack[-3] = Stack[-1]
0xcd0: Return(); Pop(2)

0xcd1: PushEmpty(float, float)
0xcd2: @ GetGameTime(Stack[-1])
0xcd3: Pop(0)
0xcd4: Push((int) 1)
0xcd5: PushEmpty(int)
0xcd6: Push((int) 24)
0xcd7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcd8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcd9: Return(); Pop(2)

0xcda: PushEmpty()
0xcdb: PushEmpty(int)
0xcdc: Call2 0xcd1

0xcdd: Pop(0)
0xcde: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xcdf: Return(); Pop(0)

0xce0: PushEmpty(string, string)
0xce1: Stack[-1] = "idle"
0xce2: Push(Stack[-3])
0xce3: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xce5: Stack[-4] = Stack[-1]
0xce6: Return(); Pop(2)

0xce7: PushEmpty(int, bool, int, bool)
0xce8: Stack[-2] = (int) 0
0xce9: Push("all")
0xcea: PushEmpty(string, int)
0xceb: Stack[-1] = Stack[-5]
0xcec: Call2 0xce0

0xced: Pop(1)
0xcee: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcef: Pop(2)
0xcf0: Pop(0); Push((bool) Stack[-1] == 0)
0xcf1: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcf2: GOTO 0xcf6

0xcf3: Push((int) 1)
0xcf4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcf5: GOTO 0xce9

0xcf6: Stack[-5] = Stack[-2]
0xcf7: Return(); Pop(4)

0xcf8: Stack[-1] = (int) 515545
0xcf9: Return(); Pop(0)

0xcfa: Stack[-1] = (int) 502870
0xcfb: Return(); Pop(0)

0xcfc: Stack[-1] = "ui/NPC_Mat.png"
0xcfd: Return(); Pop(0)

0xcfe: Stack[-1] = "ui/NPC_Mat_b.png"
0xcff: Return(); Pop(0)

0xd00: Stack[-1] = (bool) 1
0xd01: Return(); Pop(0)

0xd02: PushEmpty(object, object)
0xd03: Push("b7q01")
0xd04: Push((int) 3)
0xd05: @ SetVariable(Stack[-2], Stack[-1])
0xd06: Pop(2)
0xd07: PushEmpty(object)
0xd08: Call2 0xf39

0xd09: Stack[-2] = Stack[-1]
0xd0a: Pop(1)
0xd0b: Push("b7q01MatGotoPrison")
0xd0c: Push("pt_map_uprava_prison")
0xd0d: Push((int) 1)
0xd0e: Push((int) 521024)
0xd0f: PushEmpty(float)
0xd10: Call2 0xccc

0xd11: Pop(0)
0xd12: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd13: Pop(5)
0xd14: PushEmpty()
0xd15: Call2 0xe9b

0xd16: Pop(0)
0xd17: PushEmpty(bool, string, string)
0xd18: Stack[-2] = "quest_b7_01"
0xd19: Stack[-1] = "init_prison"
0xd1a: Call2 0xcc0

0xd1b: Pop(3)
0xd1c: Return(); Pop(2)

0xd1d: Stack[-1] = 0
0xd1e: PushEmpty()
0xd1f: PushEmpty(object, string, float)
0xd20: PushEmpty(object)
0xd21: Call2 0xf39

0xd22: Stack[-4] = Stack[-1]
0xd23: Pop(1)
0xd24: Stack[-2] = "pt_map_uprava_prison"
0xd25: Stack[-1] = (int) 2
0xd26: Call2 0xf4a

0xd27: Pop(3)
0xd28: PushEmpty(object)
0xd29: Call2 0xf39

0xd2a: Pop(0)
0xd2b: @@ ShowMap(Stack[-1])
0xd2c: Pop(1)
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty()
0xd2f: Push("b7q02")
0xd30: Push((int) 1)
0xd31: @ SetVariable(Stack[-2], Stack[-1])
0xd32: Pop(2)
0xd33: PushEmpty()
0xd34: Call2 0xea8

0xd35: Pop(0)
0xd36: PushEmpty()
0xd37: Call2 0xec2

0xd38: Pop(0)
0xd39: PushEmpty(object, string)
0xd3a: Stack[-1] = "quest_b7_02"
0xd3b: Call2 0xcb5

0xd3c: Pop(2)
0xd3d: PushEmpty(bool, string, string)
0xd3e: Stack[-2] = "quest_b7_02"
0xd3f: Stack[-1] = "init_termitnik2"
0xd40: Call2 0xcc0

0xd41: Pop(3)
0xd42: Return(); Pop(0)

0xd43: PushEmpty()
0xd44: PushEmpty()
0xd45: Call2 0xeb5

0xd46: Pop(0)
0xd47: PushEmpty(bool, string, string)
0xd48: Stack[-2] = "quest_b7_02"
0xd49: Stack[-1] = "completed"
0xd4a: Call2 0xcc0

0xd4b: Pop(3)
0xd4c: Return(); Pop(0)

0xd4d: PushEmpty()
0xd4e: Push("b8q01")
0xd4f: Push((int) 2)
0xd50: @ SetVariable(Stack[-2], Stack[-1])
0xd51: Pop(2)
0xd52: PushEmpty()
0xd53: Call2 0xedc

0xd54: Pop(0)
0xd55: PushEmpty(bool, string, string)
0xd56: Stack[-2] = "quest_b8_01"
0xd57: Stack[-1] = "place_klara"
0xd58: Call2 0xcc0

0xd59: Pop(3)
0xd5a: Return(); Pop(0)

0xd5b: PushEmpty()
0xd5c: Push("b8q01")
0xd5d: Push((int) 4)
0xd5e: @ SetVariable(Stack[-2], Stack[-1])
0xd5f: Pop(2)
0xd60: PushEmpty()
0xd61: Call2 0xee9

0xd62: Pop(0)
0xd63: PushEmpty(bool, string, string)
0xd64: Stack[-2] = "quest_b8_01"
0xd65: Stack[-1] = "remove_klara"
0xd66: Call2 0xcc0

0xd67: Pop(3)
0xd68: PushEmpty(bool, string, string)
0xd69: Stack[-2] = "quest_b8_01"
0xd6a: Stack[-1] = "unlock_boiny"
0xd6b: Call2 0xcc0

0xd6c: Pop(3)
0xd6d: Return(); Pop(0)

0xd6e: PushEmpty()
0xd6f: Push("b8q03")
0xd70: Push((int) 3)
0xd71: @ SetVariable(Stack[-2], Stack[-1])
0xd72: Pop(2)
0xd73: Push("b8q03MladVladIsVictim")
0xd74: Push((int) 0)
0xd75: @ SetVariable(Stack[-2], Stack[-1])
0xd76: Pop(2)
0xd77: PushEmpty()
0xd78: Call2 0xef6

0xd79: Pop(0)
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: Push("b8q03")
0xd7d: Push((int) 3)
0xd7e: @ SetVariable(Stack[-2], Stack[-1])
0xd7f: Pop(2)
0xd80: Push("b8q03MladVladIsVictim")
0xd81: Push((int) 1)
0xd82: @ SetVariable(Stack[-2], Stack[-1])
0xd83: Pop(2)
0xd84: PushEmpty()
0xd85: Call2 0xf03

0xd86: Pop(0)
0xd87: Return(); Pop(0)

0xd88: PushEmpty()
0xd89: Push("oob10Mat1")
0xd8a: Push((int) 1)
0xd8b: @ SetVariable(Stack[-2], Stack[-1])
0xd8c: Pop(2)
0xd8d: Return(); Pop(0)

0xd8e: PushEmpty()
0xd8f: Push("oob10Mat2")
0xd90: Push((int) 1)
0xd91: @ SetVariable(Stack[-2], Stack[-1])
0xd92: Pop(2)
0xd93: Return(); Pop(0)

0xd94: PushEmpty(object, object)
0xd95: Push("b10q04")
0xd96: Push((int) 1)
0xd97: @ SetVariable(Stack[-2], Stack[-1])
0xd98: Pop(2)
0xd99: PushEmpty(object)
0xd9a: Call2 0xf39

0xd9b: Stack[-2] = Stack[-1]
0xd9c: Pop(1)
0xd9d: Push("b10q04MatGotoMorlok")
0xd9e: Push("pt_b10q04_morlok")
0xd9f: Push((int) 0)
0xda0: Push((int) 530534)
0xda1: PushEmpty(float)
0xda2: Call2 0xccc

0xda3: Pop(0)
0xda4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xda5: Pop(5)
0xda6: PushEmpty()
0xda7: Call2 0xe81

0xda8: Pop(0)
0xda9: PushEmpty()
0xdaa: Call2 0xe8e

0xdab: Pop(0)
0xdac: PushEmpty(bool, string, string)
0xdad: Stack[-2] = "quest_b10_04"
0xdae: Stack[-1] = "place_morloks"
0xdaf: Call2 0xcc0

0xdb0: Pop(3)
0xdb1: Return(); Pop(2)

0xdb2: Stack[-1] = 0
0xdb3: PushEmpty()
0xdb4: PushEmpty(object, string, float)
0xdb5: PushEmpty(object)
0xdb6: Call2 0xf39

0xdb7: Stack[-4] = Stack[-1]
0xdb8: Pop(1)
0xdb9: Stack[-2] = "pt_b10q04_morlok"
0xdba: Stack[-1] = (int) 2
0xdbb: Call2 0xf4a

0xdbc: Pop(3)
0xdbd: PushEmpty(object)
0xdbe: Call2 0xf39

0xdbf: Pop(0)
0xdc0: @@ ShowMap(Stack[-1])
0xdc1: Pop(1)
0xdc2: Return(); Pop(0)

0xdc3: PushEmpty()
0xdc4: Push("b10MatVisit")
0xdc5: Push((int) 1)
0xdc6: @ SetVariable(Stack[-2], Stack[-1])
0xdc7: Pop(2)
0xdc8: Return(); Pop(0)

0xdc9: PushEmpty()
0xdca: PushEmpty()
0xdcb: Call2 0xecf

0xdcc: Pop(0)
0xdcd: PushEmpty(bool, string, string)
0xdce: Stack[-2] = "quest_b8_01"
0xdcf: Stack[-1] = "fail"
0xdd0: Call2 0xcc0

0xdd1: Pop(3)
0xdd2: Return(); Pop(0)

0xdd3: PushEmpty()
0xdd4: Push("oob12Mat1")
0xdd5: Push((int) 1)
0xdd6: @ SetVariable(Stack[-2], Stack[-1])
0xdd7: Pop(2)
0xdd8: Return(); Pop(0)

0xdd9: PushEmpty()
0xdda: PushEmpty(int, string)
0xddb: Stack[-1] = "b7q02"
0xddc: Call2 0xcb0

0xddd: Pop(1)
0xdde: Push((int) 0)
0xddf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: Stack[-2] = (bool) 1
0xde2: Return(); Pop(0)

0xde3: Stack[-2] = (bool) 0
0xde4: Return(); Pop(0)

0xde5: PushEmpty()
0xde6: PushEmpty(int, string)
0xde7: Stack[-1] = "b7q02"
0xde8: Call2 0xcb0

0xde9: Pop(1)
0xdea: Push((int) 2)
0xdeb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdec: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xded: Stack[-2] = (bool) 1
0xdee: Return(); Pop(0)

0xdef: Stack[-2] = (bool) 0
0xdf0: Return(); Pop(0)

0xdf1: PushEmpty()
0xdf2: PushEmpty(int, string)
0xdf3: Stack[-1] = "b8q01"
0xdf4: Call2 0xcb0

0xdf5: Pop(1)
0xdf6: Push((int) 1)
0xdf7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf9: Stack[-2] = (bool) 1
0xdfa: Return(); Pop(0)

0xdfb: Stack[-2] = (bool) 0
0xdfc: Return(); Pop(0)

0xdfd: PushEmpty()
0xdfe: PushEmpty(int, string)
0xdff: Stack[-1] = "b8q01"
0xe00: Call2 0xcb0

0xe01: Pop(1)
0xe02: Push((int) 3)
0xe03: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe04: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe05: Stack[-2] = (bool) 1
0xe06: Return(); Pop(0)

0xe07: Stack[-2] = (bool) 0
0xe08: Return(); Pop(0)

0xe09: PushEmpty()
0xe0a: PushEmpty(int, string)
0xe0b: Stack[-1] = "b8q01"
0xe0c: Call2 0xcb0

0xe0d: Pop(1)
0xe0e: Push((int) 4)
0xe0f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe10: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe11: Stack[-2] = (bool) 1
0xe12: Return(); Pop(0)

0xe13: Stack[-2] = (bool) 0
0xe14: Return(); Pop(0)

0xe15: PushEmpty()
0xe16: PushEmpty(int, string)
0xe17: Stack[-1] = "b8q03"
0xe18: Call2 0xcb0

0xe19: Pop(1)
0xe1a: Push((int) 2)
0xe1b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1d: Stack[-2] = (bool) 1
0xe1e: Return(); Pop(0)

0xe1f: Stack[-2] = (bool) 0
0xe20: Return(); Pop(0)

0xe21: PushEmpty()
0xe22: PushEmpty(int, string)
0xe23: Stack[-1] = "b10q01"
0xe24: Call2 0xcb0

0xe25: Pop(1)
0xe26: Push((int) 4)
0xe27: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe28: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe29: Stack[-2] = (bool) 1
0xe2a: Return(); Pop(0)

0xe2b: Stack[-2] = (bool) 0
0xe2c: Return(); Pop(0)

0xe2d: PushEmpty()
0xe2e: PushEmpty(int, string)
0xe2f: Stack[-1] = "b10q01"
0xe30: Call2 0xcb0

0xe31: Pop(1)
0xe32: Push((int) 1000)
0xe33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe35: Stack[-2] = (bool) 1
0xe36: Return(); Pop(0)

0xe37: Stack[-2] = (bool) 0
0xe38: Return(); Pop(0)

0xe39: PushEmpty()
0xe3a: PushEmpty(int, string)
0xe3b: Stack[-1] = "oob10Mat1"
0xe3c: Call2 0xcb0

0xe3d: Pop(1)
0xe3e: Push((int) 0)
0xe3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe40: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe41: Stack[-2] = (bool) 1
0xe42: Return(); Pop(0)

0xe43: Stack[-2] = (bool) 0
0xe44: Return(); Pop(0)

0xe45: PushEmpty()
0xe46: PushEmpty(int, string)
0xe47: Stack[-1] = "b10q04PlennikTalk"
0xe48: Call2 0xcb0

0xe49: Pop(1)
0xe4a: Push((int) 0)
0xe4b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xe4c: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4d: Stack[-2] = (bool) 1
0xe4e: Return(); Pop(0)

0xe4f: Stack[-2] = (bool) 0
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: PushEmpty(int, string)
0xe53: Stack[-1] = "oob10Mat2"
0xe54: Call2 0xcb0

0xe55: Pop(1)
0xe56: Push((int) 0)
0xe57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe59: Stack[-2] = (bool) 1
0xe5a: Return(); Pop(0)

0xe5b: Stack[-2] = (bool) 0
0xe5c: Return(); Pop(0)

0xe5d: PushEmpty()
0xe5e: PushEmpty(int, string)
0xe5f: Stack[-1] = "b10q04"
0xe60: Call2 0xcb0

0xe61: Pop(1)
0xe62: Push((int) 0)
0xe63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe64: IF (Stack[-1] == 0) GOTO 0xe67; Pop(1)

0xe65: Stack[-2] = (bool) 1
0xe66: Return(); Pop(0)

0xe67: Stack[-2] = (bool) 0
0xe68: Return(); Pop(0)

0xe69: PushEmpty()
0xe6a: PushEmpty(int, string)
0xe6b: Stack[-1] = "oob12Mat1"
0xe6c: Call2 0xcb0

0xe6d: Pop(1)
0xe6e: Push((int) 0)
0xe6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe71: Stack[-2] = (bool) 1
0xe72: Return(); Pop(0)

0xe73: Stack[-2] = (bool) 0
0xe74: Return(); Pop(0)

0xe75: PushEmpty()
0xe76: PushEmpty(int, string)
0xe77: Stack[-1] = "b7q01"
0xe78: Call2 0xcb0

0xe79: Pop(1)
0xe7a: Push((int) 2)
0xe7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7c: IF (Stack[-1] == 0) GOTO 0xe7f; Pop(1)

0xe7d: Stack[-2] = (bool) 1
0xe7e: Return(); Pop(0)

0xe7f: Stack[-2] = (bool) 0
0xe80: Return(); Pop(0)

0xe81: PushEmpty(object, object)
0xe82: Push((int) 545)
0xe83: Push((int) 2)
0xe84: Push((int) 530436)
0xe85: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe86: Pop(3)
0xe87: PushEmpty(bool, object, int)
0xe88: Stack[-2] = Stack[-4]
0xe89: Stack[-1] = (int) -1
0xe8a: Call2 0xf1d

0xe8b: Pop(3)
0xe8c: Return(); Pop(2)

0xe8d: Stack[-1] = 0
0xe8e: PushEmpty(object, object)
0xe8f: Push((int) 546)
0xe90: Push((int) 2)
0xe91: Push((int) 530437)
0xe92: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe93: Pop(3)
0xe94: PushEmpty(bool, object, int)
0xe95: Stack[-2] = Stack[-4]
0xe96: Stack[-1] = (int) 545
0xe97: Call2 0xf1d

0xe98: Pop(3)
0xe99: Return(); Pop(2)

0xe9a: Stack[-1] = 0
0xe9b: PushEmpty(object, object)
0xe9c: Push((int) 256)
0xe9d: Push((int) 1)
0xe9e: Push((int) 521028)
0xe9f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea0: Pop(3)
0xea1: PushEmpty(bool, object, int)
0xea2: Stack[-2] = Stack[-4]
0xea3: Stack[-1] = (int) 253
0xea4: Call2 0xf1d

0xea5: Pop(3)
0xea6: Return(); Pop(2)

0xea7: Stack[-1] = 0
0xea8: PushEmpty(object, object)
0xea9: Push((int) 270)
0xeaa: Push((int) 2)
0xeab: Push((int) 521214)
0xeac: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xead: Pop(3)
0xeae: PushEmpty(bool, object, int)
0xeaf: Stack[-2] = Stack[-4]
0xeb0: Stack[-1] = (int) -1
0xeb1: Call2 0xf1d

0xeb2: Pop(3)
0xeb3: Return(); Pop(2)

0xeb4: Stack[-1] = 0
0xeb5: PushEmpty(object, object)
0xeb6: Push((int) 273)
0xeb7: Push((int) 2)
0xeb8: Push((int) 521227)
0xeb9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeba: Pop(3)
0xebb: PushEmpty(bool, object, int)
0xebc: Stack[-2] = Stack[-4]
0xebd: Stack[-1] = (int) 270
0xebe: Call2 0xf1d

0xebf: Pop(3)
0xec0: Return(); Pop(2)

0xec1: Stack[-1] = 0
0xec2: PushEmpty(object, object)
0xec3: Push((int) 271)
0xec4: Push((int) 2)
0xec5: Push((int) 521215)
0xec6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec7: Pop(3)
0xec8: PushEmpty(bool, object, int)
0xec9: Stack[-2] = Stack[-4]
0xeca: Stack[-1] = (int) 270
0xecb: Call2 0xf1d

0xecc: Pop(3)
0xecd: Return(); Pop(2)

0xece: Stack[-1] = 0
0xecf: PushEmpty(object, object)
0xed0: Push((int) 606)
0xed1: Push((int) 1)
0xed2: Push((int) 531260)
0xed3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xed4: Pop(3)
0xed5: PushEmpty(bool, object, int)
0xed6: Stack[-2] = Stack[-4]
0xed7: Stack[-1] = (int) 284
0xed8: Call2 0xf1d

0xed9: Pop(3)
0xeda: Return(); Pop(2)

0xedb: Stack[-1] = 0
0xedc: PushEmpty(object, object)
0xedd: Push((int) 286)
0xede: Push((int) 1)
0xedf: Push((int) 521457)
0xee0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee1: Pop(3)
0xee2: PushEmpty(bool, object, int)
0xee3: Stack[-2] = Stack[-4]
0xee4: Stack[-1] = (int) 284
0xee5: Call2 0xf1d

0xee6: Pop(3)
0xee7: Return(); Pop(2)

0xee8: Stack[-1] = 0
0xee9: PushEmpty(object, object)
0xeea: Push((int) 288)
0xeeb: Push((int) 1)
0xeec: Push((int) 521459)
0xeed: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeee: Pop(3)
0xeef: PushEmpty(bool, object, int)
0xef0: Stack[-2] = Stack[-4]
0xef1: Stack[-1] = (int) 284
0xef2: Call2 0xf1d

0xef3: Pop(3)
0xef4: Return(); Pop(2)

0xef5: Stack[-1] = 0
0xef6: PushEmpty(object, object)
0xef7: Push((int) 578)
0xef8: Push((int) 2)
0xef9: Push((int) 530658)
0xefa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xefb: Pop(3)
0xefc: PushEmpty(bool, object, int)
0xefd: Stack[-2] = Stack[-4]
0xefe: Stack[-1] = (int) 575
0xeff: Call2 0xf1d

0xf00: Pop(3)
0xf01: Return(); Pop(2)

0xf02: Stack[-1] = 0
0xf03: PushEmpty(object, object)
0xf04: Push((int) 579)
0xf05: Push((int) 2)
0xf06: Push((int) 530659)
0xf07: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf08: Pop(3)
0xf09: PushEmpty(bool, object, int)
0xf0a: Stack[-2] = Stack[-4]
0xf0b: Stack[-1] = (int) 575
0xf0c: Call2 0xf1d

0xf0d: Pop(3)
0xf0e: Return(); Pop(2)

0xf0f: Stack[-1] = 0
0xf10: PushEmpty(object, object)
0xf11: @ GetDiaryRoot(Stack[-1])
0xf12: Pop(0)
0xf13: Pop(0); Push((bool) Stack[-1] == 0)
0xf14: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf15: Push("Can't retrieve diary root")
0xf16: @ Trace(Stack[-1])
0xf17: Pop(1)
0xf18: Stack[-3] = (bool) 0
0xf19: Return(); Pop(2)

0xf1a: Stack[-3] = Stack[-1]
0xf1b: Return(); Pop(2)

0xf1c: Stack[-1] = 0
0xf1d: PushEmpty(object, object, int, object, object, int)
0xf1e: PushEmpty(object)
0xf1f: Call2 0xf10

0xf20: Stack[-4] = Stack[-1]
0xf21: Pop(1)
0xf22: @@ Find(Stack[-7], Stack[-2])
0xf23: Pop(0)
0xf24: Pop(0); Push((bool) Stack[-2] == 0)
0xf25: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xf26: Push("Can't find diary parent with id: ")
0xf27: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf28: @ Trace(Stack[-1])
0xf29: Pop(1)
0xf2a: Stack[-9] = (bool) 0
0xf2b: Return(); Pop(6)

0xf2c: @@ AddChild(Stack[-8])
0xf2d: Pop(0)
0xf2e: Push((int) 7)
0xf2f: @ SendWorldWndMessage(Stack[-1])
0xf30: Pop(1)
0xf31: @@ GetCategory(Stack[-1])
0xf32: Pop(0)
0xf33: @ SetDiarySection(Stack[-1])
0xf34: Pop(0)
0xf35: Stack[-9] = (bool) 0
0xf36: Return(); Pop(6)

0xf37: Stack[-2] = 0
0xf38: Stack[-3] = 0
0xf39: PushEmpty(object, object, object, object)
0xf3a: @ GetMainOutdoorScene(Stack[-2])
0xf3b: Pop(0)
0xf3c: Pop(0); Push((bool) Stack[-2] == 0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf3e: Push("Can't find main outdoor scene")
0xf3f: @ Trace(Stack[-1])
0xf40: Pop(1)
0xf41: Stack[-1] = 0
0xf42: Stack[-5] = Stack[-1]
0xf43: Return(); Pop(4)

0xf44: @@ GetMap(Stack[-1])
0xf45: Pop(0)
0xf46: Stack[-5] = Stack[-1]
0xf47: Return(); Pop(4)

0xf48: Stack[-1] = 0
0xf49: Stack[-2] = 0
0xf4a: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf4b: @ GetMainOutdoorScene(Stack[-2])
0xf4c: Pop(0)
0xf4d: Pop(0); Push((bool) Stack[-2] == 0)
0xf4e: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf4f: Push("Can't find main outdoor scene")
0xf50: @ Trace(Stack[-1])
0xf51: Pop(1)
0xf52: Return(); Pop(8)

0xf53: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf54: Pop(0)
0xf55: Pop(0); Push((bool) Stack[-1] == 0)
0xf56: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf57: Push("Warning: outdoor scene locator ")
0xf58: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf59: Push(" doesnt exist")
0xf5a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf5b: @ Trace(Stack[-1])
0xf5c: Pop(1)
0xf5d: @@ GetMap(Stack[-11])
0xf5e: Pop(0)
0xf5f: Pop(0); Push((bool) Stack[-11] == 0)
0xf60: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf61: Push("Can't find map")
0xf62: @ Trace(Stack[-1])
0xf63: Pop(1)
0xf64: Return(); Pop(8)

0xf65: Push(CvectorIndex(Stack[-4], 0))
0xf66: Push(CvectorIndex(Stack[-5], 2))
0xf67: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf68: Pop(2)
0xf69: Return(); Pop(8)

0xf6a: Stack[-2] = 0
0xf6b: PushEmpty(int, int)
0xf6c: Push("branch")
0xf6d: @ GetVariable(Stack[-1], Stack[-2])
0xf6e: Pop(1)
0xf6f: Push((int) 0)
0xf70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf71: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf72: Stack[-3] = (int) 1
0xf73: Return(); Pop(2)

0xf74: GOTO 0xf7a

0xf75: Push((int) 1)
0xf76: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf77: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf78: Stack[-3] = (int) 2
0xf79: Return(); Pop(2)

0xf7a: Stack[-3] = (int) 3
0xf7b: Return(); Pop(2)

0xf7c: PushEmpty(int, int)
0xf7d: Push("mt_mat")
0xf7e: @ GetVariable(Stack[-1], Stack[-2])
0xf7f: Pop(1)
0xf80: Pop(0); Push((bool) Stack[-1] == 0)
0xf81: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf82: PushEmpty(int, object)
0xf83: Stack[-1] = Stack[-5]
0xf84: Push(-2, 1); TaskCall(2)
0xf85: Call2 0x12a

0xf86: Pop(-2, 1); TaskReturn
0xf87: Pop(2)
0xf88: Push("mt_mat")
0xf89: Push((int) 1)
0xf8a: @ SetVariable(Stack[-2], Stack[-1])
0xf8b: Pop(2)
0xf8c: PushEmpty(bool, int)
0xf8d: Stack[-1] = (int) 7
0xf8e: Call2 0xcda

0xf8f: Pop(1)
0xf90: IF (Stack[-1] == 0) GOTO 0xf98; Pop(1)

0xf91: PushEmpty(int, object)
0xf92: Stack[-1] = Stack[-5]
0xf93: Push(-2, 1); TaskCall(4)
0xf94: Call2 0x25e

0xf95: Pop(-2, 1); TaskReturn
0xf96: Pop(2)
0xf97: Return(); Pop(2)

0xf98: PushEmpty(bool, int)
0xf99: Stack[-1] = (int) 8
0xf9a: Call2 0xcda

0xf9b: Pop(1)
0xf9c: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xf9d: PushEmpty(int, object)
0xf9e: Stack[-1] = Stack[-5]
0xf9f: Push(-2, 1); TaskCall(6)
0xfa0: Call2 0x44a

0xfa1: Pop(-2, 1); TaskReturn
0xfa2: Pop(2)
0xfa3: Return(); Pop(2)

0xfa4: PushEmpty(bool, int)
0xfa5: Stack[-1] = (int) 10
0xfa6: Call2 0xcda

0xfa7: Pop(1)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xfa9: PushEmpty(int, object)
0xfaa: Stack[-1] = Stack[-5]
0xfab: Push(-2, 1); TaskCall(8)
0xfac: Call2 0x725

0xfad: Pop(-2, 1); TaskReturn
0xfae: Pop(2)
0xfaf: Return(); Pop(2)

0xfb0: PushEmpty(bool, int)
0xfb1: Stack[-1] = (int) 12
0xfb2: Call2 0xcda

0xfb3: Pop(1)
0xfb4: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfb5: PushEmpty(int, object)
0xfb6: Stack[-1] = Stack[-5]
0xfb7: Push(-2, 1); TaskCall(0)
0xfb8: Call2 0x0

0xfb9: Pop(-2, 1); TaskReturn
0xfba: Pop(2)
0xfbb: Return(); Pop(2)

0xfbc: PushEmpty(int, object)
0xfbd: Stack[-1] = Stack[-5]
0xfbe: Push(-2, 1); TaskCall(10)
0xfbf: Call2 0x9a1

0xfc0: Pop(-2, 1); TaskReturn
0xfc1: Pop(2)
0xfc2: Return(); Pop(2)

