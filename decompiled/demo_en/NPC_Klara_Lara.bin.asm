GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Sympathy
	Fear
	Confusion
	Tiredness
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	.bin
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Lara.png
	ui/NPC_Lara_b.png
	k2q02
	ook2Lara1
	k2q03
	k2q03Arfist
	pt_map_k2q03_arfist
	AddMark
	quest_k2_03
	place_arfist
	completed
	k4q03
	k4q03LaraGotoAlexandr
	pt_map_alexandr
	quest_k4_03
	ook4Lara1
	ook4Lara2
	smoked_meat2 is given
	smoked_meat
	ook6Lara1
	money2000 is given
	k11q01SoulCount
	ook11Lara1
	ShowMap
	playsound
	givemoney
	giveitem
	k2LaraVisit
	k4LaraVisit
	etorfin is given
	etorfin
	k6q01
	k6q01DankoPos
	k11q01
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0xb80
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x431 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x54e Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x731 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x888 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f9 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb56 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xbcc Vars = (int)
		EVENT_6 Op = 0xbf2 Vars = ()
		EVENT_5 Op = 0xc01 Vars = ()
		EVENT_45 Op = 0xc0e Vars = (bool)
		EVENT_0 Op = 0xc1a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xccc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xeb1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xeaf

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xeb3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xeb5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1191

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
0x31: Call2 0xde0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xd21

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
0x48: Call2 0xd10

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
0x56: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0xfd8

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0xfcc

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0xec9

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0xfa5

0x6f: Pop(2)
0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xe0

0x73: Pop(1)
0x74: Push((int) 525316)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 525317)
0x7a: Push((int) 41305)
0x7b: Push((int) 26685)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 539381)
0x7f: Push((int) -1)
0x80: Push((int) 41304)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0xc2

0x84: PushEmpty(string)
0x85: Stack[-1] = "Neutral"
0x86: Call2 0xe0

0x87: Pop(1)
0x88: Push((int) 525286)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0xfcc

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 525292)
0x93: Push((int) 44884)
0x94: Push((int) 26660)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0xfe4

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0xfd8

0xa1: Pop(1)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: Push((int) 525325)
0xa7: Push((int) 42565)
0xa8: Push((int) 26693)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0xff0

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: Push((int) 525334)
0xb1: Push((int) 26703)
0xb2: Push((int) 26702)
0xb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(3)
0xb5: Push((int) 525295)
0xb6: Push((int) -1)
0xb7: Push((int) 26663)
0xb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(3)
0xba: Push((int) 529185)
0xbb: Push((int) -1)
0xbc: Push((int) 30635)
0xbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe: Pop(3)
0xbf: GOTO 0xc2

0xc0: Return(); Pop(0)

0xc1: GOTO 0x55

0xc2: PushEmpty(bool)
0xc3: Call2 0xeb7

0xc4: Pop(0)
0xc5: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc6: @ lshWaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: PushEmpty(string)
0xcc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcd: Call2 0xdab

0xce: Pop(1)
0xcf: GOTO 0xc6

0xd0: GOTO 0xdf

0xd1: Push("all")
0xd2: Push("idle")
0xd3: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: @ WaitForAnimEnd()
0xd6: Pop(0)
0xd7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: GOTO 0xdf

0xda: Push("all")
0xdb: Push("idle")
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: GOTO 0xd5

0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: PushEmpty(bool)
0xe2: Call2 0xeb7

0xe3: Pop(0)
0xe4: Pop(1); Push((bool) Stack[-1] == 0)
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: Return(); Pop(0)

0xe7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Return(); Pop(0)

0xea: PushEmpty(string, bool)
0xeb: Stack[-2] = Stack[-3]
0xec: Push("")
0xed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-1] = (bool) 0
0xf0: GOTO 0xf2

0xf1: Stack[-1] = (bool) 1
0xf2: Call2 0xdbb

0xf3: Pop(2)
0xf4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf5: Return(); Pop(0)

0xf6: PushEmpty()
0xf7: Push((int) 1)
0xf8: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0xf9: PushEmpty()
0xfa: Call2 0xdd9

0xfb: Pop(0)
0xfc: Push((int) 26691)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0xecf

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0xf89

0x108: Pop(2)
0x109: Push((int) 41323)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0xecf

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0xf89

0x115: Pop(2)
0x116: Push((int) 41324)
0x117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0xecf

0x11d: Pop(2)
0x11e: PushEmpty(object, object)
0x11f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0xf89

0x122: Pop(2)
0x123: Push((int) 26662)
0x124: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0xec0

0x12a: Pop(2)
0x12b: Push((int) 26695)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0xecf

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0xf89

0x137: Pop(2)
0x138: Push((int) 41327)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0xecf

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0xf89

0x144: Pop(2)
0x145: Push((int) 26704)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0xef2

0x14c: Pop(2)
0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0xf99

0x151: Pop(2)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0xf46

0x156: Pop(2)
0x157: Push((int) 41332)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xef2

0x15e: Pop(2)
0x15f: PushEmpty(object, object)
0x160: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x161: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162: Call2 0xeb9

0x163: Pop(2)
0x164: Push((int) 26684)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x167: PushEmpty(bool)
0x168: Stack[-1] = (bool) 0
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0xfd8

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0xfcc

0x171: Pop(1)
0x172: Pop(1); Push((bool) Stack[-1] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: Stack[-1] = (bool) 1
0x175: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x176: PushEmpty(object, object)
0x177: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x178: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x179: Call2 0xec9

0x17a: Pop(2)
0x17b: PushEmpty(object, object)
0x17c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17e: Call2 0xfa5

0x17f: Pop(2)
0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xe0

0x183: Pop(1)
0x184: Push((int) 525316)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 525317)
0x18a: Push((int) 41305)
0x18b: Push((int) 26685)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 539381)
0x18f: Push((int) -1)
0x190: Push((int) 41304)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xe0

0x197: Pop(1)
0x198: Push((int) 525286)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0xfcc

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: Push((int) 525292)
0x1a3: Push((int) 44884)
0x1a4: Push((int) 26660)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0xfe4

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0xfd8

0x1b1: Pop(1)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 525325)
0x1b7: Push((int) 42565)
0x1b8: Push((int) 26693)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: PushEmpty(bool, object)
0x1bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Call2 0xff0

0x1be: Pop(1)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: Push((int) 525334)
0x1c1: Push((int) 26703)
0x1c2: Push((int) 26702)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 525295)
0x1c6: Push((int) -1)
0x1c7: Push((int) 26663)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Push((int) 529185)
0x1cb: Push((int) -1)
0x1cc: Push((int) 30635)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 26703)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral"
0x1d5: Call2 0xe0

0x1d6: Pop(1)
0x1d7: Push((int) 525335)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 539400)
0x1dd: Push((int) 41330)
0x1de: Push((int) 41328)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Push((int) 539401)
0x1e2: Push((int) 41330)
0x1e3: Push((int) 41329)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Return(); Pop(0)

0x1e7: Push((int) 41330)
0x1e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = "Sympathy"
0x1ec: Call2 0xe0

0x1ed: Pop(1)
0x1ee: Push((int) 539402)
0x1ef: @@ SetMessage(Stack[-1])
0x1f0: Pop(1)
0x1f1: @@ ClearReplies()
0x1f2: Pop(0)
0x1f3: Push((int) 525336)
0x1f4: Push((int) -1)
0x1f5: Push((int) 26704)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Push((int) 539403)
0x1f9: Push((int) -1)
0x1fa: Push((int) 41332)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Return(); Pop(0)

0x1fe: Push((int) 42565)
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral"
0x203: Call2 0xe0

0x204: Pop(1)
0x205: Push((int) 540556)
0x206: @@ SetMessage(Stack[-1])
0x207: Pop(1)
0x208: @@ ClearReplies()
0x209: Pop(0)
0x20a: Push((int) 540557)
0x20b: Push((int) 26694)
0x20c: Push((int) 42566)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 26694)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Neutral"
0x215: Call2 0xe0

0x216: Pop(1)
0x217: Push((int) 525326)
0x218: @@ SetMessage(Stack[-1])
0x219: Pop(1)
0x21a: @@ ClearReplies()
0x21b: Pop(0)
0x21c: Push((int) 539397)
0x21d: Push((int) 41326)
0x21e: Push((int) 41325)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Push((int) 539399)
0x222: Push((int) -1)
0x223: Push((int) 41327)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 41326)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Neutral"
0x22c: Call2 0xe0

0x22d: Pop(1)
0x22e: Push((int) 539398)
0x22f: @@ SetMessage(Stack[-1])
0x230: Pop(1)
0x231: @@ ClearReplies()
0x232: Pop(0)
0x233: Push((int) 525327)
0x234: Push((int) -1)
0x235: Push((int) 26695)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 44884)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Fear"
0x23e: Call2 0xe0

0x23f: Pop(1)
0x240: Push((int) 542495)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 542496)
0x246: Push((int) 44887)
0x247: Push((int) 44885)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 542497)
0x24b: Push((int) 44888)
0x24c: Push((int) 44886)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 44888)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Confusion"
0x255: Call2 0xe0

0x256: Pop(1)
0x257: Push((int) 542499)
0x258: @@ SetMessage(Stack[-1])
0x259: Pop(1)
0x25a: @@ ClearReplies()
0x25b: Pop(0)
0x25c: Push((int) 542502)
0x25d: Push((int) 44890)
0x25e: Push((int) 44891)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Push((int) 542505)
0x262: Push((int) 44890)
0x263: Push((int) 44895)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 44887)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Fear"
0x26c: Call2 0xe0

0x26d: Pop(1)
0x26e: Push((int) 542498)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 542500)
0x274: Push((int) 44890)
0x275: Push((int) 44889)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 44890)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Confusion"
0x27e: Call2 0xe0

0x27f: Pop(1)
0x280: Push((int) 542501)
0x281: @@ SetMessage(Stack[-1])
0x282: Pop(1)
0x283: @@ ClearReplies()
0x284: Pop(0)
0x285: Push((int) 542503)
0x286: Push((int) 26661)
0x287: Push((int) 44893)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Push((int) 542504)
0x28b: Push((int) 26661)
0x28c: Push((int) 44894)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 26661)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral"
0x295: Call2 0xe0

0x296: Pop(1)
0x297: Push((int) 525293)
0x298: @@ SetMessage(Stack[-1])
0x299: Pop(1)
0x29a: @@ ClearReplies()
0x29b: Pop(0)
0x29c: Push((int) 529186)
0x29d: Push((int) 30637)
0x29e: Push((int) 30636)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 30637)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral"
0x2a7: Call2 0xe0

0x2a8: Pop(1)
0x2a9: Push((int) 529187)
0x2aa: @@ SetMessage(Stack[-1])
0x2ab: Pop(1)
0x2ac: @@ ClearReplies()
0x2ad: Pop(0)
0x2ae: Push((int) 525294)
0x2af: Push((int) -1)
0x2b0: Push((int) 26662)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 41305)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral"
0x2b9: Call2 0xe0

0x2ba: Pop(1)
0x2bb: Push((int) 539382)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 539383)
0x2c1: Push((int) 41307)
0x2c2: Push((int) 41306)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Push((int) 539387)
0x2c6: Push((int) 41312)
0x2c7: Push((int) 41310)
0x2c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(3)
0x2ca: Push((int) 539386)
0x2cb: Push((int) 26686)
0x2cc: Push((int) 41309)
0x2cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 41307)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral"
0x2d5: Call2 0xe0

0x2d6: Pop(1)
0x2d7: Push((int) 539384)
0x2d8: @@ SetMessage(Stack[-1])
0x2d9: Pop(1)
0x2da: @@ ClearReplies()
0x2db: Pop(0)
0x2dc: Push((int) 539388)
0x2dd: Push((int) 41312)
0x2de: Push((int) 41311)
0x2df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(3)
0x2e1: Push((int) 539385)
0x2e2: Push((int) 26686)
0x2e3: Push((int) 41308)
0x2e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(3)
0x2e6: Return(); Pop(0)

0x2e7: Push((int) 41312)
0x2e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ea: PushEmpty(string)
0x2eb: Stack[-1] = "Neutral"
0x2ec: Call2 0xe0

0x2ed: Pop(1)
0x2ee: Push((int) 539389)
0x2ef: @@ SetMessage(Stack[-1])
0x2f0: Pop(1)
0x2f1: @@ ClearReplies()
0x2f2: Pop(0)
0x2f3: Push((int) 539390)
0x2f4: Push((int) 26686)
0x2f5: Push((int) 41313)
0x2f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(3)
0x2f8: Push((int) 539391)
0x2f9: Push((int) 26686)
0x2fa: Push((int) 41316)
0x2fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: Push((int) 26686)
0x2ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call2 0xe0

0x304: Pop(1)
0x305: Push((int) 525318)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: Push((int) 525319)
0x30b: Push((int) 26688)
0x30c: Push((int) 26687)
0x30d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: Push((int) 539392)
0x310: Push((int) 41321)
0x311: Push((int) 41319)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: Return(); Pop(0)

0x315: Push((int) 41321)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral"
0x31a: Call2 0xe0

0x31b: Pop(1)
0x31c: Push((int) 539394)
0x31d: @@ SetMessage(Stack[-1])
0x31e: Pop(1)
0x31f: @@ ClearReplies()
0x320: Pop(0)
0x321: Push((int) 539395)
0x322: Push((int) -1)
0x323: Push((int) 41323)
0x324: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x325: Pop(3)
0x326: Push((int) 539396)
0x327: Push((int) -1)
0x328: Push((int) 41324)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: Return(); Pop(0)

0x32c: Push((int) 26688)
0x32d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x32f: PushEmpty(string)
0x330: Stack[-1] = "Neutral"
0x331: Call2 0xe0

0x332: Pop(1)
0x333: Push((int) 525320)
0x334: @@ SetMessage(Stack[-1])
0x335: Pop(1)
0x336: @@ ClearReplies()
0x337: Pop(0)
0x338: Push((int) 525321)
0x339: Push((int) 26690)
0x33a: Push((int) 26689)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: Push((int) 541566)
0x33e: Push((int) 43739)
0x33f: Push((int) 43738)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: Push((int) 539393)
0x343: Push((int) 41321)
0x344: Push((int) 41320)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Return(); Pop(0)

0x348: Push((int) 43739)
0x349: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x34b: PushEmpty(string)
0x34c: Stack[-1] = "Fear"
0x34d: Call2 0xe0

0x34e: Pop(1)
0x34f: Push((int) 541567)
0x350: @@ SetMessage(Stack[-1])
0x351: Pop(1)
0x352: @@ ClearReplies()
0x353: Pop(0)
0x354: Push((int) 541568)
0x355: Push((int) 43741)
0x356: Push((int) 43740)
0x357: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(3)
0x359: Return(); Pop(0)

0x35a: Push((int) 43741)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral"
0x35f: Call2 0xe0

0x360: Pop(1)
0x361: Push((int) 541569)
0x362: @@ SetMessage(Stack[-1])
0x363: Pop(1)
0x364: @@ ClearReplies()
0x365: Pop(0)
0x366: Push((int) 541570)
0x367: Push((int) 26690)
0x368: Push((int) 43742)
0x369: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: Push((int) 26690)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Confusion"
0x371: Call2 0xe0

0x372: Pop(1)
0x373: Push((int) 525322)
0x374: @@ SetMessage(Stack[-1])
0x375: Pop(1)
0x376: @@ ClearReplies()
0x377: Pop(0)
0x378: Push((int) 525323)
0x379: Push((int) -1)
0x37a: Push((int) 26691)
0x37b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(3)
0x37d: Push((int) 525324)
0x37e: Push((int) -1)
0x37f: Push((int) 26692)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x384: PushEmpty(bool)
0x385: Call2 0xeb7

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x388: @ lshStopAnimation()
0x389: Pop(0)
0x38a: GOTO 0x38d

0x38b: @ StopAnimation()
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: GOTO 0xf7

0x38f: Return(); Pop(0)

0x390: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x391: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x392: PushEmpty(bool, object, float)
0x393: Stack[-2] = Stack[-12]
0x394: Stack[-1] = (float) 70.0
0x395: Call2 0xccc

0x396: Pop(2)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-10] = (int) -2
0x39a: Return(); Pop(8)

0x39b: @ CreateDialog(Stack[-4])
0x39c: Pop(0)
0x39d: PushEmpty(int)
0x39e: Call2 0xeb1

0x39f: Pop(0)
0x3a0: @@ SetNPCName(Stack[-1])
0x3a1: Pop(1)
0x3a2: PushEmpty(int)
0x3a3: Call2 0xeaf

0x3a4: Pop(0)
0x3a5: @@ SetNPCDescription(Stack[-1])
0x3a6: Pop(1)
0x3a7: PushEmpty(string)
0x3a8: Call2 0xeb3

0x3a9: Pop(0)
0x3aa: @@ SetPhoto(Stack[-1])
0x3ab: Pop(1)
0x3ac: PushEmpty(string)
0x3ad: Call2 0xeb5

0x3ae: Pop(0)
0x3af: @@ SetPhoto2(Stack[-1])
0x3b0: Pop(1)
0x3b1: PushEmpty(int)
0x3b2: Call2 0x1191

0x3b3: Pop(0)
0x3b4: @@ SetPlayerName(Stack[-1])
0x3b5: Pop(1)
0x3b6: Stack[-2] = (int) -1
0x3b7: @ IsOverrideActive(Stack[-3])
0x3b8: Pop(0)
0x3b9: Push(Stack[-3])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-10] = (int) -2
0x3bc: Return(); Pop(8)

