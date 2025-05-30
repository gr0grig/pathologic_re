GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Grin
	Anger
	Jeer
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Georg.png
	ui/NPC_Georg_b.png
	b8q03
	b8q03GeorgGotoKaterina
	pt_map_katerina
	AddMark
	oob8Georg1
	oob8Georg2
	playsound
	givemoney
	b8GeorgVisit
	money3000 is given
	b8q03MladVladIsVictim
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x637
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d1 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x50f Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x60d Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x683 Vars = (int)
		EVENT_6 Op = 0x6a9 Vars = ()
		EVENT_5 Op = 0x6b8 Vars = ()
		EVENT_45 Op = 0x6c5 Vars = (bool)
		EVENT_0 Op = 0x6d1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x761

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8d9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8d7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8db

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8dd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x9ef

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
0x31: Call2 0x877

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x7b8

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
0x48: Call2 0x7a6

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
0x5b: Push((int) 518057)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518058)
0x61: Push((int) 32643)
0x62: Push((int) 19191)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 531316)
0x66: Push((int) 32643)
0x67: Push((int) 32642)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x8df

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x842

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
0x8d: Call2 0x8df

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
0x9d: Call2 0x852

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x870

0xa6: Pop(0)
0xa7: Push((int) 19190)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518057)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518058)
0xb4: Push((int) 32643)
0xb5: Push((int) 19191)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 531316)
0xb9: Push((int) 32643)
0xba: Push((int) 32642)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 32643)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 531317)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 531318)
0xcb: Push((int) -1)
0xcc: Push((int) 32644)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 531319)
0xd0: Push((int) -1)
0xd1: Push((int) 32645)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x8df

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x761

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x8d9

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x8d7

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x8db

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x8dd

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x9ef

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0x877

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x7b8

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0x7a6

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x92f

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x13e: PushEmpty(object, object)
0x13f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x140: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141: Call2 0x8fb

0x142: Pop(2)
0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0x90d

0x147: Pop(2)
0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0x1bb

0x14b: Pop(1)
0x14c: Push((int) 521502)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 523951)
0x152: Push((int) 25235)
0x153: Push((int) 25234)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 523957)
0x157: Push((int) 25241)
0x158: Push((int) 25240)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: GOTO 0x19d

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0x1bb

0x15f: Pop(1)
0x160: Push((int) 521505)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x93b

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 521506)
0x16b: Push((int) 22668)
0x16c: Push((int) 22667)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool)
0x170: Stack[-1] = (bool) 0
0x171: PushEmpty(bool, object)
0x172: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x173: Call2 0x95e

0x174: Pop(1)
0x175: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x975

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Stack[-1] = (bool) 1
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: Push((int) 521523)
0x17e: Push((int) 25213)
0x17f: Push((int) 22684)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: PushEmpty(bool)
0x183: Stack[-1] = (bool) 0
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x947

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call2 0x975

0x18c: Pop(1)
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: Stack[-1] = (bool) 1
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: Push((int) 521526)
0x191: Push((int) 22688)
0x192: Push((int) 22687)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Push((int) 521509)
0x196: Push((int) -1)
0x197: Push((int) 22670)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: GOTO 0x19d

0x19b: Return(); Pop(0)

0x19c: GOTO 0x137

0x19d: PushEmpty(bool)
0x19e: Call2 0x8df

0x19f: Pop(0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a1: @ lshWaitForAnimEnd()
0x1a2: Pop(0)
0x1a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1ab

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a8: Call2 0x842

0x1a9: Pop(1)
0x1aa: GOTO 0x1a1

0x1ab: GOTO 0x1ba

0x1ac: Push("all")
0x1ad: Push("idle")
0x1ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: @ WaitForAnimEnd()
0x1b1: Pop(0)
0x1b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: GOTO 0x1ba

0x1b5: Push("all")
0x1b6: Push("idle")
0x1b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: GOTO 0x1b0

0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: PushEmpty(bool)
0x1bd: Call2 0x8df

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Return(); Pop(0)

0x1c2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Return(); Pop(0)

0x1c5: PushEmpty(string, bool)
0x1c6: Stack[-2] = Stack[-3]
0x1c7: Push("")
0x1c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-1] = (bool) 0
0x1cb: GOTO 0x1cd

0x1cc: Stack[-1] = (bool) 1
0x1cd: Call2 0x852

0x1ce: Pop(2)
0x1cf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: Push((int) 1)
0x1d3: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call2 0x870

0x1d6: Pop(0)
0x1d7: Push((int) 22664)
0x1d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call2 0x8e1

0x1de: Pop(2)
0x1df: Push((int) 22669)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x8e1

0x1e6: Pop(2)
0x1e7: Push((int) 22684)
0x1e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0x901

0x1ee: Pop(2)
0x1ef: Push((int) 25222)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(object, object)
0x1f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0x913

0x1f6: Pop(2)
0x1f7: Push((int) 25223)
0x1f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: PushEmpty(object, object)
0x1fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fd: Call2 0x913

0x1fe: Pop(2)
0x1ff: Push((int) 25224)
0x200: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object, object)
0x203: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call2 0x913

0x206: Pop(2)
0x207: Push((int) 25219)
0x208: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: PushEmpty(object, object)
0x20b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20d: Call2 0x913

0x20e: Pop(2)
0x20f: Push((int) 25220)
0x210: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x212: PushEmpty(object, object)
0x213: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x214: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x215: Call2 0x913

0x216: Pop(2)
0x217: Push((int) 22687)
0x218: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: PushEmpty(object, object)
0x21b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21d: Call2 0x901

0x21e: Pop(2)
0x21f: Push((int) 22689)
0x220: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x222: PushEmpty(object, object)
0x223: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x224: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x225: Call2 0x907

0x226: Pop(2)
0x227: PushEmpty(object, object)
0x228: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x229: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22a: Call2 0x925

0x22b: Pop(2)
0x22c: PushEmpty(object, object)
0x22d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22f: Call2 0x91c

0x230: Pop(2)
0x231: Push((int) 25228)
0x232: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x234: PushEmpty(object, object)
0x235: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x236: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x237: Call2 0x925

0x238: Pop(2)
0x239: PushEmpty(object, object)
0x23a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23c: Call2 0x907

0x23d: Pop(2)
0x23e: PushEmpty(object, object)
0x23f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x240: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x241: Call2 0x91c

0x242: Pop(2)
0x243: Push((int) 25229)
0x244: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: PushEmpty(object, object)
0x247: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x248: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x249: Call2 0x91c

0x24a: Pop(2)
0x24b: Push((int) 25231)
0x24c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(object, object)
0x24f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x250: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x251: Call2 0x91c

0x252: Pop(2)
0x253: Push((int) 22663)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x256: PushEmpty(bool, object)
0x257: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x258: Call2 0x92f

0x259: Pop(1)
0x25a: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x25b: PushEmpty(object, object)
0x25c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Call2 0x8fb

0x25f: Pop(2)
0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call2 0x90d

0x264: Pop(2)
0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral"
0x267: Call2 0x1bb

0x268: Pop(1)
0x269: Push((int) 521502)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: Push((int) 523951)
0x26f: Push((int) 25235)
0x270: Push((int) 25234)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Push((int) 523957)
0x274: Push((int) 25241)
0x275: Push((int) 25240)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Neutral"
0x27b: Call2 0x1bb

0x27c: Pop(1)
0x27d: Push((int) 521505)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x284: Call2 0x93b

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: Push((int) 521506)
0x288: Push((int) 22668)
0x289: Push((int) 22667)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: PushEmpty(bool)
0x28d: Stack[-1] = (bool) 0
0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call2 0x95e

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x295: Call2 0x975

0x296: Pop(1)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = (bool) 1
0x299: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29a: Push((int) 521523)
0x29b: Push((int) 25213)
0x29c: Push((int) 22684)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: PushEmpty(bool, object)
0x2a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Call2 0x947

0x2a4: Pop(1)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a6: PushEmpty(bool, object)
0x2a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Call2 0x975

0x2a9: Pop(1)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Stack[-1] = (bool) 1
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ad: Push((int) 521526)
0x2ae: Push((int) 22688)
0x2af: Push((int) 22687)
0x2b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(3)
0x2b2: Push((int) 521509)
0x2b3: Push((int) -1)
0x2b4: Push((int) 22670)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 22688)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Grin"
0x2bd: Call2 0x1bb

0x2be: Pop(1)
0x2bf: Push((int) 521527)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 521528)
0x2c5: Push((int) -1)
0x2c6: Push((int) 22689)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Push((int) 523942)
0x2ca: Push((int) 25227)
0x2cb: Push((int) 25225)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Push((int) 523943)
0x2cf: Push((int) 25230)
0x2d0: Push((int) 25226)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Return(); Pop(0)

