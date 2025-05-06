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
	Impatience
	Fear
	Strength
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
	reputation
	ui/NPC_Kapella.png
	ui/NPC_Kapella_b.png
	money 4000 is given
	k3q01KapellaAboutHan
	k3q01KapellaGotoAnna
	pt_map_anna
	AddMark
	k3q04KapellaGotoDanko
	pt_gmap_dt_house2_08
	quest_k3_04
	place_burah_lopuh
	k7q01
	k6q02
	ook3Kapella1
	playsound
	givemoney
	ook5Kapella1
	k5q04
	k5q04KapellaGotoMaria
	pt_map_maria
	quest_k5_04
	completed
	k5Kapellavisit
	ook3Kapella2
	money 5000 is given
	mapmark
	ShowMap
	k3q01
	k3q04
	k5q04SoborVisit
	k3q04SawDanko
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0xb3f
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x396 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4bd Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e9 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7a5 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8da Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb15 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb8b Vars = (int)
		EVENT_6 Op = 0xbb1 Vars = ()
		EVENT_5 Op = 0xbc0 Vars = ()
		EVENT_45 Op = 0xbcd Vars = (bool)
		EVENT_0 Op = 0xbd9 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc8b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe50

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe4e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe52

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe54

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x105c

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
0x31: Call2 0xd9f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xce0

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
0x48: Call2 0xccf

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
0x56: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xbb

0x5a: Pop(1)
0x5b: Push((int) 525420)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xf51

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 525620)
0x66: Push((int) 41124)
0x67: Push((int) 26962)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0xf21

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call2 0xf45

0x74: Pop(1)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-1] = (bool) 1
0x77: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x78: Push((int) 525421)
0x79: Push((int) 42590)
0x7a: Push((int) 26789)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: PushEmpty(bool)
0x7e: Stack[-1] = (bool) 0
0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0xf81

0x82: Pop(1)
0x83: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0xf8d

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[-1] = (bool) 1
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push((int) 541574)
0x8c: Push((int) 43746)
0x8d: Push((int) 43745)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: Push((int) 525424)
0x91: Push((int) -1)
0x92: Push((int) 26792)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: Push((int) 539182)
0x96: Push((int) -1)
0x97: Push((int) 41123)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: GOTO 0x9d

0x9b: Return(); Pop(0)

0x9c: GOTO 0x55

0x9d: PushEmpty(bool)
0x9e: Call2 0xe56

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa1: @ lshWaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: PushEmpty(string)
0xa7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa8: Call2 0xd6a

0xa9: Pop(1)
0xaa: GOTO 0xa1

0xab: GOTO 0xba

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: @ WaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: Push("all")
0xb6: Push("idle")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0xb0

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(bool)
0xbd: Call2 0xe56

0xbe: Pop(0)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(0)

0xc2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: PushEmpty(string, bool)
0xc6: Stack[-2] = Stack[-3]
0xc7: Push("")
0xc8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-1] = (bool) 0
0xcb: GOTO 0xcd

0xcc: Stack[-1] = (bool) 1
0xcd: Call2 0xd7a

0xce: Pop(2)
0xcf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: Push((int) 1)
0xd3: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xd98

0xd6: Pop(0)
0xd7: Push((int) 26964)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0xe80

0xde: Pop(2)
0xdf: Push((int) 26789)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0xeb1

0xe6: Pop(2)
0xe7: Push((int) 26791)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0xe69

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0xf04

0xf3: Pop(2)
0xf4: Push((int) 42604)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0xe69

0xfb: Pop(2)
0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0xf04

0x100: Pop(2)
0x101: Push((int) 43745)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0xef4

0x108: Pop(2)
0x109: Push((int) 43750)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0xe62

0x110: Pop(2)
0x111: Push((int) 43751)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0xeed

0x118: Pop(2)
0x119: Push((int) 26788)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call2 0xbb

0x11f: Pop(1)
0x120: Push((int) 525420)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call2 0xf51

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: Push((int) 525620)
0x12b: Push((int) 41124)
0x12c: Push((int) 26962)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0xf21

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0xf45

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = (bool) 1
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 525421)
0x13e: Push((int) 42590)
0x13f: Push((int) 26789)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0xf81

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0xf8d

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 541574)
0x151: Push((int) 43746)
0x152: Push((int) 43745)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 525424)
0x156: Push((int) -1)
0x157: Push((int) 26792)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Push((int) 539182)
0x15b: Push((int) -1)
0x15c: Push((int) 41123)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 43746)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Sympathy"
0x165: Call2 0xbb

0x166: Pop(1)
0x167: Push((int) 541575)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 541576)
0x16d: Push((int) 43749)
0x16e: Push((int) 43747)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 541577)
0x172: Push((int) -1)
0x173: Push((int) 43748)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 43749)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0xbb

0x17d: Pop(1)
0x17e: Push((int) 541578)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 541579)
0x184: Push((int) -1)
0x185: Push((int) 43750)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Push((int) 541580)
0x189: Push((int) -1)
0x18a: Push((int) 43751)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 42590)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Impatience"
0x193: Call2 0xbb

0x194: Pop(1)
0x195: Push((int) 540576)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 540577)
0x19b: Push((int) 42592)
0x19c: Push((int) 42591)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 42592)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Fear"
0x1a5: Call2 0xbb

0x1a6: Pop(1)
0x1a7: Push((int) 540578)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 540579)
0x1ad: Push((int) 42594)
0x1ae: Push((int) 42593)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 42594)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Sympathy"
0x1b7: Call2 0xbb

0x1b8: Pop(1)
0x1b9: Push((int) 540580)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 540581)
0x1bf: Push((int) 26790)
0x1c0: Push((int) 42595)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 540613)
0x1c4: Push((int) 42634)
0x1c5: Push((int) 42633)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 42634)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Neutral"
0x1ce: Call2 0xbb

0x1cf: Pop(1)
0x1d0: Push((int) 540614)
0x1d1: @@ SetMessage(Stack[-1])
0x1d2: Pop(1)
0x1d3: @@ ClearReplies()
0x1d4: Pop(0)
0x1d5: Push((int) 540615)
0x1d6: Push((int) 42637)
0x1d7: Push((int) 42635)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Push((int) 26790)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral"
0x1e0: Call2 0xbb

0x1e1: Pop(1)
0x1e2: Push((int) 525422)
0x1e3: @@ SetMessage(Stack[-1])
0x1e4: Pop(1)
0x1e5: @@ ClearReplies()
0x1e6: Pop(0)
0x1e7: Push((int) 529338)
0x1e8: Push((int) 30794)
0x1e9: Push((int) 30793)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 30794)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call2 0xbb

0x1f3: Pop(1)
0x1f4: Push((int) 529339)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 540612)
0x1fa: Push((int) 42637)
0x1fb: Push((int) 42632)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 42637)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral"
0x204: Call2 0xbb

0x205: Pop(1)
0x206: Push((int) 540617)
0x207: @@ SetMessage(Stack[-1])
0x208: Pop(1)
0x209: @@ ClearReplies()
0x20a: Pop(0)
0x20b: Push((int) 540618)
0x20c: Push((int) 42640)
0x20d: Push((int) 42639)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Push((int) 540620)
0x211: Push((int) 42640)
0x212: Push((int) 42641)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 42640)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral"
0x21b: Call2 0xbb

0x21c: Pop(1)
0x21d: Push((int) 540619)
0x21e: @@ SetMessage(Stack[-1])
0x21f: Pop(1)
0x220: @@ ClearReplies()
0x221: Pop(0)
0x222: Push((int) 540582)
0x223: Push((int) 42597)
0x224: Push((int) 42596)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 42597)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0xbb

0x22e: Pop(1)
0x22f: Push((int) 540583)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 540584)
0x235: Push((int) 42599)
0x236: Push((int) 42598)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Push((int) 540588)
0x23a: Push((int) 42603)
0x23b: Push((int) 42602)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 42603)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral"
0x244: Call2 0xbb

0x245: Pop(1)
0x246: Push((int) 540589)
0x247: @@ SetMessage(Stack[-1])
0x248: Pop(1)
0x249: @@ ClearReplies()
0x24a: Pop(0)
0x24b: Push((int) 540590)
0x24c: Push((int) -1)
0x24d: Push((int) 42604)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Push((int) 540591)
0x251: Push((int) 42616)
0x252: Push((int) 42605)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 42599)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0xbb

0x25c: Pop(1)
0x25d: Push((int) 540585)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 540586)
0x263: Push((int) 42616)
0x264: Push((int) 42600)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Push((int) 540587)
0x268: Push((int) 42616)
0x269: Push((int) 42601)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 42616)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Impatience"
0x272: Call2 0xbb

0x273: Pop(1)
0x274: Push((int) 540602)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 525423)
0x27a: Push((int) -1)
0x27b: Push((int) 26791)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 41124)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Sympathy"
0x284: Call2 0xbb

0x285: Pop(1)
0x286: Push((int) 539183)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 539184)
0x28c: Push((int) 41126)
0x28d: Push((int) 41125)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 539188)
0x291: Push((int) 41130)
0x292: Push((int) 41129)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 41126)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Sympathy"
0x29b: Call2 0xbb

0x29c: Pop(1)
0x29d: Push((int) 539185)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 539187)
0x2a3: Push((int) 41130)
0x2a4: Push((int) 41128)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Push((int) 539186)
0x2a8: Push((int) 41130)
0x2a9: Push((int) 41127)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Return(); Pop(0)

0x2ad: Push((int) 41130)
0x2ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = "Neutral"
0x2b2: Call2 0xbb

0x2b3: Pop(1)
0x2b4: Push((int) 539189)
0x2b5: @@ SetMessage(Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ ClearReplies()
0x2b8: Pop(0)
0x2b9: Push((int) 539190)
0x2ba: Push((int) 26963)
0x2bb: Push((int) 41132)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 539191)
0x2bf: Push((int) 41134)
0x2c0: Push((int) 41133)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 41134)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Fear"
0x2c9: Call2 0xbb

0x2ca: Pop(1)
0x2cb: Push((int) 539192)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 539193)
0x2d1: Push((int) 26963)
0x2d2: Push((int) 41135)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 26963)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Neutral"
0x2db: Call2 0xbb

0x2dc: Pop(1)
0x2dd: Push((int) 525621)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 525622)
0x2e3: Push((int) -1)
0x2e4: Push((int) 26964)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e9: PushEmpty(bool)
0x2ea: Call2 0xe56

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: @ lshStopAnimation()
0x2ee: Pop(0)
0x2ef: GOTO 0x2f2

0x2f0: @ StopAnimation()
0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: GOTO 0xd2

0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2f7: PushEmpty(bool, object, float)
0x2f8: Stack[-2] = Stack[-12]
0x2f9: Stack[-1] = (float) 70.0
0x2fa: Call2 0xc8b

0x2fb: Pop(2)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-10] = (int) -2
0x2ff: Return(); Pop(8)

0x300: @ CreateDialog(Stack[-4])
0x301: Pop(0)
0x302: PushEmpty(int)
0x303: Call2 0xe50

0x304: Pop(0)
0x305: @@ SetNPCName(Stack[-1])
0x306: Pop(1)
0x307: PushEmpty(int)
0x308: Call2 0xe4e

0x309: Pop(0)
0x30a: @@ SetNPCDescription(Stack[-1])
0x30b: Pop(1)
0x30c: PushEmpty(string)
0x30d: Call2 0xe52

0x30e: Pop(0)
0x30f: @@ SetPhoto(Stack[-1])
0x310: Pop(1)
0x311: PushEmpty(string)
0x312: Call2 0xe54

0x313: Pop(0)
0x314: @@ SetPhoto2(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(int)
0x317: Call2 0x105c

0x318: Pop(0)
0x319: @@ SetPlayerName(Stack[-1])
0x31a: Pop(1)
0x31b: Stack[-2] = (int) -1
0x31c: @ IsOverrideActive(Stack[-3])
0x31d: Pop(0)
0x31e: Push(Stack[-3])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-10] = (int) -2
0x321: Return(); Pop(8)

0x322: @ DoDialog(Stack[-4])
0x323: Pop(0)
0x324: PushEmpty(bool, object)
0x325: PushEmpty(object)
0x326: Call2 0xd9f

0x327: Stack[-2] = Stack[-1]
0x328: Pop(1)
0x329: Call2 0xce0

0x32a: Pop(2)
0x32b: PushEmpty(object, object)
0x32c: Stack[-2] = Stack[-11]
0x32d: Stack[-1] = Stack[-6]
0x32e: Push(-2, 4); TaskCall(3)
0x32f: Call2 0x346