0x3bd: @ DoDialog(Stack[-4])
0x3be: Pop(0)
0x3bf: PushEmpty(bool, object)
0x3c0: PushEmpty(object)
0x3c1: Call2 0xde0

0x3c2: Stack[-2] = Stack[-1]
0x3c3: Pop(1)
0x3c4: Call2 0xd21

0x3c5: Pop(2)
0x3c6: PushEmpty(object, object)
0x3c7: Stack[-2] = Stack[-11]
0x3c8: Stack[-1] = Stack[-6]
0x3c9: Push(-2, 4); TaskCall(3)
0x3ca: Call2 0x3e1

0x3cb: Pop(-2, 4); TaskReturn
0x3cc: Pop(2)
0x3cd: @@ IsDialogEnd(Stack[-1])
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: @ sync()
0x3d2: Pop(0)
0x3d3: @@ IsDialogEnd(Stack[-1])
0x3d4: Pop(0)
0x3d5: GOTO 0x3cf

0x3d6: PushEmpty(object)
0x3d7: Stack[-1] = Stack[-10]
0x3d8: Call2 0xd10

0x3d9: Pop(1)
0x3da: @ StopDialog(Stack[-4])
0x3db: Pop(0)
0x3dc: @@ GetReturnValue(Stack[-2])
0x3dd: Pop(0)
0x3de: Stack[-10] = Stack[-2]
0x3df: Return(); Pop(8)

0x3e0: Stack[-4] = 0
0x3e1: PushEmpty()
0x3e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3e4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3e5: Push((int) 1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral"
0x3e9: Call2 0x41b

0x3ea: Pop(1)
0x3eb: Push((int) 525495)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 525496)
0x3f1: Push((int) -1)
0x3f2: Push((int) 26852)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 529314)
0x3f6: Push((int) -1)
0x3f7: Push((int) 30768)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: GOTO 0x3fd

0x3fb: Return(); Pop(0)

0x3fc: GOTO 0x3e5

0x3fd: PushEmpty(bool)
0x3fe: Call2 0xeb7

0x3ff: Pop(0)
0x400: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x401: @ lshWaitForAnimEnd()
0x402: Pop(0)
0x403: Push( Stack[3 + Tasks[-1].StackPointer] )
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x40b

0x406: PushEmpty(string)
0x407: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x408: Call2 0xdab

0x409: Pop(1)
0x40a: GOTO 0x401

0x40b: GOTO 0x41a

0x40c: Push("all")
0x40d: Push("idle")
0x40e: @ PlayAnimation(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: @ WaitForAnimEnd()
0x411: Pop(0)
0x412: Push( Stack[3 + Tasks[-1].StackPointer] )
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x41a

0x415: Push("all")
0x416: Push("idle")
0x417: @ PlayAnimation(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: GOTO 0x410

0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: PushEmpty(bool)
0x41d: Call2 0xeb7

0x41e: Pop(0)
0x41f: Pop(1); Push((bool) Stack[-1] == 0)
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Return(); Pop(0)

0x422: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x423: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x424: Return(); Pop(0)

0x425: PushEmpty(string, bool)
0x426: Stack[-2] = Stack[-3]
0x427: Push("")
0x428: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-1] = (bool) 0
0x42b: GOTO 0x42d

0x42c: Stack[-1] = (bool) 1
0x42d: Call2 0xdbb

0x42e: Pop(2)
0x42f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: Push((int) 1)
0x433: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x434: PushEmpty()
0x435: Call2 0xdd9

0x436: Pop(0)
0x437: Push((int) 26851)
0x438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x41b

0x43d: Pop(1)
0x43e: Push((int) 525495)
0x43f: @@ SetMessage(Stack[-1])
0x440: Pop(1)
0x441: @@ ClearReplies()
0x442: Pop(0)
0x443: Push((int) 525496)
0x444: Push((int) -1)
0x445: Push((int) 26852)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Push((int) 529314)
0x449: Push((int) -1)
0x44a: Push((int) 30768)
0x44b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: Return(); Pop(0)

0x44e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x44f: PushEmpty(bool)
0x450: Call2 0xeb7

0x451: Pop(0)
0x452: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x453: @ lshStopAnimation()
0x454: Pop(0)
0x455: GOTO 0x458

0x456: @ StopAnimation()
0x457: Pop(0)
0x458: Return(); Pop(0)

0x459: GOTO 0x432

0x45a: Return(); Pop(0)

0x45b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x45c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x45d: PushEmpty(bool, object, float)
0x45e: Stack[-2] = Stack[-12]
0x45f: Stack[-1] = (float) 70.0
0x460: Call2 0xccc

0x461: Pop(2)
0x462: Pop(1); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: Stack[-10] = (int) -2
0x465: Return(); Pop(8)

0x466: @ CreateDialog(Stack[-4])
0x467: Pop(0)
0x468: PushEmpty(int)
0x469: Call2 0xeb1

0x46a: Pop(0)
0x46b: @@ SetNPCName(Stack[-1])
0x46c: Pop(1)
0x46d: PushEmpty(int)
0x46e: Call2 0xeaf

0x46f: Pop(0)
0x470: @@ SetNPCDescription(Stack[-1])
0x471: Pop(1)
0x472: PushEmpty(string)
0x473: Call2 0xeb3

0x474: Pop(0)
0x475: @@ SetPhoto(Stack[-1])
0x476: Pop(1)
0x477: PushEmpty(string)
0x478: Call2 0xeb5

0x479: Pop(0)
0x47a: @@ SetPhoto2(Stack[-1])
0x47b: Pop(1)
0x47c: PushEmpty(int)
0x47d: Call2 0x1191

0x47e: Pop(0)
0x47f: @@ SetPlayerName(Stack[-1])
0x480: Pop(1)
0x481: Stack[-2] = (int) -1
0x482: @ IsOverrideActive(Stack[-3])
0x483: Pop(0)
0x484: Push(Stack[-3])
0x485: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x486: Stack[-10] = (int) -2
0x487: Return(); Pop(8)

0x488: @ DoDialog(Stack[-4])
0x489: Pop(0)
0x48a: PushEmpty(bool, object)
0x48b: PushEmpty(object)
0x48c: Call2 0xde0

0x48d: Stack[-2] = Stack[-1]
0x48e: Pop(1)
0x48f: Call2 0xd21

0x490: Pop(2)
0x491: PushEmpty(object, object)
0x492: Stack[-2] = Stack[-11]
0x493: Stack[-1] = Stack[-6]
0x494: Push(-2, 4); TaskCall(5)
0x495: Call2 0x4ac

0x496: Pop(-2, 4); TaskReturn
0x497: Pop(2)
0x498: @@ IsDialogEnd(Stack[-1])
0x499: Pop(0)
0x49a: Pop(0); Push((bool) Stack[-1] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49c: @ sync()
0x49d: Pop(0)
0x49e: @@ IsDialogEnd(Stack[-1])
0x49f: Pop(0)
0x4a0: GOTO 0x49a

0x4a1: PushEmpty(object)
0x4a2: Stack[-1] = Stack[-10]
0x4a3: Call2 0xd10

0x4a4: Pop(1)
0x4a5: @ StopDialog(Stack[-4])
0x4a6: Pop(0)
0x4a7: @@ GetReturnValue(Stack[-2])
0x4a8: Pop(0)
0x4a9: Stack[-10] = Stack[-2]
0x4aa: Return(); Pop(8)

0x4ab: Stack[-4] = 0
0x4ac: PushEmpty()
0x4ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ae: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4b0: Push((int) 1)
0x4b1: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x4b2: PushEmpty(bool, object)
0x4b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b4: Call2 0x1008

0x4b5: Pop(1)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4b7: PushEmpty(object, object)
0x4b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ba: Call2 0xf1a

0x4bb: Pop(2)
0x4bc: PushEmpty(object, object)
0x4bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bf: Call2 0xfab

0x4c0: Pop(2)
0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Neutral"
0x4c3: Call2 0x538

0x4c4: Pop(1)
0x4c5: Push((int) 525791)
0x4c6: @@ SetMessage(Stack[-1])
0x4c7: Pop(1)
0x4c8: @@ ClearReplies()
0x4c9: Pop(0)
0x4ca: Push((int) 529235)
0x4cb: Push((int) 30690)
0x4cc: Push((int) 30689)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: GOTO 0x51a

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral"
0x4d2: Call2 0x538

0x4d3: Pop(1)
0x4d4: Push((int) 525796)
0x4d5: @@ SetMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ ClearReplies()
0x4d8: Pop(0)
0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4db: Call2 0xffc

0x4dc: Pop(1)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: Push((int) 525797)
0x4df: Push((int) 27105)
0x4e0: Push((int) 27103)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: PushEmpty(bool, object)
0x4e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e5: Call2 0x1014

0x4e6: Pop(1)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e8: Push((int) 525813)
0x4e9: Push((int) 27120)
0x4ea: Push((int) 27119)
0x4eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ec: Pop(3)
0x4ed: PushEmpty(bool)
0x4ee: Stack[-1] = (bool) 1
0x4ef: PushEmpty(bool)
0x4f0: Stack[-1] = (bool) 0
0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f3: Call2 0x1020

0x4f4: Pop(1)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Call2 0x102c

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[-1] = (bool) 1
0x4fc: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x4fd: PushEmpty(bool)
0x4fe: Stack[-1] = (bool) 0
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call2 0x1038

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0x102c

0x507: Pop(1)
0x508: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x509: Stack[-1] = (bool) 1
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: Stack[-1] = (bool) 0
0x50c: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50d: Push((int) 525819)
0x50e: Push((int) 27126)
0x50f: Push((int) 27125)
0x510: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x511: Pop(3)
0x512: Push((int) 525798)
0x513: Push((int) -1)
0x514: Push((int) 27104)
0x515: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x516: Pop(3)
0x517: GOTO 0x51a

0x518: Return(); Pop(0)

0x519: GOTO 0x4b0

0x51a: PushEmpty(bool)
0x51b: Call2 0xeb7

0x51c: Pop(0)
0x51d: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x51e: @ lshWaitForAnimEnd()
0x51f: Pop(0)
0x520: Push( Stack[3 + Tasks[-1].StackPointer] )
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: GOTO 0x528

0x523: PushEmpty(string)
0x524: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x525: Call2 0xdab

0x526: Pop(1)
0x527: GOTO 0x51e

0x528: GOTO 0x537

0x529: Push("all")
0x52a: Push("idle")
0x52b: @ PlayAnimation(Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: @ WaitForAnimEnd()
0x52e: Pop(0)
0x52f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x530: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x531: GOTO 0x537

0x532: Push("all")
0x533: Push("idle")
0x534: @ PlayAnimation(Stack[-2], Stack[-1])
0x535: Pop(2)
0x536: GOTO 0x52d

0x537: Return(); Pop(0)

0x538: PushEmpty()
0x539: PushEmpty(bool)
0x53a: Call2 0xeb7

0x53b: Pop(0)
0x53c: Pop(1); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: Return(); Pop(0)

0x53f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x540: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x541: Return(); Pop(0)

0x542: PushEmpty(string, bool)
0x543: Stack[-2] = Stack[-3]
0x544: Push("")
0x545: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-1] = (bool) 0
0x548: GOTO 0x54a

0x549: Stack[-1] = (bool) 1
0x54a: Call2 0xdbb

0x54b: Pop(2)
0x54c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: Push((int) 1)
0x550: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x551: PushEmpty()
0x552: Call2 0xdd9

0x553: Pop(0)
0x554: Push((int) 27101)
0x555: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x557: PushEmpty(object, object)
0x558: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x559: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55a: Call2 0xefc

0x55b: Pop(2)
0x55c: PushEmpty(object, object)
0x55d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55f: Call2 0xfb1

0x560: Pop(2)
0x561: Push((int) 27106)
0x562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x564: PushEmpty(object, object)
0x565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x567: Call2 0xefc

0x568: Pop(2)
0x569: PushEmpty(object, object)
0x56a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56c: Call2 0xfb1

0x56d: Pop(2)
0x56e: Push((int) 27121)
0x56f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x571: PushEmpty(object, object)
0x572: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x573: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x574: Call2 0xf26

0x575: Pop(2)
0x576: PushEmpty(object, object)
0x577: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x578: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x579: Call2 0xfc1

0x57a: Pop(2)
0x57b: PushEmpty(object, object)
0x57c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57e: Call2 0xf30

0x57f: Pop(2)
0x580: PushEmpty(object, object)
0x581: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x582: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x583: Call2 0xf9f

0x584: Pop(2)
0x585: Push((int) 27125)
0x586: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x588: PushEmpty(object, object)
0x589: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58b: Call2 0xf20

0x58c: Pop(2)
0x58d: Push((int) 27097)
0x58e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x590: PushEmpty(bool, object)
0x591: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x592: Call2 0x1008

0x593: Pop(1)
0x594: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x595: PushEmpty(object, object)
0x596: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x597: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x598: Call2 0xf1a

0x599: Pop(2)
0x59a: PushEmpty(object, object)
0x59b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59d: Call2 0xfab

0x59e: Pop(2)
0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Neutral"
0x5a1: Call2 0x538

0x5a2: Pop(1)
0x5a3: Push((int) 525791)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: Push((int) 529235)
0x5a9: Push((int) 30690)
0x5aa: Push((int) 30689)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Return(); Pop(0)

0x5ae: PushEmpty(string)
0x5af: Stack[-1] = "Neutral"
0x5b0: Call2 0x538

0x5b1: Pop(1)
0x5b2: Push((int) 525796)
0x5b3: @@ SetMessage(Stack[-1])
0x5b4: Pop(1)
0x5b5: @@ ClearReplies()
0x5b6: Pop(0)
0x5b7: PushEmpty(bool, object)
0x5b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b9: Call2 0xffc

0x5ba: Pop(1)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bc: Push((int) 525797)
0x5bd: Push((int) 27105)
0x5be: Push((int) 27103)
0x5bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(3)
0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c3: Call2 0x1014

0x5c4: Pop(1)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c6: Push((int) 525813)
0x5c7: Push((int) 27120)
0x5c8: Push((int) 27119)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: PushEmpty(bool)
0x5cc: Stack[-1] = (bool) 1
0x5cd: PushEmpty(bool)
0x5ce: Stack[-1] = (bool) 0
0x5cf: PushEmpty(bool, object)
0x5d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d1: Call2 0x1020

0x5d2: Pop(1)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d4: PushEmpty(bool, object)
0x5d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d6: Call2 0x102c

0x5d7: Pop(1)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: Stack[-1] = (bool) 1
0x5da: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5db: PushEmpty(bool)
0x5dc: Stack[-1] = (bool) 0
0x5dd: PushEmpty(bool, object)
0x5de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5df: Call2 0x1038

0x5e0: Pop(1)
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e2: PushEmpty(bool, object)
0x5e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e4: Call2 0x102c

0x5e5: Pop(1)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Stack[-1] = (bool) 1
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e9: Stack[-1] = (bool) 0
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5eb: Push((int) 525819)
0x5ec: Push((int) 27126)
0x5ed: Push((int) 27125)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: Push((int) 525798)
0x5f1: Push((int) -1)
0x5f2: Push((int) 27104)
0x5f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: Return(); Pop(0)

0x5f6: Push((int) 27126)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Confusion"
0x5fb: Call2 0x538

0x5fc: Pop(1)
0x5fd: Push((int) 525820)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 525821)
0x603: Push((int) -1)
0x604: Push((int) 27127)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Return(); Pop(0)

0x608: Push((int) 27120)
0x609: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x60b: PushEmpty(string)
0x60c: Stack[-1] = "Sympathy"
0x60d: Call2 0x538

0x60e: Pop(1)
0x60f: Push((int) 525814)
0x610: @@ SetMessage(Stack[-1])
0x611: Pop(1)
0x612: @@ ClearReplies()
0x613: Pop(0)
0x614: Push((int) 525815)
0x615: Push((int) -1)
0x616: Push((int) 27121)
0x617: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x618: Pop(3)
0x619: Return(); Pop(0)

0x61a: Push((int) 27105)
0x61b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x61d: PushEmpty(string)
0x61e: Stack[-1] = "Sympathy"
0x61f: Call2 0x538

0x620: Pop(1)
0x621: Push((int) 525799)
0x622: @@ SetMessage(Stack[-1])
0x623: Pop(1)
0x624: @@ ClearReplies()
0x625: Pop(0)
0x626: Push((int) 525800)
0x627: Push((int) -1)
0x628: Push((int) 27106)
0x629: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62a: Pop(3)
0x62b: Return(); Pop(0)

0x62c: Push((int) 30690)
0x62d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x62f: PushEmpty(string)
0x630: Stack[-1] = "Confusion"
0x631: Call2 0x538

0x632: Pop(1)
0x633: Push((int) 529236)
0x634: @@ SetMessage(Stack[-1])
0x635: Pop(1)
0x636: @@ ClearReplies()
0x637: Pop(0)
0x638: Push((int) 529237)
0x639: Push((int) 30692)
0x63a: Push((int) 30691)
0x63b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63c: Pop(3)
0x63d: Return(); Pop(0)

0x63e: Push((int) 30692)
0x63f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x641: PushEmpty(string)
0x642: Stack[-1] = "Confusion"
0x643: Call2 0x538

0x644: Pop(1)
0x645: Push((int) 529238)
0x646: @@ SetMessage(Stack[-1])
0x647: Pop(1)
0x648: @@ ClearReplies()
0x649: Pop(0)
0x64a: Push((int) 525792)
0x64b: Push((int) 27100)
0x64c: Push((int) 27098)
0x64d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64e: Pop(3)
0x64f: Push((int) 525793)
0x650: Push((int) -1)
0x651: Push((int) 27099)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 27100)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Sympathy"
0x65a: Call2 0x538

