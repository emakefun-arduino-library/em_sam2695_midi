#pragma once

#ifndef _EM_SAM2695_MIDI_PERCUSSION_NOTE_H_
#define _EM_SAM2695_MIDI_PERCUSSION_NOTE_H_

/**
 * @~Chinese
 * @file sam2695_midi_percussion_note.h
 * @brief 定义通道9的打击乐音色和音符常量。
 * @note 为简化文档，音符说明仅对特殊音符（非标准集）添加说明。
 *       宏定义后缀为"STANDARD_SET"的音符使用默认的“标准集”声音。
 *
 * @~English
 * @file sam2695_midi_percussion_note.h
 * @brief Define the percussion timbre and note constants for channel 9.
 * @note To simplify the document, note descriptions are only added for special notes (non-standard sets).
 *       The macro defines notes with the suffix "STANDARD_SET" to use the default "standard set" sound.
 */

/**
 * @~Chinese
 * @brief 定义通道9的打击乐音色类型常量。
 */
/**
 * @~English
 * @brief Define the constant of percussion timbre type for channel 9.
 */

/**
 * @~Chinese
 * @brief 打击乐音色类型1
 */
/**
 * @~English
 * @brief Percussion timbre type 1
 */
#define PERCUSSION_TIMBRE_1 (0)

/**
 * @~Chinese
 * @brief 打击乐音色类型2
 */
/**
 * @~English
 * @brief Percussion timbre type 2
 */
#define PERCUSSION_TIMBRE_2 (16)

/**
 * @~Chinese
 * @brief 打击乐音色类型3
 */
/**
 * @~English
 * @brief Percussion timbre type 3
 */
#define PERCUSSION_TIMBRE_3 (40)

/**
 * @~Chinese
 * @brief 打击乐音色类型4
 */
/**
 * @~English
 * @brief Percussion timbre type 4
 */
#define PERCUSSION_TIMBRE_4 (48)

/**
 * @~Chinese
 * @brief 打击乐音色类型5
 */
/**
 * @~English
 * @brief Percussion timbre type 5
 */
#define PERCUSSION_TIMBRE_5 (127)

/**
 * @~Chinese
 * @brief 定义通道9的打击乐音色类型1的音符常量。
 */
/**
 * @~English
 * @brief Define the note constants for percussion timbre type 1 in channel 9.
 */
#define TIMBRE_1_NOTE_D_SHARP_1_STANDARD_SET (27)
#define TIMBRE_1_NOTE_E_1_STANDARD_SET (28)
#define TIMBRE_1_NOTE_F_1_STANDARD_SET (29)
#define TIMBRE_1_NOTE_F_SHARP_1_STANDARD_SET (30)
#define TIMBRE_1_NOTE_G_1_STANDARD_SET (31)
#define TIMBRE_1_NOTE_G_SHARP_1_STANDARD_SET (32)
#define TIMBRE_1_NOTE_A_1_STANDARD_SET (33)
#define TIMBRE_1_NOTE_A_SHARP_1_STANDARD_SET (34)
/**
 * @~Chinese
 * @brief B-1 (底鼓2)
 */
/**
 * @~English
 * @brief B-1 (Kick drum 2)
 */
#define TIMBRE_1_NOTE_B_1_KICK_DRUM_2 (35)

/**
 * @~Chinese
 * @brief C-2 (底鼓1)
 */
/**
 * @~English
 * @brief C-2 (Kick drum 1)
 */
#define TIMBRE_1_NOTE_C_2_KICK_DRUM_1 (36)
/**
 * @~Chinese
 * @brief C#-2 (边击)
 */
/**
 * @~English
 * @brief C#-2 (Side stick)
 */
#define TIMBRE_1_NOTE_C_SHARP_2_SIDE_STICK (37)
/**
 * @~Chinese
 * @brief D-2 (军鼓1)
 */
/**
 * @~English
 * @brief D-2 (Snare drum 1)
 */
#define TIMBRE_1_NOTE_D_2_SNARE_DRUM_1 (38)
/**
 * @~Chinese
 * @brief D#-2 (拍手)
 */
/**
 * @~English
 * @brief D#-2 (Hand clap)
 */
#define TIMBRE_1_NOTE_D_SHARP_2_HAND_CLAP (39)
/**
 * @~Chinese
 * @brief E-2 (军鼓2)
 */
/**
 * @~English
 * @brief E-2 (Snare drum 2)
 */
#define TIMBRE_1_NOTE_E_2_SNARE_DRUM_2 (40)
/**
 * @~Chinese
 * @brief F-2 (低地通鼓)
 */
/**
 * @~English
 * @brief F-2 (Low floor tom)
 */
#define TIMBRE_1_NOTE_F_2_LOW_FLOOR_TOM (41)
/**
 * @~Chinese
 * @brief F#-2 (闭合踩镲)
 */
/**
 * @~English
 * @brief F#-2 (Closed hi-hat)
 */
#define TIMBRE_1_NOTE_F_SHARP_2_CLOSED_HI_HAT (42)
/**
 * @~Chinese
 * @brief G-2 (高地通鼓)
 */
/**
 * @~English
 * @brief G-2 (High floor tom)
 */
#define TIMBRE_1_NOTE_G_2_HIGH_FLOOR_TOM (43)
/**
 * @~Chinese
 * @brief G#-2 (踏板踩镲)
 */
/**
 * @~English
 * @brief G#-2 (Pedal hi-hat)
 */
#define TIMBRE_1_NOTE_G_SHARP_2_PEDAL_HI_HAT (44)
/**
 * @~Chinese
 * @brief A-2 (低通鼓)
 */
/**
 * @~English
 * @brief A-2 (Low tom)
 */
#define TIMBRE_1_NOTE_A_2_LOW_TOM (45)
/**
 * @~Chinese
 * @brief A#-2 (开镲)
 */
/**
 * @~English
 * @brief A#-2 (Open hi-hat)
 */
#define TIMBRE_1_NOTE_A_SHARP_2_OPEN_HI_HAT (46)
/**
 * @~Chinese
 * @brief B-2 (低中通鼓)
 */
/**
 * @~English
 * @brief B2 (Low middle tom)
 */
#define TIMBRE_1_NOTE_B_2_LOW_MIDDLE_TOM (47)
/**
 * @~Chinese
 * @brief C-3 (高中通鼓)
 */