0x330: Pop(-2, 4); TaskReturn
0x331: Pop(2)
0x332: @@ IsDialogEnd(Stack[-1])
0x333: Pop(0)
0x334: Pop(0); Push((bool) Stack[-1] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x336: @ sync()
0x337: Pop(0)
0x338: @@ IsDialogEnd(Stack[-1])
0x339: Pop(0)
0x33a: GOTO 0x334

0x33b: PushEmpty(object)
0x33c: Stack[-1] = Stack[-10]
0x33d: Call2 0xccf

0x33e: Pop(1)
0x33f: @ StopDialog(Stack[-4])
0x340: Pop(0)
0x341: @@ GetReturnValue(Stack[-2])
0x342: Pop(0)
0x343: Stack[-10] = Stack[-2]
0x344: Return(); Pop(8)

0x345: Stack[-4] = 0
0x346: PushEmpty()
0x347: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x348: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x349: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x34a: Push((int) 1)
0x34b: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Neutral"
0x34e: Call2 0x380

0x34f: Pop(1)
0x350: Push((int) 525489)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: Push((int) 525490)
0x356: Push((int) 42621)
0x357: Push((int) 26846)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Push((int) 529311)
0x35b: Push((int) 30766)
0x35c: Push((int) 30765)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: GOTO 0x362

0x360: Return(); Pop(0)

0x361: GOTO 0x34a

0x362: PushEmpty(bool)
0x363: Call2 0xe56

0x364: Pop(0)
0x365: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x366: @ lshWaitForAnimEnd()
0x367: Pop(0)
0x368: Push( Stack[3 + Tasks[-1].StackPointer] )
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: GOTO 0x370

0x36b: PushEmpty(string)
0x36c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x36d: Call2 0xd6a

0x36e: Pop(1)
0x36f: GOTO 0x366

0x370: GOTO 0x37f

0x371: Push("all")
0x372: Push("idle")
0x373: @ PlayAnimation(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: @ WaitForAnimEnd()
0x376: Pop(0)
0x377: Push( Stack[3 + Tasks[-1].StackPointer] )
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x37f

0x37a: Push("all")
0x37b: Push("idle")
0x37c: @ PlayAnimation(Stack[-2], Stack[-1])
0x37d: Pop(2)
0x37e: GOTO 0x375

0x37f: Return(); Pop(0)

0x380: PushEmpty()
0x381: PushEmpty(bool)
0x382: Call2 0xe56

0x383: Pop(0)
0x384: Pop(1); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Return(); Pop(0)

0x387: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Return(); Pop(0)

0x38a: PushEmpty(string, bool)
0x38b: Stack[-2] = Stack[-3]
0x38c: Push("")
0x38d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-1] = (bool) 0
0x390: GOTO 0x392

0x391: Stack[-1] = (bool) 1
0x392: Call2 0xd7a

0x393: Pop(2)
0x394: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: Push((int) 1)
0x398: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x399: PushEmpty()
0x39a: Call2 0xd98

0x39b: Pop(0)
0x39c: Push((int) 26845)
0x39d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Neutral"
0x3a1: Call2 0x380

0x3a2: Pop(1)
0x3a3: Push((int) 525489)
0x3a4: @@ SetMessage(Stack[-1])
0x3a5: Pop(1)
0x3a6: @@ ClearReplies()
0x3a7: Pop(0)
0x3a8: Push((int) 525490)
0x3a9: Push((int) 42621)
0x3aa: Push((int) 26846)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Push((int) 529311)
0x3ae: Push((int) 30766)
0x3af: Push((int) 30765)
0x3b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: Return(); Pop(0)

0x3b3: Push((int) 30766)
0x3b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = "Neutral"
0x3b8: Call2 0x380

0x3b9: Pop(1)
0x3ba: Push((int) 529312)
0x3bb: @@ SetMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ ClearReplies()
0x3be: Pop(0)
0x3bf: Push((int) 529313)
0x3c0: Push((int) 42621)
0x3c1: Push((int) 30767)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Push((int) 540603)
0x3c5: Push((int) 42621)
0x3c6: Push((int) 42620)
0x3c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c8: Pop(3)
0x3c9: Return(); Pop(0)

0x3ca: Push((int) 42621)
0x3cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3cd: PushEmpty(string)
0x3ce: Stack[-1] = "Neutral"
0x3cf: Call2 0x380

0x3d0: Pop(1)
0x3d1: Push((int) 540604)
0x3d2: @@ SetMessage(Stack[-1])
0x3d3: Pop(1)
0x3d4: @@ ClearReplies()
0x3d5: Pop(0)
0x3d6: Push((int) 540605)
0x3d7: Push((int) 42626)
0x3d8: Push((int) 42624)
0x3d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: Push((int) 540606)
0x3dc: Push((int) -1)
0x3dd: Push((int) 42625)
0x3de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3df: Pop(3)
0x3e0: Return(); Pop(0)

0x3e1: Push((int) 42626)
0x3e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3e4: PushEmpty(string)
0x3e5: Stack[-1] = "Neutral"
0x3e6: Call2 0x380

0x3e7: Pop(1)
0x3e8: Push((int) 540607)
0x3e9: @@ SetMessage(Stack[-1])
0x3ea: Pop(1)
0x3eb: @@ ClearReplies()
0x3ec: Pop(0)
0x3ed: Push((int) 540608)
0x3ee: Push((int) 42628)
0x3ef: Push((int) 42627)
0x3f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f1: Pop(3)
0x3f2: Return(); Pop(0)

0x3f3: Push((int) 42628)
0x3f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3f6: PushEmpty(string)
0x3f7: Stack[-1] = "Neutral"
0x3f8: Call2 0x380

0x3f9: Pop(1)
0x3fa: Push((int) 540609)
0x3fb: @@ SetMessage(Stack[-1])
0x3fc: Pop(1)
0x3fd: @@ ClearReplies()
0x3fe: Pop(0)
0x3ff: Push((int) 540610)
0x400: Push((int) -1)
0x401: Push((int) 42629)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Push((int) 540611)
0x405: Push((int) -1)
0x406: Push((int) 42630)
0x407: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x40b: PushEmpty(bool)
0x40c: Call2 0xe56

0x40d: Pop(0)
0x40e: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40f: @ lshStopAnimation()
0x410: Pop(0)
0x411: GOTO 0x414

0x412: @ StopAnimation()
0x413: Pop(0)
0x414: Return(); Pop(0)

0x415: GOTO 0x397

0x416: Return(); Pop(0)

0x417: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x418: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x419: PushEmpty(bool, object, float)
0x41a: Stack[-2] = Stack[-12]
0x41b: Stack[-1] = (float) 70.0
0x41c: Call2 0xc8b

0x41d: Pop(2)
0x41e: Pop(1); Push((bool) Stack[-1] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: Stack[-10] = (int) -2
0x421: Return(); Pop(8)

0x422: @ CreateDialog(Stack[-4])
0x423: Pop(0)
0x424: PushEmpty(int)
0x425: Call2 0xe50

0x426: Pop(0)
0x427: @@ SetNPCName(Stack[-1])
0x428: Pop(1)
0x429: PushEmpty(int)
0x42a: Call2 0xe4e

0x42b: Pop(0)
0x42c: @@ SetNPCDescription(Stack[-1])
0x42d: Pop(1)
0x42e: PushEmpty(string)
0x42f: Call2 0xe52

0x430: Pop(0)
0x431: @@ SetPhoto(Stack[-1])
0x432: Pop(1)
0x433: PushEmpty(string)
0x434: Call2 0xe54

0x435: Pop(0)
0x436: @@ SetPhoto2(Stack[-1])
0x437: Pop(1)
0x438: PushEmpty(int)
0x439: Call2 0x105c

0x43a: Pop(0)
0x43b: @@ SetPlayerName(Stack[-1])
0x43c: Pop(1)
0x43d: Stack[-2] = (int) -1
0x43e: @ IsOverrideActive(Stack[-3])
0x43f: Pop(0)
0x440: Push(Stack[-3])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-10] = (int) -2
0x443: Return(); Pop(8)

0x444: @ DoDialog(Stack[-4])
0x445: Pop(0)
0x446: PushEmpty(bool, object)
0x447: PushEmpty(object)
0x448: Call2 0xd9f

0x449: Stack[-2] = Stack[-1]
0x44a: Pop(1)
0x44b: Call2 0xce0

0x44c: Pop(2)
0x44d: PushEmpty(object, object)
0x44e: Stack[-2] = Stack[-11]
0x44f: Stack[-1] = Stack[-6]
0x450: Push(-2, 4); TaskCall(5)
0x451: Call2 0x468

0x452: Pop(-2, 4); TaskReturn
0x453: Pop(2)
0x454: @@ IsDialogEnd(Stack[-1])
0x455: Pop(0)
0x456: Pop(0); Push((bool) Stack[-1] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x458: @ sync()
0x459: Pop(0)
0x45a: @@ IsDialogEnd(Stack[-1])
0x45b: Pop(0)
0x45c: GOTO 0x456

0x45d: PushEmpty(object)
0x45e: Stack[-1] = Stack[-10]
0x45f: Call2 0xccf

0x460: Pop(1)
0x461: @ StopDialog(Stack[-4])
0x462: Pop(0)
0x463: @@ GetReturnValue(Stack[-2])
0x464: Pop(0)
0x465: Stack[-10] = Stack[-2]
0x466: Return(); Pop(8)

0x467: Stack[-4] = 0
0x468: PushEmpty()
0x469: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x46a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x46b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x46c: Push((int) 1)
0x46d: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Neutral"
0x470: Call2 0x4a7

0x471: Pop(1)
0x472: Push((int) 526198)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: PushEmpty(bool, object)
0x478: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x479: Call2 0xf2d

0x47a: Pop(1)
0x47b: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47c: Push((int) 526199)
0x47d: Push((int) 30173)
0x47e: Push((int) 27480)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Push((int) 526202)
0x482: Push((int) -1)
0x483: Push((int) 27483)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: GOTO 0x489

0x487: Return(); Pop(0)

0x488: GOTO 0x46c

0x489: PushEmpty(bool)
0x48a: Call2 0xe56

0x48b: Pop(0)
0x48c: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x48d: @ lshWaitForAnimEnd()
0x48e: Pop(0)
0x48f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: GOTO 0x497

0x492: PushEmpty(string)
0x493: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x494: Call2 0xd6a

0x495: Pop(1)
0x496: GOTO 0x48d

0x497: GOTO 0x4a6

0x498: Push("all")
0x499: Push("idle")
0x49a: @ PlayAnimation(Stack[-2], Stack[-1])
0x49b: Pop(2)
0x49c: @ WaitForAnimEnd()
0x49d: Pop(0)
0x49e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: GOTO 0x4a6

0x4a1: Push("all")
0x4a2: Push("idle")
0x4a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a4: Pop(2)
0x4a5: GOTO 0x49c

0x4a6: Return(); Pop(0)

0x4a7: PushEmpty()
0x4a8: PushEmpty(bool)
0x4a9: Call2 0xe56

0x4aa: Pop(0)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: Return(); Pop(0)

0x4ae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Return(); Pop(0)

0x4b1: PushEmpty(string, bool)
0x4b2: Stack[-2] = Stack[-3]
0x4b3: Push("")
0x4b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-1] = (bool) 0
0x4b7: GOTO 0x4b9

0x4b8: Stack[-1] = (bool) 1
0x4b9: Call2 0xd7a

0x4ba: Pop(2)
0x4bb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: Push((int) 1)
0x4bf: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x4c0: PushEmpty()
0x4c1: Call2 0xd98

0x4c2: Pop(0)
0x4c3: Push((int) 27482)
0x4c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c6: PushEmpty(object, object)
0x4c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c9: Call2 0xe9f

0x4ca: Pop(2)
0x4cb: Push((int) 27479)
0x4cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Neutral"
0x4d0: Call2 0x4a7

0x4d1: Pop(1)
0x4d2: Push((int) 526198)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call2 0xf2d

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4dc: Push((int) 526199)
0x4dd: Push((int) 30173)
0x4de: Push((int) 27480)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Push((int) 526202)
0x4e2: Push((int) -1)
0x4e3: Push((int) 27483)
0x4e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e5: Pop(3)
0x4e6: Return(); Pop(0)

0x4e7: Push((int) 30173)
0x4e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4ea: PushEmpty(string)
0x4eb: Stack[-1] = "Neutral"
0x4ec: Call2 0x4a7

0x4ed: Pop(1)
0x4ee: Push((int) 528747)
0x4ef: @@ SetMessage(Stack[-1])
0x4f0: Pop(1)
0x4f1: @@ ClearReplies()
0x4f2: Pop(0)
0x4f3: Push((int) 528748)
0x4f4: Push((int) 27481)
0x4f5: Push((int) 30174)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Push((int) 27481)
0x4fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = "Sympathy"
0x4fe: Call2 0x4a7

0x4ff: Pop(1)
0x500: Push((int) 526200)
0x501: @@ SetMessage(Stack[-1])
0x502: Pop(1)
0x503: @@ ClearReplies()
0x504: Pop(0)
0x505: Push((int) 528750)
0x506: Push((int) 30177)
0x507: Push((int) 30176)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Push((int) 541056)
0x50b: Push((int) 30177)
0x50c: Push((int) 43159)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 30177)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Neutral"
0x515: Call2 0x4a7

0x516: Pop(1)
0x517: Push((int) 528751)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 526201)
0x51d: Push((int) -1)
0x51e: Push((int) 27482)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Return(); Pop(0)

0x522: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x523: PushEmpty(bool)
0x524: Call2 0xe56

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: @ lshStopAnimation()
0x528: Pop(0)
0x529: GOTO 0x52c

0x52a: @ StopAnimation()
0x52b: Pop(0)
0x52c: Return(); Pop(0)

0x52d: GOTO 0x4be

0x52e: Return(); Pop(0)

0x52f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x530: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x531: PushEmpty(bool, object, float)
0x532: Stack[-2] = Stack[-12]
0x533: Stack[-1] = (float) 70.0
0x534: Call2 0xc8b

0x535: Pop(2)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-10] = (int) -2
0x539: Return(); Pop(8)

0x53a: @ CreateDialog(Stack[-4])
0x53b: Pop(0)
0x53c: PushEmpty(int)
0x53d: Call2 0xe50

0x53e: Pop(0)
0x53f: @@ SetNPCName(Stack[-1])
0x540: Pop(1)
0x541: PushEmpty(int)
0x542: Call2 0xe4e

0x543: Pop(0)
0x544: @@ SetNPCDescription(Stack[-1])
0x545: Pop(1)
0x546: PushEmpty(string)
0x547: Call2 0xe52

0x548: Pop(0)
0x549: @@ SetPhoto(Stack[-1])
0x54a: Pop(1)
0x54b: PushEmpty(string)
0x54c: Call2 0xe54

0x54d: Pop(0)
0x54e: @@ SetPhoto2(Stack[-1])
0x54f: Pop(1)
0x550: PushEmpty(int)
0x551: Call2 0x105c

0x552: Pop(0)
0x553: @@ SetPlayerName(Stack[-1])
0x554: Pop(1)
0x555: Stack[-2] = (int) -1
0x556: @ IsOverrideActive(Stack[-3])
0x557: Pop(0)
0x558: Push(Stack[-3])
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-10] = (int) -2
0x55b: Return(); Pop(8)

0x55c: @ DoDialog(Stack[-4])
0x55d: Pop(0)
0x55e: PushEmpty(bool, object)
0x55f: PushEmpty(object)
0x560: Call2 0xd9f

0x561: Stack[-2] = Stack[-1]
0x562: Pop(1)
0x563: Call2 0xce0

0x564: Pop(2)
0x565: PushEmpty(object, object)
0x566: Stack[-2] = Stack[-11]
0x567: Stack[-1] = Stack[-6]
0x568: Push(-2, 4); TaskCall(7)
0x569: Call2 0x580

0x56a: Pop(-2, 4); TaskReturn
0x56b: Pop(2)
0x56c: @@ IsDialogEnd(Stack[-1])
0x56d: Pop(0)
0x56e: Pop(0); Push((bool) Stack[-1] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x570: @ sync()
0x571: Pop(0)
0x572: @@ IsDialogEnd(Stack[-1])
0x573: Pop(0)
0x574: GOTO 0x56e

0x575: PushEmpty(object)
0x576: Stack[-1] = Stack[-10]
0x577: Call2 0xccf

0x578: Pop(1)
0x579: @ StopDialog(Stack[-4])
0x57a: Pop(0)
0x57b: @@ GetReturnValue(Stack[-2])
0x57c: Pop(0)
0x57d: Stack[-10] = Stack[-2]
0x57e: Return(); Pop(8)

0x57f: Stack[-4] = 0
0x580: PushEmpty()
0x581: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x582: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x583: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x584: Push((int) 1)
0x585: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x586: PushEmpty(bool, object)
0x587: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x588: Call2 0xf39

0x589: Pop(1)
0x58a: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral"
0x58d: Call2 0x5d3

0x58e: Pop(1)
0x58f: Push((int) 526727)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 526728)
0x595: Push((int) 30294)
0x596: Push((int) 28005)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Push((int) 541532)
0x59a: Push((int) 43694)
0x59b: Push((int) 43693)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: GOTO 0x5b5

0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Neutral"
0x5a1: Call2 0x5d3

0x5a2: Pop(1)
0x5a3: Push((int) 526735)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: Push((int) 526736)
0x5a9: Push((int) -1)
0x5aa: Push((int) 28013)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Push((int) 528870)
0x5ae: Push((int) -1)
0x5af: Push((int) 30293)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: GOTO 0x5b5

0x5b3: Return(); Pop(0)

0x5b4: GOTO 0x584

0x5b5: PushEmpty(bool)
0x5b6: Call2 0xe56

0x5b7: Pop(0)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5b9: @ lshWaitForAnimEnd()
0x5ba: Pop(0)
0x5bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: GOTO 0x5c3

0x5be: PushEmpty(string)
0x5bf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5c0: Call2 0xd6a

0x5c1: Pop(1)
0x5c2: GOTO 0x5b9

0x5c3: GOTO 0x5d2

0x5c4: Push("all")
0x5c5: Push("idle")
0x5c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c7: Pop(2)
0x5c8: @ WaitForAnimEnd()
0x5c9: Pop(0)
0x5ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5cb: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cc: GOTO 0x5d2

0x5cd: Push("all")
0x5ce: Push("idle")
0x5cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d0: Pop(2)
0x5d1: GOTO 0x5c8

0x5d2: Return(); Pop(0)

0x5d3: PushEmpty()
0x5d4: PushEmpty(bool)
0x5d5: Call2 0xe56

0x5d6: Pop(0)
0x5d7: Pop(1); Push((bool) Stack[-1] == 0)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: Return(); Pop(0)

0x5da: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: Return(); Pop(0)

0x5dd: PushEmpty(string, bool)
0x5de: Stack[-2] = Stack[-3]
0x5df: Push("")
0x5e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e2: Stack[-1] = (bool) 0
0x5e3: GOTO 0x5e5

0x5e4: Stack[-1] = (bool) 1
0x5e5: Call2 0xd7a

0x5e6: Pop(2)
0x5e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5e8: Return(); Pop(0)

0x5e9: PushEmpty()
0x5ea: Push((int) 1)
0x5eb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x5ec: PushEmpty()
0x5ed: Call2 0xd98

