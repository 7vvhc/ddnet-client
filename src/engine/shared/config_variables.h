Exit code: 0
Wall time: 0.4 seconds
Total output lines: 789
Output:
/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */

// This file can be included several times.

#ifndef MACRO_CONFIG_INT
#error "The config macros must be defined"
// This helps IDEs properly syntax highlight the uses of the macro below.
#define MACRO_CONFIG_INT(Name, ScriptName, Def, Min, Max, Save, Desc)
#define MACRO_CONFIG_COL(Name, ScriptName, Def, Save, Desc)
#define MACRO_CONFIG_STR(Name, ScriptName, Len, Def, Save, Desc)
#endif

// client
MACRO_CONFIG_INT(ClPredict, cl_predict, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict client movements")
MACRO_CONFIG_INT(ClPredictDummy, cl_predict_dummy, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict dummy movements")
MACRO_CONFIG_INT(ClPredictEvents, cl_predict_events, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict events (sounds, particles)")
MACRO_CONFIG_INT(ClAntiPingLimit, cl_antiping_limit, 0, 0, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Adds delay to antiping (0 to disable)")
MACRO_CONFIG_INT(ClAntiPingPercent, cl_antiping_percent, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How far ahead antiping predicts, ignored when antiping limit is used")
MACRO_CONFIG_INT(ClAntiPing, cl_antiping, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable antiping, i. e. more aggressive prediction.")
MACRO_CONFIG_INT(ClAntiPingPlayers, cl_antiping_players, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict other player's movement more aggressively (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingGrenade, cl_antiping_grenade, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict grenades (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingWeapons, cl_antiping_weapons, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict weapon projectiles (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingSmooth, cl_antiping_smooth, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Make the prediction of other player's movement smoother")
MACRO_CONFIG_INT(ClAntiPingGunfire, cl_antiping_gunfire, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict gunfire and show predicted weapon physics (with cl_antiping_grenade 1 and cl_antiping_weapons 1)")
MACRO_CONFIG_INT(ClAntiPingPreInput, cl_antiping_preinput, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict other players using preinputs for more accurate input prediction")
MACRO_CONFIG_INT(ClPredictionMargin, cl_prediction_margin, 10, 1, 300, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Prediction margin in ms (adds latency, can reduce lag from ping jumps)")
MACRO_CONFIG_INT(ClSubTickAiming, cl_sub_tick_aiming, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Send aiming data at sub-tick accuracy")
#if defined(CONF_PLATFORM_ANDROID)
MACRO_CONFIG_INT(ClTouchControls, cl_touch_controls, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable ingame touch controls")
#else
MACRO_CONFIG_INT(ClTouchControls, cl_touch_controls, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable ingame touch controls")
#endif
MACRO_CONFIG_INT(ClBackButton, cl_back_button, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show draggable virtual back button")
MACRO_CONFIG_INT(ClBackButtonX, cl_back_button_x, 5000, 0, 1000000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Relative X position of the draggable back button")
MACRO_CONFIG_INT(ClBackButtonY, cl_back_button_y, 5000, 0, 1000000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Relative Y position of the draggable back button")

MACRO_CONFIG_INT(ClNamePlates, cl_nameplates, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show name plates")
MACRO_CONFIG_INT(ClNamePlatesAlways, cl_nameplates_always, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Always show name plates regardless of distance")
MACRO_CONFIG_INT(ClNamePlatesTeamcolors, cl_nameplates_teamcolors, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use team colors for name plates")
MACRO_CONFIG_INT(ClNamePlatesSize, cl_nameplates_size, 50, -50, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the name plates")
MACRO_CONFIG_INT(ClNamePlatesClan, cl_nameplates_clan, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show clan names in name plates")
MACRO_CONFIG_INT(ClNamePlatesClanSize, cl_nameplates_clan_size, 30, -50, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the clan name in name plates")
MACRO_CONFIG_INT(ClNamePlatesIds, cl_nameplates_ids, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show client IDs in name plates")
MACRO_CONFIG_INT(ClNamePlatesIdsSize, cl_nameplates_ids_size, 50, -50, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the client IDs in name plates")
MACRO_CONFIG_INT(ClNamePlatesIdsSeparateLine, cl_nameplates_ids_seperate_line, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show client IDs on a separate line in name plates")
MACRO_CONFIG_INT(ClNamePlatesOffset, cl_nameplates_offset, 30, 10, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "The size of the gap between the tee and the name plate")

MACRO_CONFIG_INT(ClNamePlatesOwn, cl_nameplates_own, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show own name plate (useful for demo recording)")
MACRO_CONFIG_INT(ClNamePlatesFriendMark, cl_nameplates_friendmark, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show friend mark (♥) in name plates")
MACRO_CONFIG_INT(ClNamePlatesStrong, cl_nameplates_strong, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show strong/weak in name plates (0 - off, 1 - icons, 2 - icons + numbers)")
MACRO_CONFIG_INT(ClNamePlatesStrongSize, cl_nameplates_strong_size, 30, -50, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of strong/weak state icons and numbers")

MACRO_CONFIG_INT(ClAfkEmote, cl_afk_emote, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show zzz emote next to afk players")
MACRO_CONFIG_INT(ClTextEntities, cl_text_entities, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render textual entity data")
MACRO_CONFIG_INT(ClTextEntitiesSize, cl_text_entities_size, 100, 20, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of textual entity data from 20 to 100%")
MACRO_CONFIG_INT(ClTextEntitiesEditor, cl_text_entities_editor, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render textual entity data in editor")
MACRO_CONFIG_INT(ClStreamerMode, cl_streamer_mode, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Censor sensitive information such as /save password")

MACRO_CONFIG_COL(ClAuthedPlayerColor, cl_authed_player_color, 5898211, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of name of authenticated player in scoreboard")
MACRO_CONFIG_COL(ClSameClanColor, cl_same_clan_color, 5898211, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Clan color of players with the same clan as you in scoreboard.")

MACRO_CONFIG_INT(ClEnablePingColor, cl_enable_ping_color, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether ping is colored in scoreboard.")
MACRO_CONFIG_INT(ClAutoswitchWeapons, cl_autoswitch_weapons, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto switch weapon on pickup")
MACRO_CONFIG_INT(ClAutoswitchWeaponsOutOfAmmo, cl_autoswitch_weapons_out_of_ammo, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto switch weapon when out of ammo")

MACRO_CONFIG_INT(ClShowhud, cl_showhud, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD")
MACRO_CONFIG_INT(ClShowhudHealthAmmo, cl_showhud_healthammo, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Health + Ammo)")
MACRO_CONFIG_INT(ClShowhudScore, cl_showhud_score, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Score)")
MACRO_CONFIG_INT(ClShowhudTimer, cl_showhud_timer, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Timer)")
MACRO_CONFIG_INT(ClShowhudTimeCpDiff, cl_showhud_time_cp_diff, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Time Checkpoint Difference)")
MACRO_CONFIG_INT(ClShowhudSpectatorCount, cl_showhud_spectator_count, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Spectator Count)")
MACRO_CONFIG_INT(ClShowhudDummyActions, cl_showhud_dummy_actions, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Dummy Actions)")
MACRO_CONFIG_INT(ClShowhudPlayerPosition, cl_showhud_player_position, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Player Position)")
MACRO_CONFIG_INT(ClShowhudPlayerSpeed, cl_showhud_player_speed, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Player Speed)")
MACRO_CONFIG_INT(ClShowhudPlayerAngle, cl_showhud_player_angle, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Player Aim Angle)")
MACRO_CONFIG_INT(ClShowhudDDRace, cl_showhud_ddrace, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show ingame HUD (DDRace HUD)")
MACRO_CONFIG_INT(ClShowhudJumpsIndicator, cl_showhud_jumps_indicator, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show ingame HUD (Jumps you have and have used)")
MACRO_CONFIG_INT(ClShowhudSpectator, cl_showhud_spectator, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show ingame HUD (Spectator HUD)")
MACRO_CONFIG_INT(ClShowFreezeBars, cl_show_freeze_bars, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Whether to show a freeze bar under frozen players to indicate the thaw time")
MACRO_CONFIG_INT(ClFreezeBarsAlphaInsideFreeze, cl_freezebars_alpha_inside_freeze, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Opacity of freeze bars inside freeze (0 invisible, 100 fully visible)")
MACRO_CONFIG_INT(ClShowRecord, cl_showrecord, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show old style DDRace client records")
MACRO_CONFIG_INT(ClShowNotifications, cl_shownotifications, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Make the client notify when someone highlights you")
MACRO_CONFIG_INT(ClShowEmotes, cl_showemotes, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show tee emotes")
MACRO_CONFIG_INT(ClShowChat, cl_showchat, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show chat (2 to always show large chat area)")
MACRO_CONFIG_INT(ClShowChatFriends, cl_show_chat_friends, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show only chat messages from friends")
MACRO_CONFIG_INT(ClShowChatTeamMembersOnly, cl_show_chat_team_members_only, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show only chat messages from team members")
MACRO_CONFIG_INT(ClShowChatSystem, cl_show_chat_system, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show chat messages from the server")
MACRO_CONFIG_INT(ClShowKillMessages, cl_showkillmessages, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show kill messages")
MACRO_CONFIG_INT(ClShowFinishMessages, cl_show_finish_messages, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show finish messages")
MACRO_CONFIG_INT(ClShowVotesAfterVoting, cl_show_votes_after_voting, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show votes window after voting")
MACRO_CONFIG_INT(ClShowLocalTimeAlways, cl_show_local_time_always, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Always show local time")
MACRO_CONFIG_INT(ClShowfps, cl_showfps, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame FPS counter")
MACRO_CONFIG_INT(ClShowpred, cl_showpred, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame prediction time in milliseconds")
MACRO_CONFIG_INT(ClEyeWheel, cl_eye_wheel, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show eye wheel along together with emotes")
MACRO_CONFIG_INT(ClEyeDuration, cl_eye_duration, 999999, 1, 999999, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How long the eyes emotes last")
MACRO_CONFIG_INT(ClFreezeStars, cl_freeze_stars, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show old star particles for frozen tees")

MACRO_CONFIG_INT(ClSpecCursor, cl_spec_cursor, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable the cursor of spectating player if available")
MACRO_CONFIG_INT(ClSpecAutoSync, cl_spec_auto_sync, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Automatically synchronize with spectating players's camera setting if available (0 = disable, 1 = enable on reset zoom)")

MACRO_CONFIG_INT(ClAirjumpindicator, cl_airjumpindicator, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show the air jump indicator")
MACRO_CONFIG_INT(ClThreadsoundloading, cl_threadsoundloading, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Load sound files threaded")

MACRO_CONFIG_INT(ClWarningTeambalance, cl_warning_teambalance, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Warn about team balance")

MACRO_CONFIG_INT(ClMouseDeadzone, cl_mouse_deadzone, 0, 0, 3000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Deadzone for the camera to follow the cursor")
MACRO_CONFIG_INT(ClMouseFollowfactor, cl_mouse_followfactor, 0, 0, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Factor for the camera to follow the cursor")
MACRO_CONFIG_INT(ClMouseMaxDistance, cl_mouse_max_distance, 400, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Maximum cursor distance")
MACRO_CONFIG_INT(ClMouseMinDistance, cl_mouse_min_distance, 0, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Minimum cursor distance")

MACRO_CONFIG_INT(ClDyncam, cl_dyncam, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Enable dyncam")
MACRO_CONFIG_INT(ClDyncamMaxDistance, cl_dyncam_max_distance, 1000, 0, 2000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Maximum dynamic camera cursor distance")
MACRO_CONFIG_INT(ClDyncamMinDistance, cl_dyncam_min_distance, 0, 0, 2000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Minimum dynamic camera cursor distance")
MACRO_CONFIG_INT(ClDyncamMousesens, cl_dyncam_mousesens, 0, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Mouse sens used when dyncam is toggled on")
MACRO_CONFIG_INT(ClDyncamDeadzone, cl_dyncam_deadzone, 300, 1, 1300, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Deadzone for the dynamic camera to follow the cursor")
MACRO_CONFIG_INT(ClDyncamFollowFactor, cl_dyncam_follow_factor, 60, 0, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Factor for the dynamic camera to follow the cursor")

MACRO_CONFIG_INT(ClDyncamSmoothness, cl_dyncam_smoothness, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Transition amount of the camera movement, 0=instant, 100=slow and smooth")
MACRO_CONFIG_INT(ClDyncamStabilizing, cl_dyncam_stabilizing, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Amount of camera slowdown during fast cursor movement. High value can cause delay in camera movement")

MACRO_CONFIG_INT(ClMultiViewSensitivity, cl_multiview_sensitivity, 100, 0, 200, CFGFLAG_CLIENT | CFGFLAG_INSENSITIVE, "Set how fast the camera will move to the desired location (higher = faster)")
MACRO_CONFIG_INT(ClMultiViewZoomSmoothness, cl_multiview_zoom_smoothness, 1300, 50, 5000, CFGFLAG_CLIENT | CFGFLAG_INSENSITIVE, "Set the smoothness of the multi-view zoom (in ms, higher = slower)")

MACRO_CONFIG_INT(ClSpectatorMouseclicks, cl_spectator_mouseclicks, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enables left-click to toggle between spectating the closest player and free-view")
MACRO_CONFIG_INT(ClSmoothSpectatingTime, cl_smooth_spectating_time, 300, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Time of smooth camera switch animation when spectating in ms (0 for off)")

MACRO_CONFIG_INT(EdAutosaveInterval, ed_autosave_interval, 10, 0, 240, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Interval in minutes at which a copy of the current editor map is automatically saved to the 'auto' folder (0 for off)")
MACRO_CONFIG_INT(EdAutosaveMax, ed_autosave_max, 10, 0, 1000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum number of autosaves that are kept per map name (0 = no limit)")
MACRO_CONFIG_INT(EdSmoothZoomTime, ed_smooth_zoom_time, 250, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Time of smooth zoom animation in the editor in ms (0 for off)")
MACRO_CONFIG_INT(EdLimitMaxZoomLevel, ed_limit_max_zoom_level, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies, if zooming in the editor should be limited or not (0 = no limit)")
MACRO_CONFIG_INT(EdZoomTarget, ed_zoom_target, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Zoom to the current mouse target")
MACRO_CONFIG_INT(EdShowkeys, ed_showkeys, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show pressed keys")
MACRO_CONFIG_INT(EdAlignQuads, ed_align_quads, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable/disable quad alignment. When enabled, red lines appear to show how quad/points are aligned and snapped to other quads/points when moving them")
MACRO_CONFIG_INT(EdShowQuadsRect, ed_show_quads_rect, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show the bounds of the selected quad. In case of multiple quads, it shows the bounds of the englobing rect. Can be helpful when aligning a group of quads")
MACRO_CONFIG_INT(EdAutoMapReload, ed_auto_map_reload, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Run 'hot_reload' on the local server while rcon authed on map save")
MACRO_CONFIG_INT(EdLayerSelector, ed_layer_selector, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Ctrl+right click tiles to select their layers in the editor")
MACRO_CONFIG_INT(EdShowIngameEntities, ed_show_ingame_entities, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show how weapons, shields, hearts and flags appear ingame")

MACRO_CONFIG_INT(ClShowWelcome, cl_show_welcome, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show welcome message indicating the first launch of the client")
MACRO_CONFIG_INT(ClMotdTime, cl_motd_time, 10, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How long to show the server message of the day")

// http map download
MACRO_CONFIG_STR(ClMapDownloadUrl, cl_map_download_url, 100, "https://maps.ddnet.org", CFGFLAG_CLIENT | CFGFLAG_SAVE, "URL used to download maps (must start with https://)")
MACRO_CONFIG_INT(ClMapDownloadConnectTimeoutMs, cl_map_download_connect_timeout_ms, 2000, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: timeout for the connect phase in milliseconds (0 to disable)")
MACRO_CONFIG_INT(ClMapDownloadLowSpeedLimit, cl_map_download_low_speed_limit, 4000, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: Set low speed limit in bytes per second (0 to disable)")
MACRO_CONFIG_INT(ClMapDownloadLowSpeedTime, cl_map_download_low_speed_time, 3, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: Set low speed limit time period (0 to disable)")

MACRO_CONFIG_STR(ClLanguagefile, cl_languagefile, 255, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "What language file to use")

// skin loading
#if defined(CONF_ARCH_IA32)
MACRO_CONFIG_INT(ClSkinsLoadedMax, cl_skins_loaded_max, 256, 256, 8192, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum number of skins that can be loaded at the same time")
#else
MACRO_CONFIG_INT(ClSkinsLoadedMax, cl_skins_loaded_max, 512, 256, 8192, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum number of skins that can be loaded at the same time")
#endif
MACRO_CONFIG_STR(ClSkinDownloadUrl, cl_skin_download_url, 100, "https://skins.ddnet.org/skin/", CFGFLAG_CLIENT | CFGFLAG_SAVE, "URL used to download skins")
MACRO_CONFIG_STR(ClSkinCommunityDownloadUrl, cl_skin_community_download_url, 100, "https://skins.ddnet.org/skin/community/", CFGFLAG_CLIENT | CFGFLAG_SAVE, "URL used to download community skins")
MACRO_CONFIG_INT(ClVanillaSkinsOnly, cl_vanilla_skins_only, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only show skins available in Vanilla Teeworlds")
MACRO_CONFIG_INT(ClDownloadSkins, cl_download_skins, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Download skins from cl_skin_download_url on-the-fly")
MACRO_CONFIG_INT(ClDownloadCommunitySkins, cl_download_community_skins, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Allow to download skins created by the community. Uses cl_skin_community_download_url instead of cl_skin_download_url for the download")

MACRO_CONFIG_INT(ClAutoStatboardScreenshot, cl_auto_statboard_screenshot, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Automatically take game over statboard screenshot")
MACRO_CONFIG_INT(ClAutoStatboardScreenshotMax, cl_auto_statboard_screenshot_max, 10, 0, 1000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Maximum number of automatically created statboard screenshots (0 = no limit)")

MACRO_CONFIG_INT(ClDefaultZoom, cl_default_zoom, 10, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Default zoom level")
MACRO_CONFIG_INT(ClSmoothZoomTime, cl_smooth_zoom_time, 250, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Time of smooth zoom animation ingame in ms (0 for off)")
MACRO_CONFIG_INT(ClLimitMaxZoomLevel, cl_limit_max_zoom_level, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies, if zoomin…13624 tokens truncated…ge_system_color, 2817983, CFGFLAG_CLIENT | CFGFLAG_SAVE, "System message color")
MACRO_CONFIG_COL(ClMessageClientColor, cl_message_client_color, 9633471, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Client message color")
MACRO_CONFIG_COL(ClMessageHighlightColor, cl_message_highlight_color, 65471, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Highlighted message color")
MACRO_CONFIG_COL(ClMessageTeamColor, cl_message_team_color, 5636050, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Team message color")
MACRO_CONFIG_COL(ClMessageColor, cl_message_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Message color")
MACRO_CONFIG_COL(ClLaserRifleInnerColor, cl_laser_rifle_inner_color, 11206591, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser inner color for Rifle")
MACRO_CONFIG_COL(ClLaserRifleOutlineColor, cl_laser_rifle_outline_color, 11176233, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser outline color for Rifle")
MACRO_CONFIG_COL(ClLaserShotgunInnerColor, cl_laser_sg_inner_color, 1467241, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser inner color for Shotgun")
MACRO_CONFIG_COL(ClLaserShotgunOutlineColor, cl_laser_sg_outline_color, 1866773, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser outline color for Shotgun")
MACRO_CONFIG_COL(ClLaserDoorInnerColor, cl_laser_door_inner_color, 7701379, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser inner color for doors")
MACRO_CONFIG_COL(ClLaserDoorOutlineColor, cl_laser_door_outline_color, 7667473, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser outline color for doors")
MACRO_CONFIG_COL(ClLaserFreezeInnerColor, cl_laser_freeze_inner_color, 12001153, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser inner color for freezes")
MACRO_CONFIG_COL(ClLaserFreezeOutlineColor, cl_laser_freeze_outline_color, 11613223, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser outline color for freezes")
MACRO_CONFIG_COL(ClLaserDraggerInnerColor, cl_laser_dragger_inner_color, 42398, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser inner color for draggers")
MACRO_CONFIG_COL(ClLaserDraggerOutlineColor, cl_laser_dragger_outline_color, 57618, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Laser outline color for draggers")

MACRO_CONFIG_COL(ClKillMessageNormalColor, cl_kill_message_normal_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Kill message normal color")
MACRO_CONFIG_COL(ClKillMessageHighlightColor, cl_kill_message_highlight_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Kill message highlight color")

MACRO_CONFIG_INT(ClMessageFriend, cl_message_friend, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Enable coloring and the heart for friends")
MACRO_CONFIG_COL(ClMessageFriendColor, cl_message_friend_color, 65425, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Friend message color")

MACRO_CONFIG_INT(ConnTimeout, conn_timeout, 100, 5, 1000, CFGFLAG_SAVE | CFGFLAG_CLIENT | CFGFLAG_SERVER, "Network timeout")
MACRO_CONFIG_INT(ConnTimeoutProtection, conn_timeout_protection, 1000, 5, 10000, CFGFLAG_SERVER, "Network timeout protection")
MACRO_CONFIG_INT(ClShowIds, cl_show_ids, 0, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Whether to show client IDs in scoreboard, chat and spectator menu")
MACRO_CONFIG_INT(ClScoreboardOnDeath, cl_scoreboard_on_death, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Whether to show scoreboard after death or not")
MACRO_CONFIG_INT(ClAutoRaceRecord, cl_auto_race_record, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Save the best demo of each race")
MACRO_CONFIG_INT(ClReplays, cl_replays, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable/disable replays")
MACRO_CONFIG_INT(ClReplayLength, cl_replay_length, 30, 10, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Set the default length of the replays")
MACRO_CONFIG_INT(ClRaceRecordServerControl, cl_race_record_server_control, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Let the server start the race recorder")
MACRO_CONFIG_INT(ClDemoName, cl_demo_name, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Save the player name within the demo")
MACRO_CONFIG_INT(ClRaceGhost, cl_race_ghost, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable ghost")
MACRO_CONFIG_INT(ClRaceGhostServerControl, cl_race_ghost_server_control, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Let the server start the ghost")
MACRO_CONFIG_INT(ClRaceShowGhost, cl_race_show_ghost, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ghost")
MACRO_CONFIG_INT(ClRaceSaveGhost, cl_race_save_ghost, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Save ghost")
MACRO_CONFIG_INT(ClRaceGhostStrictMap, cl_race_ghost_strict_map, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Match ghosts by map version instead of only map name")
MACRO_CONFIG_INT(ClRaceGhostSaveBest, cl_race_ghost_save_best, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Save only ghosts that are better than the previous record.")
MACRO_CONFIG_INT(ClRaceGhostAlpha, cl_race_ghost_alpha, 40, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Visibility of ghosts (alpha value, 0 invisible, 100 fully visible)")

MACRO_CONFIG_INT(SvResetPickups, sv_reset_pickups, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Whether the weapons are reset on passing the start tile or not")
MACRO_CONFIG_INT(ClShowOthers, cl_show_others, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show players in other teams (2 to show own team only)")
MACRO_CONFIG_INT(ClShowOthersAlpha, cl_show_others_alpha, 40, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show players in other teams (alpha value, 0 invisible, 100 fully visible)")
MACRO_CONFIG_INT(ClOverlayEntities, cl_overlay_entities, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Overlay game tiles with a percentage of opacity")
MACRO_CONFIG_INT(ClShowQuads, cl_showquads, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show background quads (only interesting for mappers, or if your system has extremely bad performance)")
MACRO_CONFIG_COL(ClBackgroundColor, cl_background_color, 128, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Background color") // 0 0 128
MACRO_CONFIG_COL(ClBackgroundEntitiesColor, cl_background_entities_color, 128, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Background (entities) color") // 0 0 128
MACRO_CONFIG_STR(ClBackgroundEntities, cl_background_entities, IO_MAX_PATH_LENGTH, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Background (entities)")
MACRO_CONFIG_STR(ClRunOnJoin, cl_run_on_join, 100, "", CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Command to run when joining a server")

// menu background map
MACRO_CONFIG_STR(ClMenuMap, cl_menu_map, 100, "auto", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Background map in the menu")
MACRO_CONFIG_INT(ClRotationRadius, cl_rotation_radius, 30, 1, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Menu camera rotation radius")
MACRO_CONFIG_INT(ClRotationSpeed, cl_rotation_speed, 40, 1, 120, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Menu camera rotations in seconds")
MACRO_CONFIG_INT(ClCameraSpeed, cl_camera_speed, 5, 1, 40, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Menu camera speed")

MACRO_CONFIG_INT(ClBackgroundShowTilesLayers, cl_background_show_tiles_layers, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether draw tiles layers when using custom background (entities)")
MACRO_CONFIG_INT(SvShowOthers, sv_show_others, 1, 0, 1, CFGFLAG_SERVER, "Whether players can use the command showothers or not")
MACRO_CONFIG_INT(SvShowOthersDefault, sv_show_others_default, 0, 0, 2, CFGFLAG_SERVER | CFGFLAG_GAME, "Whether players see others by default (2 for own team)")
MACRO_CONFIG_INT(SvShowAllDefault, sv_show_all_default, 0, 0, 1, CFGFLAG_SERVER, "Whether players see all tees by default")
MACRO_CONFIG_INT(SvMaxAfkTime, sv_max_afk_time, 300, 0, 9999, CFGFLAG_SERVER, "The time in seconds a player to be afk (0 = disabled)")
MACRO_CONFIG_INT(SvPlasmaRange, sv_plasma_range, 700, 1, 99999, CFGFLAG_SERVER | CFGFLAG_GAME, "How far will the plasma gun track tees")
MACRO_CONFIG_INT(SvPlasmaPerSec, sv_plasma_per_sec, 3, 0, 50, CFGFLAG_SERVER | CFGFLAG_GAME, "How many shots does the plasma gun fire per seconds")
MACRO_CONFIG_INT(SvDraggerRange, sv_dragger_range, 700, 1, 99999, CFGFLAG_SERVER | CFGFLAG_GAME, "How far will the dragger track tees")
MACRO_CONFIG_INT(SvVotePause, sv_vote_pause, 1, 0, 1, CFGFLAG_SERVER, "Allow voting to pause players (instead of moving to spectators)")
MACRO_CONFIG_INT(SvVotePauseTime, sv_vote_pause_time, 10, 0, 360, CFGFLAG_SERVER, "The time (in seconds) players have to wait in pause when paused by vote")
MACRO_CONFIG_INT(SvTuneReset, sv_tune_reset, 1, 0, 1, CFGFLAG_SERVER, "Whether tuning is reset after each map change or not")
MACRO_CONFIG_STR(SvResetFile, sv_reset_file, 128, "reset.cfg", CFGFLAG_SERVER, "File to execute on map change or reload to set the default server settings")
MACRO_CONFIG_STR(SvInputFifo, sv_input_fifo, 128, "", CFGFLAG_SERVER, "Fifo file (non-Windows) or Named Pipe (Windows) to use as input for server console")
MACRO_CONFIG_INT(SvDDRaceTuneReset, sv_ddrace_tune_reset, 1, 0, 1, CFGFLAG_SERVER, "Whether DDRace tuning (sv_hit, sv_endless_drag and sv_old_laser) is reset after each map change or not")
MACRO_CONFIG_INT(SvNamelessScore, sv_nameless_score, 1, 0, 1, CFGFLAG_SERVER, "Whether nameless tee has a score or not")
MACRO_CONFIG_INT(SvTimeInBroadcastInterval, sv_time_in_broadcast_interval, 1, 0, 60, CFGFLAG_SERVER, "How often to update the broadcast time")
MACRO_CONFIG_INT(SvDefaultTimerType, sv_default_timer_type, 0, 0, 3, CFGFLAG_SERVER, "Default way of displaying time either game/round timer or broadcast. 0 = game/round timer, 1 = broadcast, 2 = 0+1, 3 = none")

// these might need some fine tuning
MACRO_CONFIG_INT(SvChatInitialDelay, sv_chat_initial_delay, 0, 0, 360, CFGFLAG_SERVER, "The time in seconds before the first message can be sent")
MACRO_CONFIG_INT(SvChatPenalty, sv_chat_penalty, 250, 50, 1000, CFGFLAG_SERVER, "chat score will be increased by this on every message, and decremented by 1 on every tick.")
MACRO_CONFIG_INT(SvChatThreshold, sv_chat_threshold, 1000, 50, 10000, CFGFLAG_SERVER, "if chats score exceeds this, the player will be muted for sv_spam_mute_duration seconds")
MACRO_CONFIG_INT(SvSpamMuteDuration, sv_spam_mute_duration, 60, 0, 3600, CFGFLAG_SERVER, "how many seconds to mute, if player triggers mute on spam. 0 = off")

MACRO_CONFIG_INT(SvShutdownWhenEmpty, sv_shutdown_when_empty, 0, 0, 1, CFGFLAG_SERVER, "Shutdown server as soon as no one is on it anymore")
MACRO_CONFIG_INT(SvReloadWhenEmpty, sv_reload_when_empty, 0, 0, 2, CFGFLAG_SERVER, "Reload map when server is empty (1 = reload once, 2 = reload every time server gets empty)")
MACRO_CONFIG_INT(SvKillProtection, sv_kill_protection, 20, 0, 9999, CFGFLAG_SERVER, "0 - Disable, 1-9999 minutes")
MACRO_CONFIG_INT(SvSoloServer, sv_solo_server, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Set server to solo mode (no player interactions, has to be set before loading the map)")
MACRO_CONFIG_STR(SvClientSuggestion, sv_client_suggestion, 128, "Get DDNet client from DDNet.org to use all features on DDNet!", CFGFLAG_SERVER, "Broadcast to display to players without DDNet client")
MACRO_CONFIG_STR(SvClientSuggestionOld, sv_client_suggestion_old, 128, "Your DDNet client is old, update it on DDNet.org!", CFGFLAG_SERVER, "Broadcast to display to players with an old version of DDNet client")
MACRO_CONFIG_STR(SvClientSuggestionBot, sv_client_suggestion_bot, 128, "Your client has bots and can be remotely controlled!\nPlease use another client like DDNet client from DDNet.org", CFGFLAG_SERVER, "Broadcast to display to players with a known botting client")
MACRO_CONFIG_STR(SvBannedVersions, sv_banned_versions, 128, "", CFGFLAG_SERVER, "Comma-separated list of banned clients to be kicked on join")

// netlimit
MACRO_CONFIG_INT(SvNetlimit, sv_netlimit, 0, 0, 10000, CFGFLAG_SERVER, "Netlimit: Maximum amount of traffic a client is allowed to use (in kb/s)")
MACRO_CONFIG_INT(SvNetlimitAlpha, sv_netlimit_alpha, 50, 1, 100, CFGFLAG_SERVER, "Netlimit: Alpha of Exponentiation moving average")

MACRO_CONFIG_INT(SvConnlimit, sv_connlimit, 5, 0, 100, CFGFLAG_SERVER, "Connlimit: Number of connections an IP is allowed to do in a timespan")
MACRO_CONFIG_INT(SvConnlimitTime, sv_connlimit_time, 20, 0, 1000, CFGFLAG_SERVER, "Connlimit: Time in which IP's connections are counted")

#if defined(CONF_FAMILY_UNIX)
MACRO_CONFIG_STR(SvConnLoggingServer, sv_conn_logging_server, 128, "", CFGFLAG_SERVER, "Unix socket server for IP address logging (Unix only)")
#endif

MACRO_CONFIG_INT(ClUnpredictedShadow, cl_unpredicted_shadow, 0, 0, 3, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show unpredicted shadow tee (0 = off, 1 = self, 2 = only others, 3 = all)")
MACRO_CONFIG_INT(ClUnpredictedShadowAlpha, cl_unpredicted_shadow_alpha, 10, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show unpredicted shadow tee (alpha value, 0 invisible, 100 fully visible)")
MACRO_CONFIG_INT(ClPredictFreeze, cl_predict_freeze, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict freeze tiles (0 = off, 1 = on, 2 = partial (allow a small amount of movement in freeze)")
MACRO_CONFIG_INT(ClShowNinja, cl_show_ninja, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ninja skin")
MACRO_CONFIG_INT(ClShowHookCollOther, cl_show_hook_coll_other, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show other players' hook collision line (2 to always show)")
MACRO_CONFIG_INT(ClShowHookCollOwn, cl_show_hook_coll_own, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show own players' hook collision line (2 to always show)")
MACRO_CONFIG_INT(ClHookCollSize, cl_hook_coll_size, 0, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Width of your own hook collision line")
MACRO_CONFIG_INT(ClHookCollSizeOther, cl_hook_coll_size_other, 0, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Width of others' hook collision line")
MACRO_CONFIG_INT(ClHookCollAlpha, cl_hook_coll_alpha, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Alpha of hook collision line (0 invisible, 100 fully visible)")

MACRO_CONFIG_COL(ClHookCollColorNoColl, cl_hook_coll_color_no_coll, 65407, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies the color of a hookline that hits nothing.")
MACRO_CONFIG_COL(ClHookCollColorHookableColl, cl_hook_coll_color_hookable_coll, 6401973, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies the color of a hookline that hits hookable tiles.")
MACRO_CONFIG_COL(ClHookCollColorTeeColl, cl_hook_coll_color_tee_coll, 2817919, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies the color of a hookline that hits tees.")
MACRO_CONFIG_COL(ClHookCollTipColor, cl_hook_coll_tip_color, 2150367104, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLALPHA, "Specifies the color of the hookline tip")

MACRO_CONFIG_INT(ClChatTeamColors, cl_chat_teamcolors, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show names in chat in team colors")
MACRO_CONFIG_INT(ClChatReset, cl_chat_reset, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Reset chat when pressing escape")
MACRO_CONFIG_INT(ClChatOld, cl_chat_old, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Old chat style: No tee, no background")
MACRO_CONFIG_INT(ClChatFontSize, cl_chat_size, 60, 10, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Chat font size")
MACRO_CONFIG_INT(ClChatWidth, cl_chat_width, 200, 140, 400, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Chat width")
MACRO_CONFIG_COL(ClChatBackgroundColor, cl_chat_background_color, 201326592, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLALPHA, "Chat background color")

MACRO_CONFIG_INT(ClShowDirection, cl_show_direction, 1, 0, 3, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show key presses (1 = other players', 2 = everyone, 3 = only your own")
MACRO_CONFIG_INT(ClDirectionSize, cl_direction_size, 30, -50, 100, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Size of key press icons")
MACRO_CONFIG_INT(ClOldGunPosition, cl_old_gun_position, 0, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Tees hold gun a bit higher like in TW 0.6.1 and older")
MACRO_CONFIG_INT(ClConfirmDisconnectTime, cl_confirm_disconnect_time, 20, -1, 1440, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Confirmation popup before disconnecting after game time (in minutes, -1 to turn off, 0 to always turn on)")
MACRO_CONFIG_INT(ClConfirmQuitTime, cl_confirm_quit_time, 20, -1, 1440, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Confirmation popup before quitting after game time (in minutes, -1 to turn off, 0 to always turn on)")
MACRO_CONFIG_STR(ClTimeoutSeed, cl_timeout_seed, 64, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "Timeout seed")
MACRO_CONFIG_STR(ClInputFifo, cl_input_fifo, 128, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "Fifo file (non-Windows) or Named Pipe (Windows) to use as input for client console")
MACRO_CONFIG_INT(ClConfigVersion, cl_config_version, 0, 0, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "The config version. Helps newer clients fix bugs with older configs.")

// demo editor
MACRO_CONFIG_INT(ClDemoSliceBegin, cl_demo_slice_begin, -1, 0, 0, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Begin marker for demo slice")
MACRO_CONFIG_INT(ClDemoSliceEnd, cl_demo_slice_end, -1, 0, 0, CFGFLAG_SAVE | CFGFLAG_CLIENT, "End marker for demo slice")
MACRO_CONFIG_INT(ClDemoShowSpeed, cl_demo_show_speed, 0, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show speed meter on change")
MACRO_CONFIG_INT(ClDemoShowPause, cl_demo_show_pause, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Show pause/play indicator on change")
MACRO_CONFIG_INT(ClDemoKeyboardShortcuts, cl_demo_keyboard_shortcuts, 1, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Enable keyboard shortcuts in demo player")

// graphic library
#if !defined(CONF_ARCH_IA32) && !defined(CONF_PLATFORM_MACOS)
MACRO_CONFIG_INT(GfxGLMajor, gfx_gl_major, 1, 1, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library major version")
#elif !defined(CONF_ARCH_IA32)
MACRO_CONFIG_INT(GfxGLMajor, gfx_gl_major, 3, 1, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library major version")
#else
MACRO_CONFIG_INT(GfxGLMajor, gfx_gl_major, 1, 1, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library major version")
#endif
#if !defined(CONF_PLATFORM_MACOS)
MACRO_CONFIG_INT(GfxGLMinor, gfx_gl_minor, 1, 0, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library minor version")
#else
MACRO_CONFIG_INT(GfxGLMinor, gfx_gl_minor, 3, 0, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library minor version")
#endif
MACRO_CONFIG_INT(GfxGLPatch, gfx_gl_patch, 0, 0, 10, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Graphic library patch version")

// float multiplied with 1000
MACRO_CONFIG_INT(GfxGLTextureLODBIAS, gfx_gl_texture_lod_bias, -500, -15000, 15000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "The lod bias for graphic library texture sampling multiplied by 1000")

MACRO_CONFIG_INT(Gfx3DTextureAnalysisRan, gfx_3d_texture_analysis_ran, 0, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Ran an analyzer to check if sampling 3D/2D array textures works correctly")
MACRO_CONFIG_STR(Gfx3DTextureAnalysisRenderer, gfx_3d_texture_analysis_renderer, 128, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The renderer on which the analysis was performed")
MACRO_CONFIG_STR(Gfx3DTextureAnalysisVersion, gfx_3d_texture_analysis_version, 128, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The version on which the analysis was performed")

MACRO_CONFIG_STR(GfxGpuName, gfx_gpu_name, 256, "auto", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The GPU's name, which will be selected by the backend. (if supported by the backend)")
#if defined(CONF_PLATFORM_ANDROID)
MACRO_CONFIG_STR(GfxBackend, gfx_backend, 256, "GLES", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The backend to use (e.g. GLES or Vulkan)")
#elif defined(CONF_PLATFORM_EMSCRIPTEN)
MACRO_CONFIG_STR(GfxBackend, gfx_backend, 256, "GLES", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The backend to use (e.g. GLES)")
#elif !defined(CONF_ARCH_IA32) && !defined(CONF_PLATFORM_MACOS)
MACRO_CONFIG_STR(GfxBackend, gfx_backend, 256, "Vulkan", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The backend to use (e.g. OpenGL or Vulkan)")
#else
MACRO_CONFIG_STR(GfxBackend, gfx_backend, 256, "OpenGL", CFGFLAG_SAVE | CFGFLAG_CLIENT, "The backend to use (e.g. OpenGL or Vulkan)")
#endif
MACRO_CONFIG_INT(GfxRenderThreadCount, gfx_render_thread_count, 3, 0, 0, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Number of threads the backend can use for rendering. (note: the value can be ignored by the backend)")

MACRO_CONFIG_INT(GfxDriverIsBlocked, gfx_driver_is_blocked, 0, 0, 1, CFGFLAG_SAVE | CFGFLAG_CLIENT, "If 1, the current driver is in a blocked error state.")

MACRO_CONFIG_INT(ClVideoRecorderFPS, cl_video_recorder_fps, 60, 1, 1000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "At which FPS the videorecorder should record demos.")

/*
 * Add config variables for mods below this comment to avoid merge conflicts.
 */