/**
 * @~English
 * @brief C-3 (High middle tom)
 */
#define TIMBRE_1_NOTE_C_3_HIGH_MIDDLE_TOM (48)
/**
 * @~Chinese
 * @brief C#-3 (碎音镲1)
 */
/**
 * @~English
 * @brief C#-3 (Crash cymbal 1)
 */
#define TIMBRE_1_NOTE_C_SHARP_3_CRASH_CYMBAL_1 (49)
/**
 * @~Chinese
 * @brief D-3 (高通鼓)
 */
/**
 * @~English
 * @brief D-3 (High tom)
 */
#define TIMBRE_1_NOTE_D_3_HIGH_TOM (50)
/**
 * @~Chinese
 * @brief D#-3 (叮音镲1)
 */
/**
 * @~English
 * @brief D#-3 (Ride cymbal 1)
 */
#define TIMBRE_1_NOTE_D_SHARP_3_RIDE_CYMBAL_1 (51)
/**
 * @~Chinese
 * @brief E-3 (中国镲)
 */
/**
 * @~English
 * @brief E-3 (Chinese cymbal)
 */
#define TIMBRE_1_NOTE_E_3_CHINESE_CYMBAL (52)
/**
 * @~Chinese
 * @brief F-3 (浮音镲碗)
 */
/**
 * @~English
 * @brief F-3 (Ride bell)
 */
#define TIMBRE_1_NOTE_F_3_RIDE_BELL (53)
/**
 * @~Chinese
 * @brief F#-3 (铃鼓)
 */
/**
 * @~English
 * @brief F#3 (Tambourine)
 */
#define TIMBRE_1_NOTE_F_SHARP_3_TAMBOURINE (54)
/**
 * @~Chinese
 * @brief G-3 (溅音镲)
 */
/**
 * @~English
 * @brief G-3 (Splash cymbal)
 */
#define TIMBRE_1_NOTE_G_3_SPLASH_CYMBAL (55)
/**
 * @~Chinese
 * @brief G#-3 (牛铃)
 */
/**
 * @~English
 * @brief G#-3 (Cowbell)
 */
#define TIMBRE_1_NOTE_G_SHARP_3_COWBELL (56)
/**
 * @~Chinese
 * @brief A-3 (碎音镲2)
 */
/**
 * @~English
 * @brief A-3 (Crash cymbal 2)
 */
#define TIMBRE_1_NOTE_A_3_CRASH_CYMBAL_2 (57)
/**
 * @~Chinese
 * @brief A#-3 (颤音叉)
 */
/**
 * @~English
 * @brief A#-3 (Vibra slap)
 */
#define TIMBRE_1_NOTE_A_SHARP_3_VIBRA_SLAP (58)
/**
 * @~Chinese
 * @brief B-3 (叮音镲2)
 */
/**
 * @~English
 * @brief B-3 (Ride cymbal 2)
 */
#define TIMBRE_1_NOTE_B_3_RIDE_CYMBAL_2 (59)
/**
 * @~Chinese
 * @brief C-4 (高音邦戈鼓)
 */
/**
 * @~English
 * @brief C-4 (High bongo)
 */
#define TIMBRE_1_NOTE_C_4_HIGH_BONGO (60)
/**
 * @~Chinese
 * @brief C#-4 (低音邦戈鼓)
 */
/**
 * @~English
 * @brief C#-4 (Low bongo)
 */
#define TIMBRE_1_NOTE_C_SHARP_4_LOW_BONGO (61)
/**
 * @~Chinese
 * @brief D-4 (闷音高音康加鼓)
 */
/**
 * @~English
 * @brief D-4 (Mute high conga)
 */
#define TIMBRE_1_NOTE_D_4_MUTE_HIGH_CONGA (62)
/**
 * @~Chinese
 * @brief D#-4 (开放高音康加鼓)
 */
/**
 * @~English
 * @brief D#-4 (Open high conga)
 */
#define TIMBRE_1_NOTE_D_SHARP_4_OPEN_HIGH_CONGA (63)
/**
 * @~Chinese
 * @brief E-4 (低音康加鼓)
 */
/**
 * @~English
 * @brief E-4 (Low conga)
 */
#define TIMBRE_1_NOTE_E_4_LOW_CONGA (64)
/**
 * @~Chinese
 * @brief F-4 (高定音鼓)
 */
/**
 * @~English
 * @brief F-4 (High timbale)
 */
#define TIMBRE_1_NOTE_F_4_HIGH_TIMBALE (65)
/**
 * @~Chinese
 * @brief F#-4 (低定音鼓)
 */
/**
 * @~English
 * @brief F#-4 (Low timbale)
 */
#define TIMBRE_1_NOTE_F_SHARP_4_LOW_TIMBALE (66)
/**
 * @~Chinese
 * @brief G-4 (高音阿戈戈铃)
 */
/**
 * @~English
 * @brief G-4 (High agogo)
 */
#define TIMBRE_1_NOTE_G_4_HIGH_AGOGO (67)
/**
 * @~Chinese
 * @brief G#-4 (低音阿戈戈铃)
 */
/**
 * @~English
 * @brief G#-4 (Low agogo)
 */
#define TIMBRE_1_NOTE_G_SHARP_4_LOW_AGOGO (68)
/**
 * @~Chinese
 * @brief A-4 (卡巴萨)
 */
/**
 * @~English
 * @brief A-4 (Cabasa)
 */
#define TIMBRE_1_NOTE_A_4_CABASA (69)
/**
 * @~Chinese
 * @brief A#-4 (沙槌)
 */
/**
 * @~English
 * @brief A#-4 (Maracas)
 */
#define TIMBRE_1_NOTE_A_SHARP_4_MARACAS (70)
/**
 * @~Chinese
 * @brief B-4 (短哨)
 */
/**
 * @~English
 * @brief B-4 (Short whistle)
 */
#define TIMBRE_1_NOTE_B_4_SHORT_WHISTLE (71)
/**
 * @~Chinese
 * @brief C-5 (长哨)
 */
/**
 * @~English
 * @brief C-5 (Long whistle)
 */
#define TIMBRE_1_NOTE_C_5_LONG_WHISTLE (72)
/**
 * @~Chinese
 * @brief C#-5 (短刮瓜)
 */
/**
 * @~English
 * @brief C#-5 (Short guiro)
 */