0x2d4: Push((int) 25230)
0x2d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "Grin"
0x2d9: Call2 0x1bb

0x2da: Pop(1)
0x2db: Push((int) 523947)
0x2dc: @@ SetMessage(Stack[-1])
0x2dd: Pop(1)
0x2de: @@ ClearReplies()
0x2df: Pop(0)
0x2e0: Push((int) 523948)
0x2e1: Push((int) -1)
0x2e2: Push((int) 25231)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 25227)
0x2e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = "Grin"
0x2eb: Call2 0x1bb

0x2ec: Pop(1)
0x2ed: Push((int) 523944)
0x2ee: @@ SetMessage(Stack[-1])
0x2ef: Pop(1)
0x2f0: @@ ClearReplies()
0x2f1: Pop(0)
0x2f2: Push((int) 523945)
0x2f3: Push((int) -1)
0x2f4: Push((int) 25228)
0x2f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(3)
0x2f7: Push((int) 523946)
0x2f8: Push((int) -1)
0x2f9: Push((int) 25229)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 25213)
0x2fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x300: PushEmpty(string)
0x301: Stack[-1] = "Neutral"
0x302: Call2 0x1bb

0x303: Pop(1)
0x304: Push((int) 523930)
0x305: @@ SetMessage(Stack[-1])
0x306: Pop(1)
0x307: @@ ClearReplies()
0x308: Pop(0)
0x309: Push((int) 523931)
0x30a: Push((int) 22685)
0x30b: Push((int) 25214)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Push((int) 523932)
0x30f: Push((int) 25216)
0x310: Push((int) 25215)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 25216)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Grin"
0x319: Call2 0x1bb

0x31a: Pop(1)
0x31b: Push((int) 523933)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 530662)
0x321: Push((int) 22685)
0x322: Push((int) 31958)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 22685)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Grin"
0x32b: Call2 0x1bb

0x32c: Pop(1)
0x32d: Push((int) 521524)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 521525)
0x333: Push((int) 25221)
0x334: Push((int) 22686)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 523934)
0x338: Push((int) 25218)
0x339: Push((int) 25217)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 25218)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Grin"
0x342: Call2 0x1bb

0x343: Pop(1)
0x344: Push((int) 523935)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 523936)
0x34a: Push((int) -1)
0x34b: Push((int) 25219)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Push((int) 523937)
0x34f: Push((int) -1)
0x350: Push((int) 25220)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Push((int) 25221)
0x355: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x357: PushEmpty(string)
0x358: Stack[-1] = "Grin"
0x359: Call2 0x1bb

0x35a: Pop(1)
0x35b: Push((int) 523938)
0x35c: @@ SetMessage(Stack[-1])
0x35d: Pop(1)
0x35e: @@ ClearReplies()
0x35f: Pop(0)
0x360: Push((int) 523939)
0x361: Push((int) -1)
0x362: Push((int) 25222)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Push((int) 523940)
0x366: Push((int) -1)
0x367: Push((int) 25223)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Push((int) 523941)
0x36b: Push((int) -1)
0x36c: Push((int) 25224)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Return(); Pop(0)

0x370: Push((int) 22668)
0x371: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x373: PushEmpty(string)
0x374: Stack[-1] = "Neutral"
0x375: Call2 0x1bb

0x376: Pop(1)
0x377: Push((int) 521507)
0x378: @@ SetMessage(Stack[-1])
0x379: Pop(1)
0x37a: @@ ClearReplies()
0x37b: Pop(0)
0x37c: Push((int) 523949)
0x37d: Push((int) 25233)
0x37e: Push((int) 25232)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 25233)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x1bb

0x388: Pop(1)
0x389: Push((int) 523950)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 521508)
0x38f: Push((int) -1)
0x390: Push((int) 22669)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Return(); Pop(0)

0x394: Push((int) 25241)
0x395: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x397: PushEmpty(string)
0x398: Stack[-1] = "Neutral"
0x399: Call2 0x1bb

0x39a: Pop(1)
0x39b: Push((int) 523958)
0x39c: @@ SetMessage(Stack[-1])
0x39d: Pop(1)
0x39e: @@ ClearReplies()
0x39f: Pop(0)
0x3a0: Push((int) 523959)
0x3a1: Push((int) 25235)
0x3a2: Push((int) 25242)
0x3a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Push((int) 25235)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Anger"
0x3ab: Call2 0x1bb

0x3ac: Pop(1)
0x3ad: Push((int) 523952)
0x3ae: @@ SetMessage(Stack[-1])
0x3af: Pop(1)
0x3b0: @@ ClearReplies()
0x3b1: Pop(0)
0x3b2: Push((int) 523953)
0x3b3: Push((int) 25237)
0x3b4: Push((int) 25236)
0x3b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b6: Pop(3)
0x3b7: Push((int) 523960)
0x3b8: Push((int) 25245)
0x3b9: Push((int) 25244)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 25245)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call2 0x1bb

0x3c3: Pop(1)
0x3c4: Push((int) 523961)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: Push((int) 523962)
0x3ca: Push((int) 25247)
0x3cb: Push((int) 25246)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 25247)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral"
0x3d4: Call2 0x1bb

0x3d5: Pop(1)
0x3d6: Push((int) 523963)
0x3d7: @@ SetMessage(Stack[-1])
0x3d8: Pop(1)
0x3d9: @@ ClearReplies()
0x3da: Pop(0)
0x3db: Push((int) 523964)
0x3dc: Push((int) 25237)
0x3dd: Push((int) 25248)
0x3de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3df: Pop(3)
0x3e0: Return(); Pop(0)

0x3e1: Push((int) 25237)
0x3e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3e4: PushEmpty(string)
0x3e5: Stack[-1] = "Anger"
0x3e6: Call2 0x1bb

0x3e7: Pop(1)
0x3e8: Push((int) 523954)
0x3e9: @@ SetMessage(Stack[-1])
0x3ea: Pop(1)
0x3eb: @@ ClearReplies()
0x3ec: Pop(0)
0x3ed: Push((int) 523955)
0x3ee: Push((int) 25239)
0x3ef: Push((int) 25238)
0x3f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f1: Pop(3)
0x3f2: Return(); Pop(0)

0x3f3: Push((int) 25239)
0x3f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3f6: PushEmpty(string)
0x3f7: Stack[-1] = "Jeer"
0x3f8: Call2 0x1bb

0x3f9: Pop(1)
0x3fa: Push((int) 523956)
0x3fb: @@ SetMessage(Stack[-1])
0x3fc: Pop(1)
0x3fd: @@ ClearReplies()
0x3fe: Pop(0)
0x3ff: Push((int) 523965)
0x400: Push((int) 25250)
0x401: Push((int) 25249)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Push((int) 523970)
0x405: Push((int) 25261)
0x406: Push((int) 25254)
0x407: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: Push((int) 25261)
0x40b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x40d: PushEmpty(string)
0x40e: Stack[-1] = "Jeer"
0x40f: Call2 0x1bb

0x410: Pop(1)
0x411: Push((int) 523974)
0x412: @@ SetMessage(Stack[-1])
0x413: Pop(1)
0x414: @@ ClearReplies()
0x415: Pop(0)
0x416: Push((int) 523975)
0x417: Push((int) 25250)
0x418: Push((int) 25262)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Return(); Pop(0)

0x41c: Push((int) 25250)
0x41d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41f: PushEmpty(string)
0x420: Stack[-1] = "Grin"
0x421: Call2 0x1bb

0x422: Pop(1)
0x423: Push((int) 523966)
0x424: @@ SetMessage(Stack[-1])
0x425: Pop(1)
0x426: @@ ClearReplies()
0x427: Pop(0)
0x428: Push((int) 523967)
0x429: Push((int) 25252)
0x42a: Push((int) 25251)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: Push((int) 25252)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Grin"
0x433: Call2 0x1bb

0x434: Pop(1)
0x435: Push((int) 523968)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 523971)
0x43b: Push((int) 25256)
0x43c: Push((int) 25255)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Push((int) 523973)
0x440: Push((int) 25256)
0x441: Push((int) 25257)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: Return(); Pop(0)

0x445: Push((int) 25256)
0x446: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x448: PushEmpty(string)
0x449: Stack[-1] = "Grin"
0x44a: Call2 0x1bb

0x44b: Pop(1)
0x44c: Push((int) 523972)
0x44d: @@ SetMessage(Stack[-1])
0x44e: Pop(1)
0x44f: @@ ClearReplies()
0x450: Pop(0)
0x451: Push((int) 521503)
0x452: Push((int) -1)
0x453: Push((int) 22664)
0x454: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: Push((int) 521504)
0x457: Push((int) -1)
0x458: Push((int) 22665)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Return(); Pop(0)