0x5ee: Pop(0)
0x5ef: Push((int) 28011)
0x5f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f2: PushEmpty(object, object)
0x5f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f5: Call2 0xea8

0x5f6: Pop(2)
0x5f7: Push((int) 43707)
0x5f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fa: PushEmpty(object, object)
0x5fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fd: Call2 0xea8

0x5fe: Pop(2)
0x5ff: Push((int) 28004)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x602: PushEmpty(bool, object)
0x603: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x604: Call2 0xf39

0x605: Pop(1)
0x606: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Neutral"
0x609: Call2 0x5d3

0x60a: Pop(1)
0x60b: Push((int) 526727)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 526728)
0x611: Push((int) 30294)
0x612: Push((int) 28005)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 541532)
0x616: Push((int) 43694)
0x617: Push((int) 43693)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: PushEmpty(string)
0x61c: Stack[-1] = "Neutral"
0x61d: Call2 0x5d3

0x61e: Pop(1)
0x61f: Push((int) 526735)
0x620: @@ SetMessage(Stack[-1])
0x621: Pop(1)
0x622: @@ ClearReplies()
0x623: Pop(0)
0x624: Push((int) 526736)
0x625: Push((int) -1)
0x626: Push((int) 28013)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Push((int) 528870)
0x62a: Push((int) -1)
0x62b: Push((int) 30293)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Return(); Pop(0)

0x62f: Push((int) 43694)
0x630: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x632: PushEmpty(string)
0x633: Stack[-1] = "Neutral"
0x634: Call2 0x5d3

0x635: Pop(1)
0x636: Push((int) 541533)
0x637: @@ SetMessage(Stack[-1])
0x638: Pop(1)
0x639: @@ ClearReplies()
0x63a: Pop(0)
0x63b: Push((int) 541534)
0x63c: Push((int) 43702)
0x63d: Push((int) 43695)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Return(); Pop(0)

0x641: Push((int) 30294)
0x642: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x644: PushEmpty(string)
0x645: Stack[-1] = "Strength"
0x646: Call2 0x5d3

0x647: Pop(1)
0x648: Push((int) 528871)
0x649: @@ SetMessage(Stack[-1])
0x64a: Pop(1)
0x64b: @@ ClearReplies()
0x64c: Pop(0)
0x64d: Push((int) 528872)
0x64e: Push((int) 28006)
0x64f: Push((int) 30295)
0x650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x651: Pop(3)
0x652: Push((int) 541535)
0x653: Push((int) 43697)
0x654: Push((int) 43696)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Return(); Pop(0)

0x658: Push((int) 43697)
0x659: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x65b: PushEmpty(string)
0x65c: Stack[-1] = "Neutral"
0x65d: Call2 0x5d3

0x65e: Pop(1)
0x65f: Push((int) 541536)
0x660: @@ SetMessage(Stack[-1])
0x661: Pop(1)
0x662: @@ ClearReplies()
0x663: Pop(0)
0x664: Push((int) 541537)
0x665: Push((int) 43699)
0x666: Push((int) 43698)
0x667: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: Return(); Pop(0)

0x66a: Push((int) 43699)
0x66b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x66d: PushEmpty(string)
0x66e: Stack[-1] = "Sympathy"
0x66f: Call2 0x5d3

0x670: Pop(1)
0x671: Push((int) 541538)
0x672: @@ SetMessage(Stack[-1])
0x673: Pop(1)
0x674: @@ ClearReplies()
0x675: Pop(0)
0x676: Push((int) 541539)
0x677: Push((int) 43694)
0x678: Push((int) 43700)
0x679: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: Push((int) 541540)
0x67c: Push((int) 43702)
0x67d: Push((int) 43701)
0x67e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: Return(); Pop(0)

0x681: Push((int) 43702)
0x682: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x684: PushEmpty(string)
0x685: Stack[-1] = "Neutral"
0x686: Call2 0x5d3

0x687: Pop(1)
0x688: Push((int) 541541)
0x689: @@ SetMessage(Stack[-1])
0x68a: Pop(1)
0x68b: @@ ClearReplies()
0x68c: Pop(0)
0x68d: Push((int) 541543)
0x68e: Push((int) 30297)
0x68f: Push((int) 43705)
0x690: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x691: Pop(3)
0x692: Return(); Pop(0)

0x693: Push((int) 28006)
0x694: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x696: PushEmpty(string)
0x697: Stack[-1] = "Neutral"
0x698: Call2 0x5d3

0x699: Pop(1)
0x69a: Push((int) 526729)
0x69b: @@ SetMessage(Stack[-1])
0x69c: Pop(1)
0x69d: @@ ClearReplies()
0x69e: Pop(0)
0x69f: Push((int) 528873)
0x6a0: Push((int) 30297)
0x6a1: Push((int) 30296)
0x6a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a3: Pop(3)
0x6a4: Return(); Pop(0)

0x6a5: Push((int) 30297)
0x6a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6a8: PushEmpty(string)
0x6a9: Stack[-1] = "Impatience"
0x6aa: Call2 0x5d3

0x6ab: Pop(1)
0x6ac: Push((int) 528874)
0x6ad: @@ SetMessage(Stack[-1])
0x6ae: Pop(1)
0x6af: @@ ClearReplies()
0x6b0: Pop(0)
0x6b1: Push((int) 528875)
0x6b2: Push((int) 30299)
0x6b3: Push((int) 30298)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Return(); Pop(0)

0x6b7: Push((int) 30299)
0x6b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "Impatience"
0x6bc: Call2 0x5d3

0x6bd: Pop(1)
0x6be: Push((int) 528876)
0x6bf: @@ SetMessage(Stack[-1])
0x6c0: Pop(1)
0x6c1: @@ ClearReplies()
0x6c2: Pop(0)
0x6c3: Push((int) 526730)
0x6c4: Push((int) 28008)
0x6c5: Push((int) 28007)
0x6c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: Push((int) 541544)
0x6c9: Push((int) -1)
0x6ca: Push((int) 43707)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Return(); Pop(0)

0x6ce: Push((int) 28008)
0x6cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d1: PushEmpty(string)
0x6d2: Stack[-1] = "Impatience"
0x6d3: Call2 0x5d3

0x6d4: Pop(1)
0x6d5: Push((int) 526731)
0x6d6: @@ SetMessage(Stack[-1])
0x6d7: Pop(1)
0x6d8: @@ ClearReplies()
0x6d9: Pop(0)
0x6da: Push((int) 526732)
0x6db: Push((int) 28010)
0x6dc: Push((int) 28009)
0x6dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: Push((int) 28010)
0x6e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Strength"
0x6e5: Call2 0x5d3

0x6e6: Pop(1)
0x6e7: Push((int) 526733)
0x6e8: @@ SetMessage(Stack[-1])
0x6e9: Pop(1)
0x6ea: @@ ClearReplies()
0x6eb: Pop(0)
0x6ec: Push((int) 526734)
0x6ed: Push((int) -1)
0x6ee: Push((int) 28011)
0x6ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f0: Pop(3)
0x6f1: Return(); Pop(0)

0x6f2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6f3: PushEmpty(bool)
0x6f4: Call2 0xe56

0x6f5: Pop(0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f7: @ lshStopAnimation()
0x6f8: Pop(0)
0x6f9: GOTO 0x6fc

0x6fa: @ StopAnimation()
0x6fb: Pop(0)
0x6fc: Return(); Pop(0)

0x6fd: GOTO 0x5ea

0x6fe: Return(); Pop(0)

0x6ff: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x700: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x701: PushEmpty(bool, object, float)
0x702: Stack[-2] = Stack[-12]
0x703: Stack[-1] = (float) 70.0
0x704: Call2 0xc8b

0x705: Pop(2)
0x706: Pop(1); Push((bool) Stack[-1] == 0)
0x707: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x708: Stack[-10] = (int) -2
0x709: Return(); Pop(8)

0x70a: @ CreateDialog(Stack[-4])
0x70b: Pop(0)
0x70c: PushEmpty(int)
0x70d: Call2 0xe50

0x70e: Pop(0)
0x70f: @@ SetNPCName(Stack[-1])
0x710: Pop(1)
0x711: PushEmpty(int)
0x712: Call2 0xe4e

0x713: Pop(0)
0x714: @@ SetNPCDescription(Stack[-1])
0x715: Pop(1)
0x716: PushEmpty(string)
0x717: Call2 0xe52

0x718: Pop(0)
0x719: @@ SetPhoto(Stack[-1])
0x71a: Pop(1)
0x71b: PushEmpty(string)
0x71c: Call2 0xe54

0x71d: Pop(0)
0x71e: @@ SetPhoto2(Stack[-1])
0x71f: Pop(1)
0x720: PushEmpty(int)
0x721: Call2 0x105c

0x722: Pop(0)
0x723: @@ SetPlayerName(Stack[-1])
0x724: Pop(1)
0x725: Stack[-2] = (int) -1
0x726: @ IsOverrideActive(Stack[-3])
0x727: Pop(0)
0x728: Push(Stack[-3])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-10] = (int) -2
0x72b: Return(); Pop(8)

0x72c: @ DoDialog(Stack[-4])
0x72d: Pop(0)
0x72e: PushEmpty(bool, object)
0x72f: PushEmpty(object)
0x730: Call2 0xd9f

0x731: Stack[-2] = Stack[-1]
0x732: Pop(1)
0x733: Call2 0xce0

0x734: Pop(2)
0x735: PushEmpty(object, object)
0x736: Stack[-2] = Stack[-11]
0x737: Stack[-1] = Stack[-6]
0x738: Push(-2, 4); TaskCall(9)
0x739: Call2 0x750

0x73a: Pop(-2, 4); TaskReturn
0x73b: Pop(2)
0x73c: @@ IsDialogEnd(Stack[-1])
0x73d: Pop(0)
0x73e: Pop(0); Push((bool) Stack[-1] == 0)
0x73f: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x740: @ sync()
0x741: Pop(0)
0x742: @@ IsDialogEnd(Stack[-1])
0x743: Pop(0)
0x744: GOTO 0x73e

0x745: PushEmpty(object)
0x746: Stack[-1] = Stack[-10]
0x747: Call2 0xccf

0x748: Pop(1)
0x749: @ StopDialog(Stack[-4])
0x74a: Pop(0)
0x74b: @@ GetReturnValue(Stack[-2])
0x74c: Pop(0)
0x74d: Stack[-10] = Stack[-2]
0x74e: Return(); Pop(8)

0x74f: Stack[-4] = 0
0x750: PushEmpty()
0x751: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x752: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x753: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x754: Push((int) 1)
0x755: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x756: PushEmpty(string)
0x757: Stack[-1] = "Neutral"
0x758: Call2 0x78f

0x759: Pop(1)
0x75a: Push((int) 535284)
0x75b: @@ SetMessage(Stack[-1])
0x75c: Pop(1)
0x75d: @@ ClearReplies()
0x75e: Pop(0)
0x75f: Push((int) 535285)
0x760: Push((int) 36962)
0x761: Push((int) 36961)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Push((int) 535292)
0x765: Push((int) -1)
0x766: Push((int) 36968)
0x767: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x768: Pop(3)
0x769: Push((int) 535293)
0x76a: Push((int) -1)
0x76b: Push((int) 36969)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: GOTO 0x771

0x76f: Return(); Pop(0)

0x770: GOTO 0x754

0x771: PushEmpty(bool)
0x772: Call2 0xe56

0x773: Pop(0)
0x774: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x775: @ lshWaitForAnimEnd()
0x776: Pop(0)
0x777: Push( Stack[3 + Tasks[-1].StackPointer] )
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: GOTO 0x77f

0x77a: PushEmpty(string)
0x77b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x77c: Call2 0xd6a

0x77d: Pop(1)
0x77e: GOTO 0x775

0x77f: GOTO 0x78e

0x780: Push("all")
0x781: Push("idle")
0x782: @ PlayAnimation(Stack[-2], Stack[-1])
0x783: Pop(2)
0x784: @ WaitForAnimEnd()
0x785: Pop(0)
0x786: Push( Stack[3 + Tasks[-1].StackPointer] )
0x787: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x788: GOTO 0x78e

0x789: Push("all")
0x78a: Push("idle")
0x78b: @ PlayAnimation(Stack[-2], Stack[-1])
0x78c: Pop(2)
0x78d: GOTO 0x784

0x78e: Return(); Pop(0)

0x78f: PushEmpty()
0x790: PushEmpty(bool)
0x791: Call2 0xe56

0x792: Pop(0)
0x793: Pop(1); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x795: Return(); Pop(0)

0x796: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Return(); Pop(0)

0x799: PushEmpty(string, bool)
0x79a: Stack[-2] = Stack[-3]
0x79b: Push("")
0x79c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: Stack[-1] = (bool) 0
0x79f: GOTO 0x7a1

0x7a0: Stack[-1] = (bool) 1
0x7a1: Call2 0xd7a

0x7a2: Pop(2)
0x7a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7a4: Return(); Pop(0)

0x7a5: PushEmpty()
0x7a6: Push((int) 1)
0x7a7: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7a8: PushEmpty()
0x7a9: Call2 0xd98

0x7aa: Pop(0)
0x7ab: Push((int) 36960)
0x7ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7ae: PushEmpty(string)
0x7af: Stack[-1] = "Neutral"
0x7b0: Call2 0x78f

0x7b1: Pop(1)
0x7b2: Push((int) 535284)
0x7b3: @@ SetMessage(Stack[-1])
0x7b4: Pop(1)
0x7b5: @@ ClearReplies()
0x7b6: Pop(0)
0x7b7: Push((int) 535285)
0x7b8: Push((int) 36962)
0x7b9: Push((int) 36961)
0x7ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bb: Pop(3)
0x7bc: Push((int) 535292)
0x7bd: Push((int) -1)
0x7be: Push((int) 36968)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Push((int) 535293)
0x7c2: Push((int) -1)
0x7c3: Push((int) 36969)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Return(); Pop(0)

0x7c7: Push((int) 36962)
0x7c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7ca: PushEmpty(string)
0x7cb: Stack[-1] = "Neutral"
0x7cc: Call2 0x78f

0x7cd: Pop(1)
0x7ce: Push((int) 535286)
0x7cf: @@ SetMessage(Stack[-1])
0x7d0: Pop(1)
0x7d1: @@ ClearReplies()
0x7d2: Pop(0)
0x7d3: Push((int) 535287)
0x7d4: Push((int) 36964)
0x7d5: Push((int) 36963)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Push((int) 535291)
0x7d9: Push((int) -1)
0x7da: Push((int) 36967)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Return(); Pop(0)

0x7de: Push((int) 36964)
0x7df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7e1: PushEmpty(string)
0x7e2: Stack[-1] = "Neutral"
0x7e3: Call2 0x78f

0x7e4: Pop(1)
0x7e5: Push((int) 535288)
0x7e6: @@ SetMessage(Stack[-1])
0x7e7: Pop(1)
0x7e8: @@ ClearReplies()
0x7e9: Pop(0)
0x7ea: Push((int) 535289)
0x7eb: Push((int) -1)
0x7ec: Push((int) 36965)
0x7ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(3)
0x7ef: Push((int) 535290)
0x7f0: Push((int) -1)
0x7f1: Push((int) 36966)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Return(); Pop(0)

0x7f5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7f6: PushEmpty(bool)
0x7f7: Call2 0xe56

0x7f8: Pop(0)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fa: @ lshStopAnimation()
0x7fb: Pop(0)
0x7fc: GOTO 0x7ff

0x7fd: @ StopAnimation()
0x7fe: Pop(0)
0x7ff: Return(); Pop(0)

0x800: GOTO 0x7a6

0x801: Return(); Pop(0)

0x802: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x803: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x804: PushEmpty(bool, object, float)
0x805: Stack[-2] = Stack[-12]
0x806: Stack[-1] = (float) 70.0
0x807: Call2 0xc8b

0x808: Pop(2)
0x809: Pop(1); Push((bool) Stack[-1] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-10] = (int) -2
0x80c: Return(); Pop(8)