#define TIMBRE_1_NOTE_C_SHARP_5_SHORT_GUIRO (73)
/**
 * @~Chinese
 * @brief D-5 (长刮瓜)
 */
/**
 * @~English
 * @brief D5 (Long guiro)
 */
#define TIMBRE_1_NOTE_D_5_LONG_GUIRO (74)
/**
 * @~Chinese
 * @brief D#-5 (响棒)
 */
/**
 * @~English
 * @brief D#-5 (Claves)
 */
#define TIMBRE_1_NOTE_D_SHARP_5_CLAVES (75)
/**
 * @~Chinese
 * @brief E-5 (高音木鱼)
 */
/**
 * @~English
 * @brief E-5 (High wood block)
 */
#define TIMBRE_1_NOTE_E_5_HIGH_WOOD_BLOCK (76)
/**
 * @~Chinese
 * @brief F-5 (低音木鱼)
 */
/**
 * @~English
 * @brief F-5 (Low wood block)
 */
#define TIMBRE_1_NOTE_F_5_LOW_WOOD_BLOCK (77)
/**
 * @~Chinese
 * @brief F#-5 (弱音锯琴)
 */
/**
 * @~English
 * @brief F#-5 (Mute cuica)
 */
#define TIMBRE_1_NOTE_F_SHARP_5_MUTE_CUICA (78)
/**
 * @~Chinese
 * @brief G-5 (开放锯琴)
 */
/**
 * @~English
 * @brief G-5 (Open cuica)
 */
#define TIMBRE_1_NOTE_G_5_OPEN_CUICA (79)
/**
 * @~Chinese
 * @brief G#-5 (弱音三角铁)
 */
/**
 * @~English
 * @brief G#-5 (Mute triangle)
 */
#define TIMBRE_1_NOTE_G_SHARP_5_MUTE_TRIANGLE (80)
/**
 * @~Chinese
 * @brief A-5 (开放三角铁)
 */
/**
 * @~English
 * @brief A-5 (Open triangle)
 */
#define TIMBRE_1_NOTE_A_5_OPEN_TRIANGLE (81)
#define TIMBRE_1_NOTE_A_SHARP_5_STANDARD_SET (82)
#define TIMBRE_1_NOTE_B_5_STANDARD_SET (83)
#define TIMBRE_1_NOTE_C_6_STANDARD_SET (84)
#define TIMBRE_1_NOTE_C_SHARP_6_STANDARD_SET (85)
#define TIMBRE_1_NOTE_D_6_STANDARD_SET (86)
#define TIMBRE_1_NOTE_D_SHARP_6_STANDARD_SET (87)
#define TIMBRE_1_NOTE_E_6_STANDARD_SET (88)
#define TIMBRE_1_NOTE_F_6_STANDARD_SET (89)
#define TIMBRE_1_NOTE_F_SHARP_6_STANDARD_SET (90)
#define TIMBRE_1_NOTE_G_6_STANDARD_SET (91)
#define TIMBRE_1_NOTE_G_SHARP_6_STANDARD_SET (92)
#define TIMBRE_1_NOTE_A_6_STANDARD_SET (93)
#define TIMBRE_1_NOTE_A_SHARP_6_STANDARD_SET (94)
#define TIMBRE_1_NOTE_B_6_STANDARD_SET (95)
#define TIMBRE_1_NOTE_C_7_STANDARD_SET (96)
#define TIMBRE_1_NOTE_C_SHARP_7_STANDARD_SET (97)
#define TIMBRE_1_NOTE_D_7_STANDARD_SET (98)
#define TIMBRE_1_NOTE_D_SHARP_7_STANDARD_SET (99)
#define TIMBRE_1_NOTE_E_7_STANDARD_SET (100)
#define TIMBRE_1_NOTE_F_7_STANDARD_SET (101)
#define TIMBRE_1_NOTE_F_SHARP_7_STANDARD_SET (102)
#define TIMBRE_1_NOTE_G_7_STANDARD_SET (103)
#define TIMBRE_1_NOTE_G_SHARP_7_STANDARD_SET (104)
#define TIMBRE_1_NOTE_A_7_STANDARD_SET (105)
#define TIMBRE_1_NOTE_A_SHARP_7_STANDARD_SET (106)

/**
 * @~Chinese
 * @brief 定义通道9的打击乐音色类型2的音符常量。
 */
/**
 * @~English
 * @brief Define the note constants for percussion timbre type 2 in channel 9.
 */
#define TIMBRE_2_NOTE_D_SHARP_1_STANDARD_SET (27)
#define TIMBRE_2_NOTE_E_1_STANDARD_SET (28)
#define TIMBRE_2_NOTE_F_1_STANDARD_SET (29)
#define TIMBRE_2_NOTE_F_SHARP_1_STANDARD_SET (30)
#define TIMBRE_2_NOTE_G_1_STANDARD_SET (31)
#define TIMBRE_2_NOTE_G_SHARP_1_STANDARD_SET (32)
#define TIMBRE_2_NOTE_A_1_STANDARD_SET (33)
#define TIMBRE_2_NOTE_A_SHARP_1_STANDARD_SET (34)
#define TIMBRE_2_NOTE_B_1_STANDARD_SET (35)
#define TIMBRE_2_NOTE_C_2_STANDARD_SET (36)
#define TIMBRE_2_NOTE_C_SHARP_2_STANDARD_SET (37)
/**
 * @~Chinese
 * @brief D-2 (门控军鼓)
 */
/**
 * @~English
 * @brief D-2 (Gated snare)
 */
#define TIMBRE_2_NOTE_D_2_GATED_SNARE (38)
#define TIMBRE_2_NOTE_D_SHARP_2_STANDARD_SET (39)
#define TIMBRE_2_NOTE_E_2_STANDARD_SET (40)
#define TIMBRE_2_NOTE_F_2_STANDARD_SET (41)
#define TIMBRE_2_NOTE_F_SHARP_2_STANDARD_SET (42)
#define TIMBRE_2_NOTE_G_2_STANDARD_SET (43)
#define TIMBRE_2_NOTE_G_SHARP_2_STANDARD_SET (44)
#define TIMBRE_2_NOTE_A_2_STANDARD_SET (45)
#define TIMBRE_2_NOTE_A_SHARP_2_STANDARD_SET (46)
/**
 * @~Chinese
 * @brief B-2 (枪声)
 */