0x65b: Pop(1)
0x65c: Push((int) 525794)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 525795)
0x662: Push((int) -1)
0x663: Push((int) 27101)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Return(); Pop(0)

0x667: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x668: PushEmpty(bool)
0x669: Call2 0xeb7

0x66a: Pop(0)
0x66b: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66c: @ lshStopAnimation()
0x66d: Pop(0)
0x66e: GOTO 0x671

0x66f: @ StopAnimation()
0x670: Pop(0)
0x671: Return(); Pop(0)

0x672: GOTO 0x54f

0x673: Return(); Pop(0)

0x674: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x675: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x676: PushEmpty(bool, object, float)
0x677: Stack[-2] = Stack[-12]
0x678: Stack[-1] = (float) 70.0
0x679: Call2 0xccc

0x67a: Pop(2)
0x67b: Pop(1); Push((bool) Stack[-1] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-10] = (int) -2
0x67e: Return(); Pop(8)

0x67f: @ CreateDialog(Stack[-4])
0x680: Pop(0)
0x681: PushEmpty(int)
0x682: Call2 0xeb1

0x683: Pop(0)
0x684: @@ SetNPCName(Stack[-1])
0x685: Pop(1)
0x686: PushEmpty(int)
0x687: Call2 0xeaf

0x688: Pop(0)
0x689: @@ SetNPCDescription(Stack[-1])
0x68a: Pop(1)
0x68b: PushEmpty(string)
0x68c: Call2 0xeb3

0x68d: Pop(0)
0x68e: @@ SetPhoto(Stack[-1])
0x68f: Pop(1)
0x690: PushEmpty(string)
0x691: Call2 0xeb5

0x692: Pop(0)
0x693: @@ SetPhoto2(Stack[-1])
0x694: Pop(1)
0x695: PushEmpty(int)
0x696: Call2 0x1191

0x697: Pop(0)
0x698: @@ SetPlayerName(Stack[-1])
0x699: Pop(1)
0x69a: Stack[-2] = (int) -1
0x69b: @ IsOverrideActive(Stack[-3])
0x69c: Pop(0)
0x69d: Push(Stack[-3])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-10] = (int) -2
0x6a0: Return(); Pop(8)

0x6a1: @ DoDialog(Stack[-4])
0x6a2: Pop(0)
0x6a3: PushEmpty(bool, object)
0x6a4: PushEmpty(object)
0x6a5: Call2 0xde0

0x6a6: Stack[-2] = Stack[-1]
0x6a7: Pop(1)
0x6a8: Call2 0xd21

0x6a9: Pop(2)
0x6aa: PushEmpty(object, object)
0x6ab: Stack[-2] = Stack[-11]
0x6ac: Stack[-1] = Stack[-6]
0x6ad: Push(-2, 4); TaskCall(7)
0x6ae: Call2 0x6c5

0x6af: Pop(-2, 4); TaskReturn
0x6b0: Pop(2)
0x6b1: @@ IsDialogEnd(Stack[-1])
0x6b2: Pop(0)
0x6b3: Pop(0); Push((bool) Stack[-1] == 0)
0x6b4: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b5: @ sync()
0x6b6: Pop(0)
0x6b7: @@ IsDialogEnd(Stack[-1])
0x6b8: Pop(0)
0x6b9: GOTO 0x6b3

0x6ba: PushEmpty(object)
0x6bb: Stack[-1] = Stack[-10]
0x6bc: Call2 0xd10

0x6bd: Pop(1)
0x6be: @ StopDialog(Stack[-4])
0x6bf: Pop(0)
0x6c0: @@ GetReturnValue(Stack[-2])
0x6c1: Pop(0)
0x6c2: Stack[-10] = Stack[-2]
0x6c3: Return(); Pop(8)

0x6c4: Stack[-4] = 0
0x6c5: PushEmpty()
0x6c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6c7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6c8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6c9: Push((int) 1)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6cb: PushEmpty(string)
0x6cc: Stack[-1] = "Neutral"
0x6cd: Call2 0x71b

0x6ce: Pop(1)
0x6cf: Push((int) 526079)
0x6d0: @@ SetMessage(Stack[-1])
0x6d1: Pop(1)
0x6d2: @@ ClearReplies()
0x6d3: Pop(0)
0x6d4: PushEmpty(bool)
0x6d5: Stack[-1] = (bool) 0
0x6d6: PushEmpty(bool)
0x6d7: Stack[-1] = (bool) 0
0x6d8: PushEmpty(bool, object)
0x6d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6da: Call2 0x1044

0x6db: Pop(1)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6dd: PushEmpty(bool, object)
0x6de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6df: Call2 0x1050

0x6e0: Pop(1)
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e2: Stack[-1] = (bool) 1
0x6e3: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e6: Call2 0x105c

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e9: Stack[-1] = (bool) 1
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6eb: Push((int) 526080)
0x6ec: Push((int) 27367)
0x6ed: Push((int) 27366)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: Push((int) 526083)
0x6f1: Push((int) -1)
0x6f2: Push((int) 27369)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Push((int) 528852)
0x6f6: Push((int) -1)
0x6f7: Push((int) 30272)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: GOTO 0x6fd

0x6fb: Return(); Pop(0)

0x6fc: GOTO 0x6c9

0x6fd: PushEmpty(bool)
0x6fe: Call2 0xeb7

0x6ff: Pop(0)
0x700: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x701: @ lshWaitForAnimEnd()
0x702: Pop(0)
0x703: Push( Stack[3 + Tasks[-1].StackPointer] )
0x704: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x705: GOTO 0x70b

0x706: PushEmpty(string)
0x707: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x708: Call2 0xdab

0x709: Pop(1)
0x70a: GOTO 0x701

0x70b: GOTO 0x71a

0x70c: Push("all")
0x70d: Push("idle")
0x70e: @ PlayAnimation(Stack[-2], Stack[-1])
0x70f: Pop(2)
0x710: @ WaitForAnimEnd()
0x711: Pop(0)
0x712: Push( Stack[3 + Tasks[-1].StackPointer] )
0x713: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x714: GOTO 0x71a

0x715: Push("all")
0x716: Push("idle")
0x717: @ PlayAnimation(Stack[-2], Stack[-1])
0x718: Pop(2)
0x719: GOTO 0x710

0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: PushEmpty(bool)
0x71d: Call2 0xeb7

0x71e: Pop(0)
0x71f: Pop(1); Push((bool) Stack[-1] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: Return(); Pop(0)

0x722: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x723: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x724: Return(); Pop(0)

0x725: PushEmpty(string, bool)
0x726: Stack[-2] = Stack[-3]
0x727: Push("")
0x728: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-1] = (bool) 0
0x72b: GOTO 0x72d

0x72c: Stack[-1] = (bool) 1
0x72d: Call2 0xdbb

0x72e: Pop(2)
0x72f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x730: Return(); Pop(0)

0x731: PushEmpty()
0x732: Push((int) 1)
0x733: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x734: PushEmpty()
0x735: Call2 0xdd9

0x736: Pop(0)
0x737: Push((int) 27366)
0x738: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73a: PushEmpty(object, object)
0x73b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73d: Call2 0xf3b

0x73e: Pop(2)
0x73f: Push((int) 27368)
0x740: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x742: PushEmpty(object, object)
0x743: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x744: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x745: Call2 0xf41

0x746: Pop(2)
0x747: Push((int) 27365)
0x748: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x74a: PushEmpty(string)
0x74b: Stack[-1] = "Neutral"
0x74c: Call2 0x71b

0x74d: Pop(1)
0x74e: Push((int) 526079)
0x74f: @@ SetMessage(Stack[-1])
0x750: Pop(1)
0x751: @@ ClearReplies()
0x752: Pop(0)
0x753: PushEmpty(bool)
0x754: Stack[-1] = (bool) 0
0x755: PushEmpty(bool)
0x756: Stack[-1] = (bool) 0
0x757: PushEmpty(bool, object)
0x758: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x759: Call2 0x1044

0x75a: Pop(1)
0x75b: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75c: PushEmpty(bool, object)
0x75d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75e: Call2 0x1050

0x75f: Pop(1)
0x760: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x761: Stack[-1] = (bool) 1
0x762: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x763: PushEmpty(bool, object)
0x764: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x765: Call2 0x105c

0x766: Pop(1)
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Stack[-1] = (bool) 1
0x769: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76a: Push((int) 526080)
0x76b: Push((int) 27367)
0x76c: Push((int) 27366)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Push((int) 526083)
0x770: Push((int) -1)
0x771: Push((int) 27369)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push((int) 528852)
0x775: Push((int) -1)
0x776: Push((int) 30272)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Push((int) 27367)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x77d: PushEmpty(string)
0x77e: Stack[-1] = "Fear"
0x77f: Call2 0x71b

0x780: Pop(1)
0x781: Push((int) 526081)
0x782: @@ SetMessage(Stack[-1])
0x783: Pop(1)
0x784: @@ ClearReplies()
0x785: Pop(0)
0x786: Push((int) 528853)
0x787: Push((int) 30274)
0x788: Push((int) 30273)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Push((int) 528858)
0x78c: Push((int) 30280)
0x78d: Push((int) 30279)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: Return(); Pop(0)

0x791: Push((int) 30280)
0x792: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Fear"
0x796: Call2 0x71b

0x797: Pop(1)
0x798: Push((int) 528859)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 528860)
0x79e: Push((int) 30277)
0x79f: Push((int) 30281)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Return(); Pop(0)

0x7a3: Push((int) 30274)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Neutral"
0x7a8: Call2 0x71b

0x7a9: Pop(1)
0x7aa: Push((int) 528854)
0x7ab: @@ SetMessage(Stack[-1])
0x7ac: Pop(1)
0x7ad: @@ ClearReplies()
0x7ae: Pop(0)
0x7af: Push((int) 528855)
0x7b0: Push((int) 30277)
0x7b1: Push((int) 30275)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Push((int) 528856)
0x7b5: Push((int) 30277)
0x7b6: Push((int) 30276)
0x7b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b8: Pop(3)
0x7b9: Return(); Pop(0)

0x7ba: Push((int) 30277)
0x7bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7bd: PushEmpty(string)
0x7be: Stack[-1] = "Neutral"
0x7bf: Call2 0x71b

0x7c0: Pop(1)
0x7c1: Push((int) 528857)
0x7c2: @@ SetMessage(Stack[-1])
0x7c3: Pop(1)
0x7c4: @@ ClearReplies()
0x7c5: Pop(0)
0x7c6: Push((int) 526082)
0x7c7: Push((int) -1)
0x7c8: Push((int) 27368)
0x7c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ca: Pop(3)
0x7cb: Return(); Pop(0)

0x7cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7cd: PushEmpty(bool)
0x7ce: Call2 0xeb7

0x7cf: Pop(0)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d1: @ lshStopAnimation()
0x7d2: Pop(0)
0x7d3: GOTO 0x7d6

0x7d4: @ StopAnimation()
0x7d5: Pop(0)
0x7d6: Return(); Pop(0)

0x7d7: GOTO 0x732

0x7d8: Return(); Pop(0)

0x7d9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7da: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7db: PushEmpty(bool, object, float)
0x7dc: Stack[-2] = Stack[-12]
0x7dd: Stack[-1] = (float) 70.0
0x7de: Call2 0xccc

0x7df: Pop(2)
0x7e0: Pop(1); Push((bool) Stack[-1] == 0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e2: Stack[-10] = (int) -2
0x7e3: Return(); Pop(8)

0x7e4: @ CreateDialog(Stack[-4])
0x7e5: Pop(0)
0x7e6: PushEmpty(int)
0x7e7: Call2 0xeb1

0x7e8: Pop(0)
0x7e9: @@ SetNPCName(Stack[-1])
0x7ea: Pop(1)
0x7eb: PushEmpty(int)
0x7ec: Call2 0xeaf

0x7ed: Pop(0)
0x7ee: @@ SetNPCDescription(Stack[-1])
0x7ef: Pop(1)
0x7f0: PushEmpty(string)
0x7f1: Call2 0xeb3

0x7f2: Pop(0)
0x7f3: @@ SetPhoto(Stack[-1])
0x7f4: Pop(1)
0x7f5: PushEmpty(string)
0x7f6: Call2 0xeb5

0x7f7: Pop(0)
0x7f8: @@ SetPhoto2(Stack[-1])
0x7f9: Pop(1)
0x7fa: PushEmpty(int)
0x7fb: Call2 0x1191

0x7fc: Pop(0)
0x7fd: @@ SetPlayerName(Stack[-1])
0x7fe: Pop(1)
0x7ff: Stack[-2] = (int) -1
0x800: @ IsOverrideActive(Stack[-3])
0x801: Pop(0)
0x802: Push(Stack[-3])
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-10] = (int) -2
0x805: Return(); Pop(8)

0x806: @ DoDialog(Stack[-4])
0x807: Pop(0)
0x808: PushEmpty(bool, object)
0x809: PushEmpty(object)
0x80a: Call2 0xde0

0x80b: Stack[-2] = Stack[-1]
0x80c: Pop(1)
0x80d: Call2 0xd21

0x80e: Pop(2)
0x80f: PushEmpty(object, object)
0x810: Stack[-2] = Stack[-11]
0x811: Stack[-1] = Stack[-6]
0x812: Push(-2, 4); TaskCall(9)
0x813: Call2 0x82a

0x814: Pop(-2, 4); TaskReturn
0x815: Pop(2)
0x816: @@ IsDialogEnd(Stack[-1])
0x817: Pop(0)
0x818: Pop(0); Push((bool) Stack[-1] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81a: @ sync()
0x81b: Pop(0)
0x81c: @@ IsDialogEnd(Stack[-1])
0x81d: Pop(0)
0x81e: GOTO 0x818

0x81f: PushEmpty(object)
0x820: Stack[-1] = Stack[-10]
0x821: Call2 0xd10

0x822: Pop(1)
0x823: @ StopDialog(Stack[-4])
0x824: Pop(0)
0x825: @@ GetReturnValue(Stack[-2])
0x826: Pop(0)
0x827: Stack[-10] = Stack[-2]
0x828: Return(); Pop(8)

0x829: Stack[-4] = 0
0x82a: PushEmpty()
0x82b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x82c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x82d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x82e: Push((int) 1)
0x82f: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Neutral"
0x832: Call2 0x872

0x833: Pop(1)
0x834: Push((int) 527588)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: PushEmpty(bool)
0x83a: Stack[-1] = (bool) 0
0x83b: PushEmpty(bool, object)
0x83c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83d: Call2 0x1074

0x83e: Pop(1)
0x83f: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x840: PushEmpty(bool, object)
0x841: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x842: Call2 0x1068

0x843: Pop(1)
0x844: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x845: Stack[-1] = (bool) 1
0x846: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x847: Push((int) 527592)
0x848: Push((int) 28936)
0x849: Push((int) 28935)
0x84a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(3)
0x84c: Push((int) 527589)
0x84d: Push((int) -1)
0x84e: Push((int) 28932)
0x84f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: GOTO 0x854

0x852: Return(); Pop(0)

0x853: GOTO 0x82e

0x854: PushEmpty(bool)
0x855: Call2 0xeb7

0x856: Pop(0)
0x857: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x858: @ lshWaitForAnimEnd()
0x859: Pop(0)
0x85a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85b: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85c: GOTO 0x862

0x85d: PushEmpty(string)
0x85e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85f: Call2 0xdab

0x860: Pop(1)
0x861: GOTO 0x858

0x862: GOTO 0x871

0x863: Push("all")
0x864: Push("idle")
0x865: @ PlayAnimation(Stack[-2], Stack[-1])
0x866: Pop(2)
0x867: @ WaitForAnimEnd()
0x868: Pop(0)
0x869: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86a: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86b: GOTO 0x871

0x86c: Push("all")
0x86d: Push("idle")
0x86e: @ PlayAnimation(Stack[-2], Stack[-1])
0x86f: Pop(2)
0x870: GOTO 0x867

0x871: Return(); Pop(0)

0x872: PushEmpty()
0x873: PushEmpty(bool)
0x874: Call2 0xeb7

0x875: Pop(0)
0x876: Pop(1); Push((bool) Stack[-1] == 0)
0x877: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x878: Return(); Pop(0)

0x879: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87a: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87b: Return(); Pop(0)

0x87c: PushEmpty(string, bool)
0x87d: Stack[-2] = Stack[-3]
0x87e: Push("")
0x87f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-1] = (bool) 0
0x882: GOTO 0x884

0x883: Stack[-1] = (bool) 1
0x884: Call2 0xdbb

0x885: Pop(2)
0x886: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: Push((int) 1)
0x88a: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x88b: PushEmpty()
0x88c: Call2 0xdd9

0x88d: Pop(0)
0x88e: Push((int) 28935)
0x88f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x891: PushEmpty(object, object)
0x892: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x893: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x894: Call2 0xf83

0x895: Pop(2)
0x896: Push((int) 28947)
0x897: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x899: PushEmpty(object, object)
0x89a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89c: Call2 0xf50

0x89d: Pop(2)
0x89e: Push((int) 28931)
0x89f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8a1: PushEmpty(string)
0x8a2: Stack[-1] = "Neutral"
0x8a3: Call2 0x872