0x80d: @ CreateDialog(Stack[-4])
0x80e: Pop(0)
0x80f: PushEmpty(int)
0x810: Call2 0xe50

0x811: Pop(0)
0x812: @@ SetNPCName(Stack[-1])
0x813: Pop(1)
0x814: PushEmpty(int)
0x815: Call2 0xe4e

0x816: Pop(0)
0x817: @@ SetNPCDescription(Stack[-1])
0x818: Pop(1)
0x819: PushEmpty(string)
0x81a: Call2 0xe52

0x81b: Pop(0)
0x81c: @@ SetPhoto(Stack[-1])
0x81d: Pop(1)
0x81e: PushEmpty(string)
0x81f: Call2 0xe54

0x820: Pop(0)
0x821: @@ SetPhoto2(Stack[-1])
0x822: Pop(1)
0x823: PushEmpty(int)
0x824: Call2 0x105c

0x825: Pop(0)
0x826: @@ SetPlayerName(Stack[-1])
0x827: Pop(1)
0x828: Stack[-2] = (int) -1
0x829: @ IsOverrideActive(Stack[-3])
0x82a: Pop(0)
0x82b: Push(Stack[-3])
0x82c: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82d: Stack[-10] = (int) -2
0x82e: Return(); Pop(8)

0x82f: @ DoDialog(Stack[-4])
0x830: Pop(0)
0x831: PushEmpty(bool, object)
0x832: PushEmpty(object)
0x833: Call2 0xd9f

0x834: Stack[-2] = Stack[-1]
0x835: Pop(1)
0x836: Call2 0xce0

0x837: Pop(2)
0x838: PushEmpty(object, object)
0x839: Stack[-2] = Stack[-11]
0x83a: Stack[-1] = Stack[-6]
0x83b: Push(-2, 4); TaskCall(11)
0x83c: Call2 0x853

0x83d: Pop(-2, 4); TaskReturn
0x83e: Pop(2)
0x83f: @@ IsDialogEnd(Stack[-1])
0x840: Pop(0)
0x841: Pop(0); Push((bool) Stack[-1] == 0)
0x842: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x843: @ sync()
0x844: Pop(0)
0x845: @@ IsDialogEnd(Stack[-1])
0x846: Pop(0)
0x847: GOTO 0x841

0x848: PushEmpty(object)
0x849: Stack[-1] = Stack[-10]
0x84a: Call2 0xccf

0x84b: Pop(1)
0x84c: @ StopDialog(Stack[-4])
0x84d: Pop(0)
0x84e: @@ GetReturnValue(Stack[-2])
0x84f: Pop(0)
0x850: Stack[-10] = Stack[-2]
0x851: Return(); Pop(8)

0x852: Stack[-4] = 0
0x853: PushEmpty()
0x854: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x855: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x856: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x857: Push((int) 1)
0x858: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x859: PushEmpty(bool, object)
0x85a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85b: Call2 0xf5d

0x85c: Pop(1)
0x85d: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x85e: PushEmpty(object, object)
0x85f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x860: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x861: Call2 0xebd

0x862: Pop(2)
0x863: PushEmpty(object, object)
0x864: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x865: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x866: Call2 0xee7

0x867: Pop(2)
0x868: PushEmpty(string)
0x869: Stack[-1] = "Strength"
0x86a: Call2 0x8c4

0x86b: Pop(1)
0x86c: Push((int) 539415)
0x86d: @@ SetMessage(Stack[-1])
0x86e: Pop(1)
0x86f: @@ ClearReplies()
0x870: Pop(0)
0x871: Push((int) 540750)
0x872: Push((int) 42790)
0x873: Push((int) 42789)
0x874: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x875: Pop(3)
0x876: Push((int) 540754)
0x877: Push((int) 42790)
0x878: Push((int) 42793)
0x879: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87a: Pop(3)
0x87b: GOTO 0x8a6

0x87c: PushEmpty(string)
0x87d: Stack[-1] = "Neutral"
0x87e: Call2 0x8c4

0x87f: Pop(1)
0x880: Push((int) 539421)
0x881: @@ SetMessage(Stack[-1])
0x882: Pop(1)
0x883: @@ ClearReplies()
0x884: Pop(0)
0x885: PushEmpty(bool)
0x886: Stack[-1] = (bool) 0
0x887: PushEmpty(bool, object)
0x888: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x889: Call2 0xf69

0x88a: Pop(1)
0x88b: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x88c: PushEmpty(bool, object)
0x88d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88e: Call2 0xf75

0x88f: Pop(1)
0x890: Pop(1); Push((bool) Stack[-1] == 0)
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: Stack[-1] = (bool) 1
0x893: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x894: Push((int) 539454)
0x895: Push((int) 42779)
0x896: Push((int) 41385)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: Push((int) 539422)
0x89a: Push((int) -1)
0x89b: Push((int) 41353)
0x89c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(3)
0x89e: Push((int) 540740)
0x89f: Push((int) -1)
0x8a0: Push((int) 42778)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: GOTO 0x8a6

0x8a4: Return(); Pop(0)

0x8a5: GOTO 0x857

0x8a6: PushEmpty(bool)
0x8a7: Call2 0xe56

0x8a8: Pop(0)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8aa: @ lshWaitForAnimEnd()
0x8ab: Pop(0)
0x8ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ad: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ae: GOTO 0x8b4

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b1: Call2 0xd6a

0x8b2: Pop(1)
0x8b3: GOTO 0x8aa

0x8b4: GOTO 0x8c3

0x8b5: Push("all")
0x8b6: Push("idle")
0x8b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b8: Pop(2)
0x8b9: @ WaitForAnimEnd()
0x8ba: Pop(0)
0x8bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: GOTO 0x8c3

0x8be: Push("all")
0x8bf: Push("idle")
0x8c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c1: Pop(2)
0x8c2: GOTO 0x8b9

0x8c3: Return(); Pop(0)

0x8c4: PushEmpty()
0x8c5: PushEmpty(bool)
0x8c6: Call2 0xe56

0x8c7: Pop(0)
0x8c8: Pop(1); Push((bool) Stack[-1] == 0)
0x8c9: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8ca: Return(); Pop(0)

0x8cb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cd: Return(); Pop(0)

0x8ce: PushEmpty(string, bool)
0x8cf: Stack[-2] = Stack[-3]
0x8d0: Push("")
0x8d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d3: Stack[-1] = (bool) 0
0x8d4: GOTO 0x8d6

0x8d5: Stack[-1] = (bool) 1
0x8d6: Call2 0xd7a

0x8d7: Pop(2)
0x8d8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d9: Return(); Pop(0)

0x8da: PushEmpty()
0x8db: Push((int) 1)
0x8dc: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0x8dd: PushEmpty()
0x8de: Call2 0xd98

0x8df: Pop(0)
0x8e0: Push((int) 41351)
0x8e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8e3: PushEmpty(object, object)
0x8e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e6: Call2 0xec3

0x8e7: Pop(2)
0x8e8: PushEmpty(object, object)
0x8e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8eb: Call2 0xf11

0x8ec: Pop(2)
0x8ed: Push((int) 41387)
0x8ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8f0: PushEmpty(object, object)
0x8f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f3: Call2 0xedd

0x8f4: Pop(2)
0x8f5: PushEmpty(object, object)
0x8f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f8: Call2 0xeb7

0x8f9: Pop(2)
0x8fa: PushEmpty(object, object)
0x8fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8fd: Call2 0xe58

0x8fe: Pop(2)
0x8ff: Push((int) 42788)
0x900: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x902: PushEmpty(object, object)
0x903: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x904: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x905: Call2 0xf0a

0x906: Pop(2)
0x907: PushEmpty(object, object)
0x908: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x909: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90a: Call2 0xedd

0x90b: Pop(2)
0x90c: Push((int) 42787)
0x90d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x90f: PushEmpty(object, object)
0x910: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x911: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x912: Call2 0xedd

0x913: Pop(2)
0x914: PushEmpty(object, object)
0x915: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x916: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x917: Call2 0xefa

0x918: Pop(2)
0x919: PushEmpty(object, object)
0x91a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91c: Call2 0xeed

0x91d: Pop(2)
0x91e: Push((int) 41346)
0x91f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x921: PushEmpty(bool, object)
0x922: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x923: Call2 0xf5d

0x924: Pop(1)
0x925: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x926: PushEmpty(object, object)
0x927: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x928: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x929: Call2 0xebd

0x92a: Pop(2)
0x92b: PushEmpty(object, object)
0x92c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92e: Call2 0xee7

0x92f: Pop(2)
0x930: PushEmpty(string)
0x931: Stack[-1] = "Strength"
0x932: Call2 0x8c4

0x933: Pop(1)
0x934: Push((int) 539415)
0x935: @@ SetMessage(Stack[-1])
0x936: Pop(1)
0x937: @@ ClearReplies()
0x938: Pop(0)
0x939: Push((int) 540750)
0x93a: Push((int) 42790)
0x93b: Push((int) 42789)
0x93c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93d: Pop(3)
0x93e: Push((int) 540754)
0x93f: Push((int) 42790)
0x940: Push((int) 42793)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Return(); Pop(0)

0x944: PushEmpty(string)
0x945: Stack[-1] = "Neutral"
0x946: Call2 0x8c4

0x947: Pop(1)
0x948: Push((int) 539421)
0x949: @@ SetMessage(Stack[-1])
0x94a: Pop(1)
0x94b: @@ ClearReplies()
0x94c: Pop(0)
0x94d: PushEmpty(bool)
0x94e: Stack[-1] = (bool) 0
0x94f: PushEmpty(bool, object)
0x950: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x951: Call2 0xf69

0x952: Pop(1)
0x953: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x954: PushEmpty(bool, object)
0x955: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x956: Call2 0xf75

0x957: Pop(1)
0x958: Pop(1); Push((bool) Stack[-1] == 0)
0x959: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x95a: Stack[-1] = (bool) 1
0x95b: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95c: Push((int) 539454)
0x95d: Push((int) 42779)
0x95e: Push((int) 41385)
0x95f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x960: Pop(3)
0x961: Push((int) 539422)
0x962: Push((int) -1)
0x963: Push((int) 41353)
0x964: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x965: Pop(3)
0x966: Push((int) 540740)
0x967: Push((int) -1)
0x968: Push((int) 42778)
0x969: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96a: Pop(3)
0x96b: Return(); Pop(0)

0x96c: Push((int) 42779)
0x96d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96e: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x96f: PushEmpty(string)
0x970: Stack[-1] = "Neutral"
0x971: Call2 0x8c4

0x972: Pop(1)
0x973: Push((int) 540741)
0x974: @@ SetMessage(Stack[-1])
0x975: Pop(1)
0x976: @@ ClearReplies()
0x977: Pop(0)
0x978: Push((int) 540742)
0x979: Push((int) 41386)
0x97a: Push((int) 42780)
0x97b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97c: Pop(3)
0x97d: Return(); Pop(0)

0x97e: Push((int) 41386)
0x97f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x980: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x981: PushEmpty(string)
0x982: Stack[-1] = "Sympathy"
0x983: Call2 0x8c4

0x984: Pop(1)
0x985: Push((int) 539455)
0x986: @@ SetMessage(Stack[-1])
0x987: Pop(1)
0x988: @@ ClearReplies()
0x989: Pop(0)
0x98a: Push((int) 540743)
0x98b: Push((int) 42782)
0x98c: Push((int) 42781)
0x98d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98e: Pop(3)
0x98f: Push((int) 540747)
0x990: Push((int) 42782)
0x991: Push((int) 42785)
0x992: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x993: Pop(3)
0x994: Return(); Pop(0)

0x995: Push((int) 42782)
0x996: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x998: PushEmpty(string)
0x999: Stack[-1] = "Strength"
0x99a: Call2 0x8c4

0x99b: Pop(1)
0x99c: Push((int) 540744)
0x99d: @@ SetMessage(Stack[-1])
0x99e: Pop(1)
0x99f: @@ ClearReplies()
0x9a0: Pop(0)
0x9a1: Push((int) 540745)
0x9a2: Push((int) 42784)
0x9a3: Push((int) 42783)
0x9a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a5: Pop(3)
0x9a6: Push((int) 540748)
0x9a7: Push((int) -1)
0x9a8: Push((int) 42787)
0x9a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9aa: Pop(3)
0x9ab: Return(); Pop(0)

0x9ac: Push((int) 42784)
0x9ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9af: PushEmpty(string)
0x9b0: Stack[-1] = "Neutral"
0x9b1: Call2 0x8c4

0x9b2: Pop(1)
0x9b3: Push((int) 540746)
0x9b4: @@ SetMessage(Stack[-1])
0x9b5: Pop(1)
0x9b6: @@ ClearReplies()
0x9b7: Pop(0)
0x9b8: Push((int) 539456)
0x9b9: Push((int) -1)
0x9ba: Push((int) 41387)
0x9bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bc: Pop(3)
0x9bd: Push((int) 540749)
0x9be: Push((int) -1)
0x9bf: Push((int) 42788)
0x9c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: Return(); Pop(0)

0x9c3: Push((int) 42790)
0x9c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9c6: PushEmpty(string)
0x9c7: Stack[-1] = "Strength"
0x9c8: Call2 0x8c4

0x9c9: Pop(1)
0x9ca: Push((int) 540751)
0x9cb: @@ SetMessage(Stack[-1])
0x9cc: Pop(1)
0x9cd: @@ ClearReplies()
0x9ce: Pop(0)
0x9cf: Push((int) 540752)
0x9d0: Push((int) 42792)
0x9d1: Push((int) 42791)
0x9d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d3: Pop(3)
0x9d4: Push((int) 540755)
0x9d5: Push((int) 42796)
0x9d6: Push((int) 42795)
0x9d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(3)
0x9d9: Return(); Pop(0)

0x9da: Push((int) 42796)
0x9db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Neutral"
0x9df: Call2 0x8c4

0x9e0: Pop(1)
0x9e1: Push((int) 540756)
0x9e2: @@ SetMessage(Stack[-1])
0x9e3: Pop(1)
0x9e4: @@ ClearReplies()
0x9e5: Pop(0)
0x9e6: Push((int) 540757)
0x9e7: Push((int) 42792)
0x9e8: Push((int) 42797)
0x9e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ea: Pop(3)
0x9eb: Return(); Pop(0)

0x9ec: Push((int) 42792)
0x9ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ee: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9ef: PushEmpty(string)
0x9f0: Stack[-1] = "Fear"
0x9f1: Call2 0x8c4

0x9f2: Pop(1)
0x9f3: Push((int) 540753)
0x9f4: @@ SetMessage(Stack[-1])
0x9f5: Pop(1)
0x9f6: @@ ClearReplies()
0x9f7: Pop(0)
0x9f8: Push((int) 539416)
0x9f9: Push((int) 41348)
0x9fa: Push((int) 41347)
0x9fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(3)
0x9fd: Return(); Pop(0)

0x9fe: Push((int) 41348)
0x9ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa00: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa01: PushEmpty(string)
0xa02: Stack[-1] = "Fear"
0xa03: Call2 0x8c4

0xa04: Pop(1)
0xa05: Push((int) 539417)
0xa06: @@ SetMessage(Stack[-1])
0xa07: Pop(1)
0xa08: @@ ClearReplies()
0xa09: Pop(0)
0xa0a: Push((int) 539418)
0xa0b: Push((int) 42802)
0xa0c: Push((int) 41349)
0xa0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0e: Pop(3)
0xa0f: Push((int) 540758)
0xa10: Push((int) 42800)
0xa11: Push((int) 42799)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: Return(); Pop(0)

0xa15: Push((int) 42800)
0xa16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa18: PushEmpty(string)
0xa19: Stack[-1] = "Neutral"
0xa1a: Call2 0x8c4

0xa1b: Pop(1)
0xa1c: Push((int) 540759)
0xa1d: @@ SetMessage(Stack[-1])
0xa1e: Pop(1)
0xa1f: @@ ClearReplies()
0xa20: Pop(0)
0xa21: Push((int) 540760)
0xa22: Push((int) 42802)
0xa23: Push((int) 42801)
0xa24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa25: Pop(3)
0xa26: Return(); Pop(0)

