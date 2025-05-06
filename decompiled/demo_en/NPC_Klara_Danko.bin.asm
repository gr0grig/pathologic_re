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
	Menace
	Smile
	Untrust
	Sorrow
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
	add
	money
	Money
	reputation
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png
	ook6Danko1
	quest_k6_01
	teleport
	completed
	ook7Danko1
	money1000 is given
	playsound
	givemoney
	k12q01DankoInSobor
	k12q01_Danko
	ook12Danko1
	k5q04
	k5q04_bring_water
	k12DankoVisit
	game_final
	k7q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	vol_
	size
	get
	mt_danko

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

RunOp = 0x8b6
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x339 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4a7 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x72f Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x88c Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x8ff Vars = (int)
		EVENT_6 Op = 0x925 Vars = ()
		EVENT_5 Op = 0x934 Vars = ()
		EVENT_45 Op = 0x941 Vars = (bool)
		EVENT_0 Op = 0x94d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x9ff

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xbb4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xbb2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xbb6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xbb8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xce8

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
0x31: Call2 0xb13

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa54

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
0x48: Call2 0xa43

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 525474)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525475)
0x61: Push((int) 27554)
0x62: Push((int) 26831)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 526277)
0x66: Push((int) 27557)
0x67: Push((int) 27553)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xbba

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xade

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0xbba

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0xaee

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xb0c

0xa6: Pop(0)
0xa7: Push((int) 26830)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525474)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525475)
0xb4: Push((int) 27554)
0xb5: Push((int) 26831)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 526277)
0xb9: Push((int) 27557)
0xba: Push((int) 27553)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 27554)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 526278)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 526279)
0xcb: Push((int) 27557)
0xcc: Push((int) 27555)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 526280)
0xd0: Push((int) 27557)
0xd1: Push((int) 27556)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 27557)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 526281)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 526282)
0xe2: Push((int) -1)
0xe3: Push((int) 27560)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 526283)
0xe7: Push((int) -1)
0xe8: Push((int) 27561)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed: PushEmpty(bool)
0xee: Call2 0xbba

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: @ lshStopAnimation()
0xf2: Pop(0)
0xf3: GOTO 0xf6

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: GOTO 0xa2

0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 70.0
0xfe: Call2 0x9ff

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0xbb4

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0xbb2

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0xbb6

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0xbb8

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0xce8

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: PushEmpty(object)
0x12a: Call2 0xb13

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0xa54

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[-11]
0x131: Stack[-1] = Stack[-6]
0x132: Push(-2, 4); TaskCall(3)
0x133: Call2 0x14a

0x134: Pop(-2, 4); TaskReturn
0x135: Pop(2)
0x136: @@ IsDialogEnd(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: @ sync()
0x13b: Pop(0)
0x13c: @@ IsDialogEnd(Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x138

0x13f: PushEmpty(object)
0x140: Stack[-1] = Stack[-10]
0x141: Call2 0xa43

0x142: Pop(1)
0x143: @ StopDialog(Stack[-4])
0x144: Pop(0)
0x145: @@ GetReturnValue(Stack[-2])
0x146: Pop(0)
0x147: Stack[-10] = Stack[-2]
0x148: Return(); Pop(8)

0x149: Stack[-4] = 0
0x14a: PushEmpty()
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14e: Push((int) 1)
0x14f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0xc3d

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x155: PushEmpty(object, object)
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0xbbc

0x159: Pop(2)
0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Menace"
0x15c: Call2 0x1a2

0x15d: Pop(1)
0x15e: Push((int) 526097)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 526098)
0x164: Push((int) 27386)
0x165: Push((int) 27384)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 526099)
0x169: Push((int) 27386)
0x16a: Push((int) 27385)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x184

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Menace"
0x170: Call2 0x1a2

0x171: Pop(1)
0x172: Push((int) 526107)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 526108)
0x178: Push((int) -1)
0x179: Push((int) 27395)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 528917)
0x17d: Push((int) -1)
0x17e: Push((int) 30347)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: GOTO 0x184

0x182: Return(); Pop(0)

0x183: GOTO 0x14e

0x184: PushEmpty(bool)
0x185: Call2 0xbba

0x186: Pop(0)
0x187: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x188: @ lshWaitForAnimEnd()
0x189: Pop(0)
0x18a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x192

0x18d: PushEmpty(string)
0x18e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18f: Call2 0xade

0x190: Pop(1)
0x191: GOTO 0x188

0x192: GOTO 0x1a1

0x193: Push("all")
0x194: Push("idle")
0x195: @ PlayAnimation(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: @ WaitForAnimEnd()
0x198: Pop(0)
0x199: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: GOTO 0x1a1

0x19c: Push("all")
0x19d: Push("idle")
0x19e: @ PlayAnimation(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: GOTO 0x197

0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: PushEmpty(bool)
0x1a4: Call2 0xbba

0x1a5: Pop(0)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(0)

0x1a9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(string, bool)
0x1ad: Stack[-2] = Stack[-3]
0x1ae: Push("")
0x1af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-1] = (bool) 0
0x1b2: GOTO 0x1b4

0x1b3: Stack[-1] = (bool) 1
0x1b4: Call2 0xaee

0x1b5: Pop(2)
0x1b6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Push((int) 1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x1bb: PushEmpty()
0x1bc: Call2 0xb0c

0x1bd: Pop(0)
0x1be: Push((int) 27393)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0xbc2

0x1c5: Pop(2)
0x1c6: PushEmpty(object, object)
0x1c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c9: Call2 0xbc9

0x1ca: Pop(2)
0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0xc20

0x1cf: Pop(2)
0x1d0: Push((int) 27390)
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d3: PushEmpty(object, object)
0x1d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d6: Call2 0xbc2

0x1d7: Pop(2)
0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0xbc9

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0xc20

0x1e1: Pop(2)
0x1e2: Push((int) 27383)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0xc3d

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0xbbc

0x1ee: Pop(2)
0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Menace"
0x1f1: Call2 0x1a2

0x1f2: Pop(1)
0x1f3: Push((int) 526097)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 526098)
0x1f9: Push((int) 27386)
0x1fa: Push((int) 27384)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Push((int) 526099)
0x1fe: Push((int) 27386)
0x1ff: Push((int) 27385)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Menace"
0x205: Call2 0x1a2

0x206: Pop(1)
0x207: Push((int) 526107)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 526108)
0x20d: Push((int) -1)
0x20e: Push((int) 27395)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Push((int) 528917)
0x212: Push((int) -1)
0x213: Push((int) 30347)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 27386)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Smile"
0x21c: Call2 0x1a2

0x21d: Pop(1)
0x21e: Push((int) 526100)
0x21f: @@ SetMessage(Stack[-1])
0x220: Pop(1)
0x221: @@ ClearReplies()
0x222: Pop(0)
0x223: Push((int) 526101)
0x224: Push((int) 27388)
0x225: Push((int) 27387)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Push((int) 541281)
0x229: Push((int) 43414)
0x22a: Push((int) 43413)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 43414)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Untrust"
0x233: Call2 0x1a2

0x234: Pop(1)
0x235: Push((int) 541282)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 541283)
0x23b: Push((int) 27392)
0x23c: Push((int) 43415)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 27388)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Sorrow"
0x245: Call2 0x1a2

0x246: Pop(1)
0x247: Push((int) 526102)
0x248: @@ SetMessage(Stack[-1])
0x249: Pop(1)
0x24a: @@ ClearReplies()
0x24b: Pop(0)
0x24c: Push((int) 526103)
0x24d: Push((int) 27392)
0x24e: Push((int) 27389)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Push((int) 526104)
0x252: Push((int) -1)
0x253: Push((int) 27390)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Push((int) 27392)
0x258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Smile"
0x25c: Call2 0x1a2

0x25d: Pop(1)
0x25e: Push((int) 526105)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 526106)
0x264: Push((int) -1)
0x265: Push((int) 27393)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Return(); Pop(0)

0x269: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26a: PushEmpty(bool)
0x26b: Call2 0xbba

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26e: @ lshStopAnimation()
0x26f: Pop(0)
0x270: GOTO 0x273

0x271: @ StopAnimation()
0x272: Pop(0)
0x273: Return(); Pop(0)

0x274: GOTO 0x1b9

0x275: Return(); Pop(0)

0x276: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x277: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x278: PushEmpty(bool, object, float)
0x279: Stack[-2] = Stack[-12]
0x27a: Stack[-1] = (float) 70.0
0x27b: Call2 0x9ff

0x27c: Pop(2)
0x27d: Pop(1); Push((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-10] = (int) -2
0x280: Return(); Pop(8)

0x281: @ CreateDialog(Stack[-4])
0x282: Pop(0)
0x283: PushEmpty(int)
0x284: Call2 0xbb4

0x285: Pop(0)
0x286: @@ SetNPCName(Stack[-1])
0x287: Pop(1)
0x288: PushEmpty(int)
0x289: Call2 0xbb2

0x28a: Pop(0)
0x28b: @@ SetNPCDescription(Stack[-1])
0x28c: Pop(1)
0x28d: PushEmpty(string)
0x28e: Call2 0xbb6

0x28f: Pop(0)
0x290: @@ SetPhoto(Stack[-1])
0x291: Pop(1)
0x292: PushEmpty(string)
0x293: Call2 0xbb8

0x294: Pop(0)
0x295: @@ SetPhoto2(Stack[-1])
0x296: Pop(1)
0x297: PushEmpty(int)
0x298: Call2 0xce8

0x299: Pop(0)
0x29a: @@ SetPlayerName(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[-2] = (int) -1
0x29d: @ IsOverrideActive(Stack[-3])
0x29e: Pop(0)
0x29f: Push(Stack[-3])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-10] = (int) -2
0x2a2: Return(); Pop(8)

0x2a3: @ DoDialog(Stack[-4])
0x2a4: Pop(0)
0x2a5: PushEmpty(bool, object)
0x2a6: PushEmpty(object)
0x2a7: Call2 0xb13

0x2a8: Stack[-2] = Stack[-1]
0x2a9: Pop(1)
0x2aa: Call2 0xa54

0x2ab: Pop(2)
0x2ac: PushEmpty(object, object)
0x2ad: Stack[-2] = Stack[-11]
0x2ae: Stack[-1] = Stack[-6]
0x2af: Push(-2, 4); TaskCall(5)
0x2b0: Call2 0x2c7

0x2b1: Pop(-2, 4); TaskReturn
0x2b2: Pop(2)
0x2b3: @@ IsDialogEnd(Stack[-1])
0x2b4: Pop(0)
0x2b5: Pop(0); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b7: @ sync()
0x2b8: Pop(0)
0x2b9: @@ IsDialogEnd(Stack[-1])
0x2ba: Pop(0)
0x2bb: GOTO 0x2b5

0x2bc: PushEmpty(object)
0x2bd: Stack[-1] = Stack[-10]
0x2be: Call2 0xa43

0x2bf: Pop(1)
0x2c0: @ StopDialog(Stack[-4])
0x2c1: Pop(0)
0x2c2: @@ GetReturnValue(Stack[-2])
0x2c3: Pop(0)
0x2c4: Stack[-10] = Stack[-2]
0x2c5: Return(); Pop(8)

0x2c6: Stack[-4] = 0
0x2c7: PushEmpty()
0x2c8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2c9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2ca: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2cb: Push((int) 1)
0x2cc: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2cd: PushEmpty(bool)
0x2ce: Stack[-1] = (bool) 0
0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Call2 0xc49

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d6: Call2 0xc55

0x2d7: Pop(1)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Stack[-1] = (bool) 1
0x2da: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2db: PushEmpty(object, object)
0x2dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2de: Call2 0xbd3

0x2df: Pop(2)
0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral"
0x2e2: Call2 0x323

0x2e3: Pop(1)
0x2e4: Push((int) 526118)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 528252)
0x2ea: Push((int) 29614)
0x2eb: Push((int) 29613)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Push((int) 528256)
0x2ef: Push((int) 29614)
0x2f0: Push((int) 29617)
0x2f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(3)
0x2f3: GOTO 0x305

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Sorrow"
0x2f6: Call2 0x323

0x2f7: Pop(1)
0x2f8: Push((int) 526120)
0x2f9: @@ SetMessage(Stack[-1])
0x2fa: Pop(1)
0x2fb: @@ ClearReplies()
0x2fc: Pop(0)
0x2fd: Push((int) 526121)
0x2fe: Push((int) -1)
0x2ff: Push((int) 27400)
0x300: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(3)
0x302: GOTO 0x305