0x8a4: Pop(1)
0x8a5: Push((int) 527588)
0x8a6: @@ SetMessage(Stack[-1])
0x8a7: Pop(1)
0x8a8: @@ ClearReplies()
0x8a9: Pop(0)
0x8aa: PushEmpty(bool)
0x8ab: Stack[-1] = (bool) 0
0x8ac: PushEmpty(bool, object)
0x8ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ae: Call2 0x1074

0x8af: Pop(1)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b1: PushEmpty(bool, object)
0x8b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b3: Call2 0x1068

0x8b4: Pop(1)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b6: Stack[-1] = (bool) 1
0x8b7: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b8: Push((int) 527592)
0x8b9: Push((int) 28936)
0x8ba: Push((int) 28935)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Push((int) 527589)
0x8be: Push((int) -1)
0x8bf: Push((int) 28932)
0x8c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c1: Pop(3)
0x8c2: Return(); Pop(0)

0x8c3: Push((int) 28936)
0x8c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8c6: PushEmpty(string)
0x8c7: Stack[-1] = "Fear"
0x8c8: Call2 0x872

0x8c9: Pop(1)
0x8ca: Push((int) 527593)
0x8cb: @@ SetMessage(Stack[-1])
0x8cc: Pop(1)
0x8cd: @@ ClearReplies()
0x8ce: Pop(0)
0x8cf: Push((int) 527594)
0x8d0: Push((int) 28938)
0x8d1: Push((int) 28937)
0x8d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: Push((int) 527609)
0x8d5: Push((int) 28954)
0x8d6: Push((int) 28953)
0x8d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(3)
0x8d9: Return(); Pop(0)

0x8da: Push((int) 28954)
0x8db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8dd: PushEmpty(string)
0x8de: Stack[-1] = "Neutral"
0x8df: Call2 0x872

0x8e0: Pop(1)
0x8e1: Push((int) 527610)
0x8e2: @@ SetMessage(Stack[-1])
0x8e3: Pop(1)
0x8e4: @@ ClearReplies()
0x8e5: Pop(0)
0x8e6: Push((int) 527611)
0x8e7: Push((int) 28940)
0x8e8: Push((int) 28955)
0x8e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ea: Pop(3)
0x8eb: Return(); Pop(0)

0x8ec: Push((int) 28938)
0x8ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8ef: PushEmpty(string)
0x8f0: Stack[-1] = "Sympathy"
0x8f1: Call2 0x872

0x8f2: Pop(1)
0x8f3: Push((int) 527595)
0x8f4: @@ SetMessage(Stack[-1])
0x8f5: Pop(1)
0x8f6: @@ ClearReplies()
0x8f7: Pop(0)
0x8f8: Push((int) 527596)
0x8f9: Push((int) 28940)
0x8fa: Push((int) 28939)
0x8fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fc: Pop(3)
0x8fd: Return(); Pop(0)

0x8fe: Push((int) 28940)
0x8ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x900: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x901: PushEmpty(string)
0x902: Stack[-1] = "Neutral"
0x903: Call2 0x872

0x904: Pop(1)
0x905: Push((int) 527597)
0x906: @@ SetMessage(Stack[-1])
0x907: Pop(1)
0x908: @@ ClearReplies()
0x909: Pop(0)
0x90a: Push((int) 527598)
0x90b: Push((int) 28942)
0x90c: Push((int) 28941)
0x90d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90e: Pop(3)
0x90f: Return(); Pop(0)

0x910: Push((int) 28942)
0x911: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x913: PushEmpty(string)
0x914: Stack[-1] = "Neutral"
0x915: Call2 0x872

0x916: Pop(1)
0x917: Push((int) 527599)
0x918: @@ SetMessage(Stack[-1])
0x919: Pop(1)
0x91a: @@ ClearReplies()
0x91b: Pop(0)
0x91c: Push((int) 527600)
0x91d: Push((int) 28944)
0x91e: Push((int) 28943)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: Return(); Pop(0)

0x922: Push((int) 28944)
0x923: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x925: PushEmpty(string)
0x926: Stack[-1] = "Sympathy"
0x927: Call2 0x872

0x928: Pop(1)
0x929: Push((int) 527601)
0x92a: @@ SetMessage(Stack[-1])
0x92b: Pop(1)
0x92c: @@ ClearReplies()
0x92d: Pop(0)
0x92e: Push((int) 527602)
0x92f: Push((int) 28946)
0x930: Push((int) 28945)
0x931: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x932: Pop(3)
0x933: Return(); Pop(0)

0x934: Push((int) 28946)
0x935: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x936: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x937: PushEmpty(string)
0x938: Stack[-1] = "Sympathy"
0x939: Call2 0x872

0x93a: Pop(1)
0x93b: Push((int) 527603)
0x93c: @@ SetMessage(Stack[-1])
0x93d: Pop(1)
0x93e: @@ ClearReplies()
0x93f: Pop(0)
0x940: Push((int) 527604)
0x941: Push((int) -1)
0x942: Push((int) 28947)
0x943: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x944: Pop(3)
0x945: Return(); Pop(0)

0x946: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x947: PushEmpty(bool)
0x948: Call2 0xeb7

0x949: Pop(0)
0x94a: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94b: @ lshStopAnimation()
0x94c: Pop(0)
0x94d: GOTO 0x950

0x94e: @ StopAnimation()
0x94f: Pop(0)
0x950: Return(); Pop(0)

0x951: GOTO 0x889

0x952: Return(); Pop(0)

0x953: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x954: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x955: PushEmpty(bool, object, float)
0x956: Stack[-2] = Stack[-12]
0x957: Stack[-1] = (float) 70.0
0x958: Call2 0xccc

0x959: Pop(2)
0x95a: Pop(1); Push((bool) Stack[-1] == 0)
0x95b: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95c: Stack[-10] = (int) -2
0x95d: Return(); Pop(8)

0x95e: @ CreateDialog(Stack[-4])
0x95f: Pop(0)
0x960: PushEmpty(int)
0x961: Call2 0xeb1

0x962: Pop(0)
0x963: @@ SetNPCName(Stack[-1])
0x964: Pop(1)
0x965: PushEmpty(int)
0x966: Call2 0xeaf

0x967: Pop(0)
0x968: @@ SetNPCDescription(Stack[-1])
0x969: Pop(1)
0x96a: PushEmpty(string)
0x96b: Call2 0xeb3

0x96c: Pop(0)
0x96d: @@ SetPhoto(Stack[-1])
0x96e: Pop(1)
0x96f: PushEmpty(string)
0x970: Call2 0xeb5

0x971: Pop(0)
0x972: @@ SetPhoto2(Stack[-1])
0x973: Pop(1)
0x974: PushEmpty(int)
0x975: Call2 0x1191

0x976: Pop(0)
0x977: @@ SetPlayerName(Stack[-1])
0x978: Pop(1)
0x979: Stack[-2] = (int) -1
0x97a: @ IsOverrideActive(Stack[-3])
0x97b: Pop(0)
0x97c: Push(Stack[-3])
0x97d: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97e: Stack[-10] = (int) -2
0x97f: Return(); Pop(8)

0x980: @ DoDialog(Stack[-4])
0x981: Pop(0)
0x982: PushEmpty(bool, object)
0x983: PushEmpty(object)
0x984: Call2 0xde0

0x985: Stack[-2] = Stack[-1]
0x986: Pop(1)
0x987: Call2 0xd21

0x988: Pop(2)
0x989: PushEmpty(object, object)
0x98a: Stack[-2] = Stack[-11]
0x98b: Stack[-1] = Stack[-6]
0x98c: Push(-2, 4); TaskCall(11)
0x98d: Call2 0x9a4

0x98e: Pop(-2, 4); TaskReturn
0x98f: Pop(2)
0x990: @@ IsDialogEnd(Stack[-1])
0x991: Pop(0)
0x992: Pop(0); Push((bool) Stack[-1] == 0)
0x993: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x994: @ sync()
0x995: Pop(0)
0x996: @@ IsDialogEnd(Stack[-1])
0x997: Pop(0)
0x998: GOTO 0x992

0x999: PushEmpty(object)
0x99a: Stack[-1] = Stack[-10]
0x99b: Call2 0xd10

0x99c: Pop(1)
0x99d: @ StopDialog(Stack[-4])
0x99e: Pop(0)
0x99f: @@ GetReturnValue(Stack[-2])
0x9a0: Pop(0)
0x9a1: Stack[-10] = Stack[-2]
0x9a2: Return(); Pop(8)

0x9a3: Stack[-4] = 0
0x9a4: PushEmpty()
0x9a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9a6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9a7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9a8: Push((int) 1)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9aa: PushEmpty(string)
0x9ab: Stack[-1] = "Tiredness"
0x9ac: Call2 0x9e3

0x9ad: Pop(1)
0x9ae: Push((int) 539312)
0x9af: @@ SetMessage(Stack[-1])
0x9b0: Pop(1)
0x9b1: @@ ClearReplies()
0x9b2: Pop(0)
0x9b3: Push((int) 542603)
0x9b4: Push((int) 45006)
0x9b5: Push((int) 45004)
0x9b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b7: Pop(3)
0x9b8: Push((int) 539313)
0x9b9: Push((int) -1)
0x9ba: Push((int) 41256)
0x9bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bc: Pop(3)
0x9bd: Push((int) 542604)
0x9be: Push((int) -1)
0x9bf: Push((int) 45005)
0x9c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: GOTO 0x9c5

0x9c3: Return(); Pop(0)

0x9c4: GOTO 0x9a8

0x9c5: PushEmpty(bool)
0x9c6: Call2 0xeb7

0x9c7: Pop(0)
0x9c8: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9c9: @ lshWaitForAnimEnd()
0x9ca: Pop(0)
0x9cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: GOTO 0x9d3

0x9ce: PushEmpty(string)
0x9cf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d0: Call2 0xdab

0x9d1: Pop(1)
0x9d2: GOTO 0x9c9

0x9d3: GOTO 0x9e2

0x9d4: Push("all")
0x9d5: Push("idle")
0x9d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d7: Pop(2)
0x9d8: @ WaitForAnimEnd()
0x9d9: Pop(0)
0x9da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9db: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9dc: GOTO 0x9e2

0x9dd: Push("all")
0x9de: Push("idle")
0x9df: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e0: Pop(2)
0x9e1: GOTO 0x9d8

0x9e2: Return(); Pop(0)

0x9e3: PushEmpty()
0x9e4: PushEmpty(bool)
0x9e5: Call2 0xeb7

0x9e6: Pop(0)
0x9e7: Pop(1); Push((bool) Stack[-1] == 0)
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e9: Return(); Pop(0)

0x9ea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9eb: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9ec: Return(); Pop(0)

0x9ed: PushEmpty(string, bool)
0x9ee: Stack[-2] = Stack[-3]
0x9ef: Push("")
0x9f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f2: Stack[-1] = (bool) 0
0x9f3: GOTO 0x9f5

0x9f4: Stack[-1] = (bool) 1
0x9f5: Call2 0xdbb

0x9f6: Pop(2)
0x9f7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9f8: Return(); Pop(0)

0x9f9: PushEmpty()
0x9fa: Push((int) 1)
0x9fb: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0x9fc: PushEmpty()
0x9fd: Call2 0xdd9

0x9fe: Pop(0)
0x9ff: Push((int) 41255)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Tiredness"
0xa04: Call2 0x9e3

0xa05: Pop(1)
0xa06: Push((int) 539312)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 542603)
0xa0c: Push((int) 45006)
0xa0d: Push((int) 45004)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: Push((int) 539313)
0xa11: Push((int) -1)
0xa12: Push((int) 41256)
0xa13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa14: Pop(3)
0xa15: Push((int) 542604)
0xa16: Push((int) -1)
0xa17: Push((int) 45005)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: Return(); Pop(0)

0xa1b: Push((int) 45006)
0xa1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa1e: PushEmpty(string)
0xa1f: Stack[-1] = "Confusion"
0xa20: Call2 0x9e3

0xa21: Pop(1)
0xa22: Push((int) 542605)
0xa23: @@ SetMessage(Stack[-1])
0xa24: Pop(1)
0xa25: @@ ClearReplies()
0xa26: Pop(0)
0xa27: Push((int) 542606)
0xa28: Push((int) 45011)
0xa29: Push((int) 45007)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: Push((int) 542607)
0xa2d: Push((int) 45009)
0xa2e: Push((int) 45008)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Return(); Pop(0)

0xa32: Push((int) 45009)
0xa33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa35: PushEmpty(string)
0xa36: Stack[-1] = "Neutral"
0xa37: Call2 0x9e3

0xa38: Pop(1)
0xa39: Push((int) 542608)
0xa3a: @@ SetMessage(Stack[-1])
0xa3b: Pop(1)
0xa3c: @@ ClearReplies()
0xa3d: Pop(0)
0xa3e: Push((int) 542609)
0xa3f: Push((int) -1)
0xa40: Push((int) 45010)
0xa41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: Return(); Pop(0)

0xa44: Push((int) 45011)
0xa45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa47: PushEmpty(string)
0xa48: Stack[-1] = "Sympathy"
0xa49: Call2 0x9e3

0xa4a: Pop(1)
0xa4b: Push((int) 542610)
0xa4c: @@ SetMessage(Stack[-1])
0xa4d: Pop(1)
0xa4e: @@ ClearReplies()
0xa4f: Pop(0)
0xa50: Push((int) 542611)
0xa51: Push((int) 45014)
0xa52: Push((int) 45012)
0xa53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa54: Pop(3)
0xa55: Push((int) 542612)
0xa56: Push((int) 45020)
0xa57: Push((int) 45013)
0xa58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(3)
0xa5a: Return(); Pop(0)

0xa5b: Push((int) 45014)
0xa5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa5e: PushEmpty(string)
0xa5f: Stack[-1] = "Sympathy"
0xa60: Call2 0x9e3

0xa61: Pop(1)
0xa62: Push((int) 542613)
0xa63: @@ SetMessage(Stack[-1])
0xa64: Pop(1)
0xa65: @@ ClearReplies()
0xa66: Pop(0)
0xa67: Push((int) 542614)
0xa68: Push((int) 45016)
0xa69: Push((int) 45015)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: Return(); Pop(0)

0xa6d: Push((int) 45016)
0xa6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa70: PushEmpty(string)
0xa71: Stack[-1] = "Sympathy"
0xa72: Call2 0x9e3

0xa73: Pop(1)
0xa74: Push((int) 542615)
0xa75: @@ SetMessage(Stack[-1])
0xa76: Pop(1)
0xa77: @@ ClearReplies()
0xa78: Pop(0)
0xa79: Push((int) 542616)
0xa7a: Push((int) 45018)
0xa7b: Push((int) 45017)
0xa7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: Return(); Pop(0)

0xa7f: Push((int) 45018)
0xa80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa81: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa82: PushEmpty(string)
0xa83: Stack[-1] = "Neutral"
0xa84: Call2 0x9e3

0xa85: Pop(1)
0xa86: Push((int) 542617)
0xa87: @@ SetMessage(Stack[-1])
0xa88: Pop(1)
0xa89: @@ ClearReplies()
0xa8a: Pop(0)
0xa8b: Push((int) 542618)
0xa8c: Push((int) 45020)
0xa8d: Push((int) 45019)
0xa8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: Return(); Pop(0)

0xa91: Push((int) 45020)
0xa92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xa94: PushEmpty(string)
0xa95: Stack[-1] = "Neutral"
0xa96: Call2 0x9e3

0xa97: Pop(1)
0xa98: Push((int) 542619)
0xa99: @@ SetMessage(Stack[-1])
0xa9a: Pop(1)
0xa9b: @@ ClearReplies()
0xa9c: Pop(0)
0xa9d: Push((int) 542620)
0xa9e: Push((int) -1)
0xa9f: Push((int) 45022)
0xaa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa1: Pop(3)
0xaa2: Push((int) 542621)
0xaa3: Push((int) -1)
0xaa4: Push((int) 45023)
0xaa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa6: Pop(3)
0xaa7: Return(); Pop(0)

0xaa8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaa9: PushEmpty(bool)
0xaaa: Call2 0xeb7

0xaab: Pop(0)
0xaac: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaad: @ lshStopAnimation()
0xaae: Pop(0)
0xaaf: GOTO 0xab2

0xab0: @ StopAnimation()
0xab1: Pop(0)
0xab2: Return(); Pop(0)

0xab3: GOTO 0x9fa

0xab4: Return(); Pop(0)

0xab5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xab6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xab7: PushEmpty(bool, object, float)
0xab8: Stack[-2] = Stack[-12]
0xab9: Stack[-1] = (float) 70.0
0xaba: Call2 0xccc

0xabb: Pop(2)
0xabc: Pop(1); Push((bool) Stack[-1] == 0)
0xabd: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xabe: Stack[-10] = (int) -2
0xabf: Return(); Pop(8)

0xac0: @ CreateDialog(Stack[-4])
0xac1: Pop(0)
0xac2: PushEmpty(int)
0xac3: Call2 0xeb1

0xac4: Pop(0)
0xac5: @@ SetNPCName(Stack[-1])
0xac6: Pop(1)
0xac7: PushEmpty(int)
0xac8: Call2 0xeaf

0xac9: Pop(0)
0xaca: @@ SetNPCDescription(Stack[-1])
0xacb: Pop(1)
0xacc: PushEmpty(string)
0xacd: Call2 0xeb3

0xace: Pop(0)
0xacf: @@ SetPhoto(Stack[-1])
0xad0: Pop(1)
0xad1: PushEmpty(string)
0xad2: Call2 0xeb5