/**
 * @~English
 * @brief B-2 (Gun shot)
 */
#define TIMBRE_2_NOTE_B_2_GUN_SHOT (47)
#define TIMBRE_2_NOTE_C_3_STANDARD_SET (48)
#define TIMBRE_2_NOTE_C_SHARP_3_STANDARD_SET (49)
#define TIMBRE_2_NOTE_D_3_STANDARD_SET (50)
#define TIMBRE_2_NOTE_D_SHARP_3_STANDARD_SET (51)
#define TIMBRE_2_NOTE_E_3_STANDARD_SET (52)
#define TIMBRE_2_NOTE_F_3_STANDARD_SET (53)
#define TIMBRE_2_NOTE_F_SHARP_3_STANDARD_SET (54)
#define TIMBRE_2_NOTE_G_3_STANDARD_SET (55)
#define TIMBRE_2_NOTE_G_SHARP_3_STANDARD_SET (56)
#define TIMBRE_2_NOTE_A_3_STANDARD_SET (57)
#define TIMBRE_2_NOTE_A_SHARP_3_STANDARD_SET (58)
#define TIMBRE_2_NOTE_B_3_STANDARD_SET (59)
#define TIMBRE_2_NOTE_C_4_STANDARD_SET (60)
#define TIMBRE_2_NOTE_C_SHARP_4_STANDARD_SET (61)
#define TIMBRE_2_NOTE_D_4_STANDARD_SET (62)
#define TIMBRE_2_NOTE_D_SHARP_4_STANDARD_SET (63)
#define TIMBRE_2_NOTE_E_4_STANDARD_SET (64)
#define TIMBRE_2_NOTE_F_4_STANDARD_SET (65)
#define TIMBRE_2_NOTE_F_SHARP_4_STANDARD_SET (66)
#define TIMBRE_2_NOTE_G_4_STANDARD_SET (67)
#define TIMBRE_2_NOTE_G_SHARP_4_STANDARD_SET (68)
#define TIMBRE_2_NOTE_A_4_STANDARD_SET (69)
#define TIMBRE_2_NOTE_A_SHARP_4_STANDARD_SET (70)
#define TIMBRE_2_NOTE_B_4_STANDARD_SET (71)
#define TIMBRE_2_NOTE_C_5_STANDARD_SET (72)
#define TIMBRE_2_NOTE_C_SHARP_5_STANDARD_SET (73)
#define TIMBRE_2_NOTE_D_5_STANDARD_SET (74)
#define TIMBRE_2_NOTE_D_SHARP_5_STANDARD_SET (75)
#define TIMBRE_2_NOTE_E_5_STANDARD_SET (76)
#define TIMBRE_2_NOTE_F_5_STANDARD_SET (77)
#define TIMBRE_2_NOTE_F_SHARP_5_STANDARD_SET (78)
#define TIMBRE_2_NOTE_G_5_STANDARD_SET (79)
#define TIMBRE_2_NOTE_G_SHARP_5_STANDARD_SET (80)
#define TIMBRE_2_NOTE_A_5_STANDARD_SET (81)
#define TIMBRE_2_NOTE_A_SHARP_5_STANDARD_SET (82)
#define TIMBRE_2_NOTE_B_5_STANDARD_SET (83)
#define TIMBRE_2_NOTE_C_6_STANDARD_SET (84)
#define TIMBRE_2_NOTE_C_SHARP_6_STANDARD_SET (85)
#define TIMBRE_2_NOTE_D_6_STANDARD_SET (86)
#define TIMBRE_2_NOTE_D_SHARP_6_STANDARD_SET (87)
#define TIMBRE_2_NOTE_E_6_STANDARD_SET (88)
#define TIMBRE_2_NOTE_F_6_STANDARD_SET (89)
#define TIMBRE_2_NOTE_F_SHARP_6_STANDARD_SET (90)
#define TIMBRE_2_NOTE_G_6_STANDARD_SET (91)
#define TIMBRE_2_NOTE_G_SHARP_6_STANDARD_SET (92)
#define TIMBRE_2_NOTE_A_6_STANDARD_SET (93)
#define TIMBRE_2_NOTE_A_SHARP_6_STANDARD_SET (94)
#define TIMBRE_2_NOTE_B_6_STANDARD_SET (95)
#define TIMBRE_2_NOTE_C_7_STANDARD_SET (96)
#define TIMBRE_2_NOTE_C_SHARP_7_STANDARD_SET (97)
#define TIMBRE_2_NOTE_D_7_STANDARD_SET (98)
#define TIMBRE_2_NOTE_D_SHARP_7_STANDARD_SET (99)
#define TIMBRE_2_NOTE_E_7_STANDARD_SET (100)
#define TIMBRE_2_NOTE_F_7_STANDARD_SET (101)
#define TIMBRE_2_NOTE_F_SHARP_7_STANDARD_SET (102)
#define TIMBRE_2_NOTE_G_7_STANDARD_SET (103)
#define TIMBRE_2_NOTE_G_SHARP_7_STANDARD_SET (104)
#define TIMBRE_2_NOTE_A_7_STANDARD_SET (105)
#define TIMBRE_2_NOTE_A_SHARP_7_STANDARD_SET (106)

/**
 * @~Chinese
 * @brief 定义通道9的打击乐音色类型3的音符常量。
 */
/**
 * @~English
 * @brief Define the note constants for percussion timbre type 3 in channel 9.
 */
#define TIMBRE_3_NOTE_D_SHARP_1_STANDARD_SET (27)
#define TIMBRE_3_NOTE_E_1_STANDARD_SET (28)
#define TIMBRE_3_NOTE_F_1_STANDARD_SET (29)
#define TIMBRE_3_NOTE_F_SHARP_1_STANDARD_SET (30)
#define TIMBRE_3_NOTE_G_1_STANDARD_SET (31)
#define TIMBRE_3_NOTE_G_SHARP_1_STANDARD_SET (32)
#define TIMBRE_3_NOTE_A_1_STANDARD_SET (33)
#define TIMBRE_3_NOTE_A_SHARP_1_STANDARD_SET (34)
/**
 * @~Chinese
 * @brief B-1 (爵士底鼓2)
 */
/**
 * @~English
 * @brief B-1 (Jazz bass drum 2)
 */