0x303: Return(); Pop(0)

0x304: GOTO 0x2cb

0x305: PushEmpty(bool)
0x306: Call2 0xbba

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x309: @ lshWaitForAnimEnd()
0x30a: Pop(0)
0x30b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x313

0x30e: PushEmpty(string)
0x30f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x310: Call2 0xade

0x311: Pop(1)
0x312: GOTO 0x309

0x313: GOTO 0x322

0x314: Push("all")
0x315: Push("idle")
0x316: @ PlayAnimation(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: @ WaitForAnimEnd()
0x319: Pop(0)
0x31a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: GOTO 0x322

0x31d: Push("all")
0x31e: Push("idle")
0x31f: @ PlayAnimation(Stack[-2], Stack[-1])
0x320: Pop(2)
0x321: GOTO 0x318

0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: PushEmpty(bool)
0x325: Call2 0xbba

0x326: Pop(0)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Return(); Pop(0)

0x32a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Return(); Pop(0)

0x32d: PushEmpty(string, bool)
0x32e: Stack[-2] = Stack[-3]
0x32f: Push("")
0x330: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-1] = (bool) 0
0x333: GOTO 0x335

0x334: Stack[-1] = (bool) 1
0x335: Call2 0xaee

0x336: Pop(2)
0x337: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Push((int) 1)
0x33b: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x33c: PushEmpty()
0x33d: Call2 0xb0c

0x33e: Pop(0)
0x33f: Push((int) 27398)
0x340: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x342: PushEmpty(object, object)
0x343: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x344: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x345: Call2 0xbd9

0x346: Pop(2)
0x347: PushEmpty(object, object)
0x348: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x349: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34a: Call2 0xbe3

0x34b: Pop(2)
0x34c: Push((int) 27397)
0x34d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x34f: PushEmpty(bool)
0x350: Stack[-1] = (bool) 0
0x351: PushEmpty(bool, object)
0x352: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x353: Call2 0xc49

0x354: Pop(1)
0x355: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x356: PushEmpty(bool, object)
0x357: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x358: Call2 0xc55

0x359: Pop(1)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Stack[-1] = (bool) 1
0x35c: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x35d: PushEmpty(object, object)
0x35e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x360: Call2 0xbd3

0x361: Pop(2)
0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral"
0x364: Call2 0x323

0x365: Pop(1)
0x366: Push((int) 526118)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 528252)
0x36c: Push((int) 29614)
0x36d: Push((int) 29613)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Push((int) 528256)
0x371: Push((int) 29614)
0x372: Push((int) 29617)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Sorrow"
0x378: Call2 0x323

0x379: Pop(1)
0x37a: Push((int) 526120)
0x37b: @@ SetMessage(Stack[-1])
0x37c: Pop(1)
0x37d: @@ ClearReplies()
0x37e: Pop(0)
0x37f: Push((int) 526121)
0x380: Push((int) -1)
0x381: Push((int) 27400)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: Push((int) 29614)
0x386: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x388: PushEmpty(string)
0x389: Stack[-1] = "Smile"
0x38a: Call2 0x323

0x38b: Pop(1)
0x38c: Push((int) 528253)
0x38d: @@ SetMessage(Stack[-1])
0x38e: Pop(1)
0x38f: @@ ClearReplies()
0x390: Pop(0)
0x391: Push((int) 528254)
0x392: Push((int) 29616)
0x393: Push((int) 29615)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Push((int) 528257)
0x397: Push((int) 29616)
0x398: Push((int) 29619)
0x399: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: Return(); Pop(0)

0x39c: Push((int) 29616)
0x39d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Sorrow"
0x3a1: Call2 0x323

0x3a2: Pop(1)
0x3a3: Push((int) 528255)
0x3a4: @@ SetMessage(Stack[-1])
0x3a5: Pop(1)
0x3a6: @@ ClearReplies()
0x3a7: Pop(0)
0x3a8: Push((int) 526119)
0x3a9: Push((int) -1)
0x3aa: Push((int) 27398)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Return(); Pop(0)

0x3ae: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3af: PushEmpty(bool)
0x3b0: Call2 0xbba

0x3b1: Pop(0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b3: @ lshStopAnimation()
0x3b4: Pop(0)
0x3b5: GOTO 0x3b8

0x3b6: @ StopAnimation()
0x3b7: Pop(0)
0x3b8: Return(); Pop(0)

0x3b9: GOTO 0x33a

0x3ba: Return(); Pop(0)

0x3bb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3bc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3bd: PushEmpty(bool, object, float)
0x3be: Stack[-2] = Stack[-12]
0x3bf: Stack[-1] = (float) 70.0
0x3c0: Call2 0x9ff

0x3c1: Pop(2)
0x3c2: Pop(1); Push((bool) Stack[-1] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-10] = (int) -2
0x3c5: Return(); Pop(8)

0x3c6: @ CreateDialog(Stack[-4])
0x3c7: Pop(0)
0x3c8: PushEmpty(int)
0x3c9: Call2 0xbb4

0x3ca: Pop(0)
0x3cb: @@ SetNPCName(Stack[-1])
0x3cc: Pop(1)
0x3cd: PushEmpty(int)
0x3ce: Call2 0xbb2

0x3cf: Pop(0)
0x3d0: @@ SetNPCDescription(Stack[-1])
0x3d1: Pop(1)
0x3d2: PushEmpty(string)
0x3d3: Call2 0xbb6

0x3d4: Pop(0)
0x3d5: @@ SetPhoto(Stack[-1])
0x3d6: Pop(1)
0x3d7: PushEmpty(string)
0x3d8: Call2 0xbb8

0x3d9: Pop(0)
0x3da: @@ SetPhoto2(Stack[-1])
0x3db: Pop(1)
0x3dc: PushEmpty(int)
0x3dd: Call2 0xce8

0x3de: Pop(0)
0x3df: @@ SetPlayerName(Stack[-1])
0x3e0: Pop(1)
0x3e1: Stack[-2] = (int) -1
0x3e2: @ IsOverrideActive(Stack[-3])
0x3e3: Pop(0)
0x3e4: Push(Stack[-3])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-10] = (int) -2
0x3e7: Return(); Pop(8)

0x3e8: @ DoDialog(Stack[-4])
0x3e9: Pop(0)
0x3ea: PushEmpty(bool, object)
0x3eb: PushEmpty(object)
0x3ec: Call2 0xb13

0x3ed: Stack[-2] = Stack[-1]
0x3ee: Pop(1)
0x3ef: Call2 0xa54

0x3f0: Pop(2)
0x3f1: PushEmpty(object, object)
0x3f2: Stack[-2] = Stack[-11]
0x3f3: Stack[-1] = Stack[-6]
0x3f4: Push(-2, 4); TaskCall(7)
0x3f5: Call2 0x40c

0x3f6: Pop(-2, 4); TaskReturn
0x3f7: Pop(2)
0x3f8: @@ IsDialogEnd(Stack[-1])
0x3f9: Pop(0)
0x3fa: Pop(0); Push((bool) Stack[-1] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fc: @ sync()
0x3fd: Pop(0)
0x3fe: @@ IsDialogEnd(Stack[-1])
0x3ff: Pop(0)
0x400: GOTO 0x3fa

0x401: PushEmpty(object)
0x402: Stack[-1] = Stack[-10]
0x403: Call2 0xa43

0x404: Pop(1)
0x405: @ StopDialog(Stack[-4])
0x406: Pop(0)
0x407: @@ GetReturnValue(Stack[-2])
0x408: Pop(0)
0x409: Stack[-10] = Stack[-2]
0x40a: Return(); Pop(8)

0x40b: Stack[-4] = 0
0x40c: PushEmpty()
0x40d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x40e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x40f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x410: Push((int) 1)
0x411: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x412: PushEmpty(bool)
0x413: Stack[-1] = (bool) 0
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call2 0xc27

0x417: Pop(1)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41a: PushEmpty(bool, object)
0x41b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41c: Call2 0xc6d

0x41d: Pop(1)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: Stack[-1] = (bool) 1
0x420: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x421: PushEmpty(object, object)
0x422: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x423: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x424: Call2 0xc02

0x425: Pop(2)
0x426: PushEmpty(object, object)
0x427: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x428: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x429: Call2 0xc1a

0x42a: Pop(2)
0x42b: PushEmpty(string)
0x42c: Stack[-1] = "Neutral"
0x42d: Call2 0x491

0x42e: Pop(1)
0x42f: Push((int) 539339)
0x430: @@ SetMessage(Stack[-1])
0x431: Pop(1)
0x432: @@ ClearReplies()
0x433: Pop(0)
0x434: Push((int) 539340)
0x435: Push((int) 43548)
0x436: Push((int) 41284)
0x437: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: Push((int) 542972)
0x43a: Push((int) 45416)
0x43b: Push((int) 45415)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: GOTO 0x473

0x43f: PushEmpty(object, object)
0x440: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x441: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x442: Call2 0xc1a

0x443: Pop(2)
0x444: PushEmpty(string)
0x445: Stack[-1] = "Neutral"
0x446: Call2 0x491

0x447: Pop(1)
0x448: Push((int) 539352)
0x449: @@ SetMessage(Stack[-1])
0x44a: Pop(1)
0x44b: @@ ClearReplies()
0x44c: Pop(0)
0x44d: PushEmpty(bool)
0x44e: Stack[-1] = (bool) 0
0x44f: PushEmpty(bool)
0x450: Stack[-1] = (bool) 0
0x451: PushEmpty(bool, object)
0x452: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x453: Call2 0xc61

0x454: Pop(1)
0x455: Pop(1); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x457: PushEmpty(bool, object)
0x458: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x459: Call2 0xc33

0x45a: Pop(1)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: Stack[-1] = (bool) 1
0x45d: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call2 0xc27

0x461: Pop(1)
0x462: Pop(1); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: Stack[-1] = (bool) 1
0x465: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x466: Push((int) 539353)
0x467: Push((int) 43589)
0x468: Push((int) 41298)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 539356)
0x46c: Push((int) -1)
0x46d: Push((int) 41301)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: GOTO 0x473

0x471: Return(); Pop(0)

0x472: GOTO 0x410

0x473: PushEmpty(bool)
0x474: Call2 0xbba

0x475: Pop(0)
0x476: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x477: @ lshWaitForAnimEnd()
0x478: Pop(0)
0x479: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: GOTO 0x481

0x47c: PushEmpty(string)
0x47d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x47e: Call2 0xade

0x47f: Pop(1)
0x480: GOTO 0x477

0x481: GOTO 0x490

0x482: Push("all")
0x483: Push("idle")
0x484: @ PlayAnimation(Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: @ WaitForAnimEnd()
0x487: Pop(0)
0x488: Push( Stack[3 + Tasks[-1].StackPointer] )
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: GOTO 0x490

0x48b: Push("all")
0x48c: Push("idle")
0x48d: @ PlayAnimation(Stack[-2], Stack[-1])
0x48e: Pop(2)
0x48f: GOTO 0x486

0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(bool)
0x493: Call2 0xbba

0x494: Pop(0)
0x495: Pop(1); Push((bool) Stack[-1] == 0)
0x496: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x497: Return(); Pop(0)

0x498: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: Return(); Pop(0)

0x49b: PushEmpty(string, bool)
0x49c: Stack[-2] = Stack[-3]
0x49d: Push("")
0x49e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-1] = (bool) 0
0x4a1: GOTO 0x4a3

0x4a2: Stack[-1] = (bool) 1
0x4a3: Call2 0xaee

0x4a4: Pop(2)
0x4a5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4a6: Return(); Pop(0)

0x4a7: PushEmpty()
0x4a8: Push((int) 1)
0x4a9: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x4aa: PushEmpty()
0x4ab: Call2 0xb0c

0x4ac: Pop(0)
0x4ad: Push((int) 41290)
0x4ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b0: PushEmpty(object, object)
0x4b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b3: Call2 0xbf2

0x4b4: Pop(2)
0x4b5: Push((int) 41293)
0x4b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(object, object)
0x4b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bb: Call2 0xbe9

0x4bc: Pop(2)
0x4bd: Push((int) 41300)
0x4be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c0: PushEmpty(object, object)
0x4c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c3: Call2 0xbe9

0x4c4: Pop(2)
0x4c5: Push((int) 41283)
0x4c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x4c8: PushEmpty(bool)
0x4c9: Stack[-1] = (bool) 0
0x4ca: PushEmpty(bool, object)
0x4cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cc: Call2 0xc27