0xad3: Pop(0)
0xad4: @@ SetPhoto2(Stack[-1])
0xad5: Pop(1)
0xad6: PushEmpty(int)
0xad7: Call2 0x1191

0xad8: Pop(0)
0xad9: @@ SetPlayerName(Stack[-1])
0xada: Pop(1)
0xadb: Stack[-2] = (int) -1
0xadc: @ IsOverrideActive(Stack[-3])
0xadd: Pop(0)
0xade: Push(Stack[-3])
0xadf: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xae0: Stack[-10] = (int) -2
0xae1: Return(); Pop(8)

0xae2: @ DoDialog(Stack[-4])
0xae3: Pop(0)
0xae4: PushEmpty(bool, object)
0xae5: PushEmpty(object)
0xae6: Call2 0xde0

0xae7: Stack[-2] = Stack[-1]
0xae8: Pop(1)
0xae9: Call2 0xd21

0xaea: Pop(2)
0xaeb: PushEmpty(object, object)
0xaec: Stack[-2] = Stack[-11]
0xaed: Stack[-1] = Stack[-6]
0xaee: Push(-2, 4); TaskCall(13)
0xaef: Call2 0xb06

0xaf0: Pop(-2, 4); TaskReturn
0xaf1: Pop(2)
0xaf2: @@ IsDialogEnd(Stack[-1])
0xaf3: Pop(0)
0xaf4: Pop(0); Push((bool) Stack[-1] == 0)
0xaf5: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf6: @ sync()
0xaf7: Pop(0)
0xaf8: @@ IsDialogEnd(Stack[-1])
0xaf9: Pop(0)
0xafa: GOTO 0xaf4

0xafb: PushEmpty(object)
0xafc: Stack[-1] = Stack[-10]
0xafd: Call2 0xd10

0xafe: Pop(1)
0xaff: @ StopDialog(Stack[-4])
0xb00: Pop(0)
0xb01: @@ GetReturnValue(Stack[-2])
0xb02: Pop(0)
0xb03: Stack[-10] = Stack[-2]
0xb04: Return(); Pop(8)

0xb05: Stack[-4] = 0
0xb06: PushEmpty()
0xb07: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb08: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb09: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb0a: Push((int) 1)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb0c: PushEmpty(string)
0xb0d: Stack[-1] = "Neutral"
0xb0e: Call2 0xb40

0xb0f: Pop(1)
0xb10: Push((int) 540539)
0xb11: @@ SetMessage(Stack[-1])
0xb12: Pop(1)
0xb13: @@ ClearReplies()
0xb14: Pop(0)
0xb15: Push((int) 540540)
0xb16: Push((int) -1)
0xb17: Push((int) 42549)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Push((int) 540799)
0xb1b: Push((int) -1)
0xb1c: Push((int) 42848)
0xb1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1e: Pop(3)
0xb1f: GOTO 0xb22

0xb20: Return(); Pop(0)

0xb21: GOTO 0xb0a

0xb22: PushEmpty(bool)
0xb23: Call2 0xeb7

0xb24: Pop(0)
0xb25: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb26: @ lshWaitForAnimEnd()
0xb27: Pop(0)
0xb28: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: GOTO 0xb30

0xb2b: PushEmpty(string)
0xb2c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb2d: Call2 0xdab

0xb2e: Pop(1)
0xb2f: GOTO 0xb26

0xb30: GOTO 0xb3f

0xb31: Push("all")
0xb32: Push("idle")
0xb33: @ PlayAnimation(Stack[-2], Stack[-1])
0xb34: Pop(2)
0xb35: @ WaitForAnimEnd()
0xb36: Pop(0)
0xb37: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb38: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb39: GOTO 0xb3f

0xb3a: Push("all")
0xb3b: Push("idle")
0xb3c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3d: Pop(2)
0xb3e: GOTO 0xb35

0xb3f: Return(); Pop(0)

0xb40: PushEmpty()
0xb41: PushEmpty(bool)
0xb42: Call2 0xeb7

0xb43: Pop(0)
0xb44: Pop(1); Push((bool) Stack[-1] == 0)
0xb45: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb46: Return(); Pop(0)

0xb47: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb48: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb49: Return(); Pop(0)

0xb4a: PushEmpty(string, bool)
0xb4b: Stack[-2] = Stack[-3]
0xb4c: Push("")
0xb4d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4f: Stack[-1] = (bool) 0
0xb50: GOTO 0xb52

0xb51: Stack[-1] = (bool) 1
0xb52: Call2 0xdbb

0xb53: Pop(2)
0xb54: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb55: Return(); Pop(0)

0xb56: PushEmpty()
0xb57: Push((int) 1)
0xb58: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb59: PushEmpty()
0xb5a: Call2 0xdd9

0xb5b: Pop(0)
0xb5c: Push((int) 42548)
0xb5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5e: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb5f: PushEmpty(string)
0xb60: Stack[-1] = "Neutral"
0xb61: Call2 0xb40

0xb62: Pop(1)
0xb63: Push((int) 540539)
0xb64: @@ SetMessage(Stack[-1])
0xb65: Pop(1)
0xb66: @@ ClearReplies()
0xb67: Pop(0)
0xb68: Push((int) 540540)
0xb69: Push((int) -1)
0xb6a: Push((int) 42549)
0xb6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6c: Pop(3)
0xb6d: Push((int) 540799)
0xb6e: Push((int) -1)
0xb6f: Push((int) 42848)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Return(); Pop(0)

0xb73: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb74: PushEmpty(bool)
0xb75: Call2 0xeb7

0xb76: Pop(0)
0xb77: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb78: @ lshStopAnimation()
0xb79: Pop(0)
0xb7a: GOTO 0xb7d

0xb7b: @ StopAnimation()
0xb7c: Pop(0)
0xb7d: Return(); Pop(0)

0xb7e: GOTO 0xb57

0xb7f: Return(); Pop(0)

0xb80: Push(GlobalVars[1])
0xb81: Stack[-1] = (bool) 0
0xb82: GlobalVars[1] = Stack[-1]; Pop(1)
0xb83: PushEmpty()
0xb84: Call2 0xb87

0xb85: Pop(0)
0xb86: Return(); Pop(0)

0xb87: PushEmpty(bool)
0xb88: Call2 0xcc7

0xb89: Pop(0)
0xb8a: Pop(1); Push((bool) Stack[-1] == 0)
0xb8b: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb8c: @ Hold()
0xb8d: Pop(0)
0xb8e: @ GetDirection(Stack[-0])
0xb8f: Pop(0)
0xb90: PushEmpty()
0xb91: Call2 0xc37

0xb92: Pop(0)
0xb93: GOTO 0xb90

0xb94: Return(); Pop(0)

0xb95: PushEmpty(object, object)
0xb96: Push("player")
0xb97: @ FindActor(Stack[-2], Stack[-1])
0xb98: Pop(1)
0xb99: Pop(0); Push((bool) Stack[-1] == 0)
0xb9a: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb9b: Stack[-3] = (bool) 0
0xb9c: Return(); Pop(2)

0xb9d: PushEmpty(bool, object)
0xb9e: Stack[-1] = Stack[-3]
0xb9f: Call2 0xcbe

0xba0: Stack[-5] = Stack[-2]
0xba1: Pop(2)
0xba2: Return(); Pop(2)

0xba3: Stack[-1] = 0
0xba4: Push(CvectorIndex(Stack[-0], 0))
0xba5: Push(CvectorIndex(Stack[-0], 2))
0xba6: @ RotateAsync(Stack[-2], Stack[-1])
0xba7: Pop(2)
0xba8: Return(); Pop(0)

0xba9: PushEmpty(object, bool, object, bool)
0xbaa: Push("player")
0xbab: @ FindActor(Stack[-3], Stack[-1])
0xbac: Pop(1)
0xbad: Pop(0); Push((bool) Stack[-2] == 0)
0xbae: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbaf: Stack[-5] = (bool) 0
0xbb0: Return(); Pop(4)

0xbb1: PushEmpty(float, object)
0xbb2: Stack[-1] = Stack[-4]
0xbb3: Call2 0xc83

0xbb4: Pop(1)
0xbb5: Push((float)90000.0)
0xbb6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xbb7: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb8: Stack[-5] = (bool) 0
0xbb9: Return(); Pop(4)

0xbba: @ CanSee(Stack[-1], Stack[-2])
0xbbb: Pop(0)
0xbbc: Stack[-5] = Stack[-1]
0xbbd: Return(); Pop(4)

0xbbe: Stack[-2] = 0
0xbbf: PushEmpty(float, float)
0xbc0: Push((int) 8)
0xbc1: Push((int) 16)
0xbc2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xbc3: Pop(2)
0xbc4: Push((int) 10)
0xbc5: @ SetTimer(Stack[-1], Stack[-2])
0xbc6: Pop(1)
0xbc7: Return(); Pop(2)

0xbc8: Push((int) 10)
0xbc9: @ KillTimer(Stack[-1])
0xbca: Pop(1)
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty()
0xbcd: Push((int) 10)
0xbce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbcf: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbd0: PushEmpty()
0xbd1: Call2 0xbc8

0xbd2: Pop(0)
0xbd3: PushEmpty(bool)
0xbd4: Stack[-1] = (bool) 0
0xbd5: PushEmpty(bool)
0xbd6: Call2 0xcc7

0xbd7: Pop(0)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbd9: PushEmpty(bool)
0xbda: Call2 0xba9

0xbdb: Pop(0)
0xbdc: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdd: Stack[-1] = (bool) 1
0xbde: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbdf: PushEmpty(bool)
0xbe0: Call2 0xb95

0xbe1: Pop(0)
0xbe2: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe3: PushEmpty(bool, object)
0xbe4: PushEmpty(object)
0xbe5: Call2 0xde0

0xbe6: Stack[-2] = Stack[-1]
0xbe7: Pop(1)
0xbe8: Call2 0xd5b

0xbe9: Pop(2)
0xbea: GOTO 0xbf1

0xbeb: PushEmpty()
0xbec: Call2 0xba4

0xbed: Pop(0)
0xbee: PushEmpty()
0xbef: Call2 0xbbf

0xbf0: Pop(0)
0xbf1: Return(); Pop(0)

0xbf2: PushEmpty()
0xbf3: Call2 0xc7e

0xbf4: Pop(0)
0xbf5: PushEmpty()
0xbf6: Call2 0xbc8

0xbf7: Pop(0)
0xbf8: @ lshStopSpeech()
0xbf9: Pop(0)
0xbfa: @ lshStopAnimation()
0xbfb: Pop(0)
0xbfc: @ StopAsync()
0xbfd: Pop(0)
0xbfe: @ Hold()
0xbff: Pop(0)
0xc00: Return(); Pop(0)

0xc01: @ StopGroup0()
0xc02: Pop(0)
0xc03: PushEmpty()
0xc04: Call2 0xbc8

0xc05: Pop(0)
0xc06: PushEmpty(string)
0xc07: Stack[-1] = "Neutral"
0xc08: Call2 0xdab

0xc09: Pop(1)
0xc0a: PushEmpty()
0xc0b: Call2 0xbbf

0xc0c: Pop(0)
0xc0d: Return(); Pop(0)

0xc0e: PushEmpty()
0xc0f: Push(Stack[-1])
0xc10: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc11: PushEmpty()
0xc12: Call2 0xbbf

0xc13: Pop(0)
0xc14: GOTO 0xc19

0xc15: PushEmpty(string)
0xc16: Stack[-1] = "Neutral"
0xc17: Call2 0xdab

0xc18: Pop(1)
0xc19: Return(); Pop(0)

0xc1a: PushEmpty(bool, bool)
0xc1b: @ IsOverrideActive(Stack[-1])
0xc1c: Pop(0)
0xc1d: Pop(0); Push((bool) Stack[-1] == 0)
0xc1e: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc1f: EventDisable(0)
0xc20: PushEmpty()
0xc21: Call2 0xc7e

0xc22: Pop(0)
0xc23: PushEmpty(bool, object)
0xc24: Stack[-1] = Stack[-5]
0xc25: Call2 0xcbe

0xc26: Pop(2)
0xc27: EventEnable(0)
0xc28: PushEmpty(object)
0xc29: Stack[-1] = Stack[-4]
0xc2a: Call2 0x11a2

0xc2b: Pop(1)
0xc2c: PushEmpty(string)
0xc2d: Stack[-1] = "Neutral"
0xc2e: Call2 0xdab

0xc2f: Pop(1)
0xc30: PushEmpty()
0xc31: Call2 0xbc8

0xc32: Pop(0)
0xc33: PushEmpty()
0xc34: Call2 0xbbf

0xc35: Pop(0)
0xc36: Return(); Pop(2)

0xc37: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xc38: @ WaitForAnimEnd()
0xc39: Pop(0)
0xc3a: PushEmpty(bool)
0xc3b: Call2 0xcc7

0xc3c: Pop(0)
0xc3d: Pop(1); Push((bool) Stack[-1] == 0)
0xc3e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3f: Return(); Pop(12)

0xc40: PushEmpty(int)
0xc41: Call2 0xe9e

0xc42: Stack[-7] = Stack[-1]
0xc43: Pop(1)
0xc44: Stack[-5] = (int) 0
0xc45: PushEmpty(bool)
0xc46: Stack[-1] = (bool) 0
0xc47: Push((int) 5)
0xc48: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4a: PushEmpty(bool)
0xc4b: Call2 0xcc7

0xc4c: Pop(0)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4e: Stack[-1] = (bool) 1
0xc4f: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc50: Pop(0); Push((bool) Stack[-6] == 0)
0xc51: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc52: Push((int) 3)
0xc53: @ Sleep(Stack[-1], Stack[-5])
0xc54: Pop(1)
0xc55: Pop(0); Push((bool) Stack[-4] == 0)
0xc56: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc57: GOTO 0xc79

0xc58: GOTO 0xc6e

0xc59: @ irand(Stack[-3], Stack[-6])
0xc5a: Pop(0)
0xc5b: Push((int) 5)
0xc5c: @ irand(Stack[-3], Stack[-1])
0xc5d: Pop(1)
0xc5e: Push((int) 0)
0xc5f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xc60: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc61: Stack[-3] = (int) 0
0xc62: Push("all")
0xc63: PushEmpty(string, int)
0xc64: Stack[-1] = Stack[-6]
0xc65: Call2 0xe97

0xc66: Pop(1)
0xc67: @ PlayAnimation(Stack[-2], Stack[-1])
0xc68: Pop(2)
0xc69: @ WaitForAnimEnd(Stack[-1])
0xc6a: Pop(0)
0xc6b: Pop(0); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6d: GOTO 0xc79

0xc6e: PushEmpty(bool)
0xc6f: Call2 0xc7c

0xc70: Pop(0)
0xc71: Pop(1); Push((bool) Stack[-1] == 0)
0xc72: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc73: GOTO 0xc79

0xc74: @ ResetAAS()
0xc75: Pop(0)
0xc76: Push((int) 1)
0xc77: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc78: GOTO 0xc45

0xc79: @ ResetAAS()
0xc7a: Pop(0)
0xc7b: Return(); Pop(12)

0xc7c: Stack[-1] = (bool) 1
0xc7d: Return(); Pop(0)

0xc7e: @ StopAnimation()
0xc7f: Pop(0)
0xc80: @ StopGroup0()
0xc81: Pop(0)
0xc82: Return(); Pop(0)

0xc83: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc84: @ GetPosition(Stack[-3])
0xc85: Pop(0)
0xc86: @@ GetPosition(Stack[-2])
0xc87: Pop(0)
0xc88: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xc89: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xc8a: Return(); Pop(6)

0xc8b: PushEmpty(bool, bool)
0xc8c: Push("HasProperty")
0xc8d: Push((int) 2)
0xc8e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xc8f: Pop(1); Push((bool) Stack[-1] == 0)
0xc90: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc91: Stack[-5] = (bool) 0
0xc92: Return(); Pop(2)

0xc93: @@ HasProperty(Stack[-3], Stack[-1])
0xc94: Pop(0)
0xc95: Stack[-5] = Stack[-1]
0xc96: Return(); Pop(2)

0xc97: PushEmpty(float, float)
0xc98: PushEmpty(bool, object, string)
0xc99: Stack[-2] = Stack[-10]
0xc9a: Stack[-1] = Stack[-9]
0xc9b: Call2 0xc8b

0xc9c: Pop(2)
0xc9d: Pop(1); Push((bool) Stack[-1] == 0)
0xc9e: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc9f: Stack[-8] = (bool) 0
0xca0: Return(); Pop(2)

0xca1: @@ GetProperty(Stack[-6], Stack[-1])
0xca2: Pop(0)
0xca3: PushEmpty(float, float, float, float)
0xca4: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xca5: Stack[-2] = Stack[-8]
0xca6: Stack[-1] = Stack[-7]
0xca7: Call2 0xdf0

0xca8: Pop(3)
0xca9: @@ SetProperty(Stack[-7], Stack[-1])
0xcaa: Pop(1)
0xcab: Stack[-8] = (bool) 1
0xcac: Return(); Pop(2)

0xcad: PushEmpty(int, int)
0xcae: @@ GetProperty(Stack[-4], Stack[-1])
0xcaf: Pop(0)
0xcb0: Pop(0); Push(Stack[-1] + Stack[-3]);
0xcb1: @@ SetProperty(Stack[-5], Stack[-1])
0xcb2: Pop(1)
0xcb3: Return(); Pop(2)