0x45c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x45d: PushEmpty(bool)
0x45e: Call2 0x8df

0x45f: Pop(0)
0x460: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x461: @ lshStopAnimation()
0x462: Pop(0)
0x463: GOTO 0x466

0x464: @ StopAnimation()
0x465: Pop(0)
0x466: Return(); Pop(0)

0x467: GOTO 0x1d2

0x468: Return(); Pop(0)

0x469: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x46a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x46b: PushEmpty(bool, object, float)
0x46c: Stack[-2] = Stack[-12]
0x46d: Stack[-1] = (float) 70.0
0x46e: Call2 0x761

0x46f: Pop(2)
0x470: Pop(1); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-10] = (int) -2
0x473: Return(); Pop(8)

0x474: @ CreateDialog(Stack[-4])
0x475: Pop(0)
0x476: PushEmpty(int)
0x477: Call2 0x8d9

0x478: Pop(0)
0x479: @@ SetNPCName(Stack[-1])
0x47a: Pop(1)
0x47b: PushEmpty(int)
0x47c: Call2 0x8d7

0x47d: Pop(0)
0x47e: @@ SetNPCDescription(Stack[-1])
0x47f: Pop(1)
0x480: PushEmpty(string)
0x481: Call2 0x8db

0x482: Pop(0)
0x483: @@ SetPhoto(Stack[-1])
0x484: Pop(1)
0x485: PushEmpty(string)
0x486: Call2 0x8dd

0x487: Pop(0)
0x488: @@ SetPhoto2(Stack[-1])
0x489: Pop(1)
0x48a: PushEmpty(int)
0x48b: Call2 0x9ef

0x48c: Pop(0)
0x48d: @@ SetPlayerName(Stack[-1])
0x48e: Pop(1)
0x48f: Stack[-2] = (int) -1
0x490: @ IsOverrideActive(Stack[-3])
0x491: Pop(0)
0x492: Push(Stack[-3])
0x493: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x494: Stack[-10] = (int) -2
0x495: Return(); Pop(8)

0x496: @ DoDialog(Stack[-4])
0x497: Pop(0)
0x498: PushEmpty(bool, object)
0x499: PushEmpty(object)
0x49a: Call2 0x877

0x49b: Stack[-2] = Stack[-1]
0x49c: Pop(1)
0x49d: Call2 0x7b8

0x49e: Pop(2)
0x49f: PushEmpty(object, object)
0x4a0: Stack[-2] = Stack[-11]
0x4a1: Stack[-1] = Stack[-6]
0x4a2: Push(-2, 4); TaskCall(5)
0x4a3: Call2 0x4ba

0x4a4: Pop(-2, 4); TaskReturn
0x4a5: Pop(2)
0x4a6: @@ IsDialogEnd(Stack[-1])
0x4a7: Pop(0)
0x4a8: Pop(0); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4aa: @ sync()
0x4ab: Pop(0)
0x4ac: @@ IsDialogEnd(Stack[-1])
0x4ad: Pop(0)
0x4ae: GOTO 0x4a8

0x4af: PushEmpty(object)
0x4b0: Stack[-1] = Stack[-10]
0x4b1: Call2 0x7a6

0x4b2: Pop(1)
0x4b3: @ StopDialog(Stack[-4])
0x4b4: Pop(0)
0x4b5: @@ GetReturnValue(Stack[-2])
0x4b6: Pop(0)
0x4b7: Stack[-10] = Stack[-2]
0x4b8: Return(); Pop(8)

0x4b9: Stack[-4] = 0
0x4ba: PushEmpty()
0x4bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4be: Push((int) 1)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4c0: PushEmpty(string)
0x4c1: Stack[-1] = "Neutral"
0x4c2: Call2 0x4f9

0x4c3: Pop(1)
0x4c4: Push((int) 535231)
0x4c5: @@ SetMessage(Stack[-1])
0x4c6: Pop(1)
0x4c7: @@ ClearReplies()
0x4c8: Pop(0)
0x4c9: Push((int) 535232)
0x4ca: Push((int) 36953)
0x4cb: Push((int) 36907)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: Push((int) 535233)
0x4cf: Push((int) -1)
0x4d0: Push((int) 36908)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 535280)
0x4d4: Push((int) -1)
0x4d5: Push((int) 36956)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: GOTO 0x4db

0x4d9: Return(); Pop(0)

0x4da: GOTO 0x4be

0x4db: PushEmpty(bool)
0x4dc: Call2 0x8df

0x4dd: Pop(0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4df: @ lshWaitForAnimEnd()
0x4e0: Pop(0)
0x4e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: GOTO 0x4e9

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e6: Call2 0x842

0x4e7: Pop(1)
0x4e8: GOTO 0x4df

0x4e9: GOTO 0x4f8

0x4ea: Push("all")
0x4eb: Push("idle")
0x4ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ed: Pop(2)
0x4ee: @ WaitForAnimEnd()
0x4ef: Pop(0)
0x4f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f2: GOTO 0x4f8

0x4f3: Push("all")
0x4f4: Push("idle")
0x4f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f6: Pop(2)
0x4f7: GOTO 0x4ee

0x4f8: Return(); Pop(0)

0x4f9: PushEmpty()
0x4fa: PushEmpty(bool)
0x4fb: Call2 0x8df

0x4fc: Pop(0)
0x4fd: Pop(1); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ff: Return(); Pop(0)

0x500: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: Return(); Pop(0)

0x503: PushEmpty(string, bool)
0x504: Stack[-2] = Stack[-3]
0x505: Push("")
0x506: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-1] = (bool) 0
0x509: GOTO 0x50b

0x50a: Stack[-1] = (bool) 1
0x50b: Call2 0x852

0x50c: Pop(2)
0x50d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x50e: Return(); Pop(0)

0x50f: PushEmpty()
0x510: Push((int) 1)
0x511: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x512: PushEmpty()
0x513: Call2 0x870

0x514: Pop(0)
0x515: Push((int) 36906)
0x516: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x518: PushEmpty(string)
0x519: Stack[-1] = "Neutral"
0x51a: Call2 0x4f9

0x51b: Pop(1)
0x51c: Push((int) 535231)
0x51d: @@ SetMessage(Stack[-1])
0x51e: Pop(1)
0x51f: @@ ClearReplies()
0x520: Pop(0)
0x521: Push((int) 535232)
0x522: Push((int) 36953)
0x523: Push((int) 36907)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Push((int) 535233)
0x527: Push((int) -1)
0x528: Push((int) 36908)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Push((int) 535280)
0x52c: Push((int) -1)
0x52d: Push((int) 36956)
0x52e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(3)
0x530: Return(); Pop(0)

0x531: Push((int) 36953)
0x532: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x534: PushEmpty(string)
0x535: Stack[-1] = "Neutral"
0x536: Call2 0x4f9

0x537: Pop(1)
0x538: Push((int) 535277)
0x539: @@ SetMessage(Stack[-1])
0x53a: Pop(1)
0x53b: @@ ClearReplies()
0x53c: Pop(0)
0x53d: Push((int) 535278)
0x53e: Push((int) 36957)
0x53f: Push((int) 36954)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Push((int) 535279)
0x543: Push((int) 36957)
0x544: Push((int) 36955)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Return(); Pop(0)

0x548: Push((int) 36957)
0x549: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x54b: PushEmpty(string)
0x54c: Stack[-1] = "Neutral"
0x54d: Call2 0x4f9

0x54e: Pop(1)
0x54f: Push((int) 535281)
0x550: @@ SetMessage(Stack[-1])
0x551: Pop(1)
0x552: @@ ClearReplies()
0x553: Pop(0)
0x554: Push((int) 535282)
0x555: Push((int) -1)
0x556: Push((int) 36958)
0x557: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x558: Pop(3)
0x559: Push((int) 535283)
0x55a: Push((int) -1)
0x55b: Push((int) 36959)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: Return(); Pop(0)

0x55f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x560: PushEmpty(bool)
0x561: Call2 0x8df

0x562: Pop(0)
0x563: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x564: @ lshStopAnimation()
0x565: Pop(0)
0x566: GOTO 0x569

0x567: @ StopAnimation()
0x568: Pop(0)
0x569: Return(); Pop(0)

0x56a: GOTO 0x510

0x56b: Return(); Pop(0)

0x56c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x56d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x56e: PushEmpty(bool, object, float)
0x56f: Stack[-2] = Stack[-12]
0x570: Stack[-1] = (float) 70.0
0x571: Call2 0x761

0x572: Pop(2)
0x573: Pop(1); Push((bool) Stack[-1] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-10] = (int) -2
0x576: Return(); Pop(8)