#define TIMBRE_3_NOTE_B_1_JAZZ_BASS_DRUM_2 (35)

/**
 * @~Chinese
 * @brief C-2 (爵士底鼓1)
 */
/**
 * @~English
 * @brief C-2 (Jazz bass drum 1)
 */
#define TIMBRE_3_NOTE_C_2_JAZZ_BASS_DRUM_1 (36)
#define TIMBRE_3_NOTE_C_SHARP_2_STANDARD_SET (37)
/**
 * @~Chinese
 * @brief D-2 (鼓刷轻击)
 */
/**
 * @~English
 * @brief D-2 (Brush tap)
 */
#define TIMBRE_3_NOTE_D_2_BRUSH_TAP (38)
/**
 * @~Chinese
 * @brief D#-2 (鼓刷旋转)
 */
/**
 * @~English
 * @brief D#-2 (Brush slap)
 */
#define TIMBRE_3_NOTE_D_SHARP_2_BRUSH_SLAP (39)
/**
 * @~Chinese
 * @brief E-2 (鼓刷旋转)
 */
/**
 * @~English
 * @brief E-2 (Brush swirl)
 */
#define TIMBRE_3_NOTE_E_2_BRUSH_SWIRL (40)
#define TIMBRE_3_NOTE_F_2_STANDARD_SET (41)
#define TIMBRE_3_NOTE_F_SHARP_2_STANDARD_SET (42)
#define TIMBRE_3_NOTE_G_2_STANDARD_SET (43)
#define TIMBRE_3_NOTE_G_SHARP_2_STANDARD_SET (44)
#define TIMBRE_3_NOTE_A_2_STANDARD_SET (45)
#define TIMBRE_3_NOTE_A_SHARP_2_STANDARD_SET (46)
#define TIMBRE_3_NOTE_B_2_STANDARD_SET (47)
#define TIMBRE_3_NOTE_C_3_STANDARD_SET (48)
#define TIMBRE_3_NOTE_C_SHARP_3_STANDARD_SET (49)
#define TIMBRE_3_NOTE_D_3_STANDARD_SET (50)
#define TIMBRE_3_NOTE_D_SHARP_3_STANDARD_SET (51)
#define TIMBRE_3_NOTE_E_3_STANDARD_SET (52)
#define TIMBRE_3_NOTE_F_3_STANDARD_SET (53)
#define TIMBRE_3_NOTE_F_SHARP_3_STANDARD_SET (54)
#define TIMBRE_3_NOTE_G_3_STANDARD_SET (55)
#define TIMBRE_3_NOTE_G_SHARP_3_STANDARD_SET (56)
#define TIMBRE_3_NOTE_A_3_STANDARD_SET (57)
#define TIMBRE_3_NOTE_A_SHARP_3_STANDARD_SET (58)
#define TIMBRE_3_NOTE_B_3_STANDARD_SET (59)
#define TIMBRE_3_NOTE_C_4_STANDARD_SET (60)
#define TIMBRE_3_NOTE_C_SHARP_4_STANDARD_SET (61)
#define TIMBRE_3_NOTE_D_4_STANDARD_SET (62)
#define TIMBRE_3_NOTE_D_SHARP_4_STANDARD_SET (63)
#define TIMBRE_3_NOTE_E_4_STANDARD_SET (64)
#define TIMBRE_3_NOTE_F_4_STANDARD_SET (65)
#define TIMBRE_3_NOTE_F_SHARP_4_STANDARD_SET (66)
#define TIMBRE_3_NOTE_G_4_STANDARD_SET (67)
#define TIMBRE_3_NOTE_G_SHARP_4_STANDARD_SET (68)
#define TIMBRE_3_NOTE_A_4_STANDARD_SET (69)
#define TIMBRE_3_NOTE_A_SHARP_4_STANDARD_SET (70)
#define TIMBRE_3_NOTE_B_4_STANDARD_SET (71)
#define TIMBRE_3_NOTE_C_5_STANDARD_SET (72)
#define TIMBRE_3_NOTE_C_SHARP_5_STANDARD_SET (73)
#define TIMBRE_3_NOTE_D_5_STANDARD_SET (74)
#define TIMBRE_3_NOTE_D_SHARP_5_STANDARD_SET (75)
#define TIMBRE_3_NOTE_E_5_STANDARD_SET (76)
#define TIMBRE_3_NOTE_F_5_STANDARD_SET (77)
#define TIMBRE_3_NOTE_F_SHARP_5_STANDARD_SET (78)
#define TIMBRE_3_NOTE_G_5_STANDARD_SET (79)
#define TIMBRE_3_NOTE_G_SHARP_5_STANDARD_SET (80)
#define TIMBRE_3_NOTE_A_5_STANDARD_SET (81)
#define TIMBRE_3_NOTE_A_SHARP_5_STANDARD_SET (82)
#define TIMBRE_3_NOTE_B_5_STANDARD_SET (83)
#define TIMBRE_3_NOTE_C_6_STANDARD_SET (84)
#define TIMBRE_3_NOTE_C_SHARP_6_STANDARD_SET (85)
#define TIMBRE_3_NOTE_D_6_STANDARD_SET (86)
#define TIMBRE_3_NOTE_D_SHARP_6_STANDARD_SET (87)
#define TIMBRE_3_NOTE_E_6_STANDARD_SET (88)
#define TIMBRE_3_NOTE_F_6_STANDARD_SET (89)
#define TIMBRE_3_NOTE_F_SHARP_6_STANDARD_SET (90)
#define TIMBRE_3_NOTE_G_6_STANDARD_SET (91)
#define TIMBRE_3_NOTE_G_SHARP_6_STANDARD_SET (92)
#define TIMBRE_3_NOTE_A_6_STANDARD_SET (93)
#define TIMBRE_3_NOTE_A_SHARP_6_STANDARD_SET (94)
#define TIMBRE_3_NOTE_B_6_STANDARD_SET (95)
#define TIMBRE_3_NOTE_C_7_STANDARD_SET (96)
#define TIMBRE_3_NOTE_C_SHARP_7_STANDARD_SET (97)
#define TIMBRE_3_NOTE_D_7_STANDARD_SET (98)
#define TIMBRE_3_NOTE_D_SHARP_7_STANDARD_SET (99)
#define TIMBRE_3_NOTE_E_7_STANDARD_SET (100)
#define TIMBRE_3_NOTE_F_7_STANDARD_SET (101)
#define TIMBRE_3_NOTE_F_SHARP_7_STANDARD_SET (102)
#define TIMBRE_3_NOTE_G_7_STANDARD_SET (103)
#define TIMBRE_3_NOTE_G_SHARP_7_STANDARD_SET (104)
#define TIMBRE_3_NOTE_A_7_STANDARD_SET (105)
#define TIMBRE_3_NOTE_A_SHARP_7_STANDARD_SET (106)