0x4cd: Pop(1)
0x4ce: Pop(1); Push((bool) Stack[-1] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d0: PushEmpty(bool, object)
0x4d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d2: Call2 0xc6d

0x4d3: Pop(1)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: Stack[-1] = (bool) 1
0x4d6: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4d7: PushEmpty(object, object)
0x4d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4da: Call2 0xc02

0x4db: Pop(2)
0x4dc: PushEmpty(object, object)
0x4dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4df: Call2 0xc1a

0x4e0: Pop(2)
0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Neutral"
0x4e3: Call2 0x491

0x4e4: Pop(1)
0x4e5: Push((int) 539339)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: Push((int) 539340)
0x4eb: Push((int) 43548)
0x4ec: Push((int) 41284)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Push((int) 542972)
0x4f0: Push((int) 45416)
0x4f1: Push((int) 45415)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Return(); Pop(0)

0x4f5: PushEmpty(object, object)
0x4f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f8: Call2 0xc1a

0x4f9: Pop(2)
0x4fa: PushEmpty(string)
0x4fb: Stack[-1] = "Neutral"
0x4fc: Call2 0x491

0x4fd: Pop(1)
0x4fe: Push((int) 539352)
0x4ff: @@ SetMessage(Stack[-1])
0x500: Pop(1)
0x501: @@ ClearReplies()
0x502: Pop(0)
0x503: PushEmpty(bool)
0x504: Stack[-1] = (bool) 0
0x505: PushEmpty(bool)
0x506: Stack[-1] = (bool) 0
0x507: PushEmpty(bool, object)
0x508: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x509: Call2 0xc61

0x50a: Pop(1)
0x50b: Pop(1); Push((bool) Stack[-1] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50d: PushEmpty(bool, object)
0x50e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50f: Call2 0xc33

0x510: Pop(1)
0x511: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x512: Stack[-1] = (bool) 1
0x513: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x516: Call2 0xc27

0x517: Pop(1)
0x518: Pop(1); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Stack[-1] = (bool) 1
0x51b: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51c: Push((int) 539353)
0x51d: Push((int) 43589)
0x51e: Push((int) 41298)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Push((int) 539356)
0x522: Push((int) -1)
0x523: Push((int) 41301)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 43589)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Smile"
0x52c: Call2 0x491

0x52d: Pop(1)
0x52e: Push((int) 541433)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: Push((int) 539355)
0x534: Push((int) -1)
0x535: Push((int) 41300)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: Return(); Pop(0)

0x539: Push((int) 45416)
0x53a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x53c: PushEmpty(string)
0x53d: Stack[-1] = "Smile"
0x53e: Call2 0x491

0x53f: Pop(1)
0x540: Push((int) 542973)
0x541: @@ SetMessage(Stack[-1])
0x542: Pop(1)
0x543: @@ ClearReplies()
0x544: Pop(0)
0x545: Push((int) 542974)
0x546: Push((int) 43548)
0x547: Push((int) 45417)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Return(); Pop(0)

0x54b: Push((int) 43548)
0x54c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Neutral"
0x550: Call2 0x491

0x551: Pop(1)
0x552: Push((int) 541394)
0x553: @@ SetMessage(Stack[-1])
0x554: Pop(1)
0x555: @@ ClearReplies()
0x556: Pop(0)
0x557: Push((int) 541395)
0x558: Push((int) 43550)
0x559: Push((int) 43549)
0x55a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55b: Pop(3)
0x55c: Return(); Pop(0)

0x55d: Push((int) 43550)
0x55e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x560: PushEmpty(string)
0x561: Stack[-1] = "Untrust"
0x562: Call2 0x491

0x563: Pop(1)
0x564: Push((int) 541396)
0x565: @@ SetMessage(Stack[-1])
0x566: Pop(1)
0x567: @@ ClearReplies()
0x568: Pop(0)
0x569: Push((int) 541397)
0x56a: Push((int) 43552)
0x56b: Push((int) 43551)
0x56c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56d: Pop(3)
0x56e: Push((int) 542975)
0x56f: Push((int) 43554)
0x570: Push((int) 45419)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: Return(); Pop(0)

0x574: Push((int) 43552)
0x575: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x577: PushEmpty(string)
0x578: Stack[-1] = "Untrust"
0x579: Call2 0x491

0x57a: Pop(1)
0x57b: Push((int) 541398)
0x57c: @@ SetMessage(Stack[-1])
0x57d: Pop(1)
0x57e: @@ ClearReplies()
0x57f: Pop(0)
0x580: Push((int) 541399)
0x581: Push((int) 45421)
0x582: Push((int) 43553)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Return(); Pop(0)

0x586: Push((int) 45421)
0x587: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x589: PushEmpty(string)
0x58a: Stack[-1] = "Untrust"
0x58b: Call2 0x491

0x58c: Pop(1)
0x58d: Push((int) 542976)
0x58e: @@ SetMessage(Stack[-1])
0x58f: Pop(1)
0x590: @@ ClearReplies()
0x591: Pop(0)
0x592: Push((int) 542977)
0x593: Push((int) 45423)
0x594: Push((int) 45422)
0x595: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x596: Pop(3)
0x597: Push((int) 542984)
0x598: Push((int) 45428)
0x599: Push((int) 45429)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: Return(); Pop(0)

0x59d: Push((int) 45423)
0x59e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = "Smile"
0x5a2: Call2 0x491

0x5a3: Pop(1)
0x5a4: Push((int) 542978)
0x5a5: @@ SetMessage(Stack[-1])
0x5a6: Pop(1)
0x5a7: @@ ClearReplies()
0x5a8: Pop(0)
0x5a9: Push((int) 542979)
0x5aa: Push((int) 45428)
0x5ab: Push((int) 45424)
0x5ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: Return(); Pop(0)

0x5af: Push((int) 45428)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5b2: PushEmpty(string)
0x5b3: Stack[-1] = "Smile"
0x5b4: Call2 0x491

0x5b5: Pop(1)
0x5b6: Push((int) 542983)
0x5b7: @@ SetMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ ClearReplies()
0x5ba: Pop(0)
0x5bb: Push((int) 542980)
0x5bc: Push((int) 45426)
0x5bd: Push((int) 45425)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Push((int) 542985)
0x5c1: Push((int) -1)
0x5c2: Push((int) 45431)
0x5c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c4: Pop(3)
0x5c5: Return(); Pop(0)

0x5c6: Push((int) 45426)
0x5c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5c9: PushEmpty(string)
0x5ca: Stack[-1] = "Menace"
0x5cb: Call2 0x491

0x5cc: Pop(1)
0x5cd: Push((int) 542981)
0x5ce: @@ SetMessage(Stack[-1])
0x5cf: Pop(1)
0x5d0: @@ ClearReplies()
0x5d1: Pop(0)
0x5d2: Push((int) 542982)
0x5d3: Push((int) 45435)
0x5d4: Push((int) 45427)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Push((int) 542986)
0x5d8: Push((int) 45433)
0x5d9: Push((int) 45432)
0x5da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5db: Pop(3)
0x5dc: Return(); Pop(0)

0x5dd: Push((int) 45433)
0x5de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5e0: PushEmpty(string)
0x5e1: Stack[-1] = "Neutral"
0x5e2: Call2 0x491

0x5e3: Pop(1)
0x5e4: Push((int) 542987)
0x5e5: @@ SetMessage(Stack[-1])
0x5e6: Pop(1)
0x5e7: @@ ClearReplies()
0x5e8: Pop(0)
0x5e9: Push((int) 542988)
0x5ea: Push((int) 45438)
0x5eb: Push((int) 45434)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 45438)
0x5f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5f2: PushEmpty(string)
0x5f3: Stack[-1] = "Neutral"
0x5f4: Call2 0x491

0x5f5: Pop(1)
0x5f6: Push((int) 542992)
0x5f7: @@ SetMessage(Stack[-1])
0x5f8: Pop(1)
0x5f9: @@ ClearReplies()
0x5fa: Pop(0)
0x5fb: Push((int) 542993)
0x5fc: Push((int) 43554)
0x5fd: Push((int) 45439)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Push((int) 542994)
0x601: Push((int) -1)
0x602: Push((int) 45441)
0x603: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x604: Pop(3)
0x605: Return(); Pop(0)

0x606: Push((int) 43554)
0x607: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x609: PushEmpty(string)
0x60a: Stack[-1] = "Untrust"
0x60b: Call2 0x491

0x60c: Pop(1)
0x60d: Push((int) 541400)
0x60e: @@ SetMessage(Stack[-1])
0x60f: Pop(1)
0x610: @@ ClearReplies()
0x611: Pop(0)
0x612: Push((int) 541401)
0x613: Push((int) 41289)
0x614: Push((int) 43555)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: Push((int) 41289)
0x619: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x61b: PushEmpty(bool, object)
0x61c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61d: Call2 0xc33

0x61e: Pop(1)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x621: PushEmpty(string)
0x622: Stack[-1] = "Untrust"
0x623: Call2 0x491

0x624: Pop(1)
0x625: Push((int) 539345)
0x626: @@ SetMessage(Stack[-1])
0x627: Pop(1)
0x628: @@ ClearReplies()
0x629: Pop(0)
0x62a: Push((int) 541431)
0x62b: Push((int) 43558)
0x62c: Push((int) 43587)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 541406)
0x630: Push((int) -1)
0x631: Push((int) 43560)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Return(); Pop(0)

0x635: PushEmpty(bool, object)
0x636: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x637: Call2 0xc33

0x638: Pop(1)
0x639: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63a: PushEmpty(string)
0x63b: Stack[-1] = "Neutral"
0x63c: Call2 0x491

0x63d: Pop(1)
0x63e: Push((int) 539348)
0x63f: @@ SetMessage(Stack[-1])
0x640: Pop(1)
0x641: @@ ClearReplies()
0x642: Pop(0)
0x643: Push((int) 539349)
0x644: Push((int) -1)
0x645: Push((int) 41293)
0x646: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(3)
0x648: Push((int) 539350)
0x649: Push((int) -1)
0x64a: Push((int) 41294)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Push((int) 43558)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Neutral"
0x653: Call2 0x491

0x654: Pop(1)
0x655: Push((int) 541404)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: Push((int) 539346)
0x65b: Push((int) -1)
0x65c: Push((int) 41290)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Return(); Pop(0)

0x660: Push((int) 45435)
0x661: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral"
0x665: Call2 0x491

0x666: Pop(1)
0x667: Push((int) 542989)
0x668: @@ SetMessage(Stack[-1])
0x669: Pop(1)
0x66a: @@ ClearReplies()
0x66b: Pop(0)
0x66c: Push((int) 542990)
0x66d: Push((int) 43554)
0x66e: Push((int) 45436)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Push((int) 542991)
0x672: Push((int) -1)
0x673: Push((int) 45437)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x678: PushEmpty(bool)
0x679: Call2 0xbba