0xcb4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xcb5: @ GetPosition(Stack[-3])
0xcb6: Pop(0)
0xcb7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xcb8: Push(CvectorIndex(Stack[-2], 0))
0xcb9: Push(CvectorIndex(Stack[-3], 2))
0xcba: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xcbb: Pop(2)
0xcbc: Stack[-8] = Stack[-1]
0xcbd: Return(); Pop(6)

0xcbe: PushEmpty(cvector, cvector)
0xcbf: @@ GetPosition(Stack[-1])
0xcc0: Pop(0)
0xcc1: PushEmpty(bool, cvector)
0xcc2: Stack[-1] = Stack[-3]
0xcc3: Call2 0xcb4

0xcc4: Stack[-6] = Stack[-2]
0xcc5: Pop(2)
0xcc6: Return(); Pop(2)

0xcc7: PushEmpty(bool, bool)
0xcc8: @ IsLoaded(Stack[-1])
0xcc9: Pop(0)
0xcca: Stack[-3] = Stack[-1]
0xccb: Return(); Pop(2)

0xccc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xccd: @@ GetPosition(Stack[-8])
0xcce: Pop(0)
0xccf: @@ GetEyesHeight(Stack[-9])
0xcd0: Pop(0)
0xcd1: Push(CvectorIndex(Stack[-8], 1))
0xcd2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xcd3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xcd4: @ GetPosition(Stack[-7])
0xcd5: Pop(0)
0xcd6: @ GetEyesHeight(Stack[-9])
0xcd7: Pop(0)
0xcd8: Push(CvectorIndex(Stack[-7], 1))
0xcd9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xcda: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xcdb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xcdc: Push(CvectorIndex(Stack[-6], 1))
0xcdd: Stack[-1] = (int) 0
0xcde: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xcdf: Pop(0); Push(Stack[-6] | Stack[-6]);
0xce0: Pop(1); Push(Sqrt(Stack[-1]))
0xce1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xce2: Stack[-5] = -Stack[-6]; Pop(0);
0xce3: Pop(0); Push(Stack[-6] * Stack[-19]);
0xce4: PushEmpty(cvector, cvector)
0xce5: Push(CVector(0.0, 1.0, 0.0))
0xce6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xce7: Call2 0xde6

0xce8: Pop(1)
0xce9: Push((int) 25)
0xcea: Pop(2); Push(Stack[-2] * Stack[-1]);
0xceb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcec: Push(CVector(0.0, 10.0, 0.0))
0xced: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xcee: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xcef: @ IsOverrideActive(Stack[-2])
0xcf0: Pop(0)
0xcf1: Push(Stack[-2])
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf3: Stack[-21] = (bool) 0
0xcf4: Return(); Pop(18)

0xcf5: @ StopWorld()
0xcf6: Pop(0)
0xcf7: @ CameraTransit(Stack[-3], Stack[-5])
0xcf8: Pop(0)
0xcf9: Push(CvectorIndex(Stack[-4], 0))
0xcfa: Push(CvectorIndex(Stack[-5], 2))
0xcfb: @ Rotate(Stack[-2], Stack[-1])
0xcfc: Pop(2)
0xcfd: PushEmpty(bool)
0xcfe: Call2 0xeb7

0xcff: Pop(0)
0xd00: IF (Stack[-1] == 0) GOTO 0xd02; Pop(1)

0xd01: GOTO 0xd0a

0xd02: Push("head")
0xd03: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd04: Pop(1)
0xd05: Push(Stack[-1])
0xd06: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd07: Push("head")
0xd08: @ LookAsyncCamera(Stack[-1])
0xd09: Pop(1)
0xd0a: @ CameraWaitForPlayFinish()
0xd0b: Pop(0)
0xd0c: @ ResumeWorld()
0xd0d: Pop(0)
0xd0e: Stack[-21] = (bool) 1
0xd0f: Return(); Pop(18)

0xd10: PushEmpty(bool, bool)
0xd11: @ CameraSwitchToNormal()
0xd12: Pop(0)
0xd13: PushEmpty(bool)
0xd14: Call2 0xeb7

0xd15: Pop(0)
0xd16: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd17: GOTO 0xd20

0xd18: Push("head")
0xd19: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd1a: Pop(1)
0xd1b: Push(Stack[-1])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd1d: Push("head")
0xd1e: @ UnlookAsync(Stack[-1])
0xd1f: Pop(1)
0xd20: Return(); Pop(2)

0xd21: PushEmpty(int, int, int, int)
0xd22: Push("voice_common")
0xd23: @ GetVariable(Stack[-1], Stack[-3])
0xd24: Pop(1)
0xd25: Push(Stack[-2])
0xd26: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd27: PushEmpty(bool, object)
0xd28: Stack[-1] = Stack[-7]
0xd29: Call2 0xd5b

0xd2a: Pop(1)
0xd2b: Pop(1); Push((bool) Stack[-1] == 0)
0xd2c: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd2d: PushEmpty(bool, object)
0xd2e: Stack[-1] = Stack[-7]
0xd2f: Call2 0xd80

0xd30: Pop(1)
0xd31: Pop(1); Push((bool) Stack[-1] == 0)
0xd32: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd33: Stack[-6] = (bool) 0
0xd34: Return(); Pop(4)

0xd35: Push((int) 2)
0xd36: @ irand(Stack[-2], Stack[-1])
0xd37: Pop(1)
0xd38: Push(Stack[-1])
0xd39: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd3a: Push("voice_common")
0xd3b: Push((int) 1)
0xd3c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xd3d: Push((int) 3)
0xd3e: Pop(2); Push(Stack[-2] % Stack[-1]);
0xd3f: @ SetVariable(Stack[-2], Stack[-1])
0xd40: Pop(2)
0xd41: GOTO 0xd46

0xd42: Push("voice_common")
0xd43: Push((int) 0)
0xd44: @ SetVariable(Stack[-2], Stack[-1])
0xd45: Pop(2)
0xd46: GOTO 0xd59

0xd47: PushEmpty(bool, object)
0xd48: Stack[-1] = Stack[-7]
0xd49: Call2 0xd80

0xd4a: Pop(1)
0xd4b: Pop(1); Push((bool) Stack[-1] == 0)
0xd4c: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd4d: PushEmpty(bool, object)
0xd4e: Stack[-1] = Stack[-7]
0xd4f: Call2 0xd5b

0xd50: Pop(1)
0xd51: Pop(1); Push((bool) Stack[-1] == 0)
0xd52: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd53: Stack[-6] = (bool) 0
0xd54: Return(); Pop(4)

0xd55: Push("voice_common")
0xd56: Push((int) 1)
0xd57: @ SetVariable(Stack[-2], Stack[-1])
0xd58: Pop(2)
0xd59: Stack[-6] = (bool) 1
0xd5a: Return(); Pop(4)

0xd5b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd5c: Stack[-5] = "c"
0xd5d: Stack[-4] = (int) 0
0xd5e: Push((int) 1)
0xd5f: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd60: Push((int) 1)
0xd61: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd62: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd63: @@ HasProperty(Stack[-1], Stack[-4])
0xd64: Pop(1)
0xd65: Pop(0); Push((bool) Stack[-3] == 0)
0xd66: IF (Stack[-1] == 0) GOTO 0xd68; Pop(1)

0xd67: GOTO 0xd6b

0xd68: Push((int) 1)
0xd69: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd6a: GOTO 0xd5e

0xd6b: Pop(0); Push((bool) Stack[-4] == 0)
0xd6c: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd6d: Stack[-12] = (bool) 0
0xd6e: Return(); Pop(10)

0xd6f: Stack[-2] = (int) 0
0xd70: Push((int) 1)
0xd71: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd72: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd73: @ irand(Stack[-2], Stack[-4])
0xd74: Pop(0)
0xd75: Push((int) 1)
0xd76: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd77: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd78: @@ GetProperty(Stack[-1], Stack[-2])
0xd79: Pop(1)
0xd7a: PushEmpty(bool, string)
0xd7b: Stack[-1] = Stack[-3]
0xd7c: Call2 0xdca

0xd7d: Stack[-14] = Stack[-2]
0xd7e: Pop(2)
0xd7f: Return(); Pop(10)

0xd80: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd81: Push("d")
0xd82: PushEmpty(int)
0xd83: Call2 0xe88

0xd84: Pop(0)
0xd85: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd86: Push("m")
0xd87: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xd88: Stack[-4] = (int) 0
0xd89: Push((int) 1)
0xd8a: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd8b: Push((int) 1)
0xd8c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd8d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd8e: @@ HasProperty(Stack[-1], Stack[-4])
0xd8f: Pop(1)
0xd90: Pop(0); Push((bool) Stack[-3] == 0)
0xd91: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd92: GOTO 0xd96

0xd93: Push((int) 1)
0xd94: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd95: GOTO 0xd89

0xd96: Pop(0); Push((bool) Stack[-4] == 0)
0xd97: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd98: Stack[-12] = (bool) 0
0xd99: Return(); Pop(10)

0xd9a: Stack[-2] = (int) 0
0xd9b: Push((int) 1)
0xd9c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd9d: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd9e: @ irand(Stack[-2], Stack[-4])
0xd9f: Pop(0)
0xda0: Push((int) 1)
0xda1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xda2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xda3: @@ GetProperty(Stack[-1], Stack[-2])
0xda4: Pop(1)
0xda5: PushEmpty(bool, string)
0xda6: Stack[-1] = Stack[-3]
0xda7: Call2 0xdca

0xda8: Stack[-14] = Stack[-2]
0xda9: Pop(2)
0xdaa: Return(); Pop(10)

0xdab: PushEmpty(bool, float, float, bool, float, float)
0xdac: @ lshHasAnimation(Stack[-3], Stack[-7])
0xdad: Pop(0)
0xdae: Push(Stack[-3])
0xdaf: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xdb0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xdb1: Pop(0)
0xdb2: Push((bool) 0)
0xdb3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdb4: Pop(1)
0xdb5: GOTO 0xdba

0xdb6: Push("Can't find lsh animation : ")
0xdb7: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdb8: @ Trace(Stack[-1])
0xdb9: Pop(1)
0xdba: Return(); Pop(6)

0xdbb: PushEmpty(bool, float, float, bool, float, float)
0xdbc: @ lshHasAnimation(Stack[-3], Stack[-8])
0xdbd: Pop(0)
0xdbe: Push(Stack[-3])
0xdbf: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdc0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xdc1: Pop(0)
0xdc2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xdc3: Pop(0)
0xdc4: GOTO 0xdc9

0xdc5: Push("Can't find lsh animation : ")
0xdc6: Pop(1); Push(Stack[-1] + Stack[-9]);
0xdc7: @ Trace(Stack[-1])
0xdc8: Pop(1)
0xdc9: Return(); Pop(6)

0xdca: PushEmpty(bool, bool)
0xdcb: PushEmpty(bool)
0xdcc: Call2 0xeb7

0xdcd: Pop(0)
0xdce: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdcf: @ lshHasSpeech(Stack[-1], Stack[-3])
0xdd0: Pop(0)
0xdd1: Push(Stack[-1])
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd3: @ lshPlaySpeech(Stack[-3])
0xdd4: Pop(0)
0xdd5: Stack[-4] = (bool) 1
0xdd6: Return(); Pop(2)

0xdd7: Stack[-4] = (bool) 0
0xdd8: Return(); Pop(2)

0xdd9: PushEmpty(bool)
0xdda: Call2 0xeb7

0xddb: Pop(0)
0xddc: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddd: @ lshStopSpeech()
0xdde: Pop(0)
0xddf: Return(); Pop(0)

0xde0: PushEmpty(object, object)
0xde1: @ self(Stack[-1])
0xde2: Pop(0)
0xde3: Stack[-3] = Stack[-1]
0xde4: Return(); Pop(2)

0xde5: Stack[-1] = 0
0xde6: PushEmpty(float, float)
0xde7: Pop(0); Push(Stack[-3] | Stack[-3]);
0xde8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xde9: Push((float)0.0)
0xdea: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdeb: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdec: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xded: Return(); Pop(2)

0xdee: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xdef: Return(); Pop(2)

0xdf0: PushEmpty()
0xdf1: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xdf2: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf3: Stack[-4] = Stack[-2]
0xdf4: Return(); Pop(0)

0xdf5: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xdf7: Stack[-4] = Stack[-1]
0xdf8: Return(); Pop(0)

0xdf9: Stack[-4] = Stack[-3]
0xdfa: Return(); Pop(0)

0xdfb: PushEmpty(int, int)
0xdfc: @ GetVariable(Stack[-3], Stack[-1])
0xdfd: Pop(0)
0xdfe: Stack[-4] = Stack[-1]
0xdff: Return(); Pop(2)

0xe00: PushEmpty(object, object, object, object)
0xe01: @ GetMainOutdoorScene(Stack[-2])
0xe02: Pop(0)
0xe03: Push(".bin")
0xe04: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe05: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe06: Pop(1)
0xe07: Stack[-6] = Stack[-1]
0xe08: Return(); Pop(4)

0xe09: Stack[-1] = 0
0xe0a: Stack[-2] = 0
0xe0b: PushEmpty(object, object)
0xe0c: @ CreateIntVector(Stack[-1])
0xe0d: Pop(0)
0xe0e: @@ add(Stack[-4])
0xe0f: Pop(0)
0xe10: @@ add(Stack[-3])
0xe11: Pop(0)
0xe12: Push((int) 3)
0xe13: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe14: Pop(1)
0xe15: Return(); Pop(2)

0xe16: Stack[-1] = 0
0xe17: PushEmpty(int, int)
0xe18: PushEmpty(object, string, int)
0xe19: Stack[-3] = Stack[-7]
0xe1a: Stack[-2] = "money"
0xe1b: Stack[-1] = Stack[-6]
0xe1c: Call2 0xcad

0xe1d: Pop(3)
0xe1e: Push((int) 0)
0xe1f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xe20: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe21: Push("Money")
0xe22: @ GetInvItemByName(Stack[-2], Stack[-1])
0xe23: Pop(1)
0xe24: PushEmpty(int, int)
0xe25: Stack[-2] = Stack[-3]
0xe26: Stack[-1] = Stack[-5]
0xe27: Call2 0xe0b

0xe28: Pop(2)
0xe29: Return(); Pop(2)

0xe2a: PushEmpty(int, int, bool, int, int, bool)
0xe2b: @@ GetItemID(Stack[-3])
0xe2c: Pop(0)
0xe2d: Push("Category")
0xe2e: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xe2f: Pop(1)
0xe30: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xe31: Pop(0)
0xe32: Pop(0); Push((bool) Stack[-1] == 0)
0xe33: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe34: @@ DropItems(Stack[-8], Stack[-7])
0xe35: Pop(0)
0xe36: GOTO 0xe3c

0xe37: PushEmpty(int, int)
0xe38: Stack[-2] = Stack[-5]
0xe39: Stack[-1] = Stack[-9]
0xe3a: Call2 0xe0b

0xe3b: Pop(2)
0xe3c: Return(); Pop(6)

0xe3d: PushEmpty(object, object)
0xe3e: @ CreateInvItem(Stack[-1])
0xe3f: Pop(0)
0xe40: @@ SetItemName(Stack[-4])
0xe41: Pop(0)
0xe42: PushEmpty(object, object, int)
0xe43: Stack[-3] = Stack[-8]
0xe44: Stack[-2] = Stack[-4]
0xe45: Stack[-1] = Stack[-6]
0xe46: Call2 0xe2a

0xe47: Pop(3)
0xe48: Return(); Pop(2)

0xe49: Stack[-1] = 0
0xe4a: PushEmpty()
0xe4b: Pop(0); Push((bool) Stack[-2] == 0)
0xe4c: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4d: Stack[-3] = (bool) 0
0xe4e: Return(); Pop(0)

0xe4f: Push((int) 0)
0xe50: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe51: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe52: Push((int) 8)
0xe53: @ SendWorldWndMessage(Stack[-1])
0xe54: Pop(1)
0xe55: GOTO 0xe5f

0xe56: Push((int) 0)
0xe57: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe59: Push((int) 9)
0xe5a: @ SendWorldWndMessage(Stack[-1])
0xe5b: Pop(1)
0xe5c: GOTO 0xe5f

0xe5d: Stack[-3] = (bool) 0
0xe5e: Return(); Pop(0)

0xe5f: PushEmpty(float)
0xe60: Stack[-1] = Stack[-2]
0xe61: Call2 0xe6d

0xe62: Pop(1)
0xe63: PushEmpty(bool, object, string, float, float, float)
0xe64: Stack[-5] = Stack[-8]
0xe65: Stack[-4] = "reputation"
0xe66: Stack[-3] = Stack[-7]
0xe67: Stack[-2] = (int) 0
0xe68: Stack[-1] = (int) 1
0xe69: Call2 0xc97

0xe6a: Pop(6)
0xe6b: Stack[-3] = (bool) 1
0xe6c: Return(); Pop(0)

0xe6d: PushEmpty(object, object)
0xe6e: @ CreateFloatVector(Stack[-1])
0xe6f: Pop(0)
0xe70: @@ add(Stack[-3])
0xe71: Pop(0)
0xe72: Push((int) 16)
0xe73: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe74: Pop(1)
0xe75: Return(); Pop(2)

0xe76: Stack[-1] = 0
0xe77: PushEmpty(object, object)
0xe78: @ FindActor(Stack[-1], Stack[-4])
0xe79: Pop(0)
0xe7a: Pop(0); Push((bool) Stack[-1] == 0)
0xe7b: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe7c: Stack[-5] = (bool) 0
0xe7d: Return(); Pop(2)