0xa27: Push((int) 42802)
0xa28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa2a: PushEmpty(string)
0xa2b: Stack[-1] = "Neutral"
0xa2c: Call2 0x8c4

0xa2d: Pop(1)
0xa2e: Push((int) 540761)
0xa2f: @@ SetMessage(Stack[-1])
0xa30: Pop(1)
0xa31: @@ ClearReplies()
0xa32: Pop(0)
0xa33: Push((int) 540762)
0xa34: Push((int) 41350)
0xa35: Push((int) 42803)
0xa36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa37: Pop(3)
0xa38: Return(); Pop(0)

0xa39: Push((int) 41350)
0xa3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3b: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa3c: PushEmpty(string)
0xa3d: Stack[-1] = "Neutral"
0xa3e: Call2 0x8c4

0xa3f: Pop(1)
0xa40: Push((int) 539419)
0xa41: @@ SetMessage(Stack[-1])
0xa42: Pop(1)
0xa43: @@ ClearReplies()
0xa44: Pop(0)
0xa45: Push((int) 540763)
0xa46: Push((int) 42806)
0xa47: Push((int) 42805)
0xa48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa49: Pop(3)
0xa4a: Push((int) 540765)
0xa4b: Push((int) 42806)
0xa4c: Push((int) 42807)
0xa4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4e: Pop(3)
0xa4f: Return(); Pop(0)

0xa50: Push((int) 42806)
0xa51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa53: PushEmpty(string)
0xa54: Stack[-1] = "Sympathy"
0xa55: Call2 0x8c4

0xa56: Pop(1)
0xa57: Push((int) 540764)
0xa58: @@ SetMessage(Stack[-1])
0xa59: Pop(1)
0xa5a: @@ ClearReplies()
0xa5b: Pop(0)
0xa5c: Push((int) 539420)
0xa5d: Push((int) -1)
0xa5e: Push((int) 41351)
0xa5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa60: Pop(3)
0xa61: Push((int) 539423)
0xa62: Push((int) -1)
0xa63: Push((int) 41354)
0xa64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa65: Pop(3)
0xa66: Return(); Pop(0)

0xa67: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa68: PushEmpty(bool)
0xa69: Call2 0xe56

0xa6a: Pop(0)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa6c: @ lshStopAnimation()
0xa6d: Pop(0)
0xa6e: GOTO 0xa71

0xa6f: @ StopAnimation()
0xa70: Pop(0)
0xa71: Return(); Pop(0)

0xa72: GOTO 0x8db

0xa73: Return(); Pop(0)

0xa74: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa75: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa76: PushEmpty(bool, object, float)
0xa77: Stack[-2] = Stack[-12]
0xa78: Stack[-1] = (float) 70.0
0xa79: Call2 0xc8b

0xa7a: Pop(2)
0xa7b: Pop(1); Push((bool) Stack[-1] == 0)
0xa7c: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7d: Stack[-10] = (int) -2
0xa7e: Return(); Pop(8)

0xa7f: @ CreateDialog(Stack[-4])
0xa80: Pop(0)
0xa81: PushEmpty(int)
0xa82: Call2 0xe50

0xa83: Pop(0)
0xa84: @@ SetNPCName(Stack[-1])
0xa85: Pop(1)
0xa86: PushEmpty(int)
0xa87: Call2 0xe4e

0xa88: Pop(0)
0xa89: @@ SetNPCDescription(Stack[-1])
0xa8a: Pop(1)
0xa8b: PushEmpty(string)
0xa8c: Call2 0xe52

0xa8d: Pop(0)
0xa8e: @@ SetPhoto(Stack[-1])
0xa8f: Pop(1)
0xa90: PushEmpty(string)
0xa91: Call2 0xe54

0xa92: Pop(0)
0xa93: @@ SetPhoto2(Stack[-1])
0xa94: Pop(1)
0xa95: PushEmpty(int)
0xa96: Call2 0x105c

0xa97: Pop(0)
0xa98: @@ SetPlayerName(Stack[-1])
0xa99: Pop(1)
0xa9a: Stack[-2] = (int) -1
0xa9b: @ IsOverrideActive(Stack[-3])
0xa9c: Pop(0)
0xa9d: Push(Stack[-3])
0xa9e: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9f: Stack[-10] = (int) -2
0xaa0: Return(); Pop(8)

0xaa1: @ DoDialog(Stack[-4])
0xaa2: Pop(0)
0xaa3: PushEmpty(bool, object)
0xaa4: PushEmpty(object)
0xaa5: Call2 0xd9f

0xaa6: Stack[-2] = Stack[-1]
0xaa7: Pop(1)
0xaa8: Call2 0xce0

0xaa9: Pop(2)
0xaaa: PushEmpty(object, object)
0xaab: Stack[-2] = Stack[-11]
0xaac: Stack[-1] = Stack[-6]
0xaad: Push(-2, 4); TaskCall(13)
0xaae: Call2 0xac5

0xaaf: Pop(-2, 4); TaskReturn
0xab0: Pop(2)
0xab1: @@ IsDialogEnd(Stack[-1])
0xab2: Pop(0)
0xab3: Pop(0); Push((bool) Stack[-1] == 0)
0xab4: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab5: @ sync()
0xab6: Pop(0)
0xab7: @@ IsDialogEnd(Stack[-1])
0xab8: Pop(0)
0xab9: GOTO 0xab3

0xaba: PushEmpty(object)
0xabb: Stack[-1] = Stack[-10]
0xabc: Call2 0xccf

0xabd: Pop(1)
0xabe: @ StopDialog(Stack[-4])
0xabf: Pop(0)
0xac0: @@ GetReturnValue(Stack[-2])
0xac1: Pop(0)
0xac2: Stack[-10] = Stack[-2]
0xac3: Return(); Pop(8)

0xac4: Stack[-4] = 0
0xac5: PushEmpty()
0xac6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xac7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xac8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xac9: Push((int) 1)
0xaca: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xacb: PushEmpty(string)
0xacc: Stack[-1] = "Neutral"
0xacd: Call2 0xaff

0xace: Pop(1)
0xacf: Push((int) 540539)
0xad0: @@ SetMessage(Stack[-1])
0xad1: Pop(1)
0xad2: @@ ClearReplies()
0xad3: Pop(0)
0xad4: Push((int) 540540)
0xad5: Push((int) -1)
0xad6: Push((int) 42549)
0xad7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad8: Pop(3)
0xad9: Push((int) 540799)
0xada: Push((int) -1)
0xadb: Push((int) 42848)
0xadc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadd: Pop(3)
0xade: GOTO 0xae1

0xadf: Return(); Pop(0)

0xae0: GOTO 0xac9

0xae1: PushEmpty(bool)
0xae2: Call2 0xe56

0xae3: Pop(0)
0xae4: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xae5: @ lshWaitForAnimEnd()
0xae6: Pop(0)
0xae7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae8: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae9: GOTO 0xaef

0xaea: PushEmpty(string)
0xaeb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaec: Call2 0xd6a

0xaed: Pop(1)
0xaee: GOTO 0xae5

0xaef: GOTO 0xafe

0xaf0: Push("all")
0xaf1: Push("idle")
0xaf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf3: Pop(2)
0xaf4: @ WaitForAnimEnd()
0xaf5: Pop(0)
0xaf6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf7: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaf8: GOTO 0xafe

0xaf9: Push("all")
0xafa: Push("idle")
0xafb: @ PlayAnimation(Stack[-2], Stack[-1])
0xafc: Pop(2)
0xafd: GOTO 0xaf4

0xafe: Return(); Pop(0)

0xaff: PushEmpty()
0xb00: PushEmpty(bool)
0xb01: Call2 0xe56

0xb02: Pop(0)
0xb03: Pop(1); Push((bool) Stack[-1] == 0)
0xb04: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb05: Return(); Pop(0)

0xb06: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb07: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb08: Return(); Pop(0)

0xb09: PushEmpty(string, bool)
0xb0a: Stack[-2] = Stack[-3]
0xb0b: Push("")
0xb0c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0e: Stack[-1] = (bool) 0
0xb0f: GOTO 0xb11

0xb10: Stack[-1] = (bool) 1
0xb11: Call2 0xd7a

0xb12: Pop(2)
0xb13: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb14: Return(); Pop(0)

0xb15: PushEmpty()
0xb16: Push((int) 1)
0xb17: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb18: PushEmpty()
0xb19: Call2 0xd98

0xb1a: Pop(0)
0xb1b: Push((int) 42548)
0xb1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb1e: PushEmpty(string)
0xb1f: Stack[-1] = "Neutral"
0xb20: Call2 0xaff

0xb21: Pop(1)
0xb22: Push((int) 540539)
0xb23: @@ SetMessage(Stack[-1])
0xb24: Pop(1)
0xb25: @@ ClearReplies()
0xb26: Pop(0)
0xb27: Push((int) 540540)
0xb28: Push((int) -1)
0xb29: Push((int) 42549)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Push((int) 540799)
0xb2d: Push((int) -1)
0xb2e: Push((int) 42848)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Return(); Pop(0)

0xb32: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb33: PushEmpty(bool)
0xb34: Call2 0xe56