0x67a: Pop(0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67c: @ lshStopAnimation()
0x67d: Pop(0)
0x67e: GOTO 0x681

0x67f: @ StopAnimation()
0x680: Pop(0)
0x681: Return(); Pop(0)

0x682: GOTO 0x4a8

0x683: Return(); Pop(0)

0x684: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x685: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x686: PushEmpty(bool, object, float)
0x687: Stack[-2] = Stack[-12]
0x688: Stack[-1] = (float) 70.0
0x689: Call2 0x9ff

0x68a: Pop(2)
0x68b: Pop(1); Push((bool) Stack[-1] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68d: Stack[-10] = (int) -2
0x68e: Return(); Pop(8)

0x68f: @ CreateDialog(Stack[-4])
0x690: Pop(0)
0x691: PushEmpty(int)
0x692: Call2 0xbb4

0x693: Pop(0)
0x694: @@ SetNPCName(Stack[-1])
0x695: Pop(1)
0x696: PushEmpty(int)
0x697: Call2 0xbb2

0x698: Pop(0)
0x699: @@ SetNPCDescription(Stack[-1])
0x69a: Pop(1)
0x69b: PushEmpty(string)
0x69c: Call2 0xbb6

0x69d: Pop(0)
0x69e: @@ SetPhoto(Stack[-1])
0x69f: Pop(1)
0x6a0: PushEmpty(string)
0x6a1: Call2 0xbb8

0x6a2: Pop(0)
0x6a3: @@ SetPhoto2(Stack[-1])
0x6a4: Pop(1)
0x6a5: PushEmpty(int)
0x6a6: Call2 0xce8

0x6a7: Pop(0)
0x6a8: @@ SetPlayerName(Stack[-1])
0x6a9: Pop(1)
0x6aa: Stack[-2] = (int) -1
0x6ab: @ IsOverrideActive(Stack[-3])
0x6ac: Pop(0)
0x6ad: Push(Stack[-3])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-10] = (int) -2
0x6b0: Return(); Pop(8)

0x6b1: @ DoDialog(Stack[-4])
0x6b2: Pop(0)
0x6b3: PushEmpty(bool, object)
0x6b4: PushEmpty(object)
0x6b5: Call2 0xb13

0x6b6: Stack[-2] = Stack[-1]
0x6b7: Pop(1)
0x6b8: Call2 0xa54

0x6b9: Pop(2)
0x6ba: PushEmpty(object, object)
0x6bb: Stack[-2] = Stack[-11]
0x6bc: Stack[-1] = Stack[-6]
0x6bd: Push(-2, 4); TaskCall(9)
0x6be: Call2 0x6d5

0x6bf: Pop(-2, 4); TaskReturn
0x6c0: Pop(2)
0x6c1: @@ IsDialogEnd(Stack[-1])
0x6c2: Pop(0)
0x6c3: Pop(0); Push((bool) Stack[-1] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c5: @ sync()
0x6c6: Pop(0)
0x6c7: @@ IsDialogEnd(Stack[-1])
0x6c8: Pop(0)
0x6c9: GOTO 0x6c3

0x6ca: PushEmpty(object)
0x6cb: Stack[-1] = Stack[-10]
0x6cc: Call2 0xa43

0x6cd: Pop(1)
0x6ce: @ StopDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: @@ GetReturnValue(Stack[-2])
0x6d1: Pop(0)
0x6d2: Stack[-10] = Stack[-2]
0x6d3: Return(); Pop(8)

0x6d4: Stack[-4] = 0
0x6d5: PushEmpty()
0x6d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6d7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6d8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6d9: Push((int) 1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral"
0x6dd: Call2 0x719

0x6de: Pop(1)
0x6df: Push((int) 539435)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e6: Call2 0xc79

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e9: Push((int) 539436)
0x6ea: Push((int) 42812)
0x6eb: Push((int) 41367)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Push((int) 539439)
0x6ef: Push((int) -1)
0x6f0: Push((int) 41370)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Push((int) 540767)
0x6f4: Push((int) -1)
0x6f5: Push((int) 42811)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: GOTO 0x6fb

0x6f9: Return(); Pop(0)

0x6fa: GOTO 0x6d9

0x6fb: PushEmpty(bool)
0x6fc: Call2 0xbba

0x6fd: Pop(0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x6ff: @ lshWaitForAnimEnd()
0x700: Pop(0)
0x701: Push( Stack[3 + Tasks[-1].StackPointer] )
0x702: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x703: GOTO 0x709

0x704: PushEmpty(string)
0x705: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x706: Call2 0xade

0x707: Pop(1)
0x708: GOTO 0x6ff

0x709: GOTO 0x718

0x70a: Push("all")
0x70b: Push("idle")
0x70c: @ PlayAnimation(Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: @ WaitForAnimEnd()
0x70f: Pop(0)
0x710: Push( Stack[3 + Tasks[-1].StackPointer] )
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: GOTO 0x718

0x713: Push("all")
0x714: Push("idle")
0x715: @ PlayAnimation(Stack[-2], Stack[-1])
0x716: Pop(2)
0x717: GOTO 0x70e

0x718: Return(); Pop(0)

0x719: PushEmpty()
0x71a: PushEmpty(bool)
0x71b: Call2 0xbba

0x71c: Pop(0)
0x71d: Pop(1); Push((bool) Stack[-1] == 0)
0x71e: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71f: Return(); Pop(0)

0x720: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x721: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x722: Return(); Pop(0)

0x723: PushEmpty(string, bool)
0x724: Stack[-2] = Stack[-3]
0x725: Push("")
0x726: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-1] = (bool) 0
0x729: GOTO 0x72b

0x72a: Stack[-1] = (bool) 1
0x72b: Call2 0xaee

0x72c: Pop(2)
0x72d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x72e: Return(); Pop(0)

0x72f: PushEmpty()
0x730: Push((int) 1)
0x731: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x732: PushEmpty()
0x733: Call2 0xb0c

0x734: Pop(0)
0x735: Push((int) 41369)
0x736: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x738: PushEmpty(object, object)
0x739: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73b: Call2 0xc08

0x73c: Pop(2)
0x73d: PushEmpty(object, object)
0x73e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x740: Call2 0xc0e

0x741: Pop(2)
0x742: Push((int) 42820)
0x743: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x745: PushEmpty(object, object)
0x746: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x747: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x748: Call2 0xc08

0x749: Pop(2)
0x74a: PushEmpty(object, object)
0x74b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74d: Call2 0xc0e

0x74e: Pop(2)
0x74f: Push((int) 41366)
0x750: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x752: PushEmpty(string)
0x753: Stack[-1] = "Neutral"
0x754: Call2 0x719

0x755: Pop(1)
0x756: Push((int) 539435)
0x757: @@ SetMessage(Stack[-1])
0x758: Pop(1)
0x759: @@ ClearReplies()
0x75a: Pop(0)
0x75b: PushEmpty(bool, object)
0x75c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75d: Call2 0xc79

0x75e: Pop(1)
0x75f: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x760: Push((int) 539436)
0x761: Push((int) 42812)
0x762: Push((int) 41367)
0x763: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x764: Pop(3)
0x765: Push((int) 539439)
0x766: Push((int) -1)
0x767: Push((int) 41370)
0x768: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x769: Pop(3)
0x76a: Push((int) 540767)
0x76b: Push((int) -1)
0x76c: Push((int) 42811)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Return(); Pop(0)

0x770: Push((int) 42812)
0x771: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x773: PushEmpty(string)
0x774: Stack[-1] = "Untrust"
0x775: Call2 0x719

0x776: Pop(1)
0x777: Push((int) 540768)
0x778: @@ SetMessage(Stack[-1])
0x779: Pop(1)
0x77a: @@ ClearReplies()
0x77b: Pop(0)
0x77c: Push((int) 540769)
0x77d: Push((int) 42814)
0x77e: Push((int) 42813)
0x77f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x780: Pop(3)
0x781: Push((int) 540772)
0x782: Push((int) 42817)
0x783: Push((int) 42816)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Return(); Pop(0)

0x787: Push((int) 42817)
0x788: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x789: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x78a: PushEmpty(string)
0x78b: Stack[-1] = "Neutral"
0x78c: Call2 0x719

0x78d: Pop(1)
0x78e: Push((int) 540773)
0x78f: @@ SetMessage(Stack[-1])
0x790: Pop(1)
0x791: @@ ClearReplies()
0x792: Pop(0)
0x793: Push((int) 540774)
0x794: Push((int) 41368)
0x795: Push((int) 42818)
0x796: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x797: Pop(3)
0x798: Return(); Pop(0)

0x799: Push((int) 42814)
0x79a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x79c: PushEmpty(string)
0x79d: Stack[-1] = "Smile"
0x79e: Call2 0x719

0x79f: Pop(1)
0x7a0: Push((int) 540770)
0x7a1: @@ SetMessage(Stack[-1])
0x7a2: Pop(1)
0x7a3: @@ ClearReplies()
0x7a4: Pop(0)
0x7a5: Push((int) 540771)
0x7a6: Push((int) 42823)
0x7a7: Push((int) 42815)
0x7a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a9: Pop(3)
0x7aa: Push((int) 540776)
0x7ab: Push((int) 41368)
0x7ac: Push((int) 42821)
0x7ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ae: Pop(3)
0x7af: Return(); Pop(0)

0x7b0: Push((int) 42823)
0x7b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7b3: PushEmpty(string)
0x7b4: Stack[-1] = "Smile"
0x7b5: Call2 0x719

0x7b6: Pop(1)
0x7b7: Push((int) 540777)
0x7b8: @@ SetMessage(Stack[-1])
0x7b9: Pop(1)
0x7ba: @@ ClearReplies()
0x7bb: Pop(0)
0x7bc: Push((int) 540778)
0x7bd: Push((int) 41368)
0x7be: Push((int) 42824)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Push((int) 540779)
0x7c2: Push((int) -1)
0x7c3: Push((int) 42825)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Return(); Pop(0)

0x7c7: Push((int) 41368)
0x7c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7ca: PushEmpty(string)
0x7cb: Stack[-1] = "Menace"
0x7cc: Call2 0x719

0x7cd: Pop(1)
0x7ce: Push((int) 539437)
0x7cf: @@ SetMessage(Stack[-1])
0x7d0: Pop(1)
0x7d1: @@ ClearReplies()
0x7d2: Pop(0)
0x7d3: Push((int) 539438)
0x7d4: Push((int) -1)
0x7d5: Push((int) 41369)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Push((int) 540775)
0x7d9: Push((int) -1)
0x7da: Push((int) 42820)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Return(); Pop(0)

0x7de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7df: PushEmpty(bool)
0x7e0: Call2 0xbba

0x7e1: Pop(0)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e3: @ lshStopAnimation()
0x7e4: Pop(0)
0x7e5: GOTO 0x7e8

0x7e6: @ StopAnimation()
0x7e7: Pop(0)
0x7e8: Return(); Pop(0)

0x7e9: GOTO 0x730

0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7ed: PushEmpty(bool, object, float)
0x7ee: Stack[-2] = Stack[-12]
0x7ef: Stack[-1] = (float) 70.0
0x7f0: Call2 0x9ff

0x7f1: Pop(2)
0x7f2: Pop(1); Push((bool) Stack[-1] == 0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f4: Stack[-10] = (int) -2
0x7f5: Return(); Pop(8)

0x7f6: @ CreateDialog(Stack[-4])
0x7f7: Pop(0)
0x7f8: PushEmpty(int)
0x7f9: Call2 0xbb4

0x7fa: Pop(0)
0x7fb: @@ SetNPCName(Stack[-1])
0x7fc: Pop(1)
0x7fd: PushEmpty(int)
0x7fe: Call2 0xbb2

0x7ff: Pop(0)
0x800: @@ SetNPCDescription(Stack[-1])
0x801: Pop(1)
0x802: PushEmpty(string)
0x803: Call2 0xbb6

0x804: Pop(0)
0x805: @@ SetPhoto(Stack[-1])
0x806: Pop(1)
0x807: PushEmpty(string)
0x808: Call2 0xbb8

0x809: Pop(0)
0x80a: @@ SetPhoto2(Stack[-1])
0x80b: Pop(1)
0x80c: PushEmpty(int)
0x80d: Call2 0xce8

0x80e: Pop(0)
0x80f: @@ SetPlayerName(Stack[-1])
0x810: Pop(1)
0x811: Stack[-2] = (int) -1
0x812: @ IsOverrideActive(Stack[-3])
0x813: Pop(0)
0x814: Push(Stack[-3])
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-10] = (int) -2
0x817: Return(); Pop(8)

0x818: @ DoDialog(Stack[-4])
0x819: Pop(0)
0x81a: PushEmpty(bool, object)
0x81b: PushEmpty(object)
0x81c: Call2 0xb13

0x81d: Stack[-2] = Stack[-1]
0x81e: Pop(1)
0x81f: Call2 0xa54

0x820: Pop(2)
0x821: PushEmpty(object, object)
0x822: Stack[-2] = Stack[-11]
0x823: Stack[-1] = Stack[-6]
0x824: Push(-2, 4); TaskCall(11)
0x825: Call2 0x83c

0x826: Pop(-2, 4); TaskReturn
0x827: Pop(2)
0x828: @@ IsDialogEnd(Stack[-1])
0x829: Pop(0)
0x82a: Pop(0); Push((bool) Stack[-1] == 0)
0x82b: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82c: @ sync()
0x82d: Pop(0)
0x82e: @@ IsDialogEnd(Stack[-1])
0x82f: Pop(0)
0x830: GOTO 0x82a

0x831: PushEmpty(object)
0x832: Stack[-1] = Stack[-10]
0x833: Call2 0xa43

0x834: Pop(1)
0x835: @ StopDialog(Stack[-4])
0x836: Pop(0)
0x837: @@ GetReturnValue(Stack[-2])
0x838: Pop(0)
0x839: Stack[-10] = Stack[-2]
0x83a: Return(); Pop(8)

0x83b: Stack[-4] = 0
0x83c: PushEmpty()
0x83d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x83e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x83f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x840: Push((int) 1)
0x841: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call2 0x876

0x845: Pop(1)
0x846: Push((int) 540545)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 540546)
0x84c: Push((int) -1)
0x84d: Push((int) 42555)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Push((int) 540798)
0x851: Push((int) -1)
0x852: Push((int) 42847)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: GOTO 0x858

0x856: Return(); Pop(0)

0x857: GOTO 0x840

0x858: PushEmpty(bool)
0x859: Call2 0xbba

0x85a: Pop(0)
0x85b: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x85c: @ lshWaitForAnimEnd()
0x85d: Pop(0)
0x85e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: GOTO 0x866

0x861: PushEmpty(string)
0x862: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x863: Call2 0xade

0x864: Pop(1)
0x865: GOTO 0x85c

0x866: GOTO 0x875

0x867: Push("all")
0x868: Push("idle")
0x869: @ PlayAnimation(Stack[-2], Stack[-1])
0x86a: Pop(2)
0x86b: @ WaitForAnimEnd()
0x86c: Pop(0)
0x86d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86e: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86f: GOTO 0x875

0x870: Push("all")
0x871: Push("idle")
0x872: @ PlayAnimation(Stack[-2], Stack[-1])
0x873: Pop(2)
0x874: GOTO 0x86b

0x875: Return(); Pop(0)

0x876: PushEmpty()
0x877: PushEmpty(bool)
0x878: Call2 0xbba

0x879: Pop(0)
0x87a: Pop(1); Push((bool) Stack[-1] == 0)
0x87b: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87c: Return(); Pop(0)

0x87d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: Return(); Pop(0)

0x880: PushEmpty(string, bool)
0x881: Stack[-2] = Stack[-3]
0x882: Push("")
0x883: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x885: Stack[-1] = (bool) 0
0x886: GOTO 0x888

0x887: Stack[-1] = (bool) 1
0x888: Call2 0xaee

0x889: Pop(2)
0x88a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x88b: Return(); Pop(0)

0x88c: PushEmpty()
0x88d: Push((int) 1)
0x88e: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x88f: PushEmpty()
0x890: Call2 0xb0c

0x891: Pop(0)
0x892: Push((int) 42554)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call2 0x876

0x898: Pop(1)
0x899: Push((int) 540545)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 540546)
0x89f: Push((int) -1)
0x8a0: Push((int) 42555)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Push((int) 540798)
0x8a4: Push((int) -1)
0x8a5: Push((int) 42847)
0x8a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a7: Pop(3)
0x8a8: Return(); Pop(0)

0x8a9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8aa: PushEmpty(bool)
0x8ab: Call2 0xbba

0x8ac: Pop(0)
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ae: @ lshStopAnimation()
0x8af: Pop(0)
0x8b0: GOTO 0x8b3

0x8b1: @ StopAnimation()
0x8b2: Pop(0)
0x8b3: Return(); Pop(0)

0x8b4: GOTO 0x88d

0x8b5: Return(); Pop(0)

0x8b6: PushEmpty()
0x8b7: Call2 0x8ba

0x8b8: Pop(0)
0x8b9: Return(); Pop(0)

0x8ba: PushEmpty(bool)
0x8bb: Call2 0x9fa

0x8bc: Pop(0)
0x8bd: Pop(1); Push((bool) Stack[-1] == 0)
0x8be: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bf: @ Hold()
0x8c0: Pop(0)
0x8c1: @ GetDirection(Stack[-0])
0x8c2: Pop(0)
0x8c3: PushEmpty()
0x8c4: Call2 0x96a

0x8c5: Pop(0)
0x8c6: GOTO 0x8c3

0x8c7: Return(); Pop(0)

0x8c8: PushEmpty(object, object)
0x8c9: Push("player")
0x8ca: @ FindActor(Stack[-2], Stack[-1])
0x8cb: Pop(1)
0x8cc: Pop(0); Push((bool) Stack[-1] == 0)
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8ce: Stack[-3] = (bool) 0
0x8cf: Return(); Pop(2)

0x8d0: PushEmpty(bool, object)
0x8d1: Stack[-1] = Stack[-3]
0x8d2: Call2 0x9f1

0x8d3: Stack[-5] = Stack[-2]
0x8d4: Pop(2)
0x8d5: Return(); Pop(2)

0x8d6: Stack[-1] = 0
0x8d7: Push(CvectorIndex(Stack[-0], 0))
0x8d8: Push(CvectorIndex(Stack[-0], 2))
0x8d9: @ RotateAsync(Stack[-2], Stack[-1])
0x8da: Pop(2)
0x8db: Return(); Pop(0)

0x8dc: PushEmpty(object, bool, object, bool)
0x8dd: Push("player")
0x8de: @ FindActor(Stack[-3], Stack[-1])
0x8df: Pop(1)
0x8e0: Pop(0); Push((bool) Stack[-2] == 0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: Stack[-5] = (bool) 0
0x8e3: Return(); Pop(4)

0x8e4: PushEmpty(float, object)
0x8e5: Stack[-1] = Stack[-4]
0x8e6: Call2 0x9b6

0x8e7: Pop(1)
0x8e8: Push((float)90000.0)
0x8e9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8eb: Stack[-5] = (bool) 0
0x8ec: Return(); Pop(4)

0x8ed: @ CanSee(Stack[-1], Stack[-2])
0x8ee: Pop(0)
0x8ef: Stack[-5] = Stack[-1]
0x8f0: Return(); Pop(4)

0x8f1: Stack[-2] = 0
0x8f2: PushEmpty(float, float)
0x8f3: Push((int) 8)
0x8f4: Push((int) 16)
0x8f5: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(2)
0x8f7: Push((int) 10)
0x8f8: @ SetTimer(Stack[-1], Stack[-2])
0x8f9: Pop(1)
0x8fa: Return(); Pop(2)

0x8fb: Push((int) 10)
0x8fc: @ KillTimer(Stack[-1])
0x8fd: Pop(1)
0x8fe: Return(); Pop(0)

0x8ff: PushEmpty()
0x900: Push((int) 10)
0x901: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x903: PushEmpty()
0x904: Call2 0x8fb

0x905: Pop(0)
0x906: PushEmpty(bool)
0x907: Stack[-1] = (bool) 0
0x908: PushEmpty(bool)
0x909: Call2 0x9fa

0x90a: Pop(0)
0x90b: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90c: PushEmpty(bool)
0x90d: Call2 0x8dc

0x90e: Pop(0)
0x90f: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x910: Stack[-1] = (bool) 1
0x911: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x912: PushEmpty(bool)
0x913: Call2 0x8c8

0x914: Pop(0)
0x915: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x916: PushEmpty(bool, object)
0x917: PushEmpty(object)
0x918: Call2 0xb13

0x919: Stack[-2] = Stack[-1]
0x91a: Pop(1)
0x91b: Call2 0xa8e

0x91c: Pop(2)
0x91d: GOTO 0x924

0x91e: PushEmpty()
0x91f: Call2 0x8d7

0x920: Pop(0)
0x921: PushEmpty()
0x922: Call2 0x8f2

0x923: Pop(0)
0x924: Return(); Pop(0)

0x925: PushEmpty()
0x926: Call2 0x9b1

0x927: Pop(0)
0x928: PushEmpty()
0x929: Call2 0x8fb

0x92a: Pop(0)
0x92b: @ lshStopSpeech()
0x92c: Pop(0)
0x92d: @ lshStopAnimation()
0x92e: Pop(0)
0x92f: @ StopAsync()
0x930: Pop(0)
0x931: @ Hold()
0x932: Pop(0)
0x933: Return(); Pop(0)

0x934: @ StopGroup0()
0x935: Pop(0)
0x936: PushEmpty()
0x937: Call2 0x8fb

0x938: Pop(0)
0x939: PushEmpty(string)
0x93a: Stack[-1] = "Neutral"
0x93b: Call2 0xade

0x93c: Pop(1)
0x93d: PushEmpty()
0x93e: Call2 0x8f2

0x93f: Pop(0)
0x940: Return(); Pop(0)

0x941: PushEmpty()
0x942: Push(Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x944: PushEmpty()
0x945: Call2 0x8f2

0x946: Pop(0)
0x947: GOTO 0x94c

0x948: PushEmpty(string)
0x949: Stack[-1] = "Neutral"
0x94a: Call2 0xade

0x94b: Pop(1)
0x94c: Return(); Pop(0)

0x94d: PushEmpty(bool, bool)
0x94e: @ IsOverrideActive(Stack[-1])
0x94f: Pop(0)
0x950: Pop(0); Push((bool) Stack[-1] == 0)
0x951: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x952: EventDisable(0)
0x953: PushEmpty()
0x954: Call2 0x9b1

0x955: Pop(0)
0x956: PushEmpty(bool, object)
0x957: Stack[-1] = Stack[-5]
0x958: Call2 0x9f1

0x959: Pop(2)
0x95a: EventEnable(0)
0x95b: PushEmpty(object)
0x95c: Stack[-1] = Stack[-4]
0x95d: Call2 0xd54

0x95e: Pop(1)
0x95f: PushEmpty(string)
0x960: Stack[-1] = "Neutral"
0x961: Call2 0xade

0x962: Pop(1)
0x963: PushEmpty()
0x964: Call2 0x8fb

0x965: Pop(0)
0x966: PushEmpty()
0x967: Call2 0x8f2

0x968: Pop(0)
0x969: Return(); Pop(2)

0x96a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x96b: @ WaitForAnimEnd()
0x96c: Pop(0)
0x96d: PushEmpty(bool)
0x96e: Call2 0x9fa

0x96f: Pop(0)
0x970: Pop(1); Push((bool) Stack[-1] == 0)
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: Return(); Pop(12)

0x973: PushEmpty(int)
0x974: Call2 0xba1

0x975: Stack[-7] = Stack[-1]
0x976: Pop(1)
0x977: Stack[-5] = (int) 0
0x978: PushEmpty(bool)
0x979: Stack[-1] = (bool) 0
0x97a: Push((int) 5)
0x97b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x97c: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97d: PushEmpty(bool)
0x97e: Call2 0x9fa

0x97f: Pop(0)
0x980: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x981: Stack[-1] = (bool) 1
0x982: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x983: Pop(0); Push((bool) Stack[-6] == 0)
0x984: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x985: Push((int) 3)
0x986: @ Sleep(Stack[-1], Stack[-5])
0x987: Pop(1)
0x988: Pop(0); Push((bool) Stack[-4] == 0)
0x989: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x98a: GOTO 0x9ac

0x98b: GOTO 0x9a1

0x98c: @ irand(Stack[-3], Stack[-6])
0x98d: Pop(0)
0x98e: Push((int) 5)
0x98f: @ irand(Stack[-3], Stack[-1])
0x990: Pop(1)
0x991: Push((int) 0)
0x992: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x994: Stack[-3] = (int) 0
0x995: Push("all")
0x996: PushEmpty(string, int)
0x997: Stack[-1] = Stack[-6]
0x998: Call2 0xb9a

0x999: Pop(1)
0x99a: @ PlayAnimation(Stack[-2], Stack[-1])
0x99b: Pop(2)
0x99c: @ WaitForAnimEnd(Stack[-1])
0x99d: Pop(0)
0x99e: Pop(0); Push((bool) Stack[-1] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x9a0: GOTO 0x9ac

0x9a1: PushEmpty(bool)
0x9a2: Call2 0x9af

0x9a3: Pop(0)
0x9a4: Pop(1); Push((bool) Stack[-1] == 0)
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a6: GOTO 0x9ac

0x9a7: @ ResetAAS()
0x9a8: Pop(0)
0x9a9: Push((int) 1)
0x9aa: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x9ab: GOTO 0x978

0x9ac: @ ResetAAS()
0x9ad: Pop(0)
0x9ae: Return(); Pop(12)

0x9af: Stack[-1] = (bool) 1
0x9b0: Return(); Pop(0)

0x9b1: @ StopAnimation()
0x9b2: Pop(0)
0x9b3: @ StopGroup0()
0x9b4: Pop(0)
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9b7: @ GetPosition(Stack[-3])
0x9b8: Pop(0)
0x9b9: @@ GetPosition(Stack[-2])
0x9ba: Pop(0)
0x9bb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9bc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9bd: Return(); Pop(6)

0x9be: PushEmpty(bool, bool)
0x9bf: Push("HasProperty")
0x9c0: Push((int) 2)
0x9c1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9c2: Pop(1); Push((bool) Stack[-1] == 0)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c4: Stack[-5] = (bool) 0
0x9c5: Return(); Pop(2)

0x9c6: @@ HasProperty(Stack[-3], Stack[-1])
0x9c7: Pop(0)
0x9c8: Stack[-5] = Stack[-1]
0x9c9: Return(); Pop(2)

0x9ca: PushEmpty(float, float)
0x9cb: PushEmpty(bool, object, string)
0x9cc: Stack[-2] = Stack[-10]
0x9cd: Stack[-1] = Stack[-9]
0x9ce: Call2 0x9be

0x9cf: Pop(2)
0x9d0: Pop(1); Push((bool) Stack[-1] == 0)
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d2: Stack[-8] = (bool) 0
0x9d3: Return(); Pop(2)

0x9d4: @@ GetProperty(Stack[-6], Stack[-1])
0x9d5: Pop(0)
0x9d6: PushEmpty(float, float, float, float)
0x9d7: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x9d8: Stack[-2] = Stack[-8]
0x9d9: Stack[-1] = Stack[-7]
0x9da: Call2 0xb23

0x9db: Pop(3)
0x9dc: @@ SetProperty(Stack[-7], Stack[-1])
0x9dd: Pop(1)
0x9de: Stack[-8] = (bool) 1
0x9df: Return(); Pop(2)

0x9e0: PushEmpty(int, int)
0x9e1: @@ GetProperty(Stack[-4], Stack[-1])
0x9e2: Pop(0)
0x9e3: Pop(0); Push(Stack[-1] + Stack[-3]);
0x9e4: @@ SetProperty(Stack[-5], Stack[-1])
0x9e5: Pop(1)
0x9e6: Return(); Pop(2)

0x9e7: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x9e8: @ GetPosition(Stack[-3])
0x9e9: Pop(0)
0x9ea: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x9eb: Push(CvectorIndex(Stack[-2], 0))
0x9ec: Push(CvectorIndex(Stack[-3], 2))
0x9ed: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9ee: Pop(2)
0x9ef: Stack[-8] = Stack[-1]
0x9f0: Return(); Pop(6)

0x9f1: PushEmpty(cvector, cvector)
0x9f2: @@ GetPosition(Stack[-1])
0x9f3: Pop(0)
0x9f4: PushEmpty(bool, cvector)
0x9f5: Stack[-1] = Stack[-3]
0x9f6: Call2 0x9e7

0x9f7: Stack[-6] = Stack[-2]
0x9f8: Pop(2)
0x9f9: Return(); Pop(2)

0x9fa: PushEmpty(bool, bool)
0x9fb: @ IsLoaded(Stack[-1])
0x9fc: Pop(0)
0x9fd: Stack[-3] = Stack[-1]
0x9fe: Return(); Pop(2)

0x9ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa00: @@ GetPosition(Stack[-8])
0xa01: Pop(0)
0xa02: @@ GetEyesHeight(Stack[-9])
0xa03: Pop(0)
0xa04: Push(CvectorIndex(Stack[-8], 1))
0xa05: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa06: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa07: @ GetPosition(Stack[-7])
0xa08: Pop(0)
0xa09: @ GetEyesHeight(Stack[-9])
0xa0a: Pop(0)
0xa0b: Push(CvectorIndex(Stack[-7], 1))
0xa0c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa0d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa0e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa0f: Push(CvectorIndex(Stack[-6], 1))
0xa10: Stack[-1] = (int) 0
0xa11: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa12: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa13: Pop(1); Push(Sqrt(Stack[-1]))
0xa14: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa15: Stack[-5] = -Stack[-6]; Pop(0);
0xa16: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa17: PushEmpty(cvector, cvector)
0xa18: Push(CVector(0.0, 1.0, 0.0))
0xa19: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa1a: Call2 0xb19

0xa1b: Pop(1)
0xa1c: Push((int) 25)
0xa1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa1f: Push(CVector(0.0, 10.0, 0.0))
0xa20: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa21: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa22: @ IsOverrideActive(Stack[-2])
0xa23: Pop(0)
0xa24: Push(Stack[-2])
0xa25: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa26: Stack[-21] = (bool) 0
0xa27: Return(); Pop(18)

0xa28: @ StopWorld()
0xa29: Pop(0)
0xa2a: @ CameraTransit(Stack[-3], Stack[-5])
0xa2b: Pop(0)
0xa2c: Push(CvectorIndex(Stack[-4], 0))
0xa2d: Push(CvectorIndex(Stack[-5], 2))
0xa2e: @ Rotate(Stack[-2], Stack[-1])
0xa2f: Pop(2)
0xa30: PushEmpty(bool)
0xa31: Call2 0xbba

0xa32: Pop(0)
0xa33: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa34: GOTO 0xa3d

0xa35: Push("head")
0xa36: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa37: Pop(1)
0xa38: Push(Stack[-1])
0xa39: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3a: Push("head")
0xa3b: @ LookAsyncCamera(Stack[-1])
0xa3c: Pop(1)
0xa3d: @ CameraWaitForPlayFinish()
0xa3e: Pop(0)
0xa3f: @ ResumeWorld()
0xa40: Pop(0)
0xa41: Stack[-21] = (bool) 1
0xa42: Return(); Pop(18)

0xa43: PushEmpty(bool, bool)
0xa44: @ CameraSwitchToNormal()
0xa45: Pop(0)
0xa46: PushEmpty(bool)
0xa47: Call2 0xbba

0xa48: Pop(0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: GOTO 0xa53

0xa4b: Push("head")
0xa4c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa4d: Pop(1)
0xa4e: Push(Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa50: Push("head")
0xa51: @ UnlookAsync(Stack[-1])
0xa52: Pop(1)
0xa53: Return(); Pop(2)

0xa54: PushEmpty(int, int, int, int)
0xa55: Push("voice_common")
0xa56: @ GetVariable(Stack[-1], Stack[-3])
0xa57: Pop(1)
0xa58: Push(Stack[-2])
0xa59: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa5a: PushEmpty(bool, object)
0xa5b: Stack[-1] = Stack[-7]
0xa5c: Call2 0xa8e

0xa5d: Pop(1)
0xa5e: Pop(1); Push((bool) Stack[-1] == 0)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa60: PushEmpty(bool, object)
0xa61: Stack[-1] = Stack[-7]
0xa62: Call2 0xab3

0xa63: Pop(1)
0xa64: Pop(1); Push((bool) Stack[-1] == 0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa66: Stack[-6] = (bool) 0
0xa67: Return(); Pop(4)

0xa68: Push((int) 2)
0xa69: @ irand(Stack[-2], Stack[-1])
0xa6a: Pop(1)
0xa6b: Push(Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa6d: Push("voice_common")
0xa6e: Push((int) 1)
0xa6f: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa70: Push((int) 3)
0xa71: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa72: @ SetVariable(Stack[-2], Stack[-1])
0xa73: Pop(2)
0xa74: GOTO 0xa79

0xa75: Push("voice_common")
0xa76: Push((int) 0)
0xa77: @ SetVariable(Stack[-2], Stack[-1])
0xa78: Pop(2)
0xa79: GOTO 0xa8c

0xa7a: PushEmpty(bool, object)
0xa7b: Stack[-1] = Stack[-7]
0xa7c: Call2 0xab3

0xa7d: Pop(1)
0xa7e: Pop(1); Push((bool) Stack[-1] == 0)
0xa7f: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa80: PushEmpty(bool, object)
0xa81: Stack[-1] = Stack[-7]
0xa82: Call2 0xa8e

0xa83: Pop(1)
0xa84: Pop(1); Push((bool) Stack[-1] == 0)
0xa85: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa86: Stack[-6] = (bool) 0
0xa87: Return(); Pop(4)

0xa88: Push("voice_common")
0xa89: Push((int) 1)
0xa8a: @ SetVariable(Stack[-2], Stack[-1])
0xa8b: Pop(2)
0xa8c: Stack[-6] = (bool) 1
0xa8d: Return(); Pop(4)

0xa8e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa8f: Stack[-5] = "c"
0xa90: Stack[-4] = (int) 0
0xa91: Push((int) 1)
0xa92: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa93: Push((int) 1)
0xa94: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa95: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa96: @@ HasProperty(Stack[-1], Stack[-4])
0xa97: Pop(1)
0xa98: Pop(0); Push((bool) Stack[-3] == 0)
0xa99: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa9a: GOTO 0xa9e

0xa9b: Push((int) 1)
0xa9c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa9d: GOTO 0xa91

0xa9e: Pop(0); Push((bool) Stack[-4] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xaa0: Stack[-12] = (bool) 0
0xaa1: Return(); Pop(10)

0xaa2: Stack[-2] = (int) 0
0xaa3: Push((int) 1)
0xaa4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xaa5: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa6: @ irand(Stack[-2], Stack[-4])
0xaa7: Pop(0)
0xaa8: Push((int) 1)
0xaa9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaaa: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaab: @@ GetProperty(Stack[-1], Stack[-2])
0xaac: Pop(1)
0xaad: PushEmpty(bool, string)
0xaae: Stack[-1] = Stack[-3]
0xaaf: Call2 0xafd

0xab0: Stack[-14] = Stack[-2]
0xab1: Pop(2)
0xab2: Return(); Pop(10)

0xab3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xab4: Push("d")
0xab5: PushEmpty(int)
0xab6: Call2 0xb8b

0xab7: Pop(0)
0xab8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xab9: Push("m")
0xaba: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xabb: Stack[-4] = (int) 0
0xabc: Push((int) 1)
0xabd: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xabe: Push((int) 1)
0xabf: Pop(1); Push(Stack[-5] + Stack[-1]);
0xac0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac1: @@ HasProperty(Stack[-1], Stack[-4])
0xac2: Pop(1)
0xac3: Pop(0); Push((bool) Stack[-3] == 0)
0xac4: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac5: GOTO 0xac9

0xac6: Push((int) 1)
0xac7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xac8: GOTO 0xabc

0xac9: Pop(0); Push((bool) Stack[-4] == 0)
0xaca: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xacb: Stack[-12] = (bool) 0
0xacc: Return(); Pop(10)

0xacd: Stack[-2] = (int) 0
0xace: Push((int) 1)
0xacf: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xad1: @ irand(Stack[-2], Stack[-4])
0xad2: Pop(0)
0xad3: Push((int) 1)
0xad4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xad5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xad6: @@ GetProperty(Stack[-1], Stack[-2])
0xad7: Pop(1)
0xad8: PushEmpty(bool, string)
0xad9: Stack[-1] = Stack[-3]
0xada: Call2 0xafd

0xadb: Stack[-14] = Stack[-2]
0xadc: Pop(2)
0xadd: Return(); Pop(10)

0xade: PushEmpty(bool, float, float, bool, float, float)
0xadf: @ lshHasAnimation(Stack[-3], Stack[-7])
0xae0: Pop(0)
0xae1: Push(Stack[-3])
0xae2: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xae4: Pop(0)
0xae5: Push((bool) 0)
0xae6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xae7: Pop(1)
0xae8: GOTO 0xaed

0xae9: Push("Can't find lsh animation : ")
0xaea: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaeb: @ Trace(Stack[-1])
0xaec: Pop(1)
0xaed: Return(); Pop(6)

0xaee: PushEmpty(bool, float, float, bool, float, float)
0xaef: @ lshHasAnimation(Stack[-3], Stack[-8])
0xaf0: Pop(0)
0xaf1: Push(Stack[-3])
0xaf2: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xaf4: Pop(0)
0xaf5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xaf6: Pop(0)
0xaf7: GOTO 0xafc

0xaf8: Push("Can't find lsh animation : ")
0xaf9: Pop(1); Push(Stack[-1] + Stack[-9]);
0xafa: @ Trace(Stack[-1])
0xafb: Pop(1)
0xafc: Return(); Pop(6)

0xafd: PushEmpty(bool, bool)
0xafe: PushEmpty(bool)
0xaff: Call2 0xbba

0xb00: Pop(0)
0xb01: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb02: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb03: Pop(0)
0xb04: Push(Stack[-1])
0xb05: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb06: @ lshPlaySpeech(Stack[-3])
0xb07: Pop(0)
0xb08: Stack[-4] = (bool) 1
0xb09: Return(); Pop(2)

0xb0a: Stack[-4] = (bool) 0
0xb0b: Return(); Pop(2)

0xb0c: PushEmpty(bool)
0xb0d: Call2 0xbba

0xb0e: Pop(0)
0xb0f: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb10: @ lshStopSpeech()
0xb11: Pop(0)
0xb12: Return(); Pop(0)

0xb13: PushEmpty(object, object)
0xb14: @ self(Stack[-1])
0xb15: Pop(0)
0xb16: Stack[-3] = Stack[-1]
0xb17: Return(); Pop(2)

0xb18: Stack[-1] = 0
0xb19: PushEmpty(float, float)
0xb1a: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb1b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb1c: Push((float)0.0)
0xb1d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb20: Return(); Pop(2)

0xb21: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb22: Return(); Pop(2)

0xb23: PushEmpty()
0xb24: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xb25: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb26: Stack[-4] = Stack[-2]
0xb27: Return(); Pop(0)

0xb28: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xb29: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb2a: Stack[-4] = Stack[-1]
0xb2b: Return(); Pop(0)

0xb2c: Stack[-4] = Stack[-3]
0xb2d: Return(); Pop(0)

0xb2e: PushEmpty(int, int)
0xb2f: @ GetVariable(Stack[-3], Stack[-1])
0xb30: Pop(0)
0xb31: Stack[-4] = Stack[-1]
0xb32: Return(); Pop(2)

0xb33: PushEmpty(object, object)
0xb34: @ CreateIntVector(Stack[-1])
0xb35: Pop(0)
0xb36: @@ add(Stack[-4])
0xb37: Pop(0)
0xb38: @@ add(Stack[-3])
0xb39: Pop(0)
0xb3a: Push((int) 3)
0xb3b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb3c: Pop(1)
0xb3d: Return(); Pop(2)

0xb3e: Stack[-1] = 0
0xb3f: PushEmpty(int, int)
0xb40: PushEmpty(object, string, int)
0xb41: Stack[-3] = Stack[-7]
0xb42: Stack[-2] = "money"
0xb43: Stack[-1] = Stack[-6]
0xb44: Call2 0x9e0

0xb45: Pop(3)
0xb46: Push((int) 0)
0xb47: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb49: Push("Money")
0xb4a: @ GetInvItemByName(Stack[-2], Stack[-1])
0xb4b: Pop(1)
0xb4c: PushEmpty(int, int)
0xb4d: Stack[-2] = Stack[-3]
0xb4e: Stack[-1] = Stack[-5]
0xb4f: Call2 0xb33

0xb50: Pop(2)
0xb51: Return(); Pop(2)

0xb52: PushEmpty()
0xb53: Pop(0); Push((bool) Stack[-2] == 0)
0xb54: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb55: Stack[-3] = (bool) 0
0xb56: Return(); Pop(0)

0xb57: Push((int) 0)
0xb58: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb59: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5a: Push((int) 8)
0xb5b: @ SendWorldWndMessage(Stack[-1])
0xb5c: Pop(1)
0xb5d: GOTO 0xb67

0xb5e: Push((int) 0)
0xb5f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb61: Push((int) 9)
0xb62: @ SendWorldWndMessage(Stack[-1])
0xb63: Pop(1)
0xb64: GOTO 0xb67

0xb65: Stack[-3] = (bool) 0
0xb66: Return(); Pop(0)

0xb67: PushEmpty(float)
0xb68: Stack[-1] = Stack[-2]
0xb69: Call2 0xb75

0xb6a: Pop(1)
0xb6b: PushEmpty(bool, object, string, float, float, float)
0xb6c: Stack[-5] = Stack[-8]
0xb6d: Stack[-4] = "reputation"
0xb6e: Stack[-3] = Stack[-7]
0xb6f: Stack[-2] = (int) 0
0xb70: Stack[-1] = (int) 1
0xb71: Call2 0x9ca

0xb72: Pop(6)
0xb73: Stack[-3] = (bool) 1
0xb74: Return(); Pop(0)

0xb75: PushEmpty(object, object)
0xb76: @ CreateFloatVector(Stack[-1])
0xb77: Pop(0)
0xb78: @@ add(Stack[-3])
0xb79: Pop(0)
0xb7a: Push((int) 16)
0xb7b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb7c: Pop(1)
0xb7d: Return(); Pop(2)

0xb7e: Stack[-1] = 0
0xb7f: PushEmpty(object, object)
0xb80: @ FindActor(Stack[-1], Stack[-4])
0xb81: Pop(0)
0xb82: Pop(0); Push((bool) Stack[-1] == 0)
0xb83: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb84: Stack[-5] = (bool) 0
0xb85: Return(); Pop(2)

0xb86: @ Trigger(Stack[-1], Stack[-3])
0xb87: Pop(0)
0xb88: Stack[-5] = (bool) 1
0xb89: Return(); Pop(2)

0xb8a: Stack[-1] = 0
0xb8b: PushEmpty(float, float)
0xb8c: @ GetGameTime(Stack[-1])
0xb8d: Pop(0)
0xb8e: Push((int) 1)
0xb8f: PushEmpty(int)
0xb90: Push((int) 24)
0xb91: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb92: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb93: Return(); Pop(2)

0xb94: PushEmpty()
0xb95: PushEmpty(int)
0xb96: Call2 0xb8b

0xb97: Pop(0)
0xb98: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb99: Return(); Pop(0)

0xb9a: PushEmpty(string, string)
0xb9b: Stack[-1] = "idle"
0xb9c: Push(Stack[-3])
0xb9d: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb9f: Stack[-4] = Stack[-1]
0xba0: Return(); Pop(2)

0xba1: PushEmpty(int, bool, int, bool)
0xba2: Stack[-2] = (int) 0
0xba3: Push("all")
0xba4: PushEmpty(string, int)
0xba5: Stack[-1] = Stack[-5]
0xba6: Call2 0xb9a

0xba7: Pop(1)
0xba8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(2)
0xbaa: Pop(0); Push((bool) Stack[-1] == 0)
0xbab: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xbac: GOTO 0xbb0

0xbad: Push((int) 1)
0xbae: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbaf: GOTO 0xba3

0xbb0: Stack[-5] = Stack[-2]
0xbb1: Return(); Pop(4)

0xbb2: Stack[-1] = (int) 515573
0xbb3: Return(); Pop(0)

0xbb4: Stack[-1] = (int) 504032
0xbb5: Return(); Pop(0)

0xbb6: Stack[-1] = "ui/NPC_Bakalavr.png"
0xbb7: Return(); Pop(0)

0xbb8: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0xbb9: Return(); Pop(0)

0xbba: Stack[-1] = (bool) 1
0xbbb: Return(); Pop(0)

0xbbc: PushEmpty()
0xbbd: Push("ook6Danko1")
0xbbe: Push((int) 1)
0xbbf: @ SetVariable(Stack[-2], Stack[-1])
0xbc0: Pop(2)
0xbc1: Return(); Pop(0)

0xbc2: PushEmpty()
0xbc3: PushEmpty(bool, string, string)
0xbc4: Stack[-2] = "quest_k6_01"
0xbc5: Stack[-1] = "teleport"
0xbc6: Call2 0xb7f

0xbc7: Pop(3)
0xbc8: Return(); Pop(0)

0xbc9: PushEmpty()
0xbca: PushEmpty()
0xbcb: Call2 0xcb2

0xbcc: Pop(0)
0xbcd: PushEmpty(bool, string, string)
0xbce: Stack[-2] = "quest_k6_01"
0xbcf: Stack[-1] = "completed"
0xbd0: Call2 0xb7f

0xbd1: Pop(3)
0xbd2: Return(); Pop(0)

0xbd3: PushEmpty()
0xbd4: Push("ook7Danko1")
0xbd5: Push((int) 1)
0xbd6: @ SetVariable(Stack[-2], Stack[-1])
0xbd7: Pop(2)
0xbd8: Return(); Pop(0)

0xbd9: PushEmpty()
0xbda: Push("money1000 is given")
0xbdb: @ Trace(Stack[-1])
0xbdc: Pop(1)
0xbdd: PushEmpty(object, int)
0xbde: Stack[-2] = Stack[-4]
0xbdf: Stack[-1] = (int) 1000
0xbe0: Call2 0xb3f

0xbe1: Pop(2)
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty()
0xbe4: Push("playsound")
0xbe5: Push("givemoney")
0xbe6: @ TriggerWorld(Stack[-2], Stack[-1])
0xbe7: Pop(2)
0xbe8: Return(); Pop(0)

0xbe9: PushEmpty()
0xbea: Push("k12q01DankoInSobor")
0xbeb: Push((int) 1)
0xbec: @ SetVariable(Stack[-2], Stack[-1])
0xbed: Pop(2)
0xbee: PushEmpty()
0xbef: Call2 0xc8b

0xbf0: Pop(0)
0xbf1: Return(); Pop(0)

0xbf2: PushEmpty()
0xbf3: PushEmpty(int, string)
0xbf4: Stack[-1] = "k12q01_Danko"
0xbf5: Call2 0xb2e

0xbf6: Pop(1)
0xbf7: Push((int) 0)
0xbf8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf9: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xbfa: Push("k12q01_Danko")
0xbfb: Push((int) 1)
0xbfc: @ SetVariable(Stack[-2], Stack[-1])
0xbfd: Pop(2)
0xbfe: PushEmpty()
0xbff: Call2 0xc98

0xc00: Pop(0)
0xc01: Return(); Pop(0)

0xc02: PushEmpty()
0xc03: Push("ook12Danko1")
0xc04: Push((int) 1)
0xc05: @ SetVariable(Stack[-2], Stack[-1])
0xc06: Pop(2)
0xc07: Return(); Pop(0)

0xc08: PushEmpty()
0xc09: Push("k5q04")
0xc0a: Push((int) 3)
0xc0b: @ SetVariable(Stack[-2], Stack[-1])
0xc0c: Pop(2)
0xc0d: Return(); Pop(0)

0xc0e: PushEmpty()
0xc0f: PushEmpty(int, string)
0xc10: Stack[-1] = "k5q04_bring_water"
0xc11: Call2 0xb2e

0xc12: Pop(1)
0xc13: Push((int) 0)
0xc14: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc15: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc16: PushEmpty()
0xc17: Call2 0xca5

0xc18: Pop(0)
0xc19: Return(); Pop(0)

0xc1a: PushEmpty()
0xc1b: Push("k12DankoVisit")
0xc1c: Push((int) 1)
0xc1d: @ SetVariable(Stack[-2], Stack[-1])
0xc1e: Pop(2)
0xc1f: Return(); Pop(0)

0xc20: PushEmpty()
0xc21: PushEmpty(bool, object, float)
0xc22: Stack[-2] = Stack[-5]
0xc23: Stack[-1] = (float) 0.3
0xc24: Call2 0xb52

0xc25: Pop(3)
0xc26: Return(); Pop(0)

0xc27: PushEmpty()
0xc28: PushEmpty(int, string)
0xc29: Stack[-1] = "game_final"
0xc2a: Call2 0xb2e

0xc2b: Pop(1)
0xc2c: Push((int) 0)
0xc2d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc2e: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc2f: Stack[-2] = (bool) 1
0xc30: Return(); Pop(0)

0xc31: Stack[-2] = (bool) 0
0xc32: Return(); Pop(0)

0xc33: PushEmpty()
0xc34: PushEmpty(bool, object)
0xc35: Stack[-1] = Stack[-3]
0xc36: Call2 0xc85

0xc37: Pop(1)
0xc38: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc39: Stack[-2] = (bool) 1
0xc3a: Return(); Pop(0)

0xc3b: Stack[-2] = (bool) 0
0xc3c: Return(); Pop(0)

0xc3d: PushEmpty()
0xc3e: PushEmpty(int, string)
0xc3f: Stack[-1] = "ook6Danko1"
0xc40: Call2 0xb2e

0xc41: Pop(1)
0xc42: Push((int) 0)
0xc43: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc45: Stack[-2] = (bool) 1
0xc46: Return(); Pop(0)

0xc47: Stack[-2] = (bool) 0
0xc48: Return(); Pop(0)

0xc49: PushEmpty()
0xc4a: PushEmpty(int, string)
0xc4b: Stack[-1] = "k7q01"
0xc4c: Call2 0xb2e

0xc4d: Pop(1)
0xc4e: Push((int) 0)
0xc4f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc50: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc51: Stack[-2] = (bool) 1
0xc52: Return(); Pop(0)

0xc53: Stack[-2] = (bool) 0
0xc54: Return(); Pop(0)

0xc55: PushEmpty()
0xc56: PushEmpty(int, string)
0xc57: Stack[-1] = "ook7Danko1"
0xc58: Call2 0xb2e

0xc59: Pop(1)
0xc5a: Push((int) 0)
0xc5b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5d: Stack[-2] = (bool) 1
0xc5e: Return(); Pop(0)

0xc5f: Stack[-2] = (bool) 0
0xc60: Return(); Pop(0)

0xc61: PushEmpty()
0xc62: PushEmpty(int, string)
0xc63: Stack[-1] = "k12q01DankoInSobor"
0xc64: Call2 0xb2e

0xc65: Pop(1)
0xc66: Push((int) 0)
0xc67: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc68: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc69: Stack[-2] = (bool) 1
0xc6a: Return(); Pop(0)

0xc6b: Stack[-2] = (bool) 0
0xc6c: Return(); Pop(0)

0xc6d: PushEmpty()
0xc6e: PushEmpty(int, string)
0xc6f: Stack[-1] = "ook12Danko1"
0xc70: Call2 0xb2e

0xc71: Pop(1)
0xc72: Push((int) 0)
0xc73: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc74: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xc75: Stack[-2] = (bool) 1
0xc76: Return(); Pop(0)

0xc77: Stack[-2] = (bool) 0
0xc78: Return(); Pop(0)

0xc79: PushEmpty()
0xc7a: PushEmpty(int, string)
0xc7b: Stack[-1] = "k5q04"
0xc7c: Call2 0xb2e

0xc7d: Pop(1)
0xc7e: Push((int) 2)
0xc7f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc81: Stack[-2] = (bool) 1
0xc82: Return(); Pop(0)

0xc83: Stack[-2] = (bool) 0
0xc84: Return(); Pop(0)

0xc85: PushEmpty()
0xc86: PushEmpty(bool)
0xc87: Call2 0xd2e

0xc88: Stack[-3] = Stack[-1]
0xc89: Pop(1)
0xc8a: Return(); Pop(0)

0xc8b: PushEmpty(object, object)
0xc8c: Push((int) 730)
0xc8d: Push((int) 1)
0xc8e: Push((int) 539360)
0xc8f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc90: Pop(3)
0xc91: PushEmpty(bool, object, int)
0xc92: Stack[-2] = Stack[-4]
0xc93: Stack[-1] = (int) 729
0xc94: Call2 0xccc

0xc95: Pop(3)
0xc96: Return(); Pop(2)

0xc97: Stack[-1] = 0
0xc98: PushEmpty(object, object)
0xc99: Push((int) 736)
0xc9a: Push((int) 1)
0xc9b: Push((int) 539366)
0xc9c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc9d: Pop(3)
0xc9e: PushEmpty(bool, object, int)
0xc9f: Stack[-2] = Stack[-4]
0xca0: Stack[-1] = (int) 729
0xca1: Call2 0xccc

0xca2: Pop(3)
0xca3: Return(); Pop(2)

0xca4: Stack[-1] = 0
0xca5: PushEmpty(object, object)
0xca6: Push((int) 743)
0xca7: Push((int) 2)
0xca8: Push((int) 539460)
0xca9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcaa: Pop(3)
0xcab: PushEmpty(bool, object, int)
0xcac: Stack[-2] = Stack[-4]
0xcad: Stack[-1] = (int) 740
0xcae: Call2 0xccc

0xcaf: Pop(3)
0xcb0: Return(); Pop(2)

0xcb1: Stack[-1] = 0
0xcb2: PushEmpty(object, object)
0xcb3: Push((int) 415)
0xcb4: Push((int) 1)
0xcb5: Push((int) 526116)
0xcb6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: PushEmpty(bool, object, int)
0xcb9: Stack[-2] = Stack[-4]
0xcba: Stack[-1] = (int) 408
0xcbb: Call2 0xccc

0xcbc: Pop(3)
0xcbd: Return(); Pop(2)

0xcbe: Stack[-1] = 0
0xcbf: PushEmpty(object, object)
0xcc0: @ GetDiaryRoot(Stack[-1])
0xcc1: Pop(0)
0xcc2: Pop(0); Push((bool) Stack[-1] == 0)
0xcc3: IF (Stack[-1] == 0) GOTO 0xcc9; Pop(1)

0xcc4: Push("Can't retrieve diary root")
0xcc5: @ Trace(Stack[-1])
0xcc6: Pop(1)
0xcc7: Stack[-3] = (bool) 0
0xcc8: Return(); Pop(2)

0xcc9: Stack[-3] = Stack[-1]
0xcca: Return(); Pop(2)

0xccb: Stack[-1] = 0
0xccc: PushEmpty(object, object, int, object, object, int)
0xccd: PushEmpty(object)
0xcce: Call2 0xcbf

0xccf: Stack[-4] = Stack[-1]
0xcd0: Pop(1)
0xcd1: @@ Find(Stack[-7], Stack[-2])
0xcd2: Pop(0)
0xcd3: Pop(0); Push((bool) Stack[-2] == 0)
0xcd4: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd5: Push("Can't find diary parent with id: ")
0xcd6: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcd7: @ Trace(Stack[-1])
0xcd8: Pop(1)
0xcd9: Stack[-9] = (bool) 0
0xcda: Return(); Pop(6)

0xcdb: @@ AddChild(Stack[-8])
0xcdc: Pop(0)
0xcdd: Push((int) 7)
0xcde: @ SendWorldWndMessage(Stack[-1])
0xcdf: Pop(1)
0xce0: @@ GetCategory(Stack[-1])
0xce1: Pop(0)
0xce2: @ SetDiarySection(Stack[-1])
0xce3: Pop(0)
0xce4: Stack[-9] = (bool) 0
0xce5: Return(); Pop(6)

0xce6: Stack[-2] = 0
0xce7: Stack[-3] = 0
0xce8: PushEmpty(int, int)
0xce9: Push("branch")
0xcea: @ GetVariable(Stack[-1], Stack[-2])
0xceb: Pop(1)
0xcec: Push((int) 0)
0xced: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcee: IF (Stack[-1] == 0) GOTO 0xcf2; Pop(1)

0xcef: Stack[-3] = (int) 1
0xcf0: Return(); Pop(2)

0xcf1: GOTO 0xcf7

0xcf2: Push((int) 1)
0xcf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf4: IF (Stack[-1] == 0) GOTO 0xcf7; Pop(1)

0xcf5: Stack[-3] = (int) 2
0xcf6: Return(); Pop(2)

0xcf7: Stack[-3] = (int) 3
0xcf8: Return(); Pop(2)

0xcf9: PushEmpty()
0xcfa: Push((int) 6)
0xcfb: @@ add(Stack[-1])
0xcfc: Pop(1)
0xcfd: Push((int) 26)
0xcfe: @@ add(Stack[-1])
0xcff: Pop(1)
0xd00: Push((int) 2)
0xd01: @@ add(Stack[-1])
0xd02: Pop(1)
0xd03: Push((int) 22)
0xd04: @@ add(Stack[-1])
0xd05: Pop(1)
0xd06: Push((bool) 0)
0xd07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd08: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd09: Push((int) 15)
0xd0a: @@ add(Stack[-1])
0xd0b: Pop(1)
0xd0c: Push((int) 5)
0xd0d: @@ add(Stack[-1])
0xd0e: Pop(1)
0xd0f: Push((int) 16)
0xd10: @@ add(Stack[-1])
0xd11: Pop(1)
0xd12: GOTO 0xd19

0xd13: Push((int) 0)
0xd14: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd19; Pop(1)

0xd16: Push((int) 15)
0xd17: @@ add(Stack[-1])
0xd18: Pop(1)
0xd19: Return(); Pop(0)

0xd1a: PushEmpty(int, int)
0xd1b: Push("vol_")
0xd1c: Pop(1); Push(Stack[-1] + Stack[-4]);
0xd1d: @ GetVariable(Stack[-1], Stack[-2])
0xd1e: Pop(1)
0xd1f: Push((int) 4)
0xd20: Pop(1); Push(Stack[-2] & Stack[-1]);
0xd21: Push((int) 0)
0xd22: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xd23: Return(); Pop(2)

0xd24: PushEmpty(int, int)
0xd25: Push("vol_")
0xd26: Pop(1); Push(Stack[-1] + Stack[-4]);
0xd27: @ GetVariable(Stack[-1], Stack[-2])
0xd28: Pop(1)
0xd29: Push((int) 16)
0xd2a: Pop(1); Push(Stack[-2] & Stack[-1]);
0xd2b: Push((int) 0)
0xd2c: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xd2d: Return(); Pop(2)

0xd2e: PushEmpty(object, int, int, int, object, int, int, int)
0xd2f: @ CreateIntVector(Stack[-4])
0xd30: Pop(0)
0xd31: PushEmpty(object, bool, int)
0xd32: Stack[-3] = Stack[-7]
0xd33: Stack[-2] = (bool) 0
0xd34: Stack[-1] = (int) -1
0xd35: Call2 0xcf9

0xd36: Pop(3)
0xd37: @@ size(Stack[-3])
0xd38: Pop(0)
0xd39: Stack[-2] = (int) 0
0xd3a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd51; Pop(1)

0xd3c: @@ get(Stack[-1], Stack[-2])
0xd3d: Pop(0)
0xd3e: PushEmpty(bool)
0xd3f: Stack[-1] = (bool) 1
0xd40: PushEmpty(bool, int)
0xd41: Stack[-1] = Stack[-4]
0xd42: Call2 0xd24

0xd43: Pop(1)
0xd44: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd45: PushEmpty(bool, int)
0xd46: Stack[-1] = Stack[-4]
0xd47: Call2 0xd1a

0xd48: Pop(1)
0xd49: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd4a: Stack[-1] = (bool) 0
0xd4b: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd4c: Stack[-9] = (bool) 0
0xd4d: Return(); Pop(8)

0xd4e: Push((int) 1)
0xd4f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd50: GOTO 0xd3a

0xd51: Stack[-9] = (bool) 1
0xd52: Return(); Pop(8)

0xd53: Stack[-4] = 0
0xd54: PushEmpty(int, int)
0xd55: Push("mt_danko")
0xd56: @ GetVariable(Stack[-1], Stack[-2])
0xd57: Pop(1)
0xd58: Pop(0); Push((bool) Stack[-1] == 0)
0xd59: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd5a: PushEmpty(int, object)
0xd5b: Stack[-1] = Stack[-5]
0xd5c: Push(-2, 1); TaskCall(0)
0xd5d: Call2 0x0

0xd5e: Pop(-2, 1); TaskReturn
0xd5f: Pop(2)
0xd60: Push("mt_danko")
0xd61: Push((int) 1)
0xd62: @ SetVariable(Stack[-2], Stack[-1])
0xd63: Pop(2)
0xd64: PushEmpty(bool, int)
0xd65: Stack[-1] = (int) 5
0xd66: Call2 0xb94

0xd67: Pop(1)
0xd68: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd69: PushEmpty(int, object)
0xd6a: Stack[-1] = Stack[-5]
0xd6b: Push(-2, 1); TaskCall(8)
0xd6c: Call2 0x684

0xd6d: Pop(-2, 1); TaskReturn
0xd6e: Pop(2)
0xd6f: Return(); Pop(2)

0xd70: PushEmpty(bool, int)
0xd71: Stack[-1] = (int) 6
0xd72: Call2 0xb94

0xd73: Pop(1)
0xd74: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd75: PushEmpty(int, object)
0xd76: Stack[-1] = Stack[-5]
0xd77: Push(-2, 1); TaskCall(2)
0xd78: Call2 0xf9

0xd79: Pop(-2, 1); TaskReturn
0xd7a: Pop(2)
0xd7b: Return(); Pop(2)

0xd7c: PushEmpty(bool, int)
0xd7d: Stack[-1] = (int) 7
0xd7e: Call2 0xb94

0xd7f: Pop(1)
0xd80: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd81: PushEmpty(int, object)
0xd82: Stack[-1] = Stack[-5]
0xd83: Push(-2, 1); TaskCall(4)
0xd84: Call2 0x276

0xd85: Pop(-2, 1); TaskReturn
0xd86: Pop(2)
0xd87: Return(); Pop(2)

0xd88: PushEmpty(bool, int)
0xd89: Stack[-1] = (int) 12
0xd8a: Call2 0xb94

0xd8b: Pop(1)
0xd8c: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd8d: PushEmpty(int, object)
0xd8e: Stack[-1] = Stack[-5]
0xd8f: Push(-2, 1); TaskCall(6)
0xd90: Call2 0x3bb

0xd91: Pop(-2, 1); TaskReturn
0xd92: Pop(2)
0xd93: Return(); Pop(2)

0xd94: PushEmpty(int, object)
0xd95: Stack[-1] = Stack[-5]
0xd96: Push(-2, 1); TaskCall(10)
0xd97: Call2 0x7eb

0xd98: Pop(-2, 1); TaskReturn
0xd99: Pop(2)
0xd9a: Return(); Pop(2)