/**
 * @~Chinese
 * @brief 定义通道9的打击乐音色类型4的音符常量。
 */
/**
 * @~English
 * @brief Define the note constants for percussion timbre type 4 in channel 9.
 */

/**
 * @~Chinese
 * @brief  D#-1 (闭合踩镲)
 */
/**
 * @~English
 * @brief D#-1 (Closed hi hat)
 */
#define TIMBRE_4_NOTE_D_SHARP_1_CLOSED_HI_HAT (27)
/**
 * @~Chinese
 * @brief E-1 (踏板踩镲)
 */
/**
 * @~English
 * @brief E-1 (Pedal hi hat)
 */
#define TIMBRE_4_NOTE_E_1_PEDAL_HI_HAT (28)
/**
 * @~Chinese
 * @brief F-1 (开镲)
 */
/**
 * @~English
 * @brief F-1 (Open hi hat)
 */
#define TIMBRE_4_NOTE_F_1_OPEN_HI_HAT (29)
#define TIMBRE_4_NOTE_F_SHARP_1_RIDE_CYMBAL (30)
#define TIMBRE_4_NOTE_G_1_STANDARD_SET (31)
#define TIMBRE_4_NOTE_G_SHARP_1_STANDARD_SET (32)
#define TIMBRE_4_NOTE_A_1_STANDARD_SET (33)
#define TIMBRE_4_NOTE_A_SHARP_1_STANDARD_SET (34)
#define TIMBRE_4_NOTE_B_1_STANDARD_SET (35)
/**
 * @~Chinese
 * @brief C-2 (枪声)
 */
/**
 * @~English
 * @brief C-2 (Gun shot)
 */
#define TIMBRE_4_NOTE_C_2_GUN_SHOT (36)
#define TIMBRE_4_NOTE_C_SHARP_2_STANDARD_SET (37)
/**
 * @~Chinese
 * @brief D-2 (军鼓2)
 */
/**
 * @~English
 * @brief D-2 (Snare drum 2)
 */
#define TIMBRE_4_NOTE_D_2_SNARE_DRUM_2 (38)
/**
 * @~Chinese
 * @brief D#-2 (响板)
 */
/**
 * @~English
 * @brief D#-2 (Castanets)
 */
#define TIMBRE_4_NOTE_D_SHARP_2_CASTANETS (39)
/**
 * @~Chinese
 * @brief E-2 (军鼓1)
 */
/**
 * @~English
 * @brief E-2 (Snare drum 1)
 */
#define TIMBRE_4_NOTE_E_2_SNARE_DRUM_1 (40)
/**
 * @~Chinese
 * @brief F-2 (定音鼓1)
 */
/**
 * @~English
 * @brief F-2 (Timpani 1)
 */
#define TIMBRE_4_NOTE_F_2_TIMPANI_1 (41)
/**
 * @~Chinese
 * @brief F#-2 (定音鼓2)
 */
/**
 * @~English
 * @brief F#-2 (Timpani 2)
 */
#define TIMBRE_4_NOTE_F_SHARP_2_TIMPANI_2 (42)
/**
 * @~Chinese
 * @brief G-2 (定音鼓3)
 */
/**
 * @~English
 * @brief G-2 (Timpani 3)
 */
#define TIMBRE_4_NOTE_G_2_TIMPANI_3 (43)
/**
 * @~Chinese
 * @brief G#-2 (定音鼓4)
 */
/**
 * @~English
 * @brief G#-2 (Timpani 4)
 */
#define TIMBRE_4_NOTE_G_SHARP_2_TIMPANI_4 (44)
/**
 * @~Chinese
 * @brief A-2 (定音鼓5)
 */
/**
 * @~English
 * @brief A-2 (Timpani 5)
 */
#define TIMBRE_4_NOTE_A_2_TIMPANI_5 (45)
/**
 * @~Chinese
 * @brief A#-2 (定音鼓6)
 */
/**
 * @~English
 * @brief A#-2 (Timpani 6)
 */
#define TIMBRE_4_NOTE_A_SHARP_2_TIMPANI_6 (46)
/**
 * @~Chinese
 * @brief B-2 (定音鼓7)
 */
/**
 * @~English
 * @brief B-2 (Timpani 7)
 */
#define TIMBRE_4_NOTE_B_2_TIMPANI_7 (47)
/**
 * @~Chinese
 * @brief C-3 (定音鼓8)
 */
/**
 * @~English
 * @brief C-3 (Timpani 8)
 */
#define TIMBRE_4_NOTE_C_3_TIMPANI_8 (48)
/**
 * @~Chinese
 * @brief C#-3 (定音鼓9)
 */
/**
 * @~English
 * @brief C#-3 (Timpani 9)
 */
#define TIMBRE_4_NOTE_C_SHARP_3_TIMPANI_9 (49)
/**
 * @~Chinese
 * @brief D-3 (定音鼓10)
 */
/**
 * @~English
 * @brief D-3 (Timpani 10)
 */
#define TIMBRE_4_NOTE_D_3_TIMPANI_10 (50)
/**
 * @~Chinese
 * @brief D#-3 (定音鼓11)
 */
/**
 * @~English
 * @brief D#-3 (Timpani 11)
 */
#define TIMBRE_4_NOTE_D_SHARP_3_TIMPANI_11 (51)
/**
 * @~Chinese
 * @brief E-3 (定音鼓12)
 */
/**
 * @~English
 * @brief E-3 (Timpani 12)
 */
#define TIMBRE_4_NOTE_E_3_TIMPANI_12 (52)
/**
 * @~Chinese
 * @brief F-3 (定音鼓13)
 */
/**
 * @~English
 * @brief F-3 (Timpani 13)
 */