0xe7e: @ Trigger(Stack[-1], Stack[-3])
0xe7f: Pop(0)
0xe80: Stack[-5] = (bool) 1
0xe81: Return(); Pop(2)

0xe82: Stack[-1] = 0
0xe83: PushEmpty(float, float)
0xe84: @ GetGameTime(Stack[-1])
0xe85: Pop(0)
0xe86: Stack[-3] = Stack[-1]
0xe87: Return(); Pop(2)

0xe88: PushEmpty(float, float)
0xe89: @ GetGameTime(Stack[-1])
0xe8a: Pop(0)
0xe8b: Push((int) 1)
0xe8c: PushEmpty(int)
0xe8d: Push((int) 24)
0xe8e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe8f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe90: Return(); Pop(2)

0xe91: PushEmpty()
0xe92: PushEmpty(int)
0xe93: Call2 0xe88

0xe94: Pop(0)
0xe95: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe96: Return(); Pop(0)

0xe97: PushEmpty(string, string)
0xe98: Stack[-1] = "idle"
0xe99: Push(Stack[-3])
0xe9a: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe9b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xe9c: Stack[-4] = Stack[-1]
0xe9d: Return(); Pop(2)

0xe9e: PushEmpty(int, bool, int, bool)
0xe9f: Stack[-2] = (int) 0
0xea0: Push("all")
0xea1: PushEmpty(string, int)
0xea2: Stack[-1] = Stack[-5]
0xea3: Call2 0xe97

0xea4: Pop(1)
0xea5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xea6: Pop(2)
0xea7: Pop(0); Push((bool) Stack[-1] == 0)
0xea8: IF (Stack[-1] == 0) GOTO 0xeaa; Pop(1)

0xea9: GOTO 0xead

0xeaa: Push((int) 1)
0xeab: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xeac: GOTO 0xea0

0xead: Stack[-5] = Stack[-2]
0xeae: Return(); Pop(4)

0xeaf: Stack[-1] = (int) 515541
0xeb0: Return(); Pop(0)

0xeb1: Stack[-1] = (int) 502866
0xeb2: Return(); Pop(0)

0xeb3: Stack[-1] = "ui/NPC_Lara.png"
0xeb4: Return(); Pop(0)

0xeb5: Stack[-1] = "ui/NPC_Lara_b.png"
0xeb6: Return(); Pop(0)

0xeb7: Stack[-1] = (bool) 1
0xeb8: Return(); Pop(0)

0xeb9: PushEmpty()
0xeba: PushEmpty(bool, object, float)
0xebb: Stack[-2] = Stack[-5]
0xebc: Stack[-1] = (float) 0.05
0xebd: Call2 0xe4a

0xebe: Pop(3)
0xebf: Return(); Pop(0)

0xec0: PushEmpty()
0xec1: Push("k2q02")
0xec2: Push((int) 2)
0xec3: @ SetVariable(Stack[-2], Stack[-1])
0xec4: Pop(2)
0xec5: PushEmpty()
0xec6: Call2 0x10ce

0xec7: Pop(0)
0xec8: Return(); Pop(0)

0xec9: PushEmpty()
0xeca: Push("ook2Lara1")
0xecb: Push((int) 1)
0xecc: @ SetVariable(Stack[-2], Stack[-1])
0xecd: Pop(2)
0xece: Return(); Pop(0)

0xecf: PushEmpty(object, object)
0xed0: Push("k2q03")
0xed1: Push((int) 1)
0xed2: @ SetVariable(Stack[-2], Stack[-1])
0xed3: Pop(2)
0xed4: PushEmpty(object)
0xed5: Call2 0x115f

0xed6: Stack[-2] = Stack[-1]
0xed7: Pop(1)
0xed8: Push("k2q03Arfist")
0xed9: Push("pt_map_k2q03_arfist")
0xeda: Push((int) 0)
0xedb: Push((int) 529268)
0xedc: PushEmpty(float)
0xedd: Call2 0xe83

0xede: Pop(0)
0xedf: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee0: Pop(5)
0xee1: PushEmpty()
0xee2: Call2 0x10db

0xee3: Pop(0)
0xee4: PushEmpty()
0xee5: Call2 0x10f5

0xee6: Pop(0)
0xee7: PushEmpty(object, string)
0xee8: Stack[-1] = "quest_k2_03"
0xee9: Call2 0xe00

0xeea: Pop(2)
0xeeb: PushEmpty(bool, string, string)
0xeec: Stack[-2] = "quest_k2_03"
0xeed: Stack[-1] = "place_arfist"
0xeee: Call2 0xe77

0xeef: Pop(3)
0xef0: Return(); Pop(2)

0xef1: Stack[-1] = 0
0xef2: PushEmpty()
0xef3: PushEmpty()
0xef4: Call2 0x10e8

0xef5: Pop(0)
0xef6: PushEmpty(bool, string, string)
0xef7: Stack[-2] = "quest_k2_03"
0xef8: Stack[-1] = "completed"
0xef9: Call2 0xe77

0xefa: Pop(3)
0xefb: Return(); Pop(0)

0xefc: PushEmpty(object, object)
0xefd: Push("k4q03")
0xefe: Push((int) 1)
0xeff: @ SetVariable(Stack[-2], Stack[-1])
0xf00: Pop(2)
0xf01: PushEmpty(object)
0xf02: Call2 0x115f

0xf03: Stack[-2] = Stack[-1]
0xf04: Pop(1)
0xf05: Push("k4q03LaraGotoAlexandr")
0xf06: Push("pt_map_alexandr")
0xf07: Push((int) 0)
0xf08: Push((int) 515280)
0xf09: PushEmpty(float)
0xf0a: Call2 0xe83

0xf0b: Pop(0)
0xf0c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf0d: Pop(5)
0xf0e: PushEmpty()
0xf0f: Call2 0x1102

0xf10: Pop(0)
0xf11: PushEmpty()
0xf12: Call2 0x111c

0xf13: Pop(0)
0xf14: PushEmpty(object, string)
0xf15: Stack[-1] = "quest_k4_03"
0xf16: Call2 0xe00

0xf17: Pop(2)
0xf18: Return(); Pop(2)

0xf19: Stack[-1] = 0
0xf1a: PushEmpty()
0xf1b: Push("ook4Lara1")
0xf1c: Push((int) 1)
0xf1d: @ SetVariable(Stack[-2], Stack[-1])
0xf1e: Pop(2)
0xf1f: Return(); Pop(0)

0xf20: PushEmpty()
0xf21: Push("ook4Lara2")
0xf22: Push((int) 1)
0xf23: @ SetVariable(Stack[-2], Stack[-1])
0xf24: Pop(2)
0xf25: Return(); Pop(0)

0xf26: PushEmpty()
0xf27: PushEmpty()
0xf28: Call2 0x110f

0xf29: Pop(0)
0xf2a: PushEmpty(bool, string, string)
0xf2b: Stack[-2] = "quest_k4_03"
0xf2c: Stack[-1] = "completed"
0xf2d: Call2 0xe77

0xf2e: Pop(3)
0xf2f: Return(); Pop(0)

0xf30: PushEmpty()
0xf31: Push("smoked_meat2 is given")
0xf32: @ Trace(Stack[-1])
0xf33: Pop(1)
0xf34: PushEmpty(object, string, int)
0xf35: Stack[-3] = Stack[-5]
0xf36: Stack[-2] = "smoked_meat"
0xf37: Stack[-1] = (int) 2
0xf38: Call2 0xe3d

0xf39: Pop(3)
0xf3a: Return(); Pop(0)

0xf3b: PushEmpty()
0xf3c: Push("ook6Lara1")
0xf3d: Push((int) 1)
0xf3e: @ SetVariable(Stack[-2], Stack[-1])
0xf3f: Pop(2)
0xf40: Return(); Pop(0)

0xf41: PushEmpty()
0xf42: PushEmpty()
0xf43: Call2 0x1129

0xf44: Pop(0)
0xf45: Return(); Pop(0)

0xf46: PushEmpty()
0xf47: Push("money2000 is given")
0xf48: @ Trace(Stack[-1])
0xf49: Pop(1)
0xf4a: PushEmpty(object, int)
0xf4b: Stack[-2] = Stack[-4]
0xf4c: Stack[-1] = (int) 2000
0xf4d: Call2 0xe17

0xf4e: Pop(2)
0xf4f: Return(); Pop(0)

0xf50: PushEmpty(int, int)
0xf51: Push("k11q01SoulCount")
0xf52: @ GetVariable(Stack[-1], Stack[-2])
0xf53: Pop(1)
0xf54: Push((int) 1)
0xf55: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xf56: Push("k11q01SoulCount")
0xf57: @ SetVariable(Stack[-1], Stack[-2])
0xf58: Pop(1)
0xf59: Push((int) 2)
0xf5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5b: IF (Stack[-1] == 0) GOTO 0xf60; Pop(1)

0xf5c: PushEmpty()
0xf5d: Call2 0x10c1

0xf5e: Pop(0)
0xf5f: GOTO 0xf82

0xf60: Push((int) 3)
0xf61: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf62: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf63: PushEmpty()
0xf64: Call2 0x10b4

0xf65: Pop(0)
0xf66: GOTO 0xf82

0xf67: Push((int) 4)
0xf68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf69: IF (Stack[-1] == 0) GOTO 0xf6e; Pop(1)

0xf6a: PushEmpty()
0xf6b: Call2 0x10a7

0xf6c: Pop(0)
0xf6d: GOTO 0xf82

0xf6e: Push((int) 5)
0xf6f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf70: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf71: PushEmpty()
0xf72: Call2 0x109a

0xf73: Pop(0)
0xf74: GOTO 0xf82

0xf75: Push((int) 6)
0xf76: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf77: IF (Stack[-1] == 0) GOTO 0xf7c; Pop(1)

0xf78: PushEmpty()
0xf79: Call2 0x108d

0xf7a: Pop(0)
0xf7b: GOTO 0xf82

0xf7c: Push((int) 7)
0xf7d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7e: IF (Stack[-1] == 0) GOTO 0xf82; Pop(1)

0xf7f: PushEmpty()
0xf80: Call2 0x1080

0xf81: Pop(0)
0xf82: Return(); Pop(2)

0xf83: PushEmpty()
0xf84: Push("ook11Lara1")
0xf85: Push((int) 1)
0xf86: @ SetVariable(Stack[-2], Stack[-1])
0xf87: Pop(2)
0xf88: Return(); Pop(0)

0xf89: PushEmpty()
0xf8a: PushEmpty(object, string, float)
0xf8b: PushEmpty(object)
0xf8c: Call2 0x115f

0xf8d: Stack[-4] = Stack[-1]
0xf8e: Pop(1)
0xf8f: Stack[-2] = "pt_map_k2q03_arfist"
0xf90: Stack[-1] = (int) 2
0xf91: Call2 0x1170

0xf92: Pop(3)
0xf93: PushEmpty(object)
0xf94: Call2 0x115f

0xf95: Pop(0)
0xf96: @@ ShowMap(Stack[-1])
0xf97: Pop(1)
0xf98: Return(); Pop(0)

0xf99: PushEmpty()
0xf9a: Push("playsound")
0xf9b: Push("givemoney")
0xf9c: @ TriggerWorld(Stack[-2], Stack[-1])
0xf9d: Pop(2)
0xf9e: Return(); Pop(0)

0xf9f: PushEmpty()
0xfa0: Push("playsound")
0xfa1: Push("giveitem")
0xfa2: @ TriggerWorld(Stack[-2], Stack[-1])
0xfa3: Pop(2)
0xfa4: Return(); Pop(0)

0xfa5: PushEmpty()
0xfa6: Push("k2LaraVisit")
0xfa7: Push((int) 1)
0xfa8: @ SetVariable(Stack[-2], Stack[-1])
0xfa9: Pop(2)
0xfaa: Return(); Pop(0)

0xfab: PushEmpty()
0xfac: Push("k4LaraVisit")
0xfad: Push((int) 1)
0xfae: @ SetVariable(Stack[-2], Stack[-1])
0xfaf: Pop(2)
0xfb0: Return(); Pop(0)

0xfb1: PushEmpty()
0xfb2: PushEmpty(object, string, float)
0xfb3: PushEmpty(object)
0xfb4: Call2 0x115f

0xfb5: Stack[-4] = Stack[-1]
0xfb6: Pop(1)
0xfb7: Stack[-2] = "pt_map_alexandr"
0xfb8: Stack[-1] = (int) 2
0xfb9: Call2 0x1170

0xfba: Pop(3)
0xfbb: PushEmpty(object)
0xfbc: Call2 0x115f

0xfbd: Pop(0)
0xfbe: @@ ShowMap(Stack[-1])
0xfbf: Pop(1)
0xfc0: Return(); Pop(0)

0xfc1: PushEmpty()
0xfc2: Push("etorfin is given")
0xfc3: @ Trace(Stack[-1])
0xfc4: Pop(1)
0xfc5: PushEmpty(object, string, int)
0xfc6: Stack[-3] = Stack[-5]
0xfc7: Stack[-2] = "etorfin"
0xfc8: Stack[-1] = (int) 1
0xfc9: Call2 0xe3d

0xfca: Pop(3)
0xfcb: Return(); Pop(0)

0xfcc: PushEmpty()
0xfcd: PushEmpty(int, string)
0xfce: Stack[-1] = "k2q02"
0xfcf: Call2 0xdfb

0xfd0: Pop(1)
0xfd1: Push((int) 1)
0xfd2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd3: IF (Stack[-1] == 0) GOTO 0xfd6; Pop(1)

0xfd4: Stack[-2] = (bool) 1
0xfd5: Return(); Pop(0)

0xfd6: Stack[-2] = (bool) 0
0xfd7: Return(); Pop(0)

0xfd8: PushEmpty()
0xfd9: PushEmpty(int, string)
0xfda: Stack[-1] = "ook2Lara1"
0xfdb: Call2 0xdfb

0xfdc: Pop(1)
0xfdd: Push((int) 0)
0xfde: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfdf: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfe0: Stack[-2] = (bool) 1
0xfe1: Return(); Pop(0)

0xfe2: Stack[-2] = (bool) 0
0xfe3: Return(); Pop(0)

0xfe4: PushEmpty()
0xfe5: PushEmpty(int, string)
0xfe6: Stack[-1] = "k2q03"
0xfe7: Call2 0xdfb

0xfe8: Pop(1)
0xfe9: Push((int) 0)
0xfea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfeb: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xfec: Stack[-2] = (bool) 1
0xfed: Return(); Pop(0)

0xfee: Stack[-2] = (bool) 0
0xfef: Return(); Pop(0)

0xff0: PushEmpty()
0xff1: PushEmpty(int, string)
0xff2: Stack[-1] = "k2q03"
0xff3: Call2 0xdfb

0xff4: Pop(1)
0xff5: Push((int) 2)
0xff6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xff7: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xff8: Stack[-2] = (bool) 1
0xff9: Return(); Pop(0)

0xffa: Stack[-2] = (bool) 0
0xffb: Return(); Pop(0)

0xffc: PushEmpty()
0xffd: PushEmpty(int, string)
0xffe: Stack[-1] = "k4q03"
0xfff: Call2 0xdfb

0x1000: Pop(1)
0x1001: Push((int) 0)
0x1002: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1003: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0x1004: Stack[-2] = (bool) 1
0x1005: Return(); Pop(0)

0x1006: Stack[-2] = (bool) 0
0x1007: Return(); Pop(0)

0x1008: PushEmpty()
0x1009: PushEmpty(int, string)
0x100a: Stack[-1] = "ook4Lara1"
0x100b: Call2 0xdfb

0x100c: Pop(1)
0x100d: Push((int) 0)
0x100e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x100f: IF (Stack[-1] == 0) GOTO 0x1012; Pop(1)

0x1010: Stack[-2] = (bool) 1
0x1011: Return(); Pop(0)

0x1012: Stack[-2] = (bool) 0
0x1013: Return(); Pop(0)

0x1014: PushEmpty()
0x1015: PushEmpty(int, string)
0x1016: Stack[-1] = "k4q03"
0x1017: Call2 0xdfb

0x1018: Pop(1)
0x1019: Push((int) 3)
0x101a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x101b: IF (Stack[-1] == 0) GOTO 0x101e; Pop(1)

0x101c: Stack[-2] = (bool) 1
0x101d: Return(); Pop(0)

0x101e: Stack[-2] = (bool) 0
0x101f: Return(); Pop(0)

0x1020: PushEmpty()
0x1021: PushEmpty(int, string)
0x1022: Stack[-1] = "k4q03"
0x1023: Call2 0xdfb

0x1024: Pop(1)
0x1025: Push((int) 4)
0x1026: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1028: Stack[-2] = (bool) 1
0x1029: Return(); Pop(0)

0x102a: Stack[-2] = (bool) 0
0x102b: Return(); Pop(0)

0x102c: PushEmpty()
0x102d: PushEmpty(int, string)
0x102e: Stack[-1] = "ook4Lara2"
0x102f: Call2 0xdfb

0x1030: Pop(1)
0x1031: Push((int) 0)
0x1032: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1033: IF (Stack[-1] == 0) GOTO 0x1036; Pop(1)

0x1034: Stack[-2] = (bool) 1
0x1035: Return(); Pop(0)

0x1036: Stack[-2] = (bool) 0
0x1037: Return(); Pop(0)

0x1038: PushEmpty()
0x1039: PushEmpty(int, string)
0x103a: Stack[-1] = "k4q03"
0x103b: Call2 0xdfb

0x103c: Pop(1)
0x103d: Push((int) -1)
0x103e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x1040: Stack[-2] = (bool) 1
0x1041: Return(); Pop(0)