0x577: @ CreateDialog(Stack[-4])
0x578: Pop(0)
0x579: PushEmpty(int)
0x57a: Call2 0x8d9

0x57b: Pop(0)
0x57c: @@ SetNPCName(Stack[-1])
0x57d: Pop(1)
0x57e: PushEmpty(int)
0x57f: Call2 0x8d7

0x580: Pop(0)
0x581: @@ SetNPCDescription(Stack[-1])
0x582: Pop(1)
0x583: PushEmpty(string)
0x584: Call2 0x8db

0x585: Pop(0)
0x586: @@ SetPhoto(Stack[-1])
0x587: Pop(1)
0x588: PushEmpty(string)
0x589: Call2 0x8dd

0x58a: Pop(0)
0x58b: @@ SetPhoto2(Stack[-1])
0x58c: Pop(1)
0x58d: PushEmpty(int)
0x58e: Call2 0x9ef

0x58f: Pop(0)
0x590: @@ SetPlayerName(Stack[-1])
0x591: Pop(1)
0x592: Stack[-2] = (int) -1
0x593: @ IsOverrideActive(Stack[-3])
0x594: Pop(0)
0x595: Push(Stack[-3])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-10] = (int) -2
0x598: Return(); Pop(8)

0x599: @ DoDialog(Stack[-4])
0x59a: Pop(0)
0x59b: PushEmpty(bool, object)
0x59c: PushEmpty(object)
0x59d: Call2 0x877

0x59e: Stack[-2] = Stack[-1]
0x59f: Pop(1)
0x5a0: Call2 0x7b8

0x5a1: Pop(2)
0x5a2: PushEmpty(object, object)
0x5a3: Stack[-2] = Stack[-11]
0x5a4: Stack[-1] = Stack[-6]
0x5a5: Push(-2, 4); TaskCall(7)
0x5a6: Call2 0x5bd

0x5a7: Pop(-2, 4); TaskReturn
0x5a8: Pop(2)
0x5a9: @@ IsDialogEnd(Stack[-1])
0x5aa: Pop(0)
0x5ab: Pop(0); Push((bool) Stack[-1] == 0)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ad: @ sync()
0x5ae: Pop(0)
0x5af: @@ IsDialogEnd(Stack[-1])
0x5b0: Pop(0)
0x5b1: GOTO 0x5ab

0x5b2: PushEmpty(object)
0x5b3: Stack[-1] = Stack[-10]
0x5b4: Call2 0x7a6

0x5b5: Pop(1)
0x5b6: @ StopDialog(Stack[-4])
0x5b7: Pop(0)
0x5b8: @@ GetReturnValue(Stack[-2])
0x5b9: Pop(0)
0x5ba: Stack[-10] = Stack[-2]
0x5bb: Return(); Pop(8)

0x5bc: Stack[-4] = 0
0x5bd: PushEmpty()
0x5be: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5bf: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5c0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5c1: Push((int) 1)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5c3: PushEmpty(string)
0x5c4: Stack[-1] = "Neutral"
0x5c5: Call2 0x5f7

0x5c6: Pop(1)
0x5c7: Push((int) 540554)
0x5c8: @@ SetMessage(Stack[-1])
0x5c9: Pop(1)
0x5ca: @@ ClearReplies()
0x5cb: Pop(0)
0x5cc: Push((int) 540555)
0x5cd: Push((int) -1)
0x5ce: Push((int) 42564)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Push((int) 540794)
0x5d2: Push((int) -1)
0x5d3: Push((int) 42843)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: GOTO 0x5d9

0x5d7: Return(); Pop(0)

0x5d8: GOTO 0x5c1

0x5d9: PushEmpty(bool)
0x5da: Call2 0x8df

0x5db: Pop(0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5dd: @ lshWaitForAnimEnd()
0x5de: Pop(0)
0x5df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e1: GOTO 0x5e7

0x5e2: PushEmpty(string)
0x5e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5e4: Call2 0x842

0x5e5: Pop(1)
0x5e6: GOTO 0x5dd

0x5e7: GOTO 0x5f6

0x5e8: Push("all")
0x5e9: Push("idle")
0x5ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x5eb: Pop(2)
0x5ec: @ WaitForAnimEnd()
0x5ed: Pop(0)
0x5ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5f0: GOTO 0x5f6

0x5f1: Push("all")
0x5f2: Push("idle")
0x5f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: GOTO 0x5ec

0x5f6: Return(); Pop(0)

0x5f7: PushEmpty()
0x5f8: PushEmpty(bool)
0x5f9: Call2 0x8df

0x5fa: Pop(0)
0x5fb: Pop(1); Push((bool) Stack[-1] == 0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fd: Return(); Pop(0)

0x5fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5ff: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x600: Return(); Pop(0)

0x601: PushEmpty(string, bool)
0x602: Stack[-2] = Stack[-3]
0x603: Push("")
0x604: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-1] = (bool) 0
0x607: GOTO 0x609

0x608: Stack[-1] = (bool) 1
0x609: Call2 0x852

0x60a: Pop(2)
0x60b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: Push((int) 1)
0x60f: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x610: PushEmpty()
0x611: Call2 0x870

0x612: Pop(0)
0x613: Push((int) 42563)
0x614: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x616: PushEmpty(string)
0x617: Stack[-1] = "Neutral"
0x618: Call2 0x5f7

0x619: Pop(1)
0x61a: Push((int) 540554)
0x61b: @@ SetMessage(Stack[-1])
0x61c: Pop(1)
0x61d: @@ ClearReplies()
0x61e: Pop(0)
0x61f: Push((int) 540555)
0x620: Push((int) -1)
0x621: Push((int) 42564)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Push((int) 540794)
0x625: Push((int) -1)
0x626: Push((int) 42843)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Return(); Pop(0)

0x62a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x62b: PushEmpty(bool)
0x62c: Call2 0x8df

0x62d: Pop(0)
0x62e: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62f: @ lshStopAnimation()
0x630: Pop(0)
0x631: GOTO 0x634

0x632: @ StopAnimation()
0x633: Pop(0)
0x634: Return(); Pop(0)

0x635: GOTO 0x60e

0x636: Return(); Pop(0)

0x637: Push(GlobalVars[1])
0x638: Stack[-1] = (bool) 0
0x639: GlobalVars[1] = Stack[-1]; Pop(1)
0x63a: PushEmpty()
0x63b: Call2 0x63e

0x63c: Pop(0)
0x63d: Return(); Pop(0)

0x63e: PushEmpty(bool)
0x63f: Call2 0x75c

0x640: Pop(0)
0x641: Pop(1); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: @ Hold()
0x644: Pop(0)
0x645: @ GetDirection(Stack[-0])
0x646: Pop(0)
0x647: PushEmpty()
0x648: Call2 0x6ee

0x649: Pop(0)
0x64a: GOTO 0x647

0x64b: Return(); Pop(0)

0x64c: PushEmpty(object, object)
0x64d: Push("player")
0x64e: @ FindActor(Stack[-2], Stack[-1])
0x64f: Pop(1)
0x650: Pop(0); Push((bool) Stack[-1] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-3] = (bool) 0
0x653: Return(); Pop(2)

0x654: PushEmpty(bool, object)
0x655: Stack[-1] = Stack[-3]
0x656: Call2 0x753

0x657: Stack[-5] = Stack[-2]
0x658: Pop(2)
0x659: Return(); Pop(2)

0x65a: Stack[-1] = 0
0x65b: Push(CvectorIndex(Stack[-0], 0))
0x65c: Push(CvectorIndex(Stack[-0], 2))
0x65d: @ RotateAsync(Stack[-2], Stack[-1])
0x65e: Pop(2)
0x65f: Return(); Pop(0)

0x660: PushEmpty(object, bool, object, bool)
0x661: Push("player")
0x662: @ FindActor(Stack[-3], Stack[-1])
0x663: Pop(1)
0x664: Pop(0); Push((bool) Stack[-2] == 0)
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: Stack[-5] = (bool) 0
0x667: Return(); Pop(4)

0x668: PushEmpty(float, object)
0x669: Stack[-1] = Stack[-4]
0x66a: Call2 0x73a

0x66b: Pop(1)
0x66c: Push((float)90000.0)
0x66d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-5] = (bool) 0
0x670: Return(); Pop(4)

0x671: @ CanSee(Stack[-1], Stack[-2])
0x672: Pop(0)
0x673: Stack[-5] = Stack[-1]
0x674: Return(); Pop(4)

0x675: Stack[-2] = 0
0x676: PushEmpty(float, float)
0x677: Push((int) 8)
0x678: Push((int) 16)
0x679: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(2)
0x67b: Push((int) 10)
0x67c: @ SetTimer(Stack[-1], Stack[-2])
0x67d: Pop(1)
0x67e: Return(); Pop(2)