0xb35: Pop(0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb37: @ lshStopAnimation()
0xb38: Pop(0)
0xb39: GOTO 0xb3c

0xb3a: @ StopAnimation()
0xb3b: Pop(0)
0xb3c: Return(); Pop(0)

0xb3d: GOTO 0xb16

0xb3e: Return(); Pop(0)

0xb3f: Push(GlobalVars[1])
0xb40: Stack[-1] = (bool) 0
0xb41: GlobalVars[1] = Stack[-1]; Pop(1)
0xb42: PushEmpty()
0xb43: Call2 0xb46

0xb44: Pop(0)
0xb45: Return(); Pop(0)

0xb46: PushEmpty(bool)
0xb47: Call2 0xc86

0xb48: Pop(0)
0xb49: Pop(1); Push((bool) Stack[-1] == 0)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4b: @ Hold()
0xb4c: Pop(0)
0xb4d: @ GetDirection(Stack[-0])
0xb4e: Pop(0)
0xb4f: PushEmpty()
0xb50: Call2 0xbf6

0xb51: Pop(0)
0xb52: GOTO 0xb4f

0xb53: Return(); Pop(0)

0xb54: PushEmpty(object, object)
0xb55: Push("player")
0xb56: @ FindActor(Stack[-2], Stack[-1])
0xb57: Pop(1)
0xb58: Pop(0); Push((bool) Stack[-1] == 0)
0xb59: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb5a: Stack[-3] = (bool) 0
0xb5b: Return(); Pop(2)

0xb5c: PushEmpty(bool, object)
0xb5d: Stack[-1] = Stack[-3]
0xb5e: Call2 0xc7d

0xb5f: Stack[-5] = Stack[-2]
0xb60: Pop(2)
0xb61: Return(); Pop(2)

0xb62: Stack[-1] = 0
0xb63: Push(CvectorIndex(Stack[-0], 0))
0xb64: Push(CvectorIndex(Stack[-0], 2))
0xb65: @ RotateAsync(Stack[-2], Stack[-1])
0xb66: Pop(2)
0xb67: Return(); Pop(0)

0xb68: PushEmpty(object, bool, object, bool)
0xb69: Push("player")
0xb6a: @ FindActor(Stack[-3], Stack[-1])
0xb6b: Pop(1)
0xb6c: Pop(0); Push((bool) Stack[-2] == 0)
0xb6d: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb6e: Stack[-5] = (bool) 0
0xb6f: Return(); Pop(4)

0xb70: PushEmpty(float, object)
0xb71: Stack[-1] = Stack[-4]
0xb72: Call2 0xc42

0xb73: Pop(1)
0xb74: Push((float)90000.0)
0xb75: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb76: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb77: Stack[-5] = (bool) 0
0xb78: Return(); Pop(4)

0xb79: @ CanSee(Stack[-1], Stack[-2])
0xb7a: Pop(0)
0xb7b: Stack[-5] = Stack[-1]
0xb7c: Return(); Pop(4)

0xb7d: Stack[-2] = 0
0xb7e: PushEmpty(float, float)
0xb7f: Push((int) 8)
0xb80: Push((int) 16)
0xb81: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb82: Pop(2)
0xb83: Push((int) 10)
0xb84: @ SetTimer(Stack[-1], Stack[-2])
0xb85: Pop(1)
0xb86: Return(); Pop(2)

0xb87: Push((int) 10)
0xb88: @ KillTimer(Stack[-1])
0xb89: Pop(1)
0xb8a: Return(); Pop(0)

0xb8b: PushEmpty()
0xb8c: Push((int) 10)
0xb8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8e: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xb8f: PushEmpty()
0xb90: Call2 0xb87

0xb91: Pop(0)
0xb92: PushEmpty(bool)
0xb93: Stack[-1] = (bool) 0
0xb94: PushEmpty(bool)
0xb95: Call2 0xc86

0xb96: Pop(0)
0xb97: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb98: PushEmpty(bool)
0xb99: Call2 0xb68

0xb9a: Pop(0)
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb9c: Stack[-1] = (bool) 1
0xb9d: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xb9e: PushEmpty(bool)
0xb9f: Call2 0xb54

0xba0: Pop(0)
0xba1: IF (Stack[-1] == 0) GOTO 0xba9; Pop(1)

0xba2: PushEmpty(bool, object)
0xba3: PushEmpty(object)
0xba4: Call2 0xd9f

0xba5: Stack[-2] = Stack[-1]
0xba6: Pop(1)
0xba7: Call2 0xd1a

0xba8: Pop(2)
0xba9: GOTO 0xbb0

0xbaa: PushEmpty()
0xbab: Call2 0xb63

0xbac: Pop(0)
0xbad: PushEmpty()
0xbae: Call2 0xb7e

0xbaf: Pop(0)
0xbb0: Return(); Pop(0)

0xbb1: PushEmpty()
0xbb2: Call2 0xc3d

0xbb3: Pop(0)
0xbb4: PushEmpty()
0xbb5: Call2 0xb87

0xbb6: Pop(0)
0xbb7: @ lshStopSpeech()
0xbb8: Pop(0)
0xbb9: @ lshStopAnimation()
0xbba: Pop(0)
0xbbb: @ StopAsync()
0xbbc: Pop(0)
0xbbd: @ Hold()
0xbbe: Pop(0)
0xbbf: Return(); Pop(0)

0xbc0: @ StopGroup0()
0xbc1: Pop(0)
0xbc2: PushEmpty()
0xbc3: Call2 0xb87

0xbc4: Pop(0)
0xbc5: PushEmpty(string)
0xbc6: Stack[-1] = "Neutral"
0xbc7: Call2 0xd6a

0xbc8: Pop(1)
0xbc9: PushEmpty()
0xbca: Call2 0xb7e

0xbcb: Pop(0)
0xbcc: Return(); Pop(0)

0xbcd: PushEmpty()
0xbce: Push(Stack[-1])
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd0: PushEmpty()
0xbd1: Call2 0xb7e

0xbd2: Pop(0)
0xbd3: GOTO 0xbd8

0xbd4: PushEmpty(string)
0xbd5: Stack[-1] = "Neutral"
0xbd6: Call2 0xd6a

0xbd7: Pop(1)
0xbd8: Return(); Pop(0)

0xbd9: PushEmpty(bool, bool)
0xbda: @ IsOverrideActive(Stack[-1])
0xbdb: Pop(0)
0xbdc: Pop(0); Push((bool) Stack[-1] == 0)
0xbdd: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbde: EventDisable(0)
0xbdf: PushEmpty()
0xbe0: Call2 0xc3d

0xbe1: Pop(0)
0xbe2: PushEmpty(bool, object)
0xbe3: Stack[-1] = Stack[-5]
0xbe4: Call2 0xc7d

0xbe5: Pop(2)
0xbe6: EventEnable(0)
0xbe7: PushEmpty(object)
0xbe8: Stack[-1] = Stack[-4]
0xbe9: Call2 0x106d

0xbea: Pop(1)
0xbeb: PushEmpty(string)
0xbec: Stack[-1] = "Neutral"
0xbed: Call2 0xd6a

0xbee: Pop(1)
0xbef: PushEmpty()
0xbf0: Call2 0xb87

0xbf1: Pop(0)
0xbf2: PushEmpty()
0xbf3: Call2 0xb7e

0xbf4: Pop(0)
0xbf5: Return(); Pop(2)

0xbf6: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xbf7: @ WaitForAnimEnd()
0xbf8: Pop(0)
0xbf9: PushEmpty(bool)
0xbfa: Call2 0xc86

0xbfb: Pop(0)
0xbfc: Pop(1); Push((bool) Stack[-1] == 0)
0xbfd: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfe: Return(); Pop(12)

0xbff: PushEmpty(int)
0xc00: Call2 0xe3d

0xc01: Stack[-7] = Stack[-1]
0xc02: Pop(1)
0xc03: Stack[-5] = (int) 0
0xc04: PushEmpty(bool)
0xc05: Stack[-1] = (bool) 0
0xc06: Push((int) 5)
0xc07: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xc09: PushEmpty(bool)
0xc0a: Call2 0xc86

0xc0b: Pop(0)
0xc0c: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xc0d: Stack[-1] = (bool) 1
0xc0e: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc0f: Pop(0); Push((bool) Stack[-6] == 0)
0xc10: IF (Stack[-1] == 0) GOTO 0xc18; Pop(1)

0xc11: Push((int) 3)
0xc12: @ Sleep(Stack[-1], Stack[-5])
0xc13: Pop(1)
0xc14: Pop(0); Push((bool) Stack[-4] == 0)
0xc15: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc16: GOTO 0xc38

0xc17: GOTO 0xc2d

0xc18: @ irand(Stack[-3], Stack[-6])
0xc19: Pop(0)
0xc1a: Push((int) 5)
0xc1b: @ irand(Stack[-3], Stack[-1])
0xc1c: Pop(1)
0xc1d: Push((int) 0)
0xc1e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc20: Stack[-3] = (int) 0
0xc21: Push("all")
0xc22: PushEmpty(string, int)
0xc23: Stack[-1] = Stack[-6]
0xc24: Call2 0xe36

0xc25: Pop(1)
0xc26: @ PlayAnimation(Stack[-2], Stack[-1])
0xc27: Pop(2)
0xc28: @ WaitForAnimEnd(Stack[-1])
0xc29: Pop(0)
0xc2a: Pop(0); Push((bool) Stack[-1] == 0)
0xc2b: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc2c: GOTO 0xc38

0xc2d: PushEmpty(bool)
0xc2e: Call2 0xc3b

0xc2f: Pop(0)
0xc30: Pop(1); Push((bool) Stack[-1] == 0)
0xc31: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc32: GOTO 0xc38

0xc33: @ ResetAAS()
0xc34: Pop(0)
0xc35: Push((int) 1)
0xc36: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc37: GOTO 0xc04

0xc38: @ ResetAAS()
0xc39: Pop(0)
0xc3a: Return(); Pop(12)

0xc3b: Stack[-1] = (bool) 1
0xc3c: Return(); Pop(0)

0xc3d: @ StopAnimation()
0xc3e: Pop(0)
0xc3f: @ StopGroup0()
0xc40: Pop(0)
0xc41: Return(); Pop(0)

0xc42: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc43: @ GetPosition(Stack[-3])
0xc44: Pop(0)
0xc45: @@ GetPosition(Stack[-2])
0xc46: Pop(0)
0xc47: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xc48: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xc49: Return(); Pop(6)

0xc4a: PushEmpty(bool, bool)
0xc4b: Push("HasProperty")
0xc4c: Push((int) 2)
0xc4d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xc4e: Pop(1); Push((bool) Stack[-1] == 0)
0xc4f: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc50: Stack[-5] = (bool) 0
0xc51: Return(); Pop(2)

0xc52: @@ HasProperty(Stack[-3], Stack[-1])
0xc53: Pop(0)
0xc54: Stack[-5] = Stack[-1]
0xc55: Return(); Pop(2)

0xc56: PushEmpty(float, float)
0xc57: PushEmpty(bool, object, string)
0xc58: Stack[-2] = Stack[-10]
0xc59: Stack[-1] = Stack[-9]
0xc5a: Call2 0xc4a

0xc5b: Pop(2)
0xc5c: Pop(1); Push((bool) Stack[-1] == 0)
0xc5d: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5e: Stack[-8] = (bool) 0
0xc5f: Return(); Pop(2)

0xc60: @@ GetProperty(Stack[-6], Stack[-1])
0xc61: Pop(0)
0xc62: PushEmpty(float, float, float, float)
0xc63: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xc64: Stack[-2] = Stack[-8]
0xc65: Stack[-1] = Stack[-7]
0xc66: Call2 0xdaf

0xc67: Pop(3)
0xc68: @@ SetProperty(Stack[-7], Stack[-1])
0xc69: Pop(1)
0xc6a: Stack[-8] = (bool) 1
0xc6b: Return(); Pop(2)

0xc6c: PushEmpty(int, int)
0xc6d: @@ GetProperty(Stack[-4], Stack[-1])
0xc6e: Pop(0)
0xc6f: Pop(0); Push(Stack[-1] + Stack[-3]);
0xc70: @@ SetProperty(Stack[-5], Stack[-1])
0xc71: Pop(1)
0xc72: Return(); Pop(2)

0xc73: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xc74: @ GetPosition(Stack[-3])
0xc75: Pop(0)
0xc76: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xc77: Push(CvectorIndex(Stack[-2], 0))
0xc78: Push(CvectorIndex(Stack[-3], 2))
0xc79: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xc7a: Pop(2)
0xc7b: Stack[-8] = Stack[-1]
0xc7c: Return(); Pop(6)

0xc7d: PushEmpty(cvector, cvector)
0xc7e: @@ GetPosition(Stack[-1])
0xc7f: Pop(0)
0xc80: PushEmpty(bool, cvector)
0xc81: Stack[-1] = Stack[-3]
0xc82: Call2 0xc73

0xc83: Stack[-6] = Stack[-2]
0xc84: Pop(2)
0xc85: Return(); Pop(2)

0xc86: PushEmpty(bool, bool)
0xc87: @ IsLoaded(Stack[-1])
0xc88: Pop(0)
0xc89: Stack[-3] = Stack[-1]
0xc8a: Return(); Pop(2)

0xc8b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc8c: @@ GetPosition(Stack[-8])
0xc8d: Pop(0)
0xc8e: @@ GetEyesHeight(Stack[-9])
0xc8f: Pop(0)
0xc90: Push(CvectorIndex(Stack[-8], 1))
0xc91: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc92: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc93: @ GetPosition(Stack[-7])
0xc94: Pop(0)
0xc95: @ GetEyesHeight(Stack[-9])
0xc96: Pop(0)
0xc97: Push(CvectorIndex(Stack[-7], 1))
0xc98: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc99: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc9a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc9b: Push(CvectorIndex(Stack[-6], 1))
0xc9c: Stack[-1] = (int) 0
0xc9d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc9e: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc9f: Pop(1); Push(Sqrt(Stack[-1]))
0xca0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xca1: Stack[-5] = -Stack[-6]; Pop(0);
0xca2: Pop(0); Push(Stack[-6] * Stack[-19]);
0xca3: PushEmpty(cvector, cvector)
0xca4: Push(CVector(0.0, 1.0, 0.0))
0xca5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xca6: Call2 0xda5

0xca7: Pop(1)
0xca8: Push((int) 25)
0xca9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcaa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcab: Push(CVector(0.0, 10.0, 0.0))
0xcac: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xcad: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xcae: @ IsOverrideActive(Stack[-2])
0xcaf: Pop(0)
0xcb0: Push(Stack[-2])
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb4; Pop(1)

0xcb2: Stack[-21] = (bool) 0
0xcb3: Return(); Pop(18)

0xcb4: @ StopWorld()
0xcb5: Pop(0)
0xcb6: @ CameraTransit(Stack[-3], Stack[-5])
0xcb7: Pop(0)
0xcb8: Push(CvectorIndex(Stack[-4], 0))
0xcb9: Push(CvectorIndex(Stack[-5], 2))
0xcba: @ Rotate(Stack[-2], Stack[-1])
0xcbb: Pop(2)
0xcbc: PushEmpty(bool)
0xcbd: Call2 0xe56

0xcbe: Pop(0)
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcc0: GOTO 0xcc9

0xcc1: Push("head")
0xcc2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xcc3: Pop(1)
0xcc4: Push(Stack[-1])
0xcc5: IF (Stack[-1] == 0) GOTO 0xcc9; Pop(1)

0xcc6: Push("head")
0xcc7: @ LookAsyncCamera(Stack[-1])
0xcc8: Pop(1)
0xcc9: @ CameraWaitForPlayFinish()
0xcca: Pop(0)
0xccb: @ ResumeWorld()
0xccc: Pop(0)
0xccd: Stack[-21] = (bool) 1
0xcce: Return(); Pop(18)

0xccf: PushEmpty(bool, bool)
0xcd0: @ CameraSwitchToNormal()
0xcd1: Pop(0)
0xcd2: PushEmpty(bool)
0xcd3: Call2 0xe56

0xcd4: Pop(0)
0xcd5: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd6: GOTO 0xcdf

0xcd7: Push("head")
0xcd8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xcd9: Pop(1)
0xcda: Push(Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcdc: Push("head")
0xcdd: @ UnlookAsync(Stack[-1])
0xcde: Pop(1)
0xcdf: Return(); Pop(2)

0xce0: PushEmpty(int, int, int, int)
0xce1: Push("voice_common")
0xce2: @ GetVariable(Stack[-1], Stack[-3])
0xce3: Pop(1)
0xce4: Push(Stack[-2])
0xce5: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xce6: PushEmpty(bool, object)
0xce7: Stack[-1] = Stack[-7]
0xce8: Call2 0xd1a

0xce9: Pop(1)
0xcea: Pop(1); Push((bool) Stack[-1] == 0)
0xceb: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcec: PushEmpty(bool, object)
0xced: Stack[-1] = Stack[-7]
0xcee: Call2 0xd3f

0xcef: Pop(1)
0xcf0: Pop(1); Push((bool) Stack[-1] == 0)
0xcf1: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcf2: Stack[-6] = (bool) 0
0xcf3: Return(); Pop(4)

0xcf4: Push((int) 2)
0xcf5: @ irand(Stack[-2], Stack[-1])
0xcf6: Pop(1)
0xcf7: Push(Stack[-1])
0xcf8: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xcf9: Push("voice_common")
0xcfa: Push((int) 1)
0xcfb: Pop(1); Push(Stack[-4] + Stack[-1]);
0xcfc: Push((int) 3)
0xcfd: Pop(2); Push(Stack[-2] % Stack[-1]);
0xcfe: @ SetVariable(Stack[-2], Stack[-1])
0xcff: Pop(2)
0xd00: GOTO 0xd05

0xd01: Push("voice_common")
0xd02: Push((int) 0)
0xd03: @ SetVariable(Stack[-2], Stack[-1])
0xd04: Pop(2)
0xd05: GOTO 0xd18

0xd06: PushEmpty(bool, object)
0xd07: Stack[-1] = Stack[-7]
0xd08: Call2 0xd3f

0xd09: Pop(1)
0xd0a: Pop(1); Push((bool) Stack[-1] == 0)
0xd0b: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd0c: PushEmpty(bool, object)
0xd0d: Stack[-1] = Stack[-7]
0xd0e: Call2 0xd1a

0xd0f: Pop(1)
0xd10: Pop(1); Push((bool) Stack[-1] == 0)
0xd11: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd12: Stack[-6] = (bool) 0
0xd13: Return(); Pop(4)

0xd14: Push("voice_common")
0xd15: Push((int) 1)
0xd16: @ SetVariable(Stack[-2], Stack[-1])
0xd17: Pop(2)
0xd18: Stack[-6] = (bool) 1
0xd19: Return(); Pop(4)

0xd1a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd1b: Stack[-5] = "c"
0xd1c: Stack[-4] = (int) 0
0xd1d: Push((int) 1)
0xd1e: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd1f: Push((int) 1)
0xd20: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd21: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd22: @@ HasProperty(Stack[-1], Stack[-4])
0xd23: Pop(1)
0xd24: Pop(0); Push((bool) Stack[-3] == 0)
0xd25: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd26: GOTO 0xd2a

0xd27: Push((int) 1)
0xd28: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd29: GOTO 0xd1d

0xd2a: Pop(0); Push((bool) Stack[-4] == 0)
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2c: Stack[-12] = (bool) 0
0xd2d: Return(); Pop(10)

0xd2e: Stack[-2] = (int) 0
0xd2f: Push((int) 1)
0xd30: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd31: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd32: @ irand(Stack[-2], Stack[-4])
0xd33: Pop(0)
0xd34: Push((int) 1)
0xd35: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd36: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd37: @@ GetProperty(Stack[-1], Stack[-2])
0xd38: Pop(1)
0xd39: PushEmpty(bool, string)
0xd3a: Stack[-1] = Stack[-3]
0xd3b: Call2 0xd89

0xd3c: Stack[-14] = Stack[-2]
0xd3d: Pop(2)
0xd3e: Return(); Pop(10)

0xd3f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd40: Push("d")
0xd41: PushEmpty(int)
0xd42: Call2 0xe27

0xd43: Pop(0)
0xd44: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd45: Push("m")
0xd46: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xd47: Stack[-4] = (int) 0
0xd48: Push((int) 1)
0xd49: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd4a: Push((int) 1)
0xd4b: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd4c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd4d: @@ HasProperty(Stack[-1], Stack[-4])
0xd4e: Pop(1)
0xd4f: Pop(0); Push((bool) Stack[-3] == 0)
0xd50: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd51: GOTO 0xd55

0xd52: Push((int) 1)
0xd53: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd54: GOTO 0xd48

0xd55: Pop(0); Push((bool) Stack[-4] == 0)
0xd56: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd57: Stack[-12] = (bool) 0
0xd58: Return(); Pop(10)

0xd59: Stack[-2] = (int) 0
0xd5a: Push((int) 1)
0xd5b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd5d: @ irand(Stack[-2], Stack[-4])
0xd5e: Pop(0)
0xd5f: Push((int) 1)
0xd60: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd61: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd62: @@ GetProperty(Stack[-1], Stack[-2])
0xd63: Pop(1)
0xd64: PushEmpty(bool, string)
0xd65: Stack[-1] = Stack[-3]
0xd66: Call2 0xd89

0xd67: Stack[-14] = Stack[-2]
0xd68: Pop(2)
0xd69: Return(); Pop(10)

0xd6a: PushEmpty(bool, float, float, bool, float, float)
0xd6b: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd6c: Pop(0)
0xd6d: Push(Stack[-3])
0xd6e: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd6f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd70: Pop(0)
0xd71: Push((bool) 0)
0xd72: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd73: Pop(1)
0xd74: GOTO 0xd79

0xd75: Push("Can't find lsh animation : ")
0xd76: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd77: @ Trace(Stack[-1])
0xd78: Pop(1)
0xd79: Return(); Pop(6)

0xd7a: PushEmpty(bool, float, float, bool, float, float)
0xd7b: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd7c: Pop(0)
0xd7d: Push(Stack[-3])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd7f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd80: Pop(0)
0xd81: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd82: Pop(0)
0xd83: GOTO 0xd88

0xd84: Push("Can't find lsh animation : ")
0xd85: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd86: @ Trace(Stack[-1])
0xd87: Pop(1)
0xd88: Return(); Pop(6)

0xd89: PushEmpty(bool, bool)
0xd8a: PushEmpty(bool)
0xd8b: Call2 0xe56

0xd8c: Pop(0)
0xd8d: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd8e: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd8f: Pop(0)
0xd90: Push(Stack[-1])
0xd91: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd92: @ lshPlaySpeech(Stack[-3])
0xd93: Pop(0)
0xd94: Stack[-4] = (bool) 1
0xd95: Return(); Pop(2)

0xd96: Stack[-4] = (bool) 0
0xd97: Return(); Pop(2)

0xd98: PushEmpty(bool)
0xd99: Call2 0xe56

0xd9a: Pop(0)
0xd9b: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd9c: @ lshStopSpeech()
0xd9d: Pop(0)
0xd9e: Return(); Pop(0)

0xd9f: PushEmpty(object, object)
0xda0: @ self(Stack[-1])
0xda1: Pop(0)
0xda2: Stack[-3] = Stack[-1]
0xda3: Return(); Pop(2)

0xda4: Stack[-1] = 0
0xda5: PushEmpty(float, float)
0xda6: Pop(0); Push(Stack[-3] | Stack[-3]);
0xda7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xda8: Push((float)0.0)
0xda9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdaa: IF (Stack[-1] == 0) GOTO 0xdad; Pop(1)

0xdab: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xdac: Return(); Pop(2)

0xdad: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xdae: Return(); Pop(2)

0xdaf: PushEmpty()
0xdb0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdb2: Stack[-4] = Stack[-2]
0xdb3: Return(); Pop(0)

0xdb4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb8; Pop(1)

0xdb6: Stack[-4] = Stack[-1]
0xdb7: Return(); Pop(0)

0xdb8: Stack[-4] = Stack[-3]
0xdb9: Return(); Pop(0)

0xdba: PushEmpty(int, int)
0xdbb: @ GetVariable(Stack[-3], Stack[-1])
0xdbc: Pop(0)
0xdbd: Stack[-4] = Stack[-1]
0xdbe: Return(); Pop(2)

0xdbf: PushEmpty(object, object, object, object)
0xdc0: @ GetMainOutdoorScene(Stack[-2])
0xdc1: Pop(0)
0xdc2: Push(".bin")
0xdc3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdc4: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xdc5: Pop(1)
0xdc6: Stack[-6] = Stack[-1]
0xdc7: Return(); Pop(4)

0xdc8: Stack[-1] = 0
0xdc9: Stack[-2] = 0
0xdca: PushEmpty(object, object)
0xdcb: @ CreateIntVector(Stack[-1])
0xdcc: Pop(0)
0xdcd: @@ add(Stack[-4])
0xdce: Pop(0)
0xdcf: @@ add(Stack[-3])
0xdd0: Pop(0)
0xdd1: Push((int) 3)
0xdd2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xdd3: Pop(1)
0xdd4: Return(); Pop(2)

0xdd5: Stack[-1] = 0
0xdd6: PushEmpty(int, int)
0xdd7: PushEmpty(object, string, int)
0xdd8: Stack[-3] = Stack[-7]
0xdd9: Stack[-2] = "money"
0xdda: Stack[-1] = Stack[-6]
0xddb: Call2 0xc6c

0xddc: Pop(3)
0xddd: Push((int) 0)
0xdde: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde0: Push("Money")
0xde1: @ GetInvItemByName(Stack[-2], Stack[-1])
0xde2: Pop(1)
0xde3: PushEmpty(int, int)
0xde4: Stack[-2] = Stack[-3]
0xde5: Stack[-1] = Stack[-5]
0xde6: Call2 0xdca

0xde7: Pop(2)
0xde8: Return(); Pop(2)

0xde9: PushEmpty()
0xdea: Pop(0); Push((bool) Stack[-2] == 0)
0xdeb: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdec: Stack[-3] = (bool) 0
0xded: Return(); Pop(0)

0xdee: Push((int) 0)
0xdef: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf1: Push((int) 8)
0xdf2: @ SendWorldWndMessage(Stack[-1])
0xdf3: Pop(1)
0xdf4: GOTO 0xdfe

0xdf5: Push((int) 0)
0xdf6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfc; Pop(1)

0xdf8: Push((int) 9)
0xdf9: @ SendWorldWndMessage(Stack[-1])
0xdfa: Pop(1)
0xdfb: GOTO 0xdfe

0xdfc: Stack[-3] = (bool) 0
0xdfd: Return(); Pop(0)

0xdfe: PushEmpty(float)
0xdff: Stack[-1] = Stack[-2]
0xe00: Call2 0xe0c

0xe01: Pop(1)
0xe02: PushEmpty(bool, object, string, float, float, float)
0xe03: Stack[-5] = Stack[-8]
0xe04: Stack[-4] = "reputation"
0xe05: Stack[-3] = Stack[-7]
0xe06: Stack[-2] = (int) 0
0xe07: Stack[-1] = (int) 1
0xe08: Call2 0xc56

0xe09: Pop(6)
0xe0a: Stack[-3] = (bool) 1
0xe0b: Return(); Pop(0)

0xe0c: PushEmpty(object, object)
0xe0d: @ CreateFloatVector(Stack[-1])
0xe0e: Pop(0)
0xe0f: @@ add(Stack[-3])
0xe10: Pop(0)
0xe11: Push((int) 16)
0xe12: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe13: Pop(1)
0xe14: Return(); Pop(2)

0xe15: Stack[-1] = 0
0xe16: PushEmpty(object, object)
0xe17: @ FindActor(Stack[-1], Stack[-4])
0xe18: Pop(0)
0xe19: Pop(0); Push((bool) Stack[-1] == 0)
0xe1a: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe1b: Stack[-5] = (bool) 0
0xe1c: Return(); Pop(2)

0xe1d: @ Trigger(Stack[-1], Stack[-3])
0xe1e: Pop(0)
0xe1f: Stack[-5] = (bool) 1
0xe20: Return(); Pop(2)

0xe21: Stack[-1] = 0
0xe22: PushEmpty(float, float)
0xe23: @ GetGameTime(Stack[-1])
0xe24: Pop(0)
0xe25: Stack[-3] = Stack[-1]
0xe26: Return(); Pop(2)

0xe27: PushEmpty(float, float)
0xe28: @ GetGameTime(Stack[-1])
0xe29: Pop(0)
0xe2a: Push((int) 1)
0xe2b: PushEmpty(int)
0xe2c: Push((int) 24)
0xe2d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe2e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe2f: Return(); Pop(2)

0xe30: PushEmpty()
0xe31: PushEmpty(int)
0xe32: Call2 0xe27

0xe33: Pop(0)
0xe34: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe35: Return(); Pop(0)

0xe36: PushEmpty(string, string)
0xe37: Stack[-1] = "idle"
0xe38: Push(Stack[-3])
0xe39: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe3a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xe3b: Stack[-4] = Stack[-1]
0xe3c: Return(); Pop(2)

0xe3d: PushEmpty(int, bool, int, bool)
0xe3e: Stack[-2] = (int) 0
0xe3f: Push("all")
0xe40: PushEmpty(string, int)
0xe41: Stack[-1] = Stack[-5]
0xe42: Call2 0xe36

0xe43: Pop(1)
0xe44: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe45: Pop(2)
0xe46: Pop(0); Push((bool) Stack[-1] == 0)
0xe47: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe48: GOTO 0xe4c

0xe49: Push((int) 1)
0xe4a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe4b: GOTO 0xe3f

0xe4c: Stack[-5] = Stack[-2]
0xe4d: Return(); Pop(4)

0xe4e: Stack[-1] = (int) 515538
0xe4f: Return(); Pop(0)

0xe50: Stack[-1] = (int) 502863
0xe51: Return(); Pop(0)

0xe52: Stack[-1] = "ui/NPC_Kapella.png"
0xe53: Return(); Pop(0)

0xe54: Stack[-1] = "ui/NPC_Kapella_b.png"
0xe55: Return(); Pop(0)

0xe56: Stack[-1] = (bool) 1
0xe57: Return(); Pop(0)

0xe58: PushEmpty()
0xe59: Push("money 4000 is given")
0xe5a: @ Trace(Stack[-1])
0xe5b: Pop(1)
0xe5c: PushEmpty(object, int)
0xe5d: Stack[-2] = Stack[-4]
0xe5e: Stack[-1] = (int) 4000
0xe5f: Call2 0xdd6

0xe60: Pop(2)
0xe61: Return(); Pop(0)

0xe62: PushEmpty()
0xe63: PushEmpty(bool, object, float)
0xe64: Stack[-2] = Stack[-5]
0xe65: Stack[-1] = (float) 0.05
0xe66: Call2 0xde9

0xe67: Pop(3)
0xe68: Return(); Pop(0)

0xe69: PushEmpty(object, object)
0xe6a: Push("k3q01KapellaAboutHan")
0xe6b: Push((int) 1)
0xe6c: @ SetVariable(Stack[-2], Stack[-1])
0xe6d: Pop(2)
0xe6e: PushEmpty(object)
0xe6f: Call2 0x102a

0xe70: Stack[-2] = Stack[-1]
0xe71: Pop(1)
0xe72: Push("k3q01KapellaGotoAnna")
0xe73: Push("pt_map_anna")
0xe74: Push((int) 1)
0xe75: Push((int) 525456)
0xe76: PushEmpty(float)
0xe77: Call2 0xe22

0xe78: Pop(0)
0xe79: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe7a: Pop(5)
0xe7b: PushEmpty()
0xe7c: Call2 0xf99

0xe7d: Pop(0)
0xe7e: Return(); Pop(2)

0xe7f: Stack[-1] = 0
0xe80: PushEmpty(object, object)
0xe81: PushEmpty(object)
0xe82: Call2 0x102a

0xe83: Stack[-2] = Stack[-1]
0xe84: Pop(1)
0xe85: Push("k3q04KapellaGotoDanko")
0xe86: Push("pt_gmap_dt_house2_08")
0xe87: Push((int) 0)
0xe88: Push((int) 529819)
0xe89: PushEmpty(float)
0xe8a: Call2 0xe22

0xe8b: Pop(0)
0xe8c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe8d: Pop(5)
0xe8e: PushEmpty()
0xe8f: Call2 0xfa6

0xe90: Pop(0)
0xe91: PushEmpty()
0xe92: Call2 0xfb3

0xe93: Pop(0)
0xe94: PushEmpty(object, string)
0xe95: Stack[-1] = "quest_k3_04"
0xe96: Call2 0xdbf

0xe97: Pop(2)
0xe98: PushEmpty(bool, string, string)
0xe99: Stack[-2] = "quest_k3_04"
0xe9a: Stack[-1] = "place_burah_lopuh"
0xe9b: Call2 0xe16

0xe9c: Pop(3)
0xe9d: Return(); Pop(2)

0xe9e: Stack[-1] = 0
0xe9f: PushEmpty()
0xea0: Push("k7q01")
0xea1: Push((int) 8)
0xea2: @ SetVariable(Stack[-2], Stack[-1])
0xea3: Pop(2)
0xea4: PushEmpty()
0xea5: Call2 0xff4

0xea6: Pop(0)
0xea7: Return(); Pop(0)

0xea8: PushEmpty()
0xea9: Push("k6q02")
0xeaa: Push((int) 2)
0xeab: @ SetVariable(Stack[-2], Stack[-1])
0xeac: Pop(2)
0xead: PushEmpty()
0xeae: Call2 0xfe7

0xeaf: Pop(0)
0xeb0: Return(); Pop(0)

0xeb1: PushEmpty()
0xeb2: Push("ook3Kapella1")
0xeb3: Push((int) 1)
0xeb4: @ SetVariable(Stack[-2], Stack[-1])
0xeb5: Pop(2)
0xeb6: Return(); Pop(0)

0xeb7: PushEmpty()
0xeb8: Push("playsound")
0xeb9: Push("givemoney")
0xeba: @ TriggerWorld(Stack[-2], Stack[-1])
0xebb: Pop(2)
0xebc: Return(); Pop(0)

0xebd: PushEmpty()
0xebe: Push("ook5Kapella1")
0xebf: Push((int) 1)
0xec0: @ SetVariable(Stack[-2], Stack[-1])
0xec1: Pop(2)
0xec2: Return(); Pop(0)

0xec3: PushEmpty(object, object)
0xec4: Push("k5q04")
0xec5: Push((int) 1)
0xec6: @ SetVariable(Stack[-2], Stack[-1])
0xec7: Pop(2)
0xec8: PushEmpty(object)
0xec9: Call2 0x102a

0xeca: Stack[-2] = Stack[-1]
0xecb: Pop(1)
0xecc: Push("k5q04KapellaGotoMaria")
0xecd: Push("pt_map_maria")
0xece: Push((int) 0)
0xecf: Push((int) 515282)
0xed0: PushEmpty(float)
0xed1: Call2 0xe22

0xed2: Pop(0)
0xed3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xed4: Pop(5)
0xed5: PushEmpty()
0xed6: Call2 0xfc0

0xed7: Pop(0)
0xed8: PushEmpty()
0xed9: Call2 0xfda

0xeda: Pop(0)
0xedb: Return(); Pop(2)

0xedc: Stack[-1] = 0
0xedd: PushEmpty()
0xede: PushEmpty()
0xedf: Call2 0xfcd

0xee0: Pop(0)
0xee1: PushEmpty(bool, string, string)
0xee2: Stack[-2] = "quest_k5_04"
0xee3: Stack[-1] = "completed"
0xee4: Call2 0xe16

0xee5: Pop(3)
0xee6: Return(); Pop(0)

0xee7: PushEmpty()
0xee8: Push("k5Kapellavisit")
0xee9: Push((int) 1)
0xeea: @ SetVariable(Stack[-2], Stack[-1])
0xeeb: Pop(2)
0xeec: Return(); Pop(0)

0xeed: PushEmpty()
0xeee: PushEmpty(bool, object, float)
0xeef: Stack[-2] = Stack[-5]
0xef0: Stack[-1] = (float) 0.02
0xef1: Call2 0xde9

0xef2: Pop(3)
0xef3: Return(); Pop(0)

0xef4: PushEmpty()
0xef5: Push("ook3Kapella2")
0xef6: Push((int) 1)
0xef7: @ SetVariable(Stack[-2], Stack[-1])
0xef8: Pop(2)
0xef9: Return(); Pop(0)

0xefa: PushEmpty()
0xefb: Push("money 5000 is given")
0xefc: @ Trace(Stack[-1])
0xefd: Pop(1)
0xefe: PushEmpty(object, int)
0xeff: Stack[-2] = Stack[-4]
0xf00: Stack[-1] = (int) 5000
0xf01: Call2 0xdd6

0xf02: Pop(2)
0xf03: Return(); Pop(0)

0xf04: PushEmpty()
0xf05: Push("playsound")
0xf06: Push("mapmark")
0xf07: @ TriggerWorld(Stack[-2], Stack[-1])
0xf08: Pop(2)
0xf09: Return(); Pop(0)

0xf0a: PushEmpty()
0xf0b: PushEmpty(bool, object, float)
0xf0c: Stack[-2] = Stack[-5]
0xf0d: Stack[-1] = (float) 0.1
0xf0e: Call2 0xde9

0xf0f: Pop(3)
0xf10: Return(); Pop(0)

0xf11: PushEmpty()
0xf12: PushEmpty(object, string, float)
0xf13: PushEmpty(object)
0xf14: Call2 0x102a

0xf15: Stack[-4] = Stack[-1]
0xf16: Pop(1)
0xf17: Stack[-2] = "pt_map_maria"
0xf18: Stack[-1] = (int) 2
0xf19: Call2 0x103b

0xf1a: Pop(3)
0xf1b: PushEmpty(object)
0xf1c: Call2 0x102a

0xf1d: Pop(0)
0xf1e: @@ ShowMap(Stack[-1])
0xf1f: Pop(1)
0xf20: Return(); Pop(0)

0xf21: PushEmpty()
0xf22: PushEmpty(int, string)
0xf23: Stack[-1] = "k3q01"
0xf24: Call2 0xdba

0xf25: Pop(1)
0xf26: Push((int) 2)
0xf27: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf28: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf29: Stack[-2] = (bool) 1
0xf2a: Return(); Pop(0)

0xf2b: Stack[-2] = (bool) 0
0xf2c: Return(); Pop(0)

0xf2d: PushEmpty()
0xf2e: PushEmpty(int, string)
0xf2f: Stack[-1] = "k7q01"
0xf30: Call2 0xdba

0xf31: Pop(1)
0xf32: Push((int) 7)
0xf33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf37; Pop(1)

0xf35: Stack[-2] = (bool) 1
0xf36: Return(); Pop(0)

0xf37: Stack[-2] = (bool) 0
0xf38: Return(); Pop(0)

0xf39: PushEmpty()
0xf3a: PushEmpty(int, string)
0xf3b: Stack[-1] = "k6q02"
0xf3c: Call2 0xdba

0xf3d: Pop(1)
0xf3e: Push((int) 1)
0xf3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf40: IF (Stack[-1] == 0) GOTO 0xf43; Pop(1)

0xf41: Stack[-2] = (bool) 1
0xf42: Return(); Pop(0)

0xf43: Stack[-2] = (bool) 0
0xf44: Return(); Pop(0)

0xf45: PushEmpty()
0xf46: PushEmpty(int, string)
0xf47: Stack[-1] = "ook3Kapella1"
0xf48: Call2 0xdba

0xf49: Pop(1)
0xf4a: Push((int) 0)
0xf4b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf4c: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4d: Stack[-2] = (bool) 1
0xf4e: Return(); Pop(0)

0xf4f: Stack[-2] = (bool) 0
0xf50: Return(); Pop(0)

0xf51: PushEmpty()
0xf52: PushEmpty(int, string)
0xf53: Stack[-1] = "k3q04"
0xf54: Call2 0xdba

0xf55: Pop(1)
0xf56: Push((int) 0)
0xf57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf58: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf59: Stack[-2] = (bool) 1
0xf5a: Return(); Pop(0)

0xf5b: Stack[-2] = (bool) 0
0xf5c: Return(); Pop(0)

0xf5d: PushEmpty()
0xf5e: PushEmpty(int, string)
0xf5f: Stack[-1] = "ook5Kapella1"
0xf60: Call2 0xdba

0xf61: Pop(1)
0xf62: Push((int) 0)
0xf63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf64: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf65: Stack[-2] = (bool) 1
0xf66: Return(); Pop(0)

0xf67: Stack[-2] = (bool) 0
0xf68: Return(); Pop(0)

0xf69: PushEmpty()
0xf6a: PushEmpty(int, string)
0xf6b: Stack[-1] = "k5q04SoborVisit"
0xf6c: Call2 0xdba

0xf6d: Pop(1)
0xf6e: Push((int) 0)
0xf6f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xf70: IF (Stack[-1] == 0) GOTO 0xf73; Pop(1)

0xf71: Stack[-2] = (bool) 1
0xf72: Return(); Pop(0)

0xf73: Stack[-2] = (bool) 0
0xf74: Return(); Pop(0)

0xf75: PushEmpty()
0xf76: PushEmpty(int, string)
0xf77: Stack[-1] = "k5q04"
0xf78: Call2 0xdba

0xf79: Pop(1)
0xf7a: Push((int) 1000)
0xf7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf7c: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf7d: Stack[-2] = (bool) 1
0xf7e: Return(); Pop(0)

0xf7f: Stack[-2] = (bool) 0
0xf80: Return(); Pop(0)

0xf81: PushEmpty()
0xf82: PushEmpty(int, string)
0xf83: Stack[-1] = "k3q04SawDanko"
0xf84: Call2 0xdba

0xf85: Pop(1)
0xf86: Push((int) 0)
0xf87: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf89: Stack[-2] = (bool) 1
0xf8a: Return(); Pop(0)

0xf8b: Stack[-2] = (bool) 0
0xf8c: Return(); Pop(0)

0xf8d: PushEmpty()
0xf8e: PushEmpty(int, string)
0xf8f: Stack[-1] = "ook3Kapella2"
0xf90: Call2 0xdba

0xf91: Pop(1)
0xf92: Push((int) 0)
0xf93: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf94: IF (Stack[-1] == 0) GOTO 0xf97; Pop(1)

0xf95: Stack[-2] = (bool) 1
0xf96: Return(); Pop(0)

0xf97: Stack[-2] = (bool) 0
0xf98: Return(); Pop(0)

0xf99: PushEmpty(object, object)
0xf9a: Push((int) 340)
0xf9b: Push((int) 1)
0xf9c: Push((int) 525449)
0xf9d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf9e: Pop(3)
0xf9f: PushEmpty(bool, object, int)
0xfa0: Stack[-2] = Stack[-4]
0xfa1: Stack[-1] = (int) 337
0xfa2: Call2 0x100e

0xfa3: Pop(3)
0xfa4: Return(); Pop(2)

0xfa5: Stack[-1] = 0
0xfa6: PushEmpty(object, object)
0xfa7: Push((int) 354)
0xfa8: Push((int) 2)
0xfa9: Push((int) 525654)
0xfaa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfab: Pop(3)
0xfac: PushEmpty(bool, object, int)
0xfad: Stack[-2] = Stack[-4]
0xfae: Stack[-1] = (int) -1
0xfaf: Call2 0x100e

0xfb0: Pop(3)
0xfb1: Return(); Pop(2)

0xfb2: Stack[-1] = 0
0xfb3: PushEmpty(object, object)
0xfb4: Push((int) 355)
0xfb5: Push((int) 2)
0xfb6: Push((int) 525655)
0xfb7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfb8: Pop(3)
0xfb9: PushEmpty(bool, object, int)
0xfba: Stack[-2] = Stack[-4]
0xfbb: Stack[-1] = (int) 354
0xfbc: Call2 0x100e

0xfbd: Pop(3)
0xfbe: Return(); Pop(2)

0xfbf: Stack[-1] = 0
0xfc0: PushEmpty(object, object)
0xfc1: Push((int) 740)
0xfc2: Push((int) 2)
0xfc3: Push((int) 539457)
0xfc4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfc5: Pop(3)
0xfc6: PushEmpty(bool, object, int)
0xfc7: Stack[-2] = Stack[-4]
0xfc8: Stack[-1] = (int) -1
0xfc9: Call2 0x100e

0xfca: Pop(3)
0xfcb: Return(); Pop(2)

0xfcc: Stack[-1] = 0
0xfcd: PushEmpty(object, object)
0xfce: Push((int) 747)
0xfcf: Push((int) 2)
0xfd0: Push((int) 539464)
0xfd1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfd2: Pop(3)
0xfd3: PushEmpty(bool, object, int)
0xfd4: Stack[-2] = Stack[-4]
0xfd5: Stack[-1] = (int) 740
0xfd6: Call2 0x100e

0xfd7: Pop(3)
0xfd8: Return(); Pop(2)

0xfd9: Stack[-1] = 0
0xfda: PushEmpty(object, object)
0xfdb: Push((int) 741)
0xfdc: Push((int) 2)
0xfdd: Push((int) 539458)
0xfde: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfdf: Pop(3)
0xfe0: PushEmpty(bool, object, int)
0xfe1: Stack[-2] = Stack[-4]
0xfe2: Stack[-1] = (int) 740
0xfe3: Call2 0x100e

0xfe4: Pop(3)
0xfe5: Return(); Pop(2)

0xfe6: Stack[-1] = 0
0xfe7: PushEmpty(object, object)
0xfe8: Push((int) 502)
0xfe9: Push((int) 2)
0xfea: Push((int) 528768)
0xfeb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfec: Pop(3)
0xfed: PushEmpty(bool, object, int)
0xfee: Stack[-2] = Stack[-4]
0xfef: Stack[-1] = (int) 500
0xff0: Call2 0x100e

0xff1: Pop(3)
0xff2: Return(); Pop(2)

0xff3: Stack[-1] = 0
0xff4: PushEmpty(object, object)
0xff5: Push((int) 426)
0xff6: Push((int) 1)
0xff7: Push((int) 526225)
0xff8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xff9: Pop(3)
0xffa: PushEmpty(bool, object, int)
0xffb: Stack[-2] = Stack[-4]
0xffc: Stack[-1] = (int) 416
0xffd: Call2 0x100e

0xffe: Pop(3)
0xfff: Return(); Pop(2)

0x1000: Stack[-1] = 0
0x1001: PushEmpty(object, object)
0x1002: @ GetDiaryRoot(Stack[-1])
0x1003: Pop(0)
0x1004: Pop(0); Push((bool) Stack[-1] == 0)
0x1005: IF (Stack[-1] == 0) GOTO 0x100b; Pop(1)

0x1006: Push("Can't retrieve diary root")
0x1007: @ Trace(Stack[-1])
0x1008: Pop(1)
0x1009: Stack[-3] = (bool) 0
0x100a: Return(); Pop(2)

0x100b: Stack[-3] = Stack[-1]
0x100c: Return(); Pop(2)

0x100d: Stack[-1] = 0
0x100e: PushEmpty(object, object, int, object, object, int)
0x100f: PushEmpty(object)
0x1010: Call2 0x1001

0x1011: Stack[-4] = Stack[-1]
0x1012: Pop(1)
0x1013: @@ Find(Stack[-7], Stack[-2])
0x1014: Pop(0)
0x1015: Pop(0); Push((bool) Stack[-2] == 0)
0x1016: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x1017: Push("Can't find diary parent with id: ")
0x1018: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1019: @ Trace(Stack[-1])
0x101a: Pop(1)
0x101b: Stack[-9] = (bool) 0
0x101c: Return(); Pop(6)

0x101d: @@ AddChild(Stack[-8])
0x101e: Pop(0)
0x101f: Push((int) 7)
0x1020: @ SendWorldWndMessage(Stack[-1])
0x1021: Pop(1)
0x1022: @@ GetCategory(Stack[-1])
0x1023: Pop(0)
0x1024: @ SetDiarySection(Stack[-1])
0x1025: Pop(0)
0x1026: Stack[-9] = (bool) 0
0x1027: Return(); Pop(6)

0x1028: Stack[-2] = 0
0x1029: Stack[-3] = 0
0x102a: PushEmpty(object, object, object, object)
0x102b: @ GetMainOutdoorScene(Stack[-2])
0x102c: Pop(0)
0x102d: Pop(0); Push((bool) Stack[-2] == 0)
0x102e: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x102f: Push("Can't find main outdoor scene")
0x1030: @ Trace(Stack[-1])
0x1031: Pop(1)
0x1032: Stack[-1] = 0
0x1033: Stack[-5] = Stack[-1]
0x1034: Return(); Pop(4)

0x1035: @@ GetMap(Stack[-1])
0x1036: Pop(0)
0x1037: Stack[-5] = Stack[-1]
0x1038: Return(); Pop(4)

0x1039: Stack[-1] = 0
0x103a: Stack[-2] = 0
0x103b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x103c: @ GetMainOutdoorScene(Stack[-2])
0x103d: Pop(0)
0x103e: Pop(0); Push((bool) Stack[-2] == 0)
0x103f: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x1040: Push("Can't find main outdoor scene")
0x1041: @ Trace(Stack[-1])
0x1042: Pop(1)
0x1043: Return(); Pop(8)

0x1044: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1045: Pop(0)
0x1046: Pop(0); Push((bool) Stack[-1] == 0)
0x1047: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x1048: Push("Warning: outdoor scene locator ")
0x1049: Pop(1); Push(Stack[-1] + Stack[-11]);
0x104a: Push(" doesnt exist")
0x104b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x104c: @ Trace(Stack[-1])
0x104d: Pop(1)
0x104e: @@ GetMap(Stack[-11])
0x104f: Pop(0)
0x1050: Pop(0); Push((bool) Stack[-11] == 0)
0x1051: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1052: Push("Can't find map")
0x1053: @ Trace(Stack[-1])
0x1054: Pop(1)
0x1055: Return(); Pop(8)

0x1056: Push(CvectorIndex(Stack[-4], 0))
0x1057: Push(CvectorIndex(Stack[-5], 2))
0x1058: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1059: Pop(2)
0x105a: Return(); Pop(8)

0x105b: Stack[-2] = 0
0x105c: PushEmpty(int, int)
0x105d: Push("branch")
0x105e: @ GetVariable(Stack[-1], Stack[-2])
0x105f: Pop(1)
0x1060: Push((int) 0)
0x1061: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1062: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x1063: Stack[-3] = (int) 1
0x1064: Return(); Pop(2)

0x1065: GOTO 0x106b

0x1066: Push((int) 1)
0x1067: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1068: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x1069: Stack[-3] = (int) 2
0x106a: Return(); Pop(2)

0x106b: Stack[-3] = (int) 3
0x106c: Return(); Pop(2)

0x106d: PushEmpty()
0x106e: Push(GlobalVars[1])
0x106f: Pop(1); Push((bool) Stack[-1] == 0)
0x1070: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x1071: PushEmpty(int, object)
0x1072: Stack[-1] = Stack[-3]
0x1073: Push(-2, 1); TaskCall(2)
0x1074: Call2 0x2f5

0x1075: Pop(-2, 1); TaskReturn
0x1076: Pop(2)
0x1077: Push(GlobalVars[1])
0x1078: Stack[-1] = (bool) 1
0x1079: GlobalVars[1] = Stack[-1]; Pop(1)
0x107a: PushEmpty(bool, int)
0x107b: Stack[-1] = (int) 3
0x107c: Call2 0xe30

0x107d: Pop(1)
0x107e: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x107f: PushEmpty(int, object)
0x1080: Stack[-1] = Stack[-3]
0x1081: Push(-2, 1); TaskCall(0)
0x1082: Call2 0x0

0x1083: Pop(-2, 1); TaskReturn
0x1084: Pop(2)
0x1085: Return(); Pop(0)

0x1086: PushEmpty(bool, int)
0x1087: Stack[-1] = (int) 5
0x1088: Call2 0xe30

0x1089: Pop(1)
0x108a: IF (Stack[-1] == 0) GOTO 0x1092; Pop(1)

0x108b: PushEmpty(int, object)
0x108c: Stack[-1] = Stack[-3]
0x108d: Push(-2, 1); TaskCall(10)
0x108e: Call2 0x802

0x108f: Pop(-2, 1); TaskReturn
0x1090: Pop(2)
0x1091: Return(); Pop(0)

0x1092: PushEmpty(bool, int)
0x1093: Stack[-1] = (int) 6
0x1094: Call2 0xe30

0x1095: Pop(1)
0x1096: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x1097: PushEmpty(int, object)
0x1098: Stack[-1] = Stack[-3]
0x1099: Push(-2, 1); TaskCall(6)
0x109a: Call2 0x52f

0x109b: Pop(-2, 1); TaskReturn
0x109c: Pop(2)
0x109d: Return(); Pop(0)

0x109e: PushEmpty(bool, int)
0x109f: Stack[-1] = (int) 7
0x10a0: Call2 0xe30

0x10a1: Pop(1)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a3: PushEmpty(int, object)
0x10a4: Stack[-1] = Stack[-3]
0x10a5: Push(-2, 1); TaskCall(4)
0x10a6: Call2 0x417

0x10a7: Pop(-2, 1); TaskReturn
0x10a8: Pop(2)
0x10a9: Return(); Pop(0)

0x10aa: PushEmpty(bool, int)
0x10ab: Stack[-1] = (int) 12
0x10ac: Call2 0xe30

0x10ad: Pop(1)
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10af: PushEmpty(int, object)
0x10b0: Stack[-1] = Stack[-3]
0x10b1: Push(-2, 1); TaskCall(8)
0x10b2: Call2 0x6ff

0x10b3: Pop(-2, 1); TaskReturn
0x10b4: Pop(2)
0x10b5: Return(); Pop(0)

0x10b6: PushEmpty(int, object)
0x10b7: Stack[-1] = Stack[-3]
0x10b8: Push(-2, 1); TaskCall(12)
0x10b9: Call2 0xa74

0x10ba: Pop(-2, 1); TaskReturn
0x10bb: Pop(2)
0x10bc: Return(); Pop(0)