#define TIMBRE_4_NOTE_F_3_TIMPANI_13 (53)
#define TIMBRE_4_NOTE_F_SHARP_3_STANDARD_SET (54)
#define TIMBRE_4_NOTE_G_3_STANDARD_SET (55)
#define TIMBRE_4_NOTE_G_SHARP_3_STANDARD_SET (56)
#define TIMBRE_4_NOTE_A_3_STANDARD_SET (57)
#define TIMBRE_4_NOTE_A_SHARP_3_STANDARD_SET (58)
#define TIMBRE_4_NOTE_B_3_STANDARD_SET (59)
#define TIMBRE_4_NOTE_C_4_STANDARD_SET (60)
#define TIMBRE_4_NOTE_C_SHARP_4_STANDARD_SET (61)
#define TIMBRE_4_NOTE_D_4_STANDARD_SET (62)
#define TIMBRE_4_NOTE_D_SHARP_4_STANDARD_SET (63)
#define TIMBRE_4_NOTE_E_4_STANDARD_SET (64)
#define TIMBRE_4_NOTE_F_4_STANDARD_SET (65)
#define TIMBRE_4_NOTE_F_SHARP_4_STANDARD_SET (66)
#define TIMBRE_4_NOTE_G_4_STANDARD_SET (67)
#define TIMBRE_4_NOTE_G_SHARP_4_STANDARD_SET (68)
#define TIMBRE_4_NOTE_A_4_STANDARD_SET (69)
#define TIMBRE_4_NOTE_A_SHARP_4_STANDARD_SET (70)
#define TIMBRE_4_NOTE_B_4_STANDARD_SET (71)
#define TIMBRE_4_NOTE_C_5_STANDARD_SET (72)
#define TIMBRE_4_NOTE_C_SHARP_5_STANDARD_SET (73)
#define TIMBRE_4_NOTE_D_5_STANDARD_SET (74)
#define TIMBRE_4_NOTE_D_SHARP_5_STANDARD_SET (75)
#define TIMBRE_4_NOTE_E_5_STANDARD_SET (76)
#define TIMBRE_4_NOTE_F_5_STANDARD_SET (77)
#define TIMBRE_4_NOTE_F_SHARP_5_STANDARD_SET (78)
#define TIMBRE_4_NOTE_G_5_STANDARD_SET (79)
#define TIMBRE_4_NOTE_G_SHARP_5_STANDARD_SET (80)
#define TIMBRE_4_NOTE_A_5_STANDARD_SET (81)
#define TIMBRE_4_NOTE_A_SHARP_5_STANDARD_SET (82)
#define TIMBRE_4_NOTE_B_5_STANDARD_SET (83)
#define TIMBRE_4_NOTE_C_6_STANDARD_SET (84)
#define TIMBRE_4_NOTE_C_SHARP_6_STANDARD_SET (85)
#define TIMBRE_4_NOTE_D_6_STANDARD_SET (86)
#define TIMBRE_4_NOTE_D_SHARP_6_STANDARD_SET (87)
/**
 * @~Chinese
 * @brief E-6 (掌声)
 */
/**
 * @~English
 * @brief E-6 (Applauses)
 */
#define TIMBRE_4_NOTE_E_6_APPLAUSES (88)
#define TIMBRE_4_NOTE_F_6_STANDARD_SET (89)
#define TIMBRE_4_NOTE_F_SHARP_6_STANDARD_SET (90)
#define TIMBRE_4_NOTE_G_6_STANDARD_SET (91)
#define TIMBRE_4_NOTE_G_SHARP_6_STANDARD_SET (92)
#define TIMBRE_4_NOTE_A_6_STANDARD_SET (93)
#define TIMBRE_4_NOTE_A_SHARP_6_STANDARD_SET (94)
#define TIMBRE_4_NOTE_B_6_STANDARD_SET (95)
#define TIMBRE_4_NOTE_C_7_STANDARD_SET (96)
#define TIMBRE_4_NOTE_C_SHARP_7_STANDARD_SET (97)
#define TIMBRE_4_NOTE_D_7_STANDARD_SET (98)
#define TIMBRE_4_NOTE_D_SHARP_7_STANDARD_SET (99)
#define TIMBRE_4_NOTE_E_7_STANDARD_SET (100)
#define TIMBRE_4_NOTE_F_7_STANDARD_SET (101)
#define TIMBRE_4_NOTE_F_SHARP_7_STANDARD_SET (102)
#define TIMBRE_4_NOTE_G_7_STANDARD_SET (103)
#define TIMBRE_4_NOTE_G_SHARP_7_STANDARD_SET (104)
#define TIMBRE_4_NOTE_A_7_STANDARD_SET (105)
#define TIMBRE_4_NOTE_A_SHARP_7_STANDARD_SET (106)

/**
 * @~Chinese
 * @brief 定义通道9音色PERCUSSION_TIMBRE_5的音符常量。
 */
/**
 * @~English
 * @brief Define the note constants for channel 9 timbre PERCUSSION_TIMBRE_5.
 */

/**
 * @~Chinese
 * @brief B-1 (底鼓1)
 */
/**
 * @~English
 * @brief B-1 (Kick drum 1)
 */
#define TIMBRE_5_NOTE_B_1_KICK_DRUM_1 (35)
/**
 * @~Chinese
 * @brief C-2 (底鼓2)
 */
/**
 * @~English
 * @brief C-2 (Kick drum 2)
 */
#define TIMBRE_5_NOTE_C_2_KICK_DRUM_2 (36)
/**
 * @~Chinese
 * @brief C#-2 (边击)
 */
/**
 * @~English
 * @brief C#-2 (Rim shot)
 */
#define TIMBRE_5_NOTE_C_SHARP_2_RIM_SHOT (37)
/**
 * @~Chinese
 * @brief D-2 (军鼓)
 */
/**
 * @~English
 * @brief D-2 (Snare drum)
 */
#define TIMBRE_5_NOTE_D_2_SNARE_DRUM (38)
/**
 * @~Chinese
 * @brief D#-2 (拍手)
 */
/**
 * @~English
 * @brief D#-2 (Hand clap)
 */
#define TIMBRE_5_NOTE_D_SHARP_2_HAND_CLAP (39)
/**
 * @~Chinese
 * @brief E-2 (电子军鼓)
 */
/**
 * @~English
 * @brief E-2 (Electric snare drum)
 */