0x67f: Push((int) 10)
0x680: @ KillTimer(Stack[-1])
0x681: Pop(1)
0x682: Return(); Pop(0)

0x683: PushEmpty()
0x684: Push((int) 10)
0x685: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x687: PushEmpty()
0x688: Call2 0x67f

0x689: Pop(0)
0x68a: PushEmpty(bool)
0x68b: Stack[-1] = (bool) 0
0x68c: PushEmpty(bool)
0x68d: Call2 0x75c

0x68e: Pop(0)
0x68f: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x690: PushEmpty(bool)
0x691: Call2 0x660

0x692: Pop(0)
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: Stack[-1] = (bool) 1
0x695: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x696: PushEmpty(bool)
0x697: Call2 0x64c

0x698: Pop(0)
0x699: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69a: PushEmpty(bool, object)
0x69b: PushEmpty(object)
0x69c: Call2 0x877

0x69d: Stack[-2] = Stack[-1]
0x69e: Pop(1)
0x69f: Call2 0x7f2

0x6a0: Pop(2)
0x6a1: GOTO 0x6a8

0x6a2: PushEmpty()
0x6a3: Call2 0x65b

0x6a4: Pop(0)
0x6a5: PushEmpty()
0x6a6: Call2 0x676

0x6a7: Pop(0)
0x6a8: Return(); Pop(0)

0x6a9: PushEmpty()
0x6aa: Call2 0x735

0x6ab: Pop(0)
0x6ac: PushEmpty()
0x6ad: Call2 0x67f

0x6ae: Pop(0)
0x6af: @ lshStopSpeech()
0x6b0: Pop(0)
0x6b1: @ lshStopAnimation()
0x6b2: Pop(0)
0x6b3: @ StopAsync()
0x6b4: Pop(0)
0x6b5: @ Hold()
0x6b6: Pop(0)
0x6b7: Return(); Pop(0)

0x6b8: @ StopGroup0()
0x6b9: Pop(0)
0x6ba: PushEmpty()
0x6bb: Call2 0x67f

0x6bc: Pop(0)
0x6bd: PushEmpty(string)
0x6be: Stack[-1] = "Neutral"
0x6bf: Call2 0x842

0x6c0: Pop(1)
0x6c1: PushEmpty()
0x6c2: Call2 0x676

