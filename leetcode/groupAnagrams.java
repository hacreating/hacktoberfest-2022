public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ret = new LinkedList<>();
        Map<String, List<String>> map = new HashMap<>();
        
        for (String str : strs) {
            String encoded = encode(str);
            if (map.containsKey(encoded))
                map.get(encoded).add(str);
            else {
                List<String> list = new LinkedList<>();
                list.add(str);
                map.put(encoded, list);
            }
        }
        
        for (Map.Entry<String, List<String>> entry : map.entrySet())
            ret.add(entry.getValue());
        
        return ret;
    }
    
    private String encode(String str) {
        int[] freq = new int[26];
        String spliter = "-";
        
        for (int i = 0; i < str.length(); i++)
            freq[str.charAt(i) - 'a']++;
        
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < freq.length; i++)
            sb.append(freq[i]).append(spliter);
        
        return sb.toString();
    }