#define TIMBRE_5_NOTE_E_2_ELECTRIC_SNARE_DRUM (40)
/**
 * @~Chinese
 * @brief F-2 (原声低音嗵鼓1)
 */
/**
 * @~English
 * @brief F-2 (Acoustic low tom 1)
 */
#define TIMBRE_5_NOTE_F_2_ACOUSTIC_LOW_TOM_1 (41)
/**
 * @~Chinese
 * @brief F#-2 (闭合踩镲)
 */
/**
 * @~English
 * @brief F#-2 (Closed hi hat)
 */
#define TIMBRE_5_NOTE_F_SHARP_2_CLOSED_HI_HAT (42)
/**
 * @~Chinese
 * @brief G-2 (原声低音嗵鼓1)
 */
/**
 * @~English
 * @brief G-2 (Acoustic low tom 2)
 */
#define TIMBRE_5_NOTE_G_2_ACOUSTIC_LOW_TOM_2 (43)
/**
 * @~Chinese
 * @brief G#-2 (开镲2)
 */
/**
 * @~English
 * @brief G#-2 (Open hi hat 2)
 */
#define TIMBRE_5_NOTE_G_SHARP_2_OPEN_HI_HAT_2 (44)
/**
 * @~Chinese
 * @brief A-2 (原声中音嗵鼓1)
 */
/**
 * @~English
 * @brief A-2 (Acoustic middle tom 1)
 */
#define TIMBRE_5_NOTE_A_2_ACOUSTIC_MIDDLE_TOM_1 (45)
/**
 * @~Chinese
 * @brief A#-2 (开镲1)
 */
/**
 * @~English
 * @brief A#-2 (Open hi hat 1)
 */
#define TIMBRE_5_NOTE_A_SHARP_2_OPEN_HI_HAT_1 (46)
/**
 * @~Chinese
 * @brief B-2 (原声中音嗵鼓2)
 */
/**
 * @~English
 * @brief B-2 (Acoustic middle tom 2)
 */
#define TIMBRE_5_NOTE_B_2_ACOUSTIC_MIDDLE_TOM_2 (47)
/**
 * @~Chinese
 * @brief C-3 (原声高音嗵鼓1)
 */
/**
 * @~English
 * @brief C-3 (Acoustic high tom 1)
 */
#define TIMBRE_5_NOTE_C_3_ACOUSTIC_HIGHT_TOM_1 (48)
/**
 * @~Chinese
 * @brief C#-3 (碎音镲)
 */
/**
 * @~English
 * @brief C#-3 (Crash cymbal)
 */
#define TIMBRE_5_NOTE_C_SHARP_3_CRASH_CYMBAL (49)
/**
 * @~Chinese
 * @brief D-3 (原声高音嗵鼓2)
 */
/**
 * @~English
 * @brief D-3 (Acoustic high tom 2)
 */
#define TIMBRE_5_NOTE_D_3_ACOUSTIC_HIGH_TOM_2 (50)
/**
 * @~Chinese
 * @brief D#-3 (节奏镲)
 */
/**
 * @~English
 * @brief D#-3 (Ride cymbal)
 */
#define TIMBRE_5_NOTE_D_SHARP_3_RIDE_CYMBAL (51)
/**
 * @~Chinese
 * @brief F#-3 (铃鼓)
 */
/**
 * @~English
 * @brief F#-3 (Tambourine)
 */
#define TIMBRE_5_NOTE_F_SHARP_3_TAMBOURINE (54)
/**
 * @~Chinese
 * @brief G#-3 (牛铃)
 */
/**
 * @~English
 * @brief G#-3 (Cowbell)
 */
#define TIMBRE_5_NOTE_G_SHARP_3_COWBELL (56)
#define TIMBRE_5_NOTE_C_4_STANDARD_SET (60)
#define TIMBRE_5_NOTE_C_SHARP_4_STANDARD_SET (61)
#define TIMBRE_5_NOTE_D_4_STANDARD_SET (62)
#define TIMBRE_5_NOTE_D_SHARP_4_STANDARD_SET (63)
#define TIMBRE_5_NOTE_E_4_STANDARD_SET (64)
#define TIMBRE_5_NOTE_F_4_STANDARD_SET (65)
#define TIMBRE_5_NOTE_F_SHARP_4_STANDARD_SET (66)
#define TIMBRE_5_NOTE_G_4_STANDARD_SET (67)
#define TIMBRE_5_NOTE_G_SHARP_4_STANDARD_SET (68)
#define TIMBRE_5_NOTE_A_4_STANDARD_SET (69)
#define TIMBRE_5_NOTE_A_SHARP_4_STANDARD_SET (70)
#define TIMBRE_5_NOTE_B_4_STANDARD_SET (71)
#define TIMBRE_5_NOTE_C_5_STANDARD_SET (72)
/**
 * @~Chinese
 * @brief C#-5 (颤音叉)
 */
/**
 * @~English
 * @brief C#-5 (Vibra slap)
 */
#define TIMBRE_5_NOTE_C_SHARP_5_VIBRA_SLAP (73)
/**
 * @~Chinese
 * @brief D#-5 (响棒)
 */
/**
 * @~English
 * @brief D#-5 (Claves)
 */
#define TIMBRE_5_NOTE_D_SHARP_5_CLAVES (75)
/**
 * @~Chinese
 * @brief A#-5 (掌声)
 */
/**
 * @~English
 * @brief A#-5 (Applauses)
 */
#define TIMBRE_5_NOTE_A_SHARP_5_APPLAUSES (82)
/**
 * @~Chinese
 * @brief A#-6 (直升机声)
 */
/**
 * @~English
 * @brief A#-6 (Helicopter)
 */
#define TIMBRE_5_NOTE_A_SHARP_6_HELICOPTER (94)
#define TIMBRE_5_NOTE_C_7_STANDARD_SET (96)
/**
 * @~Chinese
 * @brief F#-7 (鸟鸣声)
 */
/**
 * @~English
 * @brief F#-7 (Birds)
 */
#define TIMBRE_5_NOTE_F_SHARP_7_BIRDS (102)
/**
 * @~Chinese
 * @brief A#-7 (海浪声)
 */
/**
 * @~English
 * @brief A#-7 (Seashore)
 */
#define TIMBRE_5_NOTE_A_SHARP_7_SEASHORE (106)

#endif