0x6c3: Pop(0)
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty()
0x6c6: Push(Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c8: PushEmpty()
0x6c9: Call2 0x676

0x6ca: Pop(0)
0x6cb: GOTO 0x6d0

0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = "Neutral"
0x6ce: Call2 0x842

0x6cf: Pop(1)
0x6d0: Return(); Pop(0)

0x6d1: PushEmpty(bool, bool)
0x6d2: @ IsOverrideActive(Stack[-1])
0x6d3: Pop(0)
0x6d4: Pop(0); Push((bool) Stack[-1] == 0)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6d6: EventDisable(0)
0x6d7: PushEmpty()
0x6d8: Call2 0x735

0x6d9: Pop(0)
0x6da: PushEmpty(bool, object)
0x6db: Stack[-1] = Stack[-5]
0x6dc: Call2 0x753

0x6dd: Pop(2)
0x6de: EventEnable(0)
0x6df: PushEmpty(object)
0x6e0: Stack[-1] = Stack[-4]
0x6e1: Call2 0xa00

0x6e2: Pop(1)
0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Neutral"
0x6e5: Call2 0x842

0x6e6: Pop(1)
0x6e7: PushEmpty()
0x6e8: Call2 0x67f

0x6e9: Pop(0)
0x6ea: PushEmpty()
0x6eb: Call2 0x676

0x6ec: Pop(0)
0x6ed: Return(); Pop(2)

0x6ee: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6ef: @ WaitForAnimEnd()
0x6f0: Pop(0)
0x6f1: PushEmpty(bool)
0x6f2: Call2 0x75c

0x6f3: Pop(0)
0x6f4: Pop(1); Push((bool) Stack[-1] == 0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: Return(); Pop(12)

0x6f7: PushEmpty(int)
0x6f8: Call2 0x8c6

0x6f9: Stack[-7] = Stack[-1]
0x6fa: Pop(1)
0x6fb: Stack[-5] = (int) 0
0x6fc: PushEmpty(bool)
0x6fd: Stack[-1] = (bool) 0
0x6fe: Push((int) 5)
0x6ff: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x701: PushEmpty(bool)
0x702: Call2 0x75c

0x703: Pop(0)
0x704: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x705: Stack[-1] = (bool) 1
0x706: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x707: Pop(0); Push((bool) Stack[-6] == 0)
0x708: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x709: Push((int) 3)
0x70a: @ Sleep(Stack[-1], Stack[-5])
0x70b: Pop(1)
0x70c: Pop(0); Push((bool) Stack[-4] == 0)
0x70d: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70e: GOTO 0x730

0x70f: GOTO 0x725

0x710: @ irand(Stack[-3], Stack[-6])
0x711: Pop(0)
0x712: Push((int) 5)
0x713: @ irand(Stack[-3], Stack[-1])
0x714: Pop(1)
0x715: Push((int) 0)
0x716: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Stack[-3] = (int) 0
0x719: Push("all")
0x71a: PushEmpty(string, int)
0x71b: Stack[-1] = Stack[-6]
0x71c: Call2 0x8bf

0x71d: Pop(1)
0x71e: @ PlayAnimation(Stack[-2], Stack[-1])
0x71f: Pop(2)
0x720: @ WaitForAnimEnd(Stack[-1])
0x721: Pop(0)
0x722: Pop(0); Push((bool) Stack[-1] == 0)
0x723: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x724: GOTO 0x730

0x725: PushEmpty(bool)
0x726: Call2 0x733

0x727: Pop(0)
0x728: Pop(1); Push((bool) Stack[-1] == 0)
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: GOTO 0x730

0x72b: @ ResetAAS()
0x72c: Pop(0)
0x72d: Push((int) 1)
0x72e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x72f: GOTO 0x6fc

0x730: @ ResetAAS()
0x731: Pop(0)
0x732: Return(); Pop(12)

0x733: Stack[-1] = (bool) 1
0x734: Return(); Pop(0)

0x735: @ StopAnimation()
0x736: Pop(0)
0x737: @ StopGroup0()
0x738: Pop(0)
0x739: Return(); Pop(0)

0x73a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x73b: @ GetPosition(Stack[-3])
0x73c: Pop(0)
0x73d: @@ GetPosition(Stack[-2])
0x73e: Pop(0)
0x73f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x740: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x741: Return(); Pop(6)

0x742: PushEmpty(int, int)
0x743: @@ GetProperty(Stack[-4], Stack[-1])
0x744: Pop(0)
0x745: Pop(0); Push(Stack[-1] + Stack[-3]);
0x746: @@ SetProperty(Stack[-5], Stack[-1])
0x747: Pop(1)
0x748: Return(); Pop(2)

0x749: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x74a: @ GetPosition(Stack[-3])
0x74b: Pop(0)
0x74c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x74d: Push(CvectorIndex(Stack[-2], 0))
0x74e: Push(CvectorIndex(Stack[-3], 2))
0x74f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x750: Pop(2)
0x751: Stack[-8] = Stack[-1]
0x752: Return(); Pop(6)

0x753: PushEmpty(cvector, cvector)
0x754: @@ GetPosition(Stack[-1])
0x755: Pop(0)
0x756: PushEmpty(bool, cvector)
0x757: Stack[-1] = Stack[-3]
0x758: Call2 0x749

0x759: Stack[-6] = Stack[-2]
0x75a: Pop(2)
0x75b: Return(); Pop(2)

0x75c: PushEmpty(bool, bool)
0x75d: @ IsLoaded(Stack[-1])
0x75e: Pop(0)
0x75f: Stack[-3] = Stack[-1]
0x760: Return(); Pop(2)

0x761: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x762: @@ GetPosition(Stack[-8])
0x763: Pop(0)
0x764: @@ GetEyesHeight(Stack[-9])
0x765: Pop(0)
0x766: Push(CvectorIndex(Stack[-8], 1))
0x767: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x768: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x769: @ GetPosition(Stack[-7])
0x76a: Pop(0)
0x76b: @ GetEyesHeight(Stack[-9])
0x76c: Pop(0)
0x76d: Push(CvectorIndex(Stack[-7], 1))
0x76e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x76f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x770: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x771: Push(CvectorIndex(Stack[-6], 1))
0x772: Stack[-1] = (int) 0
0x773: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x774: Pop(0); Push(Stack[-6] | Stack[-6]);
0x775: Pop(1); Push(Sqrt(Stack[-1]))
0x776: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x777: Stack[-5] = -Stack[-6]; Pop(0);
0x778: Pop(0); Push(Stack[-6] * Stack[-19]);
0x779: PushEmpty(cvector, cvector)
0x77a: Push(CVector(0.0, 1.0, 0.0))
0x77b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x77c: Call2 0x87d

0x77d: Pop(1)
0x77e: Push((int) 25)
0x77f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x780: Pop(2); Push(Stack[-2] + Stack[-1]);
0x781: Push(CVector(0.0, 10.0, 0.0))
0x782: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x783: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x784: @ IsOverrideActive(Stack[-2])
0x785: Pop(0)
0x786: Push(Stack[-2])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-21] = (bool) 0
0x789: Return(); Pop(18)

0x78a: @ StopWorld()
0x78b: Pop(0)
0x78c: Push((bool) 1)
0x78d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x78e: Pop(1)
0x78f: Push(CvectorIndex(Stack[-4], 0))
0x790: Push(CvectorIndex(Stack[-5], 2))
0x791: @ Rotate(Stack[-2], Stack[-1])
0x792: Pop(2)
0x793: PushEmpty(bool)
0x794: Call2 0x8df

0x795: Pop(0)
0x796: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x797: GOTO 0x7a0

0x798: Push("head")
0x799: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x79a: Pop(1)
0x79b: Push(Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79d: Push("head")
0x79e: @ LookAsyncCamera(Stack[-1])
0x79f: Pop(1)
0x7a0: @ CameraWaitForPlayFinish()
0x7a1: Pop(0)
0x7a2: @ ResumeWorld()
0x7a3: Pop(0)
0x7a4: Stack[-21] = (bool) 1
0x7a5: Return(); Pop(18)

0x7a6: PushEmpty(bool, bool)
0x7a7: Push((bool) 1)
0x7a8: @ CameraSwitchToNormal(Stack[-1])
0x7a9: Pop(1)
0x7aa: PushEmpty(bool)
0x7ab: Call2 0x8df

0x7ac: Pop(0)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ae: GOTO 0x7b7

0x7af: Push("head")
0x7b0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7b1: Pop(1)
0x7b2: Push(Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b4: Push("head")
0x7b5: @ UnlookAsync(Stack[-1])
0x7b6: Pop(1)
0x7b7: Return(); Pop(2)

0x7b8: PushEmpty(int, int, int, int)
0x7b9: Push("voice_common")
0x7ba: @ GetVariable(Stack[-1], Stack[-3])
0x7bb: Pop(1)
0x7bc: Push(Stack[-2])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7be: PushEmpty(bool, object)
0x7bf: Stack[-1] = Stack[-7]
0x7c0: Call2 0x7f2

0x7c1: Pop(1)
0x7c2: Pop(1); Push((bool) Stack[-1] == 0)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c4: PushEmpty(bool, object)
0x7c5: Stack[-1] = Stack[-7]
0x7c6: Call2 0x817

0x7c7: Pop(1)
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-6] = (bool) 0
0x7cb: Return(); Pop(4)

0x7cc: Push((int) 2)
0x7cd: @ irand(Stack[-2], Stack[-1])
0x7ce: Pop(1)
0x7cf: Push(Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d1: Push("voice_common")
0x7d2: Push((int) 1)
0x7d3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7d4: Push((int) 3)
0x7d5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7d6: @ SetVariable(Stack[-2], Stack[-1])
0x7d7: Pop(2)
0x7d8: GOTO 0x7dd

0x7d9: Push("voice_common")
0x7da: Push((int) 0)
0x7db: @ SetVariable(Stack[-2], Stack[-1])
0x7dc: Pop(2)
0x7dd: GOTO 0x7f0

0x7de: PushEmpty(bool, object)
0x7df: Stack[-1] = Stack[-7]
0x7e0: Call2 0x817

0x7e1: Pop(1)
0x7e2: Pop(1); Push((bool) Stack[-1] == 0)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e4: PushEmpty(bool, object)
0x7e5: Stack[-1] = Stack[-7]
0x7e6: Call2 0x7f2

0x7e7: Pop(1)
0x7e8: Pop(1); Push((bool) Stack[-1] == 0)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-6] = (bool) 0
0x7eb: Return(); Pop(4)

0x7ec: Push("voice_common")
0x7ed: Push((int) 1)
0x7ee: @ SetVariable(Stack[-2], Stack[-1])
0x7ef: Pop(2)
0x7f0: Stack[-6] = (bool) 1
0x7f1: Return(); Pop(4)

0x7f2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7f3: Stack[-5] = "c"
0x7f4: Stack[-4] = (int) 0
0x7f5: Push((int) 1)
0x7f6: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7f7: Push((int) 1)
0x7f8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7fa: @@ HasProperty(Stack[-1], Stack[-4])
0x7fb: Pop(1)
0x7fc: Pop(0); Push((bool) Stack[-3] == 0)
0x7fd: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fe: GOTO 0x802

0x7ff: Push((int) 1)
0x800: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x801: GOTO 0x7f5

0x802: Pop(0); Push((bool) Stack[-4] == 0)
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-12] = (bool) 0
0x805: Return(); Pop(10)

0x806: Stack[-2] = (int) 0
0x807: Push((int) 1)
0x808: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80a: @ irand(Stack[-2], Stack[-4])
0x80b: Pop(0)
0x80c: Push((int) 1)
0x80d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x80e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x80f: @@ GetProperty(Stack[-1], Stack[-2])
0x810: Pop(1)
0x811: PushEmpty(bool, string)
0x812: Stack[-1] = Stack[-3]
0x813: Call2 0x861

0x814: Stack[-14] = Stack[-2]
0x815: Pop(2)
0x816: Return(); Pop(10)

0x817: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x818: Push("d")
0x819: PushEmpty(int)
0x81a: Call2 0x8b0

0x81b: Pop(0)
0x81c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81d: Push("m")
0x81e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x81f: Stack[-4] = (int) 0
0x820: Push((int) 1)
0x821: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x822: Push((int) 1)
0x823: Pop(1); Push(Stack[-5] + Stack[-1]);
0x824: Pop(1); Push(Stack[-6] + Stack[-1]);
0x825: @@ HasProperty(Stack[-1], Stack[-4])
0x826: Pop(1)
0x827: Pop(0); Push((bool) Stack[-3] == 0)
0x828: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x829: GOTO 0x82d

0x82a: Push((int) 1)
0x82b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x82c: GOTO 0x820

0x82d: Pop(0); Push((bool) Stack[-4] == 0)
0x82e: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82f: Stack[-12] = (bool) 0
0x830: Return(); Pop(10)

0x831: Stack[-2] = (int) 0
0x832: Push((int) 1)
0x833: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x835: @ irand(Stack[-2], Stack[-4])
0x836: Pop(0)
0x837: Push((int) 1)
0x838: Pop(1); Push(Stack[-3] + Stack[-1]);
0x839: Pop(1); Push(Stack[-6] + Stack[-1]);
0x83a: @@ GetProperty(Stack[-1], Stack[-2])
0x83b: Pop(1)
0x83c: PushEmpty(bool, string)
0x83d: Stack[-1] = Stack[-3]
0x83e: Call2 0x861

0x83f: Stack[-14] = Stack[-2]
0x840: Pop(2)
0x841: Return(); Pop(10)

0x842: PushEmpty(bool, float, float, bool, float, float)
0x843: @ lshHasAnimation(Stack[-3], Stack[-7])
0x844: Pop(0)
0x845: Push(Stack[-3])
0x846: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x847: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x848: Pop(0)
0x849: Push((bool) 0)
0x84a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(1)
0x84c: GOTO 0x851

0x84d: Push("Can't find lsh animation : ")
0x84e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x84f: @ Trace(Stack[-1])
0x850: Pop(1)
0x851: Return(); Pop(6)

0x852: PushEmpty(bool, float, float, bool, float, float)
0x853: @ lshHasAnimation(Stack[-3], Stack[-8])
0x854: Pop(0)
0x855: Push(Stack[-3])
0x856: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x857: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x858: Pop(0)
0x859: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x85a: Pop(0)
0x85b: GOTO 0x860

0x85c: Push("Can't find lsh animation : ")
0x85d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x85e: @ Trace(Stack[-1])
0x85f: Pop(1)
0x860: Return(); Pop(6)

0x861: PushEmpty(bool, bool)
0x862: PushEmpty(bool)
0x863: Call2 0x8df

0x864: Pop(0)
0x865: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x866: @ lshHasSpeech(Stack[-1], Stack[-3])
0x867: Pop(0)
0x868: Push(Stack[-1])
0x869: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86a: @ lshPlaySpeech(Stack[-3])
0x86b: Pop(0)
0x86c: Stack[-4] = (bool) 1
0x86d: Return(); Pop(2)

0x86e: Stack[-4] = (bool) 0
0x86f: Return(); Pop(2)

0x870: PushEmpty(bool)
0x871: Call2 0x8df

0x872: Pop(0)
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: @ lshStopSpeech()
0x875: Pop(0)
0x876: Return(); Pop(0)

0x877: PushEmpty(object, object)
0x878: @ self(Stack[-1])
0x879: Pop(0)
0x87a: Stack[-3] = Stack[-1]
0x87b: Return(); Pop(2)

0x87c: Stack[-1] = 0
0x87d: PushEmpty(float, float)
0x87e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x87f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x880: Push((float)0.0)
0x881: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x883: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x884: Return(); Pop(2)

0x885: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x886: Return(); Pop(2)

0x887: PushEmpty(int, int)
0x888: @ GetVariable(Stack[-3], Stack[-1])
0x889: Pop(0)
0x88a: Stack[-4] = Stack[-1]
0x88b: Return(); Pop(2)

0x88c: PushEmpty(object, object)
0x88d: @ CreateIntVector(Stack[-1])
0x88e: Pop(0)
0x88f: @@ add(Stack[-4])
0x890: Pop(0)
0x891: @@ add(Stack[-3])
0x892: Pop(0)
0x893: Push((int) 3)
0x894: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x895: Pop(1)
0x896: Return(); Pop(2)

0x897: Stack[-1] = 0
0x898: PushEmpty(int, int)
0x899: PushEmpty(object, string, int)
0x89a: Stack[-3] = Stack[-7]
0x89b: Stack[-2] = "money"
0x89c: Stack[-1] = Stack[-6]
0x89d: Call2 0x742

0x89e: Pop(3)
0x89f: Push((int) 0)
0x8a0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a2: Push("Money")
0x8a3: @ GetInvItemByName(Stack[-2], Stack[-1])
0x8a4: Pop(1)
0x8a5: PushEmpty(int, int)
0x8a6: Stack[-2] = Stack[-3]
0x8a7: Stack[-1] = Stack[-5]
0x8a8: Call2 0x88c

0x8a9: Pop(2)
0x8aa: Return(); Pop(2)

0x8ab: PushEmpty(float, float)
0x8ac: @ GetGameTime(Stack[-1])
0x8ad: Pop(0)
0x8ae: Stack[-3] = Stack[-1]
0x8af: Return(); Pop(2)

0x8b0: PushEmpty(float, float)
0x8b1: @ GetGameTime(Stack[-1])
0x8b2: Pop(0)
0x8b3: Push((int) 1)
0x8b4: PushEmpty(int)
0x8b5: Push((int) 24)
0x8b6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8b7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8b8: Return(); Pop(2)

0x8b9: PushEmpty()
0x8ba: PushEmpty(int)
0x8bb: Call2 0x8b0

0x8bc: Pop(0)
0x8bd: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x8be: Return(); Pop(0)

0x8bf: PushEmpty(string, string)
0x8c0: Stack[-1] = "idle"
0x8c1: Push(Stack[-3])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8c4: Stack[-4] = Stack[-1]
0x8c5: Return(); Pop(2)

0x8c6: PushEmpty(int, bool, int, bool)
0x8c7: Stack[-2] = (int) 0
0x8c8: Push("all")
0x8c9: PushEmpty(string, int)
0x8ca: Stack[-1] = Stack[-5]
0x8cb: Call2 0x8bf

0x8cc: Pop(1)
0x8cd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8ce: Pop(2)
0x8cf: Pop(0); Push((bool) Stack[-1] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8d1: GOTO 0x8d5

0x8d2: Push((int) 1)
0x8d3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8d4: GOTO 0x8c8

0x8d5: Stack[-5] = Stack[-2]
0x8d6: Return(); Pop(4)

0x8d7: Stack[-1] = (int) 515534
0x8d8: Return(); Pop(0)

0x8d9: Stack[-1] = (int) 502859
0x8da: Return(); Pop(0)

0x8db: Stack[-1] = "ui/NPC_Georg.png"
0x8dc: Return(); Pop(0)

0x8dd: Stack[-1] = "ui/NPC_Georg_b.png"
0x8de: Return(); Pop(0)

0x8df: Stack[-1] = (bool) 1
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty(object, object)
0x8e2: Push("b8q03")
0x8e3: Push((int) 1)
0x8e4: @ SetVariable(Stack[-2], Stack[-1])
0x8e5: Pop(2)
0x8e6: PushEmpty(object)
0x8e7: Call2 0x9de

0x8e8: Stack[-2] = Stack[-1]
0x8e9: Pop(1)
0x8ea: Push("b8q03GeorgGotoKaterina")
0x8eb: Push("pt_map_katerina")
0x8ec: Push((int) 0)
0x8ed: Push((int) 530663)
0x8ee: PushEmpty(float)
0x8ef: Call2 0x8ab

0x8f0: Pop(0)
0x8f1: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(5)
0x8f3: PushEmpty()
0x8f4: Call2 0x981

0x8f5: Pop(0)
0x8f6: PushEmpty()
0x8f7: Call2 0x98e

0x8f8: Pop(0)
0x8f9: Return(); Pop(2)

0x8fa: Stack[-1] = 0
0x8fb: PushEmpty()
0x8fc: Push("oob8Georg1")
0x8fd: Push((int) 1)
0x8fe: @ SetVariable(Stack[-2], Stack[-1])
0x8ff: Pop(2)
0x900: Return(); Pop(0)

0x901: PushEmpty()
0x902: Push("oob8Georg2")
0x903: Push((int) 1)
0x904: @ SetVariable(Stack[-2], Stack[-1])
0x905: Pop(2)
0x906: Return(); Pop(0)

0x907: PushEmpty()
0x908: Push("playsound")
0x909: Push("givemoney")
0x90a: @ TriggerWorld(Stack[-2], Stack[-1])
0x90b: Pop(2)
0x90c: Return(); Pop(0)

0x90d: PushEmpty()
0x90e: Push("b8GeorgVisit")
0x90f: Push((int) 1)
0x910: @ SetVariable(Stack[-2], Stack[-1])
0x911: Pop(2)
0x912: Return(); Pop(0)

0x913: PushEmpty()
0x914: Push("b8q03")
0x915: Push((int) 1000)
0x916: @ SetVariable(Stack[-2], Stack[-1])
0x917: Pop(2)
0x918: PushEmpty()
0x919: Call2 0x99b

0x91a: Pop(0)
0x91b: Return(); Pop(0)

0x91c: PushEmpty()
0x91d: Push("b8q03")
0x91e: Push((int) 1000)
0x91f: @ SetVariable(Stack[-2], Stack[-1])
0x920: Pop(2)
0x921: PushEmpty()
0x922: Call2 0x9a8

0x923: Pop(0)
0x924: Return(); Pop(0)

0x925: PushEmpty()
0x926: Push("money3000 is given")
0x927: @ Trace(Stack[-1])
0x928: Pop(1)
0x929: PushEmpty(object, int)
0x92a: Stack[-2] = Stack[-4]
0x92b: Stack[-1] = (int) 3000
0x92c: Call2 0x898

0x92d: Pop(2)
0x92e: Return(); Pop(0)

0x92f: PushEmpty()
0x930: PushEmpty(int, string)
0x931: Stack[-1] = "oob8Georg1"
0x932: Call2 0x887

0x933: Pop(1)
0x934: Push((int) 0)
0x935: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x936: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x937: Stack[-2] = (bool) 1
0x938: Return(); Pop(0)

0x939: Stack[-2] = (bool) 0
0x93a: Return(); Pop(0)

0x93b: PushEmpty()
0x93c: PushEmpty(int, string)
0x93d: Stack[-1] = "b8q03"
0x93e: Call2 0x887

0x93f: Pop(1)
0x940: Push((int) 0)
0x941: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x942: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x943: Stack[-2] = (bool) 1
0x944: Return(); Pop(0)

0x945: Stack[-2] = (bool) 0
0x946: Return(); Pop(0)

0x947: PushEmpty()
0x948: PushEmpty(bool)
0x949: Stack[-1] = (bool) 0
0x94a: PushEmpty(int, string)
0x94b: Stack[-1] = "b8q03"
0x94c: Call2 0x887

0x94d: Pop(1)
0x94e: Push((int) 3)
0x94f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x950: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x951: PushEmpty(int, string)
0x952: Stack[-1] = "b8q03MladVladIsVictim"
0x953: Call2 0x887

0x954: Pop(1)
0x955: Push((int) 0)
0x956: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x958: Stack[-1] = (bool) 1
0x959: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x95a: Stack[-2] = (bool) 1
0x95b: Return(); Pop(0)

0x95c: Stack[-2] = (bool) 0
0x95d: Return(); Pop(0)

0x95e: PushEmpty()
0x95f: PushEmpty(bool)
0x960: Stack[-1] = (bool) 0
0x961: PushEmpty(int, string)
0x962: Stack[-1] = "b8q03"
0x963: Call2 0x887

0x964: Pop(1)
0x965: Push((int) 3)
0x966: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x967: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x968: PushEmpty(int, string)
0x969: Stack[-1] = "b8q03MladVladIsVictim"
0x96a: Call2 0x887

0x96b: Pop(1)
0x96c: Push((int) 0)
0x96d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x96e: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96f: Stack[-1] = (bool) 1
0x970: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x971: Stack[-2] = (bool) 1
0x972: Return(); Pop(0)

0x973: Stack[-2] = (bool) 0
0x974: Return(); Pop(0)

0x975: PushEmpty()
0x976: PushEmpty(int, string)
0x977: Stack[-1] = "oob8Georg2"
0x978: Call2 0x887

0x979: Pop(1)
0x97a: Push((int) 0)
0x97b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x97c: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97d: Stack[-2] = (bool) 1
0x97e: Return(); Pop(0)

0x97f: Stack[-2] = (bool) 0
0x980: Return(); Pop(0)

0x981: PushEmpty(object, object)
0x982: Push((int) 575)
0x983: Push((int) 2)
0x984: Push((int) 530655)
0x985: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x986: Pop(3)
0x987: PushEmpty(bool, object, int)
0x988: Stack[-2] = Stack[-4]
0x989: Stack[-1] = (int) -1
0x98a: Call2 0x9c2

0x98b: Pop(3)
0x98c: Return(); Pop(2)

0x98d: Stack[-1] = 0
0x98e: PushEmpty(object, object)
0x98f: Push((int) 576)
0x990: Push((int) 2)
0x991: Push((int) 530656)
0x992: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x993: Pop(3)
0x994: PushEmpty(bool, object, int)
0x995: Stack[-2] = Stack[-4]
0x996: Stack[-1] = (int) 575
0x997: Call2 0x9c2

0x998: Pop(3)
0x999: Return(); Pop(2)

0x99a: Stack[-1] = 0
0x99b: PushEmpty(object, object)
0x99c: Push((int) 580)
0x99d: Push((int) 2)
0x99e: Push((int) 530660)
0x99f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9a0: Pop(3)
0x9a1: PushEmpty(bool, object, int)
0x9a2: Stack[-2] = Stack[-4]
0x9a3: Stack[-1] = (int) 575
0x9a4: Call2 0x9c2

0x9a5: Pop(3)
0x9a6: Return(); Pop(2)

0x9a7: Stack[-1] = 0
0x9a8: PushEmpty(object, object)
0x9a9: Push((int) 581)
0x9aa: Push((int) 2)
0x9ab: Push((int) 530661)
0x9ac: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9ad: Pop(3)
0x9ae: PushEmpty(bool, object, int)
0x9af: Stack[-2] = Stack[-4]
0x9b0: Stack[-1] = (int) 575
0x9b1: Call2 0x9c2

0x9b2: Pop(3)
0x9b3: Return(); Pop(2)

0x9b4: Stack[-1] = 0
0x9b5: PushEmpty(object, object)
0x9b6: @ GetDiaryRoot(Stack[-1])
0x9b7: Pop(0)
0x9b8: Pop(0); Push((bool) Stack[-1] == 0)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9ba: Push("Can't retrieve diary root")
0x9bb: @ Trace(Stack[-1])
0x9bc: Pop(1)
0x9bd: Stack[-3] = (bool) 0
0x9be: Return(); Pop(2)

0x9bf: Stack[-3] = Stack[-1]
0x9c0: Return(); Pop(2)

0x9c1: Stack[-1] = 0
0x9c2: PushEmpty(object, object, int, object, object, int)
0x9c3: PushEmpty(object)
0x9c4: Call2 0x9b5

0x9c5: Stack[-4] = Stack[-1]
0x9c6: Pop(1)
0x9c7: @@ Find(Stack[-7], Stack[-2])
0x9c8: Pop(0)
0x9c9: Pop(0); Push((bool) Stack[-2] == 0)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9cb: Push("Can't find diary parent with id: ")
0x9cc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9cd: @ Trace(Stack[-1])
0x9ce: Pop(1)
0x9cf: Stack[-9] = (bool) 0
0x9d0: Return(); Pop(6)

0x9d1: @@ AddChild(Stack[-8])
0x9d2: Pop(0)
0x9d3: Push((int) 7)
0x9d4: @ SendWorldWndMessage(Stack[-1])
0x9d5: Pop(1)
0x9d6: @@ GetCategory(Stack[-1])
0x9d7: Pop(0)
0x9d8: @ SetDiarySection(Stack[-1])
0x9d9: Pop(0)
0x9da: Stack[-9] = (bool) 0
0x9db: Return(); Pop(6)

0x9dc: Stack[-2] = 0
0x9dd: Stack[-3] = 0
0x9de: PushEmpty(object, object, object, object)
0x9df: @ GetMainOutdoorScene(Stack[-2])
0x9e0: Pop(0)
0x9e1: Pop(0); Push((bool) Stack[-2] == 0)
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e3: Push("Can't find main outdoor scene")
0x9e4: @ Trace(Stack[-1])
0x9e5: Pop(1)
0x9e6: Stack[-1] = 0
0x9e7: Stack[-5] = Stack[-1]
0x9e8: Return(); Pop(4)

0x9e9: @@ GetMap(Stack[-1])
0x9ea: Pop(0)
0x9eb: Stack[-5] = Stack[-1]
0x9ec: Return(); Pop(4)

0x9ed: Stack[-1] = 0
0x9ee: Stack[-2] = 0
0x9ef: PushEmpty(int, int)
0x9f0: Push("branch")
0x9f1: @ GetVariable(Stack[-1], Stack[-2])
0x9f2: Pop(1)
0x9f3: Push((int) 0)
0x9f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f6: Stack[-3] = (int) 1
0x9f7: Return(); Pop(2)

0x9f8: GOTO 0x9fe

0x9f9: Push((int) 1)
0x9fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fc: Stack[-3] = (int) 2
0x9fd: Return(); Pop(2)

0x9fe: Stack[-3] = (int) 3
0x9ff: Return(); Pop(2)

0xa00: PushEmpty()
0xa01: Push(GlobalVars[1])
0xa02: Pop(1); Push((bool) Stack[-1] == 0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa04: PushEmpty(int, object)
0xa05: Stack[-1] = Stack[-3]
0xa06: Push(-2, 1); TaskCall(0)
0xa07: Call2 0x0

0xa08: Pop(-2, 1); TaskReturn
0xa09: Pop(2)
0xa0a: Push(GlobalVars[1])
0xa0b: Stack[-1] = (bool) 1
0xa0c: GlobalVars[1] = Stack[-1]; Pop(1)
0xa0d: PushEmpty(bool, int)
0xa0e: Stack[-1] = (int) 8
0xa0f: Call2 0x8b9

0xa10: Pop(1)
0xa11: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa12: PushEmpty(int, object)
0xa13: Stack[-1] = Stack[-3]
0xa14: Push(-2, 1); TaskCall(2)
0xa15: Call2 0xe2

0xa16: Pop(-2, 1); TaskReturn
0xa17: Pop(2)
0xa18: Return(); Pop(0)

0xa19: PushEmpty(bool)
0xa1a: Stack[-1] = (bool) 0
0xa1b: PushEmpty(bool, int)
0xa1c: Stack[-1] = (int) 12
0xa1d: Call2 0x8b9

0xa1e: Pop(1)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa20: Push(GlobalVars[2])
0xa21: Pop(1); Push((bool) Stack[-1] == 0)
0xa22: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa23: Stack[-1] = (bool) 1
0xa24: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa25: PushEmpty(int, object)
0xa26: Stack[-1] = Stack[-3]
0xa27: Push(-2, 1); TaskCall(4)
0xa28: Call2 0x469

0xa29: Pop(-2, 1); TaskReturn
0xa2a: Pop(2)
0xa2b: Push(GlobalVars[2])
0xa2c: Stack[-1] = (bool) 1
0xa2d: GlobalVars[2] = Stack[-1]; Pop(1)
0xa2e: Return(); Pop(0)

0xa2f: PushEmpty(int, object)
0xa30: Stack[-1] = Stack[-3]
0xa31: Push(-2, 1); TaskCall(6)
0xa32: Call2 0x56c

0xa33: Pop(-2, 1); TaskReturn
0xa34: Pop(2)
0xa35: Return(); Pop(0)

