cmd_net/mac80211/mac80211.o := arm-poky-linux-gnueabi-ld -EL    -r -o net/mac80211/mac80211.o net/mac80211/main.o net/mac80211/status.o net/mac80211/sta_info.o net/mac80211/wep.o net/mac80211/wpa.o net/mac80211/scan.o net/mac80211/offchannel.o net/mac80211/ht.o net/mac80211/agg-tx.o net/mac80211/agg-rx.o net/mac80211/vht.o net/mac80211/ibss.o net/mac80211/iface.o net/mac80211/rate.o net/mac80211/michael.o net/mac80211/tkip.o net/mac80211/aes_ccm.o net/mac80211/aes_cmac.o net/mac80211/cfg.o net/mac80211/rx.o net/mac80211/spectmgmt.o net/mac80211/tx.o net/mac80211/key.o net/mac80211/util.o net/mac80211/wme.o net/mac80211/event.o net/mac80211/chan.o net/mac80211/trace.o net/mac80211/mlme.o net/mac80211/pm.o net/mac80211/rc80211_minstrel.o net/mac80211/rc80211_minstrel_ht.o 