0x1042: Stack[-2] = (bool) 0
0x1043: Return(); Pop(0)

0x1044: PushEmpty()
0x1045: PushEmpty(int, string)
0x1046: Stack[-1] = "k6q01"
0x1047: Call2 0xdfb

0x1048: Pop(1)
0x1049: Push((int) 2)
0x104a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x104b: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x104c: Stack[-2] = (bool) 1
0x104d: Return(); Pop(0)

0x104e: Stack[-2] = (bool) 0
0x104f: Return(); Pop(0)

0x1050: PushEmpty()
0x1051: PushEmpty(int, string)
0x1052: Stack[-1] = "k6q01DankoPos"
0x1053: Call2 0xdfb

0x1054: Pop(1)
0x1055: Push((int) 2)
0x1056: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1057: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x1058: Stack[-2] = (bool) 1
0x1059: Return(); Pop(0)

0x105a: Stack[-2] = (bool) 0
0x105b: Return(); Pop(0)

0x105c: PushEmpty()
0x105d: PushEmpty(int, string)
0x105e: Stack[-1] = "ook6Lara1"
0x105f: Call2 0xdfb

0x1060: Pop(1)
0x1061: Push((int) 0)
0x1062: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x1064: Stack[-2] = (bool) 1
0x1065: Return(); Pop(0)

0x1066: Stack[-2] = (bool) 0
0x1067: Return(); Pop(0)

0x1068: PushEmpty()
0x1069: PushEmpty(int, string)
0x106a: Stack[-1] = "k11q01"
0x106b: Call2 0xdfb

0x106c: Pop(1)
0x106d: Push((int) 9)
0x106e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x1072; Pop(1)

0x1070: Stack[-2] = (bool) 1
0x1071: Return(); Pop(0)

0x1072: Stack[-2] = (bool) 0
0x1073: Return(); Pop(0)

0x1074: PushEmpty()
0x1075: PushEmpty(int, string)
0x1076: Stack[-1] = "ook11Lara1"
0x1077: Call2 0xdfb

0x1078: Pop(1)
0x1079: Push((int) 0)
0x107a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x107b: IF (Stack[-1] == 0) GOTO 0x107e; Pop(1)

0x107c: Stack[-2] = (bool) 1
0x107d: Return(); Pop(0)

0x107e: Stack[-2] = (bool) 0
0x107f: Return(); Pop(0)

0x1080: PushEmpty(object, object)
0x1081: Push((int) 498)
0x1082: Push((int) 1)
0x1083: Push((int) 528065)
0x1084: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1085: Pop(3)
0x1086: PushEmpty(bool, object, int)
0x1087: Stack[-2] = Stack[-4]
0x1088: Stack[-1] = (int) 480
0x1089: Call2 0x1143

0x108a: Pop(3)
0x108b: Return(); Pop(2)

0x108c: Stack[-1] = 0
0x108d: PushEmpty(object, object)
0x108e: Push((int) 497)
0x108f: Push((int) 1)
0x1090: Push((int) 528064)
0x1091: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1092: Pop(3)
0x1093: PushEmpty(bool, object, int)
0x1094: Stack[-2] = Stack[-4]
0x1095: Stack[-1] = (int) 480
0x1096: Call2 0x1143

0x1097: Pop(3)
0x1098: Return(); Pop(2)

0x1099: Stack[-1] = 0
0x109a: PushEmpty(object, object)
0x109b: Push((int) 496)
0x109c: Push((int) 1)
0x109d: Push((int) 528063)
0x109e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x109f: Pop(3)
0x10a0: PushEmpty(bool, object, int)
0x10a1: Stack[-2] = Stack[-4]
0x10a2: Stack[-1] = (int) 480
0x10a3: Call2 0x1143

0x10a4: Pop(3)
0x10a5: Return(); Pop(2)

0x10a6: Stack[-1] = 0
0x10a7: PushEmpty(object, object)
0x10a8: Push((int) 495)
0x10a9: Push((int) 1)
0x10aa: Push((int) 528062)
0x10ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10ac: Pop(3)
0x10ad: PushEmpty(bool, object, int)
0x10ae: Stack[-2] = Stack[-4]
0x10af: Stack[-1] = (int) 480
0x10b0: Call2 0x1143

0x10b1: Pop(3)
0x10b2: Return(); Pop(2)

0x10b3: Stack[-1] = 0
0x10b4: PushEmpty(object, object)
0x10b5: Push((int) 494)
0x10b6: Push((int) 1)
0x10b7: Push((int) 528061)
0x10b8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10b9: Pop(3)
0x10ba: PushEmpty(bool, object, int)
0x10bb: Stack[-2] = Stack[-4]
0x10bc: Stack[-1] = (int) 480
0x10bd: Call2 0x1143

0x10be: Pop(3)
0x10bf: Return(); Pop(2)

0x10c0: Stack[-1] = 0
0x10c1: PushEmpty(object, object)
0x10c2: Push((int) 493)
0x10c3: Push((int) 1)
0x10c4: Push((int) 528060)
0x10c5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10c6: Pop(3)
0x10c7: PushEmpty(bool, object, int)
0x10c8: Stack[-2] = Stack[-4]
0x10c9: Stack[-1] = (int) 480
0x10ca: Call2 0x1143

0x10cb: Pop(3)
0x10cc: Return(); Pop(2)

0x10cd: Stack[-1] = 0
0x10ce: PushEmpty(object, object)
0x10cf: Push((int) 472)
0x10d0: Push((int) 2)
0x10d1: Push((int) 527788)
0x10d2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10d3: Pop(3)
0x10d4: PushEmpty(bool, object, int)
0x10d5: Stack[-2] = Stack[-4]
0x10d6: Stack[-1] = (int) 470
0x10d7: Call2 0x1143

0x10d8: Pop(3)
0x10d9: Return(); Pop(2)

0x10da: Stack[-1] = 0
0x10db: PushEmpty(object, object)
0x10dc: Push((int) 476)
0x10dd: Push((int) 2)
0x10de: Push((int) 527792)
0x10df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10e0: Pop(3)
0x10e1: PushEmpty(bool, object, int)
0x10e2: Stack[-2] = Stack[-4]
0x10e3: Stack[-1] = (int) -1
0x10e4: Call2 0x1143

0x10e5: Pop(3)
0x10e6: Return(); Pop(2)

0x10e7: Stack[-1] = 0
0x10e8: PushEmpty(object, object)
0x10e9: Push((int) 479)
0x10ea: Push((int) 2)
0x10eb: Push((int) 527795)
0x10ec: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10ed: Pop(3)
0x10ee: PushEmpty(bool, object, int)
0x10ef: Stack[-2] = Stack[-4]
0x10f0: Stack[-1] = (int) 476
0x10f1: Call2 0x1143

0x10f2: Pop(3)
0x10f3: Return(); Pop(2)

0x10f4: Stack[-1] = 0
0x10f5: PushEmpty(object, object)
0x10f6: Push((int) 477)
0x10f7: Push((int) 2)
0x10f8: Push((int) 527793)
0x10f9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10fa: Pop(3)
0x10fb: PushEmpty(bool, object, int)
0x10fc: Stack[-2] = Stack[-4]
0x10fd: Stack[-1] = (int) 476
0x10fe: Call2 0x1143

0x10ff: Pop(3)
0x1100: Return(); Pop(2)

0x1101: Stack[-1] = 0
0x1102: PushEmpty(object, object)
0x1103: Push((int) 384)
0x1104: Push((int) 2)
0x1105: Push((int) 525822)
0x1106: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1107: Pop(3)
0x1108: PushEmpty(bool, object, int)
0x1109: Stack[-2] = Stack[-4]
0x110a: Stack[-1] = (int) -1
0x110b: Call2 0x1143

0x110c: Pop(3)
0x110d: Return(); Pop(2)

0x110e: Stack[-1] = 0
0x110f: PushEmpty(object, object)
0x1110: Push((int) 387)
0x1111: Push((int) 2)
0x1112: Push((int) 525825)
0x1113: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1114: Pop(3)
0x1115: PushEmpty(bool, object, int)
0x1116: Stack[-2] = Stack[-4]
0x1117: Stack[-1] = (int) 384
0x1118: Call2 0x1143

0x1119: Pop(3)
0x111a: Return(); Pop(2)

0x111b: Stack[-1] = 0
0x111c: PushEmpty(object, object)
0x111d: Push((int) 385)
0x111e: Push((int) 2)
0x111f: Push((int) 525823)
0x1120: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1121: Pop(3)
0x1122: PushEmpty(bool, object, int)
0x1123: Stack[-2] = Stack[-4]
0x1124: Stack[-1] = (int) 384
0x1125: Call2 0x1143

0x1126: Pop(3)
0x1127: Return(); Pop(2)

0x1128: Stack[-1] = 0
0x1129: PushEmpty(object, object)
0x112a: Push((int) 413)
0x112b: Push((int) 1)
0x112c: Push((int) 526114)
0x112d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x112e: Pop(3)
0x112f: PushEmpty(bool, object, int)
0x1130: Stack[-2] = Stack[-4]
0x1131: Stack[-1] = (int) 408
0x1132: Call2 0x1143

0x1133: Pop(3)
0x1134: Return(); Pop(2)

0x1135: Stack[-1] = 0
0x1136: PushEmpty(object, object)
0x1137: @ GetDiaryRoot(Stack[-1])
0x1138: Pop(0)
0x1139: Pop(0); Push((bool) Stack[-1] == 0)
0x113a: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113b: Push("Can't retrieve diary root")
0x113c: @ Trace(Stack[-1])
0x113d: Pop(1)
0x113e: Stack[-3] = (bool) 0
0x113f: Return(); Pop(2)

0x1140: Stack[-3] = Stack[-1]
0x1141: Return(); Pop(2)

0x1142: Stack[-1] = 0
0x1143: PushEmpty(object, object, int, object, object, int)
0x1144: PushEmpty(object)
0x1145: Call2 0x1136

0x1146: Stack[-4] = Stack[-1]
0x1147: Pop(1)
0x1148: @@ Find(Stack[-7], Stack[-2])
0x1149: Pop(0)
0x114a: Pop(0); Push((bool) Stack[-2] == 0)
0x114b: IF (Stack[-1] == 0) GOTO 0x1152; Pop(1)

0x114c: Push("Can't find diary parent with id: ")
0x114d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x114e: @ Trace(Stack[-1])
0x114f: Pop(1)
0x1150: Stack[-9] = (bool) 0
0x1151: Return(); Pop(6)

0x1152: @@ AddChild(Stack[-8])
0x1153: Pop(0)
0x1154: Push((int) 7)
0x1155: @ SendWorldWndMessage(Stack[-1])
0x1156: Pop(1)
0x1157: @@ GetCategory(Stack[-1])
0x1158: Pop(0)
0x1159: @ SetDiarySection(Stack[-1])
0x115a: Pop(0)
0x115b: Stack[-9] = (bool) 0
0x115c: Return(); Pop(6)

0x115d: Stack[-2] = 0
0x115e: Stack[-3] = 0
0x115f: PushEmpty(object, object, object, object)
0x1160: @ GetMainOutdoorScene(Stack[-2])
0x1161: Pop(0)
0x1162: Pop(0); Push((bool) Stack[-2] == 0)
0x1163: IF (Stack[-1] == 0) GOTO 0x116a; Pop(1)

0x1164: Push("Can't find main outdoor scene")
0x1165: @ Trace(Stack[-1])
0x1166: Pop(1)
0x1167: Stack[-1] = 0
0x1168: Stack[-5] = Stack[-1]
0x1169: Return(); Pop(4)

0x116a: @@ GetMap(Stack[-1])
0x116b: Pop(0)
0x116c: Stack[-5] = Stack[-1]
0x116d: Return(); Pop(4)

0x116e: Stack[-1] = 0
0x116f: Stack[-2] = 0
0x1170: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1171: @ GetMainOutdoorScene(Stack[-2])
0x1172: Pop(0)
0x1173: Pop(0); Push((bool) Stack[-2] == 0)
0x1174: IF (Stack[-1] == 0) GOTO 0x1179; Pop(1)

0x1175: Push("Can't find main outdoor scene")
0x1176: @ Trace(Stack[-1])
0x1177: Pop(1)
0x1178: Return(); Pop(8)

0x1179: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x117a: Pop(0)
0x117b: Pop(0); Push((bool) Stack[-1] == 0)
0x117c: IF (Stack[-1] == 0) GOTO 0x1183; Pop(1)

0x117d: Push("Warning: outdoor scene locator ")
0x117e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x117f: Push(" doesnt exist")
0x1180: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1181: @ Trace(Stack[-1])
0x1182: Pop(1)
0x1183: @@ GetMap(Stack[-11])
0x1184: Pop(0)
0x1185: Pop(0); Push((bool) Stack[-11] == 0)
0x1186: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1187: Push("Can't find map")
0x1188: @ Trace(Stack[-1])
0x1189: Pop(1)
0x118a: Return(); Pop(8)

0x118b: Push(CvectorIndex(Stack[-4], 0))
0x118c: Push(CvectorIndex(Stack[-5], 2))
0x118d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x118e: Pop(2)
0x118f: Return(); Pop(8)

0x1190: Stack[-2] = 0
0x1191: PushEmpty(int, int)
0x1192: Push("branch")
0x1193: @ GetVariable(Stack[-1], Stack[-2])
0x1194: Pop(1)
0x1195: Push((int) 0)
0x1196: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1197: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1198: Stack[-3] = (int) 1
0x1199: Return(); Pop(2)

0x119a: GOTO 0x11a0

0x119b: Push((int) 1)
0x119c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119d: IF (Stack[-1] == 0) GOTO 0x11a0; Pop(1)

0x119e: Stack[-3] = (int) 2
0x119f: Return(); Pop(2)

0x11a0: Stack[-3] = (int) 3
0x11a1: Return(); Pop(2)

0x11a2: PushEmpty()
0x11a3: Push(GlobalVars[1])
0x11a4: Pop(1); Push((bool) Stack[-1] == 0)
0x11a5: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11a6: PushEmpty(int, object)
0x11a7: Stack[-1] = Stack[-3]
0x11a8: Push(-2, 1); TaskCall(2)
0x11a9: Call2 0x390

0x11aa: Pop(-2, 1); TaskReturn
0x11ab: Pop(2)
0x11ac: Push(GlobalVars[1])
0x11ad: Stack[-1] = (bool) 1
0x11ae: GlobalVars[1] = Stack[-1]; Pop(1)
0x11af: PushEmpty(bool, int)
0x11b0: Stack[-1] = (int) 2
0x11b1: Call2 0xe91

0x11b2: Pop(1)
0x11b3: IF (Stack[-1] == 0) GOTO 0x11bb; Pop(1)

0x11b4: PushEmpty(int, object)
0x11b5: Stack[-1] = Stack[-3]
0x11b6: Push(-2, 1); TaskCall(0)
0x11b7: Call2 0x0

0x11b8: Pop(-2, 1); TaskReturn
0x11b9: Pop(2)
0x11ba: Return(); Pop(0)

0x11bb: PushEmpty(bool, int)
0x11bc: Stack[-1] = (int) 4
0x11bd: Call2 0xe91

0x11be: Pop(1)
0x11bf: IF (Stack[-1] == 0) GOTO 0x11c7; Pop(1)

0x11c0: PushEmpty(int, object)
0x11c1: Stack[-1] = Stack[-3]
0x11c2: Push(-2, 1); TaskCall(4)
0x11c3: Call2 0x45b

0x11c4: Pop(-2, 1); TaskReturn
0x11c5: Pop(2)
0x11c6: Return(); Pop(0)

0x11c7: PushEmpty(bool, int)
0x11c8: Stack[-1] = (int) 6
0x11c9: Call2 0xe91

0x11ca: Pop(1)
0x11cb: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x11cc: PushEmpty(int, object)
0x11cd: Stack[-1] = Stack[-3]
0x11ce: Push(-2, 1); TaskCall(6)
0x11cf: Call2 0x674

0x11d0: Pop(-2, 1); TaskReturn
0x11d1: Pop(2)
0x11d2: Return(); Pop(0)

0x11d3: PushEmpty(bool, int)
0x11d4: Stack[-1] = (int) 11
0x11d5: Call2 0xe91

0x11d6: Pop(1)
0x11d7: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11d8: PushEmpty(int, object)
0x11d9: Stack[-1] = Stack[-3]
0x11da: Push(-2, 1); TaskCall(8)
0x11db: Call2 0x7d9

0x11dc: Pop(-2, 1); TaskReturn
0x11dd: Pop(2)
0x11de: Return(); Pop(0)

0x11df: PushEmpty(bool, int)
0x11e0: Stack[-1] = (int) 12
0x11e1: Call2 0xe91

0x11e2: Pop(1)
0x11e3: IF (Stack[-1] == 0) GOTO 0x11eb; Pop(1)

0x11e4: PushEmpty(int, object)
0x11e5: Stack[-1] = Stack[-3]
0x11e6: Push(-2, 1); TaskCall(10)
0x11e7: Call2 0x953

0x11e8: Pop(-2, 1); TaskReturn
0x11e9: Pop(2)
0x11ea: Return(); Pop(0)

0x11eb: PushEmpty(int, object)
0x11ec: Stack[-1] = Stack[-3]
0x11ed: Push(-2, 1); TaskCall(12)
0x11ee: Call2 0xab5

0x11ef: Pop(-2, 1); TaskReturn
0x11f0: Pop(2)
0x11f1: Return(); Pop(0)

